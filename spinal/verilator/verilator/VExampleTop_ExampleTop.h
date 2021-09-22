// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VExampleTop.h for the primary calling header

#ifndef VERILATED_VEXAMPLETOP_EXAMPLETOP_H_
#define VERILATED_VEXAMPLETOP_EXAMPLETOP_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"
#include "VExampleTop__Dpi.h"

//==========

class VExampleTop__Syms;
class VExampleTop_CpuTop;


//----------

VL_MODULE(VExampleTop_ExampleTop) {
  public:
    // CELLS
    VExampleTop_CpuTop* cpu_u_cpu;

    // PORTS
    // Begin mtask footprint all: 
    VL_IN8(osc_clk_in,0,0);
    VL_IN8(button,0,0);
    VL_OUT8(led_red,0,0);
    VL_OUT8(led_green,0,0);
    VL_OUT8(led_blue,0,0);
    VL_OUT8(uart_txd,0,0);
    VL_IN8(uart_rxd,0,0);

    // LOCAL SIGNALS
    // Begin mtask footprint all: 2 3 4 5 6 7 8 9 10 11 12 14 19 
    CData/*0:0*/ __PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext;
    // Begin mtask footprint all: 2 
    CData/*0:0*/ __PVT___zz_ExampleTop_2_;
    // Begin mtask footprint all: 2 19 
    CData/*4:0*/ __PVT__clk_cpu_reset_gen_reset_cntr;
    // Begin mtask footprint all: 19 
    CData/*0:0*/ __PVT__clk_cpu_reset_gen_reset_unbuffered_;

    // INTERNAL VARIABLES
  private:
    VExampleTop__Syms* __VlSymsp;  // Symbol table
  public:

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VExampleTop_ExampleTop);  ///< Copying not allowed
  public:
    VExampleTop_ExampleTop(const char* name = "TOP");
    ~VExampleTop_ExampleTop();

    // INTERNAL METHODS
    void __Vconfigure(VExampleTop__Syms* symsp, bool first);
  private:
    static void _ctor_var_reset(VExampleTop_ExampleTop* self) VL_ATTR_COLD;
  public:
    static void _initial__TOP__ExampleTop__1(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__ExampleTop__4(VExampleTop__Syms* __restrict vlSymsp);
    static void _settle__TOP__ExampleTop__2(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__3(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
