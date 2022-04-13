#include <stdlib.h>
#include <chrono>
#include "./obj_dir_rtlflow/VExampleTop.h"
//#include "./verilator/VExampleTop.h"

//#ifdef TRACE_VCD
//#include "rf_verilated_vcd_c.h"
//#endif

#include "../../../verilator_rtlflow/include/rf_verilated.h"
//#include "verilated.h"
//#include "../../../verilator/include/verilated.h"

RF::RTLflow rtlflow(RF::BATCH_SIZE);
RF::RTLflow& RF::VExampleTop::_rtlflow = rtlflow;
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

  size_t NUM_CYCLES = 1000000;
  if (argc == 2)
      NUM_CYCLES = atoi(argv[1]);

  size_t NUM_PIPES = NUM_CYCLES;
  size_t BATCH_SIZE = RF::BATCH_SIZE;
  size_t NUM_LINES = NUM_TESTBENCHES / BATCH_SIZE;

  std::cout << "Number of  cycles: " << NUM_CYCLES << "\n";
  std::cout << "Number of testbenches: " << NUM_TESTBENCHES << "\n";

  double sim_time{0};
  beg_sim = std::chrono::steady_clock::now();

  RF::VExampleTop *dut = new RF::VExampleTop;
  std::vector<RF::RTLflow> rtlflows(NUM_LINES, dut);
  printf("running trace...\n");

  tf::Executor executor;
  tf::Taskflow taskflow;
  std::vector<tf::Pipe<>> pipes;
  tf::ScalablePipeline<decltype(pipes)::iterator> spl;

  pipes.reserve(NUM_PIPES);

  assert(NUM_PIPES > 0);

  pipes.emplace_back(tf::PipeType::SERIAL, [&](tf::Pipeflow& pf) mutable {
    if(pf.token() == NUM_LINES) {
      //ticks++;
      pf.stop();
    }
  });

  for(size_t p = 0;c < NUM_PIPES; ++p) {
    pipes.emplace_back(tf::PipeType::PARALLEL, [&](tf::Pipeflow& pf) mutable {

      for(size_t b = 0; b < BATCH_SIZE; ++b) {
        *(rtlflows[pf.token()].get(tb->osc_clk_in, b)) = 0;
      }

      rtlflows[pf.token()].run();

      for(size_t b = 0; b < BATCH_SIZE; ++b) {
        *(rtlflows[pf.token()].get(tb->osc_clk_in, b)) = 1;
      }

      rtlflows[pf.token()].run();

      //bool cur_led_red    = *(rtlflows[pf.token()].get(tb->led_red, b));
      //bool cur_led_blue    = *(rtlflows[pf.token()].get(tb->led_blue, ));
      //bool cur_led_green    = *(rtlflows[pf.token()].get(tb->led_green, 0));

      //prev_led_red    = cur_led_red;
      //prev_led_green  = cur_led_green;
      //prev_led_blue   = cur_led_blue;

    }
  }

  spl.reset(NUM_LINES, pipes.begin(), pipes.end());
  auto spl_t = taskflow.composed_of(spl).name("pipeline");
    
  tic = std::chrono::steady_clock::now();
  executor.run(taskflow).wait();
  toc = std::chrono::steady_clock::now();
        
  eval_duration +=  std::chrono::duration_cast<std::chrono::seconds>(toc - tic).count();
  std::cout << "evaluation duration: " << eval_duration << "\n";

  return 0;
}
