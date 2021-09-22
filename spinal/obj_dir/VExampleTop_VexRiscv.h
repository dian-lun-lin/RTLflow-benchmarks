// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VExampleTop.h for the primary calling header

#ifndef VERILATED_VEXAMPLETOP_VEXRISCV_H_
#define VERILATED_VEXAMPLETOP_VEXRISCV_H_  // guard

#include "verilated_heavy.h"
#include "rf_heavy.h"
#include "VExampleTop__Dpi.h"

//==========

class VExampleTop__Syms;

//----------

VL_MODULE(VExampleTop_VexRiscv) {
  public:

    // PORTS
    // Begin mtask footprint all: 3 14 16 
    const RF_OUT8(__PVT__dBus_cmd_valid,0,0){0 * NUM_TESTBENCHES/*CData*/};
    // Begin mtask footprint all: 
    const RF_OUT(__PVT__iBus_cmd_payload_pc,31,0){0 * NUM_TESTBENCHES/*IData*/};
    const RF_IN(__PVT__iBus_rsp_payload_inst,31,0){0 * NUM_TESTBENCHES/*IData*/};
    const RF_OUT(__PVT__dBus_cmd_payload_address,31,0){0 * NUM_TESTBENCHES/*IData*/};
    const RF_OUT(__PVT__dBus_cmd_payload_data,31,0){0 * NUM_TESTBENCHES/*IData*/};
    const RF_IN(__PVT__dBus_rsp_data,31,0){0 * NUM_TESTBENCHES/*IData*/};
    const RF_OUT8(__PVT__iBus_cmd_valid,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__iBus_cmd_ready,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__iBus_rsp_valid,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__iBus_rsp_payload_error,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__timerInterrupt,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__externalInterrupt,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__softwareInterrupt,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__dBus_cmd_ready,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_OUT8(__PVT__dBus_cmd_payload_wr,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_OUT8(__PVT__dBus_cmd_payload_size,1,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__dBus_rsp_ready,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__dBus_rsp_error,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__clk_cpu_reset_,0,0){0 * NUM_TESTBENCHES/*CData*/};
    const RF_IN8(__PVT__clk_cpu,0,0){0 * NUM_TESTBENCHES/*CData*/};

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 3 4 5 7 12 13 15 18 19 20 
        // Begin mtask footprint all: 3 7 11 12 13 19 20 
        // Begin mtask footprint all: 3 6 7 19 20 
        // Begin mtask footprint all: 3 6 20 
        // Begin mtask footprint all: 6 20 
        // Begin mtask footprint all: 2 6 20 
        // Begin mtask footprint all: 2 6 
        // Begin mtask footprint all: 2 4 
        // Begin mtask footprint all: 2 4 5 14 
        // Begin mtask footprint all: 2 4 14 18 
        // Begin mtask footprint all: 2 4 19 
        // Begin mtask footprint all: 2 6 11 19 
        // Begin mtask footprint all: 2 6 19 
        // Begin mtask footprint all: 6 19 
        // Begin mtask footprint all: 6 12 19 
        // Begin mtask footprint all: 6 12 19 20 
        // Begin mtask footprint all: 12 19 20 
        // Begin mtask footprint all: 6 19 20 
        // Begin mtask footprint all: 19 20 
        // Begin mtask footprint all: 11 20 
        // Begin mtask footprint all: 11 17 
        // Begin mtask footprint all: 9 11 17 
        // Begin mtask footprint all: 2 7 8 9 11 17 19 
        // Begin mtask footprint all: 2 5 
        // Begin mtask footprint all: 2 5 8 
        // Begin mtask footprint all: 2 5 7 9 11 12 13 19 
        // Begin mtask footprint all: 5 7 9 12 13 18 
        // Begin mtask footprint all: 5 9 12 18 
        // Begin mtask footprint all: 18 
        // Begin mtask footprint all: 4 
        // Begin mtask footprint all: 7 8 15 18 
        // Begin mtask footprint all: 8 14 15 18 
        // Begin mtask footprint all: 8 11 15 18 
        // Begin mtask footprint all: 11 15 18 
        // Begin mtask footprint all: 5 11 15 18 
        // Begin mtask footprint all: 9 11 15 18 
        // Begin mtask footprint all: 9 11 18 
        // Begin mtask footprint all: 11 18 
        // Begin mtask footprint all: 9 18 
        // Begin mtask footprint all: 8 9 18 
        // Begin mtask footprint all: 5 8 9 18 
        // Begin mtask footprint all: 5 8 9 11 18 
        // Begin mtask footprint all: 8 18 
    };
    struct {
        // Begin mtask footprint all: 8 
        // Begin mtask footprint all: 3 
        // Begin mtask footprint all: 3 11 
        // Begin mtask footprint all: 3 14 
        // Begin mtask footprint all: 3 14 19 
        // Begin mtask footprint all: 3 6 11 14 19 
        // Begin mtask footprint all: 11 14 16 19 
        // Begin mtask footprint all: 11 14 19 
        // Begin mtask footprint all: 11 14 
        // Begin mtask footprint all: 2 3 
        // Begin mtask footprint all: 2 3 19 
        // Begin mtask footprint all: 2 3 19 20 
        // Begin mtask footprint all: 3 19 
        // Begin mtask footprint all: 3 7 19 
        // Begin mtask footprint all: 7 19 
        // Begin mtask footprint all: 7 16 19 
        // Begin mtask footprint all: 9 12 19 
        // Begin mtask footprint all: 9 19 
        // Begin mtask footprint all: 
        // Begin mtask footprint all: 17 
        // Begin mtask footprint all: 2 17 
        // Begin mtask footprint all: 2 
        // Begin mtask footprint all: 2 9 
        // Begin mtask footprint all: 2 9 14 
        // Begin mtask footprint all: 2 14 
        // Begin mtask footprint all: 2 20 
        // Begin mtask footprint all: 20 
        // Begin mtask footprint all: 16 
        // Begin mtask footprint all: 14 16 
        // Begin mtask footprint all: 6 14 
    };
    struct {
        // Begin mtask footprint all: 12 
        // Begin mtask footprint all: 12 18 
        // Begin mtask footprint all: 5 12 18 
        // Begin mtask footprint all: 5 18 
        // Begin mtask footprint all: 5 14 18 
        // Begin mtask footprint all: 2 5 14 18 
        // Begin mtask footprint all: 14 18 
        // Begin mtask footprint all: 7 18 
        // Begin mtask footprint all: 7 
        // Begin mtask footprint all: 7 8 
        // Begin mtask footprint all: 5 7 8 
        // Begin mtask footprint all: 7 8 9 
        // Begin mtask footprint all: 7 8 19 
        // Begin mtask footprint all: 8 19 
        // Begin mtask footprint all: 7 8 12 19 20 
        // Begin mtask footprint all: 4 5 7 8 9 12 19 
        // Begin mtask footprint all: 2 4 5 8 9 12 14 16 18 19 
        // Begin mtask footprint all: 3 4 5 8 9 11 12 13 14 19 
        // Begin mtask footprint all: 5 7 9 19 
        // Begin mtask footprint all: 2 5 9 19 
        // Begin mtask footprint all: 1 2 5 9 
        // Begin mtask footprint all: 2 5 9 12 
        // Begin mtask footprint all: 2 5 9 12 15 17 18 19 
        // Begin mtask footprint all: 2 8 15 17 18 
        // Begin mtask footprint all: 2 8 
        // Begin mtask footprint all: 2 8 9 
        // Begin mtask footprint all: 8 9 14 
        // Begin mtask footprint all: 9 
        // Begin mtask footprint all: 9 13 
        // Begin mtask footprint all: 9 13 14 18 
        // Begin mtask footprint all: 3 4 5 9 18 
        // Begin mtask footprint all: 4 18 
        // Begin mtask footprint all: 4 7 15 18 
        // Begin mtask footprint all: 7 13 15 18 
        // Begin mtask footprint all: 7 15 
        // Begin mtask footprint all: 7 9 
        // Begin mtask footprint all: 7 12 
        // Begin mtask footprint all: 7 12 19 
    };
    struct {
        // Begin mtask footprint all: 12 19 
        // Begin mtask footprint all: 5 12 19 
        // Begin mtask footprint all: 5 11 12 19 
        // Begin mtask footprint all: 5 11 19 
        // Begin mtask footprint all: 11 19 
        // Begin mtask footprint all: 5 19 
        // Begin mtask footprint all: 19 
        // Begin mtask footprint all: 6 7 
        // Begin mtask footprint all: 6 7 20 
        // Begin mtask footprint all: 6 7 12 20 
        // Begin mtask footprint all: 6 12 20 
        // Begin mtask footprint all: 12 20 
        // Begin mtask footprint all: 12 16 20 
        // Begin mtask footprint all: 13 16 20 
        // Begin mtask footprint all: 11 12 13 16 18 19 
        // Begin mtask footprint all: 11 12 16 
        // Begin mtask footprint all: 11 12 
        // Begin mtask footprint all: 4 11 12 
        // Begin mtask footprint all: 11 
        // Begin mtask footprint all: 11 15 
        // Begin mtask footprint all: 4 11 15 
    };

    // LOCAL VARIABLES
    // Begin mtask footprint all: 1 2 5 

    // INTERNAL VARIABLES
  private:
    VExampleTop__Syms* __VlSymsp;  // Symbol table
  public:

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VExampleTop_VexRiscv);  ///< Copying not allowed
  public:
    VExampleTop_VexRiscv(CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, const char* name = "TOP");
    ~VExampleTop_VexRiscv();

    // INTERNAL METHODS
    void __Vconfigure(VExampleTop__Syms* symsp, bool first);
    static void _initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__1(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    static void _initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__2(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__3(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__4(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__5(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__6(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__7(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__8(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__9(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__10(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__11(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__12(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__13(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__14(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__15(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__16(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__17(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__18(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__19(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__20(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__21(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__22(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__23(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__24(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__25(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__26(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__27(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__28(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__29(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__30(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__31(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__32(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__33(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__34(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__35(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__36(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__37(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__38(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__39(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__40(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__41(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__42(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__43(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__44(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__45(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__46(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__47(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__48(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__49(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__50(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__51(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__52(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    __device__
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__53(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
  private:
    static void _ctor_var_reset(VExampleTop_VexRiscv* self, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
