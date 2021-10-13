#include <stdlib.h>
#include <iostream>
#include <chrono>
#include "./obj_dir/VExampleTop.h"

#include "../../../verilator/include/verilated.h"

int main(int argc, char **argv) 
{
    Verilated::commandArgs(argc, argv);

    int nr_cycles = 1000000;
    if (argc ==2)
        nr_cycles = atoi(argv[1]);
    //std::chrono::time_point<std::chrono::steady_clock> beg_sim;
    //std::chrono::time_point<std::chrono::steady_clock> end_sim;
    //double sim_time{0};

    //std::cout << "Number of cycles: " << nr_cycles << "\n";

    //beg_sim = std::chrono::steady_clock::now();

    VExampleTop *tb_cpu = new VExampleTop;
    bool prev_led_red;
    bool prev_led_green;
    bool prev_led_blue;

    tb_cpu->eval();

    for(int i=0;i<nr_cycles;++i) {

      tb_cpu->osc_clk_in = 0;

      tb_cpu->eval();

      tb_cpu->osc_clk_in = 1;

      tb_cpu->eval();

      bool cur_led_red    = tb_cpu->led_red;
      bool cur_led_blue    = tb_cpu->led_blue;
      bool cur_led_green    = tb_cpu->led_green;

      prev_led_red    = cur_led_red;
      prev_led_green  = cur_led_green;
      prev_led_blue   = cur_led_blue;

    }

    //end_sim = std::chrono::steady_clock::now();
    //sim_time = std::chrono::duration_cast<std::chrono::microseconds>(end_sim - beg_sim).count();
       
    //std::cout << "sim time: " << sim_time << "\n";
        
    exit(EXIT_SUCCESS);
}
