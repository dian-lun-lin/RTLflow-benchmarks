#include <stdlib.h>
#include <chrono>
#include "./obj_dir_rtlflow/VExampleTop.h"
#include "./obj_dir_rtlflow/rtlflow.h"
#include <iostream>
#include <vector>
//#include "./verilator/VExampleTop.h"

//#ifdef TRACE_VCD
//#include "rf_verilated_vcd_c.h"
//#endif

#include <rf_verilated.h>
//#include "verilated.h"
//#include "../../../verilator/include/verilated.h"

//RF::RTLflow rtlflow(RF::BATCH_SIZE);
//RF::RTLflow& RF::VExampleTop::_rtlflow = rtlflow;
//void check(RF::RTLflow& rtlflow, VExampleTop__Syms* vlSymsp);
//std::chrono::time_point<std::chrono::steady_clock> total_tic;
//std::chrono::time_point<std::chrono::steady_clock> total_toc;
//long long int total_duration{0};

int main(int argc, char **argv) 
{
  std::chrono::time_point<std::chrono::steady_clock> tic;
  std::chrono::time_point<std::chrono::steady_clock> toc;
  long long int eval_duration{0};

  RF::Verilated::commandArgs(argc, argv);

  size_t NUM_CYCLES;
  size_t NUM_TESTBENCHES;
  size_t NUM_THREADS;
  size_t NUM_STREAMS;
  if (argc != 5) {
    throw std::runtime_error("./tb NUM_CYCLES NUM_TESTBENCHES NUM_THREADS NUM_STREAMS");
  }
  NUM_CYCLES = std::atoi(argv[1]);
  NUM_TESTBENCHES = std::atoi(argv[2]);
  NUM_THREADS = std::atoi(argv[3]);
  NUM_STREAMS = std::atoi(argv[4]);

  size_t NUM_PIPES = NUM_CYCLES;
  size_t BATCH_SIZE = RF::BATCH_SIZE;
  size_t NUM_LINES = NUM_TESTBENCHES / BATCH_SIZE;

  std::cout << "Number of  cycles: " << NUM_CYCLES << "\n";
  std::cout << "Number of testbenches: " << NUM_TESTBENCHES << "\n";

  double sim_time{0};
  auto beg_sim = std::chrono::steady_clock::now();

  RF::VExampleTop *dut = new RF::VExampleTop;
  taro::TaroCBV4 taro{NUM_THREADS, NUM_STREAMS};
  std::vector<RF::RTLflow> rtlflows(NUM_LINES, {dut, taro});
  printf("running trace...\n");


  assert(NUM_PIPES > 0);

  for(size_t l = 0; l < NUM_LINES; ++l) {
    rtlflows[l].initialize();
    std::vector<std::pair<taro::TaskHandle, taro::TaskHandle>> pipes(NUM_PIPES);
    for(size_t p = 0; p < NUM_PIPES; ++p) {
        auto t1 = taro.emplace([&, l](){
          for(size_t b = 0; b < BATCH_SIZE; ++b) {
            *(rtlflows[l].get(dut->osc_clk_in, b)) = 0;
          }
        });


        auto t2 = taro.emplace([&, l](){
          for(size_t b = 0; b < BATCH_SIZE; ++b) {
            *(rtlflows[l].get(dut->osc_clk_in, b)) = 1;
          }
        });
        auto sim1 = rtlflows[l].create_sim_t();
        auto sim2 = rtlflows[l].create_sim_t();

        t1.precede(sim1);
        sim1.precede(t2);
        t2.precede(sim2);

        pipes[p].first = t1;
        pipes[p].second = sim2;
        //bool cur_led_red    = *(rtlflows[pf.token()].get(tb->led_red, b));
        //bool cur_led_blue    = *(rtlflows[pf.token()].get(tb->led_blue, ));
        //bool cur_led_green    = *(rtlflows[pf.token()].get(tb->led_green, 0));

        //prev_led_red    = cur_led_red;
        //prev_led_green  = cur_led_green;
        //prev_led_blue   = cur_led_blue;
    }

    for(size_t p = 0; p < NUM_PIPES - 1; ++p) {
      pipes[p].second.precede(pipes[p + 1].first);
    }
  }

  tic = std::chrono::steady_clock::now();
  taro.schedule();
  taro.wait();
  toc = std::chrono::steady_clock::now();
        
  eval_duration +=  std::chrono::duration_cast<std::chrono::seconds>(toc - tic).count();
  std::cout << "evaluation duration: " << eval_duration << "\n";

  return 0;
}
