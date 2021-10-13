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

RF::RTLflow rtlflow(NUM_TESTBENCHES);
RF::RTLflow& RF::VExampleTop::_rtlflow = rtlflow;
//void check(RF::RTLflow& rtlflow, VExampleTop__Syms* vlSymsp);

int main(int argc, char **argv) 
{
    RF::Verilated::commandArgs(argc, argv);

    int nr_cycles = 1000000;
    if (argc ==2)
        nr_cycles = atoi(argv[1]);
    //std::chrono::time_point<std::chrono::steady_clock> beg_sim;
    //std::chrono::time_point<std::chrono::steady_clock> end_sim;
    //double sim_time{0};

    std::cout << "Number of  cycles: " << nr_cycles << "\n";
    std::cout << "Number of testbenches: " << NUM_TESTBENCHES << "\n";

    //beg_sim = std::chrono::steady_clock::now();

    RF::VExampleTop *tb = new RF::VExampleTop;
    //VExampleTop *tb_cpu = new VExampleTop;
    bool prev_led_red;
    bool prev_led_green;
    bool prev_led_blue;
//#if defined(TRACE_VCD)
    //VerilatedVcdC *trace;
//#endif


//#if defined(TRACE_VCD)
    //Verilated::traceEverOn(true);
//#endif

//#if defined(TRACE_VCD)
    //trace = new VerilatedVcdC;
    //tb->trace(trace, 99);
    //trace->open("waves.vcd");
//#endif

    tb->eval();
    //tb_cpu->eval();
    //check(rtlflow, tb_cpu->__VlSymsp);

    //rtlflow._isignals[tb->button] = 1;
    //double set_time{0};
    //std::chrono::time_point<std::chrono::steady_clock> beg_set;
    //std::chrono::time_point<std::chrono::steady_clock> end_set;

    for(int i=0;i<nr_cycles;++i) {

      //beg_set = std::chrono::steady_clock::now();
      for(int t = 0; t < NUM_TESTBENCHES; ++t) {
        *(rtlflow.get(tb->osc_clk_in, t)) = 0;
        //tb_cpu->osc_clk_in = 0;
        //rtlflow._csignals[tb->osc_clk + t] = 0;
      }
      //end_set = std::chrono::steady_clock::now();
      //set_time += std::chrono::duration_cast<std::chrono::microseconds>(end_set - beg_set).count();

      tb->eval();
    //tb_cpu->eval();


      //beg_set = std::chrono::steady_clock::now();
      for(int t = 0; t < NUM_TESTBENCHES; ++t) {
        //rtlflow._csignals[tb->osc_clk + t] = 1;
        *(rtlflow.get(tb->osc_clk_in, t)) = 1;
        //tb_cpu->osc_clk_in = 1;
      }
      //end_set = std::chrono::steady_clock::now();
      //set_time += std::chrono::duration_cast<std::chrono::microseconds>(end_set - beg_set).count();

      //beg_sim = std::chrono::steady_clock::now();
      tb->eval();
    //tb_cpu->eval();
      //end_sim = std::chrono::steady_clock::now();
      //sim_time += std::chrono::duration_cast<std::chrono::microseconds>(end_sim - beg_sim).count();
      //std::cout << "clock: " << (int)rtlflow._csignals[tb->osc_clk_in] << "\n";

//#if defined(TRACE_VCD) || defined(TRACE_FST)
        //trace->dump(i*2);
//#endif
        //rtlflow._csignals[tb->osc_clk_in] = 1;

//#if defined(TRACE_VCD) || defined(TRACE_FST)
        //trace->dump(i*2);
//#endif

        //check(rtlflow, tb_cpu->__VlSymsp);

        bool cur_led_red    = *(rtlflow.get(tb->led_red, 0));
        bool cur_led_blue    = *(rtlflow.get(tb->led_blue, 0));
        bool cur_led_green    = *(rtlflow.get(tb->led_green, 0));
        //bool cur_led_blue    = rtlflow._csignals[tb->led_blue];
        //bool cur_led_green    = rtlflow._csignals[tb->led_green];

      //if(i > 0) {
      //for(int t = 0; t < 4095; ++t) {
        ////std::cerr << t << ", ";
        //assert(rtlflow._csignals[tb->led_red + t] == rtlflow._csignals[tb->led_red + t + 1]);
        //assert(rtlflow._csignals[tb->led_blue + t] == rtlflow._csignals[tb->led_blue + t + 1]);
        //assert(rtlflow._csignals[tb->led_green + t] == rtlflow._csignals[tb->led_green + t + 1]);
      //}
      //}

        //if (cur_led_red != prev_led_red){
            //std::cout << "led_red: " << cur_led_red << "\n";
        //}

        //if (cur_led_green != prev_led_green){
            //std::cout << "led_green: " << cur_led_green << "\n";
        //}

        //if (cur_led_blue != prev_led_blue){
            //std::cout << "led_blue: " << cur_led_blue << "\n";
        //}

        prev_led_red    = cur_led_red;
        prev_led_green  = cur_led_green;
        prev_led_blue   = cur_led_blue;

    }

    //end_sim = std::chrono::steady_clock::now();
    //sim_time = std::chrono::duration_cast<std::chrono::microseconds>(end_sim - beg_sim).count();
       
    //std::cout << "sim time: " << sim_time << "\n";
        
    exit(EXIT_SUCCESS);
}
