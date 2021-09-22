
#include <iostream>
#include <fstream>
#include <iomanip>

#include <cxxrtl/cxxrtl.h>
#include "ExampleTop.sim.cpp"

using namespace std;

int main(int argc, char **argv)
{
    // <executable> <debug level> <vcd filename> 
    // debug level:
    // 0 -> No dumping, no save/restore
    // 1 -> dump everything
    // 2 -> dump everything except memories
    // 3 -> dump custom (only wires)
    // 4 -> save to checkpoint
    // 5 -> restore from checkpoint

    cxxrtl_design::p_ExampleTop top;

    bool prev_led_red, prev_led_green, prev_led_blue;

    top.p_osc__clk__in.set<bool>(true);
    top.step();

    int led_red_cntr = 0;

    for(int i=0;i<cycles;++i) {
        top.p_osc__clk__in.set<bool>(false);
        top.step();

        top.p_osc__clk__in.set<bool>(true);
        top.step();
    }


        bool cur_led_red    = top.p_led__red.get<bool>();
        bool cur_led_green  = top.p_led__green.get<bool>();
        bool cur_led_blue   = top.p_led__blue.get<bool>();

        if (cur_led_red != prev_led_red){
            cout << "led_red: " << cur_led_red << " " << led_red_cntr << endl;
            if (cur_led_red)
                    ++led_red_cntr;
        }

        if (cur_led_green != prev_led_green){
            cout << "led_green: " << cur_led_green << endl;
        }

        if (cur_led_blue != prev_led_blue){
            cout << "led_blue: " << cur_led_blue << endl;
        }

        prev_led_red    = cur_led_red;
        prev_led_green  = cur_led_green;
        prev_led_blue   = cur_led_blue;
    }
}

