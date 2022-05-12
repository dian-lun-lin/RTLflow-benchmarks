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
#include "3rd-party/CLI11/CLI11.hpp"

// BEFORE WE DO RTLflow PARTITIONING...
// We need to customize a Makfefile
// file name: 
//   Makefile_rtlflow
// parameters: 
//   OUTPUT_DIR, BATCH, VERILATOR_PARTITION_SIZE, WEIGHT_TABLE, MAKEFILE_DIR
// add code:
//   cp executable OUTPUT_DIR/testbench

class WeightTable;
class Estimator;
class Optimizer;
class MCMCOptimizer;
struct Command;


// feature map
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

// =============================================================================
// WeightTable class
// a lookup table to acces the weight of each feature
// {feature, weight}
// =============================================================================

struct WeightTable final {

  // default weight table
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

  void update(const std::filesystem::path& weight_file) {
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

  void write(const std::filesystem::path& file) {
    std::ofstream wf(file, std::ofstream::trunc);

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

// =============================================================================
// Estimator class
// estimate simulation cost in terms of user-defined parameters
// =============================================================================

class Estimator {

  friend Optimizer;
  friend MCMCOptimizer;

  public:

    float run();

    // set_block_size();

  private:

    std::filesystem::path _dir; 
    std::filesystem::path _stimulus_dir;
    std::filesystem::path _makefile;

    size_t _verilator_partition_size;
    size_t _batch_size;
    size_t _num_stimulus;
    size_t _num_cycles;

    void _make();

    float _run();

    void _clear();

    //float _get_result();
};

// makefile
void Estimator::_make() {
  std::stringstream ss;
  ss  << " make -f "                   << (_makefile).string()
      << " OUTPUT_DIR="                << _dir
      << " BATCH="                     << _batch_size
      << " VERILATOR_PARTITION_SIZE="  << _verilator_partition_size
      << " WEIGHT_TABLE="              << (_dir / "details/cur_weights.out").string();

  system(ss.str().c_str());
}

// run
float Estimator::_run() {
  auto executable = _dir / "testbench";
  std::ostringstream ss;
  ss << executable.string() << " " << _num_stimulus << " " << _num_cycles << " " << _stimulus_dir << " > tmp.out";

  std::chrono::time_point<std::chrono::steady_clock> tic;
  std::chrono::time_point<std::chrono::steady_clock> toc;

  std::cout << "======================================\n";
  std::cout << "Estimating runtime...\n";
  tic = std::chrono::steady_clock::now();
  system(ss.str().c_str());
  toc = std::chrono::steady_clock::now();
  std::cout << "Done...\n";
  std::cout << "======================================\n";

  return std::chrono::duration_cast<std::chrono::milliseconds>(toc - tic).count() / 1000.0f;
}

//float Estimator::_get_result() {
  //auto est_res = _dir / "result.out"; 
  //std::ifstream wf(est_res);
  //if(wf.is_open()) {
    //std::string tmp, result_str;
    //float result;
    
    //std::getline(wf, result_str);
    //std::stringstream ss(result_str);
    //ss >> result;
    //return result;
  //}
  //else {
    //assert(false);
  //}
//}

// clear pervious results
// hard-coded filenames in case we set the wrong output directory
void Estimator::_clear() {
  auto est = _dir / "testbench"; 
  auto tmp = _dir / "tmp.out"; 

  std::filesystem::remove(est);
  std::filesystem::remove(tmp);
}


float Estimator::run() {
  _make();
  float result = _run();
  _clear();

  return result;
}

// =============================================================================
// Optimizer abstract class
// An optimizer owns a weight table and an estimator to perform GPU-aware partitioning
// run()
// =============================================================================

class Optimizer {

  public:

    Optimizer();

    ~Optimizer();

    virtual void run() = 0;

    void set_weights(const std::filesystem::path&);
    void set_dir(const std::filesystem::path&);
    void set_makefile(const std::filesystem::path&);
    void set_stimulus_dir(const std::filesystem::path&);

    void set_verilator_partition_size(const size_t);
    void set_batch_size(const size_t);
    void set_num_cycles(const size_t);
    void set_num_stimulus(const size_t);
    void set_num_epochs(const size_t);

  protected:

    std::filesystem::path _dir;
    std::filesystem::path _weights;

    size_t _num_epochs;

    WeightTable _init_table;
    WeightTable _table;
    WeightTable _best_table;

    Estimator _estimator;

    void _initialize();

    void _dump();
    void _clear();
};

Optimizer::Optimizer() {
  _initialize();
}

Optimizer::~Optimizer() {
  _clear();
  _dump();
}

void Optimizer::_initialize() {

  // create details directory to store training results
  std::stringstream mkdir_ss;
  mkdir_ss << "mkdir " << (_dir / "details").string();
  system(mkdir_ss.str().c_str());
}

void Optimizer::_clear() {
  // remove tmp weights
  std::stringstream rm_ss;  
  rm_ss << "rm " << (_dir / "details/cur_weights.out");
  system(rm_ss.str().c_str());
}

void Optimizer::_dump() {

  // dump the best weight table
  _best_table.write(_dir / "best_weights.out");
  _init_table.write(_dir / "initial_weights.out");

  std::ofstream others(_dir / "others.out", std::ios_base::app);
  others << "VERILATOR_PARTITION_SIZE " << _estimator._verilator_partition_size << "\n";
  others << "BATCH_SIZE " << _estimator._batch_size << "\n";
  others << "NUM_STIMULUS " << _estimator._num_stimulus << "\n";
  others << "NUM_CYCLES " << _estimator._num_cycles << "\n";
}

// set weights
// initialize to one if wp is empty
void Optimizer::set_weights(const std::filesystem::path& wp) {
  _weights = wp;

  if(!_weights.empty()) {
    // copy weights.out to cur_weights.out
    std::stringstream cp_ss;
    cp_ss << "cp " << (_weights).string() << " " << (_dir / "details/cur_weights.out");
    system(cp_ss.str().c_str());

    // update weights
    _init_table.update(_weights);
  }
  else {
    _init_table.write(_dir / "details/cur_weights.out");
  }
  _table = _best_table = _init_table;
}

void Optimizer::set_dir(const std::filesystem::path& dir) {
  _dir = dir;
  _estimator._dir = dir;
}

void Optimizer::set_stimulus_dir(const std::filesystem::path& sti_dir) {
  _estimator._stimulus_dir = sti_dir;
}

void Optimizer::set_makefile(const std::filesystem::path& mf) {
  _estimator._makefile = mf;
}

void Optimizer::set_verilator_partition_size(const size_t vps) {
  _estimator._verilator_partition_size = vps;
}

void Optimizer::set_batch_size(const size_t bs) {
  _estimator._batch_size = bs;
}

void Optimizer::set_num_cycles(const size_t nc) {
  _estimator._num_cycles = nc;
}

void Optimizer::set_num_stimulus(const size_t ns) {
  _estimator._num_stimulus = ns;
}

void Optimizer::set_num_epochs(const size_t ne) {
  _num_epochs = ne;
}

// =============================================================================
// MCMCOptimizer class
// adopt MCMC sampling to perform GPU-aware partitioning
// =============================================================================

class MCMCOptimizer final : public Optimizer {

  public:

    MCMCOptimizer() = default;
  
    ~MCMCOptimizer();

    void run();
    void set_beta(const float);
    void set_unit_weight(const float);

  private:

    float _beta;
    float _unit_weight;
    std::random_device _rnd;
    std::mt19937 _rng{_rnd()};
    std::uniform_int_distribution<int> _disti{0, 31}; // uniform, unbiased
    std::uniform_real_distribution<> _distf{0., 1.}; // uniform, unbiased

    void _dump();
};

MCMCOptimizer::~MCMCOptimizer() {
  _dump();
}

void MCMCOptimizer::_dump() {
  std::ofstream others(_dir / "others.out", std::ios_base::trunc);
  others << "BETA " << _beta << "\n";
  others << "UNIT_WEIGHT " << _unit_weight << "\n";
}

void MCMCOptimizer::run() {

  float cur_cost, cost, best_cost;
  float cur_weight;
  float accr;
  float random;
  size_t NUM_EPOCHS_RECORD = 1;

  // first estimation
  cur_cost = _estimator.run();
  best_cost = cost = cur_cost;

  
  // MCMC search algorithm
  auto training_result = _dir / "details/training.out";
  std::ofstream out(training_result, std::ios_base::app);
  out << "=============================================================\n";
  out << "Strat training...\n";
  for(int ep = 0; ep < _num_epochs; ++ep) {

    int choose = _disti(_rng);
    cur_weight = _table[feature_map[choose]];
    _table[feature_map[choose]] += _unit_weight;
    _table.write(_dir / "details/cur_weights.out");

    cur_cost = _estimator.run();

    accr = std::min(1.0f, exp(_beta * (cost - cur_cost)));
    random = _distf(_rng);

    out << "Epoch "                << ep                  << " :.................................................................\n" 
        << "  Current strategy: "  << feature_map[choose] << " - " << _table[feature_map[choose]] << "\n"
        << "  Current cost: "      << cur_cost            << "\n"
        << "  Original cost: "     << cost                << "\n"
        << "  Acceptance rate: "   << accr                << "\n"
        << "  Update or not: "     << std::boolalpha      << (random <= accr) << "\n";

    if(random <= accr) {
      // change
      cost = cur_cost;
    }
    else {
      // trace back
      _table[feature_map[choose]] = cur_weight;
    }

    // update best weight
    if(best_cost > cur_cost) {
      _best_table = _table;
      best_cost = cur_cost;
    }

    // dump the current weight table after certian epochs
    if(ep % NUM_EPOCHS_RECORD == 0) {
      std::ostringstream ss;
      ss << "epoch" << ep << "_weights.out";
      _table.write(_dir / ("details/" + ss.str()));
      //std::cout << "Best weights so far:\n";
      //_best_weight_table.dump(std::cout);
    }

    // graduate decrease unit weight
    //if(ep == 100) {
      //_unit = 3.0f;
    //}

    //if(ep == 200) {
      //_unit = 2.0f;
    //}
  }
  out << "End training...\n";
  out << "=============================================================\n";
  out.close();
}

void MCMCOptimizer::set_beta(const float b) {
  _beta = b;
}

void MCMCOptimizer::set_unit_weight(const float uw) {
  _unit_weight = uw;
}

// ====================================================
// Command class
// parse parameters for RTLflow
// ====================================================

struct Command {

  Command();

  CLI::App app{"RTLflow optimizer"};
  std::filesystem::path weights;
  std::filesystem::path output_dir;
  std::filesystem::path stimulus_dir;
  std::filesystem::path makefile;

  size_t verilator_partition_size{0};
  size_t batch_size{0};
  size_t num_cycles{0};
  size_t num_stimulus{0};
  size_t num_epochs{0};
  float beta{0.0};
  float unit_weight{0.0};

  int parse(int argc, char* argv[]) { 
    try{
      app.parse(argc, argv);
    } catch (const CLI::ParseError &e) {
      return app.exit(e);
    }
    return -1;
  }
};

Command::Command() {

  app.add_option(
    "-o, --output_dir",
    output_dir,
    "output directory path"
  )->check(CLI::ExistingDirectory);

  app.add_option(
    "-s, --stimulus_dir",
    stimulus_dir,
    "stimulus directory path"
  )->check(CLI::ExistingDirectory);

  app.add_option(
    "-m, --makefile",
    makefile,
    "Makefile path"
  )->check(CLI::ExistingFile);

  app.add_option(
    "-w, --weights",
    weights,
    "weights path"
  )->check(CLI::ExistingFile);

  app.add_option(
    "-v, --verilator_partition_size",
    verilator_partition_size,
    "Verilator partition size"
  );

  app.add_option(
    "-b, --batch_size",
    batch_size,
    "batch size"
  );

  app.add_option(
    "-c, --num_cycles",
    num_cycles,
    "number of cycles"
  );

  app.add_option(
    "--num_stimulus",
    num_stimulus,
    "number of stimulus"
  );

  app.add_option(
    "--num_epochs",
    num_epochs,
    "number of epochs"
  );

  app.add_option(
    "--beta",
    beta,
    "Beta for MCMC sampling"
  );

  app.add_option(
    "-u, --unit_weight",
    unit_weight,
    "Unit weight for MCMC sampling"
  );
}


int main(int argc, char *argv[]) {

  Command cmd;

  if(cmd.parse(argc, argv) != -1) {
    return 0;
  }

  MCMCOptimizer opt;

  opt.set_weights(cmd.weights);
  opt.set_dir(cmd.output_dir);
  opt.set_makefile(cmd.makefile);
  opt.set_stimulus_dir(cmd.stimulus_dir);

  opt.set_verilator_partition_size(cmd.verilator_partition_size);
  opt.set_batch_size(cmd.batch_size);
  opt.set_num_cycles(cmd.num_cycles);
  opt.set_num_stimulus(cmd.num_stimulus);
  opt.set_num_epochs(cmd.num_epochs);

  opt.set_beta(cmd.beta);
  opt.set_unit_weight(cmd.unit_weight);

  opt.run();

  return 0;
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