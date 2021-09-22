#include <stdlib.h>
#include <chrono>
#include "VExampleTop.h"

#ifdef TRACE_VCD
#include "verilated_vcd_c.h"
#endif

#include "verilated.h"

RTLflow rtlflow(1);
RTLflow& VExampleTop::_rtlflow = rtlflow;

int main(int argc, char **argv) 
{
    Verilated::commandArgs(argc, argv);

    int nr_cycles = 1000000;
    if (argc ==2)
        nr_cycles = atoi(argv[1]);

    VExampleTop *tb = new VExampleTop;
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

    //tb->eval();
    tb->eval();

    //rtlflow._isignals[tb->button] = 1;
    //double set_time{0};
    //double sim_time{0};
    //std::chrono::time_point<std::chrono::steady_clock> beg_set;
    //std::chrono::time_point<std::chrono::steady_clock> end_set;
    //std::chrono::time_point<std::chrono::steady_clock> beg_sim;
    //std::chrono::time_point<std::chrono::steady_clock> end_sim;

    for(int i=0;i<nr_cycles;++i) {

      //beg_set = std::chrono::steady_clock::now();
      for(int t = 0; t < 1; ++t) {
        rtlflow._csignals[tb->osc_clk_in.memloc + t] = 0;
      }
      //end_set = std::chrono::steady_clock::now();
      //set_time += std::chrono::duration_cast<std::chrono::microseconds>(end_set - beg_set).count();

      //beg_sim = std::chrono::steady_clock::now();
      tb->eval();
      //end_sim = std::chrono::steady_clock::now();
      //sim_time += std::chrono::duration_cast<std::chrono::microseconds>(end_sim - beg_sim).count();


      //beg_set = std::chrono::steady_clock::now();
      for(int t = 0; t < 1; ++t) {
        rtlflow._csignals[tb->osc_clk_in.memloc + t] = 1;
      }
      //end_set = std::chrono::steady_clock::now();
      //set_time += std::chrono::duration_cast<std::chrono::microseconds>(end_set - beg_set).count();

      //beg_sim = std::chrono::steady_clock::now();
      tb->eval();
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


        bool cur_led_red    = rtlflow._csignals[tb->led_red.memloc];
        bool cur_led_blue    = rtlflow._csignals[tb->led_blue.memloc];
        bool cur_led_green    = rtlflow._csignals[tb->led_green.memloc];

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
       

    //std::cout << "set time: " << set_time << "\n";
    //std::cout << "sim time: " << sim_time << "\n";
        
    exit(EXIT_SUCCESS);
}
