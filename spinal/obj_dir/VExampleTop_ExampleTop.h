// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VExampleTop.h for the primary calling header

#ifndef VERILATED_VEXAMPLETOP_EXAMPLETOP_H_
#define VERILATED_VEXAMPLETOP_EXAMPLETOP_H_  // guard

#include "verilated_heavy.h"
#include "rf_heavy.h"
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
    const RF_IN8(osc_clk_in,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(button,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_OUT8(led_red,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_OUT8(led_green,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_OUT8(led_blue,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_OUT8(uart_txd,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(uart_rxd,0,0){0 * NUM_TESTBENCHES/*CData*/};

    // LOCAL SIGNALS
    // Begin mtask footprint all: 2 3 4 5 6 7 8 9 10 11 12 14 19 
    // Begin mtask footprint all: 2 
    // Begin mtask footprint all: 2 19 
    // Begin mtask footprint all: 19 

    // INTERNAL VARIABLES
  private:
    VExampleTop__Syms* __VlSymsp;  // Symbol table
  public:

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VExampleTop_ExampleTop);  ///< Copying not allowed
  public:
    VExampleTop_ExampleTop(CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, const char* name = "TOP");
    ~VExampleTop_ExampleTop();

    // INTERNAL METHODS
    void __Vconfigure(VExampleTop__Syms* symsp, bool first);
    static void _initial__TOP__ExampleTop__1(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__2(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__3(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _sequent__TOP__ExampleTop__4(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
  private:
    static void _ctor_var_reset(VExampleTop_ExampleTop* self, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
