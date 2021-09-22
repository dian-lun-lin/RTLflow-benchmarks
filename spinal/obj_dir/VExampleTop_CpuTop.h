// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VExampleTop.h for the primary calling header

#ifndef VERILATED_VEXAMPLETOP_CPUTOP_H_
#define VERILATED_VEXAMPLETOP_CPUTOP_H_  // guard

#include "verilated_heavy.h"
#include "rf_heavy.h"
#include "VExampleTop__Dpi.h"

//==========

class VExampleTop__Syms;
class VExampleTop_CpuComplex;


//----------

VL_MODULE(VExampleTop_CpuTop) {
  public:
    // CELLS
    VExampleTop_CpuComplex* u_cpu;

    // PORTS
    // Begin mtask footprint all: 
    const RF_OUT8(__PVT__io_led_red,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_OUT8(__PVT__io_led_green,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_OUT8(__PVT__io_led_blue,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_OUT8(__PVT__io_uart_txd,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__io_uart_rxd,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__clk_cpu_reset_,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__clk_cpu,0,0){0 * NUM_TESTBENCHES/*CData*/};

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 16 20 
        // Begin mtask footprint all: 20 
        // Begin mtask footprint all: 17 20 
        // Begin mtask footprint all: 3 17 20 
        // Begin mtask footprint all: 2 3 20 
        // Begin mtask footprint all: 2 17 
        // Begin mtask footprint all: 2 3 17 
        // Begin mtask footprint all: 3 17 
        // Begin mtask footprint all: 3 17 18 
        // Begin mtask footprint all: 3 18 
        // Begin mtask footprint all: 3 13 18 
        // Begin mtask footprint all: 3 13 
        // Begin mtask footprint all: 3 16 
        // Begin mtask footprint all: 3 15 
        // Begin mtask footprint all: 15 
        // Begin mtask footprint all: 4 15 
        // Begin mtask footprint all: 10 15 
        // Begin mtask footprint all: 10 12 15 
        // Begin mtask footprint all: 9 10 12 15 
        // Begin mtask footprint all: 12 15 
        // Begin mtask footprint all: 10 11 12 15 
        // Begin mtask footprint all: 11 12 15 19 
        // Begin mtask footprint all: 6 7 15 
        // Begin mtask footprint all: 6 15 
        // Begin mtask footprint all: 10 
        // Begin mtask footprint all: 7 10 
        // Begin mtask footprint all: 7 10 12 
        // Begin mtask footprint all: 7 10 12 18 
    };
    struct {
        // Begin mtask footprint all: 10 12 18 
        // Begin mtask footprint all: 12 18 
        // Begin mtask footprint all: 7 9 12 18 
        // Begin mtask footprint all: 7 10 18 
        // Begin mtask footprint all: 7 
        // Begin mtask footprint all: 4 7 
        // Begin mtask footprint all: 7 18 
        // Begin mtask footprint all: 18 
        // Begin mtask footprint all: 4 18 
        // Begin mtask footprint all: 4 13 18 
        // Begin mtask footprint all: 4 13 17 18 
        // Begin mtask footprint all: 6 13 17 18 
        // Begin mtask footprint all: 6 13 18 20 
        // Begin mtask footprint all: 10 13 18 20 
        // Begin mtask footprint all: 10 13 17 18 
        // Begin mtask footprint all: 4 11 18 
        // Begin mtask footprint all: 4 11 
        // Begin mtask footprint all: 11 
        // Begin mtask footprint all: 6 11 
        // Begin mtask footprint all: 6 11 18 
        // Begin mtask footprint all: 6 18 
        // Begin mtask footprint all: 6 9 11 15 18 
        // Begin mtask footprint all: 11 15 18 
        // Begin mtask footprint all: 11 12 15 18 
        // Begin mtask footprint all: 11 12 18 
        // Begin mtask footprint all: 9 11 12 18 
        // Begin mtask footprint all: 9 11 12 
        // Begin mtask footprint all: 11 12 
        // Begin mtask footprint all: 9 11 
        // Begin mtask footprint all: 11 15 
        // Begin mtask footprint all: 11 19 
        // Begin mtask footprint all: 19 
        // Begin mtask footprint all: 5 19 
        // Begin mtask footprint all: 4 10 19 
        // Begin mtask footprint all: 10 11 
    };
    struct {
        // Begin mtask footprint all: 10 11 18 
        // Begin mtask footprint all: 11 18 
        // Begin mtask footprint all: 4 10 11 12 18 
        // Begin mtask footprint all: 4 10 11 15 18 
        // Begin mtask footprint all: 4 6 10 11 15 
        // Begin mtask footprint all: 4 6 10 11 15 16 17 
    };

    // LOCAL VARIABLES
    // Begin mtask footprint all: 4 18 
    // Begin mtask footprint all: 18 
    // Begin mtask footprint all: 6 
    // Begin mtask footprint all: 6 7 
    // Begin mtask footprint all: 7 10 
    // Begin mtask footprint all: 7 12 
    // Begin mtask footprint all: 11 12 
    // Begin mtask footprint all: 11 
    // Begin mtask footprint all: 9 11 
    // Begin mtask footprint all: 10 11 
    // Begin mtask footprint all: 15 
    // Begin mtask footprint all: 10 15 
    // Begin mtask footprint all: 9 12 15 
    // Begin mtask footprint all: 15 
    // Begin mtask footprint all: 18 
    // Begin mtask footprint all: 11 

    // INTERNAL VARIABLES
  private:
    VExampleTop__Syms* __VlSymsp;  // Symbol table
  public:

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VExampleTop_CpuTop);  ///< Copying not allowed
  public:
    VExampleTop_CpuTop(CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, const char* name = "TOP");
    ~VExampleTop_CpuTop();

    // INTERNAL METHODS
    void __Vconfigure(VExampleTop__Syms* symsp, bool first);
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__1(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__2(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__3(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__4(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__5(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__6(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__7(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__8(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__9(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__10(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__11(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__12(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__13(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__14(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__15(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__16(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__17(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__18(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__19(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__20(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__21(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__22(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__23(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__24(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__25(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__26(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__27(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__28(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__29(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__30(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__31(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__32(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__33(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__34(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__35(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__36(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
  private:
    static void _ctor_var_reset(VExampleTop_CpuTop* self, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
