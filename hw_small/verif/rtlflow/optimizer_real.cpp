/* nvdla.cpp
 * Driver for Verilator testbench
 * NVDLA Open Source Project
 *
 * Copyright (c) 2017 NVIDIA Corporation.  Licensed under the NVDLA Open
 * Hardware License.  For more information, see the "LICENSE" file that came
 * with this distribution.
 */
#include <chrono>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

#include <queue>
#include <map>
#include <vector>

#include <math.h>

#include <random>
#include <unordered_map>
#include <fstream>
#include <filesystem>
#include <cassert>
//#include "../verilator/VNV_nvdla.h"
//#include "../verilator/VNV_nvdla__Syms.h"

//#include "../spec/defs/project.h"
//
//
//
const std::string feature_map[32] = {
  "VARREF",
  "VARREFGLOBAL",
  "VARREFWIDE",
  "VARREFWIDEGLOBAL",
  "CCAST",  
  "CONST",    
  "AND",      
  "OR",
  "NOT",      
  "SHIFTR",   
  "IF",       
  "SHIFTL",   
  "ASSIGNDLY",
  "ASSIGN",   
  "EQ",       
  "COND",     
  "CFUNC",    
  "CCALL",    
  "ASSIGNW",  
  "NEGATE",   
  "ADD",
  "NEQ",      
  "SUB",
  "MUL",
  "MULS",
  "LT",
  "GTE",
  "GTS",
  "GT",
  "EXTEND",
  "EXTENDS",
  "SFORMATF"
};

struct WeightTable final {

  WeightTable():
    table{
      {"VARREF"     , 1.0f},
      {"VARREFGLOBAL" , 1.0f},
      {"VARREFWIDE" , 1.0f},
      {"VARREFWIDEGLOBAL" , 1.0f},
      {"CCAST"      , 1.0f},
      {"CONST"      , 1.0f},
      {"AND"        , 1.0f},
      {"OR"       , 1.0f},
      {"NOT"      , 1.0f},
      {"SHIFTR"   , 1.0f},
      {"IF"       , 1.0f},
      {"SHIFTL"   , 1.0f},
      {"ASSIGNDLY", 1.0f},
      {"ASSIGN"   , 1.0f},
      //"WORDSEL"  ,.1,
      {"EQ"       , 1.0f},
      {"COND"     , 1.0f},
      {"CFUNC"    , 1.0f},
      {"CCALL"    , 1.0f},
      {"ASSIGNW"  , 1.0f},
      //"ARRAYSEL" ,.1,
      {"NEGATE"   , 1.0f},
      {"ADD"      , 1.0f},
      {"NEQ"      , 1.0f},
      {"SUB"      , 1.0f},
      {"MUL"      , 1.0f},
      {"MULS"     , 1.0f},
      {"LT"       , 1.0f},
      {"GTE"      , 1.0f},
      {"GTS"      , 1.0f},
      {"GT"       , 1.0f},
      {"EXTEND"   , 1.0f},
      {"EXTENDS"  , 1.0f},
      {"SFORMATF" , 1.0f}
    }
  {}

  void update(std::filesystem::path& weight_file) {
    std::ifstream wf(weight_file);
    if(wf.is_open()) {
      std::string line;
      std::string token;
      std::string key;
      float value;

      while(std::getline(wf, line)) {
        std::stringstream ss(line);
        std::getline(ss, token, ' ');
        key = token;
        std::getline(ss, token, ' ');
        value = std::stof(token);
        table[key] = value;
      }
    }
    else {
      assert(false);
    }

  }

  WeightTable(const WeightTable&) = default;
  WeightTable(WeightTable&&) = default;
  WeightTable& operator=(const WeightTable&) = default;
  WeightTable& operator=(WeightTable&&) = default;
  ~WeightTable() = default;

  void dump(std::ostream& os) {
    for(auto& k_v: table) {
      os << k_v.first << " " << k_v.second << "\n";
    }
  }

  void write(const std::filesystem::path& dir) {
    std::ofstream wf(dir / "weights.out", std::ofstream::trunc);

    for(const auto& e: table) {
      wf << e.first << " " << e.second;
      wf << '\n';
    }

    wf.close();
  }

  float& operator[](const std::string& key) {
    return table[key];
  }

  private:

    std::unordered_map<std::string, float> table;
};

float get_estimated_result(int epoch) {

  system("make -f MakefileEstReal BATCH=256 VERILATOR_PARTITION_SIZE=8");
  system("./estimator_real 256 10000 ../verilator/tb_gen_scripts/random_traces/ > dump.out");
  system("rm ./estimator_real");
  system("true > dump.out");

  std::ifstream wf("./estimated_result.out");
  if(wf.is_open()) {
    std::string tmp, result_str;
    float result;
    if(epoch > 0) {
      for(int _ = 0; _ < epoch; ++_) {
        std::getline(wf, tmp);
      }
    }
    
    std::getline(wf, result_str);
    std::stringstream ss(result_str);
    ss >> result;
    return result;
  }
  else {
    assert(false);
  }
}

int main(int argc, const char **argv) {

  const size_t NUM_EPOC = std::stoi(argv[1]);
  std::filesystem::path executable_dir{argv[2]}; 
  std::filesystem::path weight_dir; 
  if(argv[3]) {
    weight_dir = argv[3];
  }
  
  const float beta = 5.0f;
  const int NUM_EPOC_RECORD = 10;
  float unit = 5.0f;

  srand(time(NULL));
  std::mt19937 rng(1);
  std::uniform_int_distribution<int> gen(0, 31); // uniform, unbiased

  WeightTable weight_table;
  if(!weight_dir.empty()) {
    weight_table.update(weight_dir);
  }

  auto best_weight_table = weight_table;

  float cur_cost, cost, best_cost;
  float cur_weight;
  float accr;
  float random;

  // remove old estimated results
  std::filesystem::path estimated_result_path("./estimated_result.out");
  if(std::filesystem::exists(estimated_result_path)) {
    std::filesystem::remove(estimated_result_path);
  }
  
  // initialize weights
  // dangerous! must write some check
  std::filesystem::remove_all(executable_dir);
  std::filesystem::create_directory(executable_dir);
  weight_table.write(executable_dir);

  // first estimation ========================================================
  cur_cost = get_estimated_result(0);
  best_cost = cost = cur_cost;
  // end of first estimation ==============================

  for(int ep = 1; ep <= NUM_EPOC; ++ep) {

    // select a new strategy
    int choose = gen(rng);
    cur_weight = weight_table[feature_map[choose]];
    weight_table[feature_map[choose]] += unit;

    // dangerous! must write some check
    std::filesystem::remove_all(executable_dir);
    std::filesystem::create_directory(executable_dir);
    weight_table.write(executable_dir);

    cur_cost = get_estimated_result(ep);

    accr = std::min(1.0f, exp(beta * (cost - cur_cost)));
    random = (float)rand()/RAND_MAX;

    std::ofstream out("./optimized_results.out", std::ios_base::app);
    out << "Epoch "                << ep                  << " :.................................................................\n" 
        << "  Current strategy: "  << feature_map[choose] << " - "            << weight_table[feature_map[choose]] << "\n"
        << "  Current cost: "      << cur_cost            << "\n"
        << "  Original cost: "     << cost                << "\n"
        << "  Acceptance rate: "   << accr                << "\n"
        << "  Update or not: "     << std::boolalpha      << (random <= accr) << "\n";
    out.close();

    if(random <= accr) {
      // change
      cost = cur_cost;
    }
    else {
      // trace back
      weight_table[feature_map[choose]] = cur_weight;
    }

    // update best weight
    if(best_cost > cur_cost) {
      best_weight_table = weight_table;
      best_cost = cur_cost;
    }

    // dump the best weight table
    if(ep % NUM_EPOC_RECORD == 0) {
      best_weight_table.write("./");
      std::cout << "Best weights so far:\n";
      best_weight_table.dump(std::cout);
    }

    if(ep == 100) {
      unit = 3.0f;
    }

    if(ep == 200) {
      unit = 2.0f;
    }
  }

  // dump the best weight table
  best_weight_table.write("./");
}


// batch size and block dim optimization ========================

//int main(int argc, const char **argv, char **env) {

  ////const size_t NUM_TESTBENCHES = std::stoi(argv[1]);
  //const size_t NUM_CYCLES = std::stoi(argv[1]);
  ////const size_t BATCH_SIZE = std::stoi(argv[2]);
  
  //const int BLOCK_DIM_CHOICES[5] = {128, 256, 384, 512, 1024} 

  //// profiling =======================================================================
  ////std::chrono::time_point<std::chrono::steady_clock> total_tic;
  ////std::chrono::time_point<std::chrono::steady_clock> total_toc;
  ////long long int total_duration{0};
  //std::chrono::time_point<std::chrono::steady_clock> tic;
  //std::chrono::time_point<std::chrono::steady_clock> toc;
  //std::chrono::time_point<std::chrono::steady_clock> sim_tic;
  //std::chrono::time_point<std::chrono::steady_clock> sim_toc;
  ////long int eval_duration{0};

  //std::chrono::microseconds total_duration(0);
  //std::chrono::microseconds best_sim_duration(0);
  //// end of profiling =======================================================================

  //printf("Initialize...................\n");
  //RF::VNV_nvdla* dut = new RF::VNV_nvdla;
  //RF::RTLflow rtlflow;
  //rtlflow.initialize(dut);
  //rtlflow.run();

  //RF::Verilated::commandArgs(argc, argv);

  //printf("Optimize kernel parameters for each partition...................\n");

  //tic = std::chrono::steady_clock::now();
  //int tmp_choice;
  //for(auto&& param: block_dims) {
    //for(auto&& choice: BLOCK_DIM_CHOICES) {
      //tmp_choice = param;
      //param = choice;
      //std::chrono::microseconds sim_duration(0);
      //best_sim_duration = std::chrono::microseconds(0);

      //for (size_t c = 0; c < NUM_CYCLES; ++c) {

          //for(size_t t = 0; t < RF::THREADS; ++t) {
            //*(rtlflows[p].get(dut->dla_core_clk, t)) = 1;
            //*(rtlflows[p].get(dut->dla_csb_clk, t)) = 1;
          //}

          //sim_tic = std::chrono::steady_clock::now();
          //rtlflow.run();
          //sim_toc = std::chrono::steady_clock::now();
          //sim_duration +=  std::chrono::duration_cast<std::chrono::microseconds>(sim_toc - sim_tic);
          
          //for(size_t t = 0; t < RF::THREADS; ++t) {
            //*(rtlflows[p].get(dut->dla_core_clk, t)) = 0;
            //*(rtlflows[p].get(dut->dla_csb_clk, t)) = 0;
          //}

          //sim_tic = std::chrono::steady_clock::now();
          //rtlflow.run();
          //sim_toc = std::chrono::steady_clock::now();
          //sim_duration +=  std::chrono::duration_cast<std::chrono::microseconds>(sim_toc - sim_tic);
      //}

      //if(best_sim_duration > sim_duration) {
        //best_sim_duuration = sim_duration;
      //}
      //else {
        //param = tmp_choice;
      //}

    //}
  //} 
  //toc = std::chrono::steady_clock::now();

  //total_duration +=  std::chrono::duration_cast<std::chrono::seconds>(toc - tic);

  //std::ofstream out("./optimized_result.out", std::ios_base::app);
  //out << "Number of cycles:"      << NUM_CYCLES << "\n";
  //out << "Batch size:"            << BATCH_SIZE << "\n";
  //out << "best simulation time: " << std::chrono::duration_cast<std::chrono::seconds>(sim_duration).count() << "s\n";
  //out << "total optimization time: " << std::chrono::duration_cast<std::chrono::seconds>(total_duration).count() << "s\n";
  //}
  //out << "======================================================\n";
  //out.close();
  
  //return 0;
//}
