// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VExampleTop.h for the primary calling header

#ifndef VERILATED_VEXAMPLETOP_CPUCOMPLEX_H_
#define VERILATED_VEXAMPLETOP_CPUCOMPLEX_H_  // guard

#include "verilated_heavy.h"
#include "rf_heavy.h"
#include "VExampleTop__Dpi.h"

//==========

class VExampleTop__Syms;
class VExampleTop_VexRiscv;


//----------

VL_MODULE(VExampleTop_CpuComplex) {
  public:
    // CELLS
    VExampleTop_VexRiscv* cpu;

    // PORTS
    // Begin mtask footprint all: 
    const RF_OUT(__PVT__io_apb_PADDR,19,0){0 * NUM_TESTBENCHES/*IData*/};
    const RF_OUT(__PVT__io_apb_PWDATA,31,0){0 * NUM_TESTBENCHES/*IData*/};
    const RF_IN(__PVT__io_apb_PRDATA,31,0){0 * NUM_TESTBENCHES/*IData*/};
    const RF_OUT8(__PVT__io_apb_PSEL,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_OUT8(__PVT__io_apb_PENABLE,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__io_apb_PREADY,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_OUT8(__PVT__io_apb_PWRITE,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__io_apb_PSLVERROR,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__io_externalInterrupt,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__io_timerInterrupt,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__clk_cpu_reset_,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__clk_cpu,0,0){0 * NUM_TESTBENCHES/*CData*/};

    // LOCAL SIGNALS
    // Begin mtask footprint all: 4 6 7 10 11 13 15 16 17 18 
    // Begin mtask footprint all: 4 6 10 13 15 
    // Begin mtask footprint all: 6 13 18 
    // Begin mtask footprint all: 6 7 
    // Begin mtask footprint all: 3 7 
    // Begin mtask footprint all: 2 3 16 
    // Begin mtask footprint all: 2 16 20 
    // Begin mtask footprint all: 16 20 
    // Begin mtask footprint all: 14 16 
    // Begin mtask footprint all: 3 14 16 
    // Begin mtask footprint all: 2 3 5 
    // Begin mtask footprint all: 2 3 5 6 16 
    // Begin mtask footprint all: 2 3 5 13 14 16 20 
    // Begin mtask footprint all: 2 5 
    // Begin mtask footprint all: 2 5 16 
    // Begin mtask footprint all: 5 16 
    // Begin mtask footprint all: 5 7 12 16 
    // Begin mtask footprint all: 5 7 
    // Begin mtask footprint all: 5 8 
    // Begin mtask footprint all: 5 8 11 15 19 
    // Begin mtask footprint all: 5 11 19 
    // Begin mtask footprint all: 5 11 13 19 
    // Begin mtask footprint all: 5 11 20 
    // Begin mtask footprint all: 11 19 
    // Begin mtask footprint all: 2 19 
    // Begin mtask footprint all: 2 3 
    // Begin mtask footprint all: 2 9 
    // Begin mtask footprint all: 9 16 
    // Begin mtask footprint all: 9 19 
    // Begin mtask footprint all: 3 4 11 
    // Begin mtask footprint all: 3 11 
    // Begin mtask footprint all: 2 3 20 
    // Begin mtask footprint all: 3 6 20 
    // Begin mtask footprint all: 3 6 13 16 20 

    // LOCAL VARIABLES
    // Begin mtask footprint all: 6 7 
    // Begin mtask footprint all: 1 6 7 
    // Begin mtask footprint all: 

    // INTERNAL VARIABLES
  private:
    VExampleTop__Syms* __VlSymsp;  // Symbol table
  public:

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VExampleTop_CpuComplex);  ///< Copying not allowed
  public:
    VExampleTop_CpuComplex(CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, const char* name = "TOP");
    ~VExampleTop_CpuComplex();

    // INTERNAL METHODS
    void __Vconfigure(VExampleTop__Syms* symsp, bool first);
    static void _initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__1(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__2(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__3(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__4(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__5(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__6(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__7(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__8(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__9(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__10(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__11(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__12(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__13(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__14(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__15(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__16(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__17(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
  private:
    static void _ctor_var_reset(VExampleTop_CpuComplex* self, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
