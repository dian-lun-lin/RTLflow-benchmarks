// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VExampleTop.h for the primary calling header

#ifndef VERILATED_VEXAMPLETOP_CPUCOMPLEX_H_
#define VERILATED_VEXAMPLETOP_CPUCOMPLEX_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"
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
    VL_OUT(__PVT__io_apb_PADDR,19,0);
    VL_OUT(__PVT__io_apb_PWDATA,31,0);
    VL_IN(__PVT__io_apb_PRDATA,31,0);
    VL_OUT8(__PVT__io_apb_PSEL,0,0);
    VL_OUT8(__PVT__io_apb_PENABLE,0,0);
    VL_IN8(__PVT__io_apb_PREADY,0,0);
    VL_OUT8(__PVT__io_apb_PWRITE,0,0);
    VL_IN8(__PVT__io_apb_PSLVERROR,0,0);
    VL_IN8(__PVT__io_externalInterrupt,0,0);
    VL_IN8(__PVT__io_timerInterrupt,0,0);
    VL_IN8(__PVT__clk_cpu_reset_,0,0);
    VL_IN8(__PVT__clk_cpu,0,0);

    // LOCAL SIGNALS
    // Begin mtask footprint all: 4 6 7 10 11 13 15 16 17 18 
    IData/*31:0*/ __PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address;
    // Begin mtask footprint all: 4 6 10 13 15 
    IData/*31:0*/ __PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data;
    // Begin mtask footprint all: 6 13 18 
    IData/*31:0*/ __PVT__cpu_dBus_cmd_halfPipe_regs_payload_data;
    // Begin mtask footprint all: 6 7 
    CData/*3:0*/ __PVT__mainBusArbiter_io_masterBus_cmd_payload_mask;
    // Begin mtask footprint all: 3 7 
    VlUnpacked<CData/*7:0*/, 2048> __PVT__ram__DOT__ram_symbol0;
    VlUnpacked<CData/*7:0*/, 2048> __PVT__ram__DOT__ram_symbol1;
    VlUnpacked<CData/*7:0*/, 2048> __PVT__ram__DOT__ram_symbol2;
    VlUnpacked<CData/*7:0*/, 2048> __PVT__ram__DOT__ram_symbol3;
    // Begin mtask footprint all: 2 3 16 
    CData/*0:0*/ __PVT__mainBusDecoder_logic_masterPipelined_cmd_ready;
    // Begin mtask footprint all: 2 16 20 
    CData/*0:0*/ __PVT___zz_CpuComplex_7_;
    CData/*0:0*/ __PVT__mainBusArbiter__DOT___zz_CCMasterArbiter_2_;
    // Begin mtask footprint all: 16 20 
    CData/*0:0*/ __PVT__mainBusArbiter_io_iBus_cmd_ready;
    // Begin mtask footprint all: 14 16 
    CData/*0:0*/ __PVT___zz_CpuComplex_8_;
    // Begin mtask footprint all: 3 14 16 
    CData/*0:0*/ __PVT__mainBusArbiter_io_dBus_cmd_ready;
    // Begin mtask footprint all: 2 3 5 
    CData/*0:0*/ __PVT__mainBusDecoder_logic_masterPipelined_rsp_valid;
    // Begin mtask footprint all: 2 3 5 6 16 
    CData/*0:0*/ __PVT__mainBusArbiter_io_masterBus_cmd_payload_write;
    // Begin mtask footprint all: 2 3 5 13 14 16 20 
    CData/*0:0*/ __PVT__cpu_dBus_cmd_halfPipe_regs_valid;
    // Begin mtask footprint all: 2 5 
    CData/*0:0*/ __PVT__mainBusArbiter__DOT__rspTarget;
    // Begin mtask footprint all: 2 5 16 
    CData/*0:0*/ __PVT__cpu_dBus_cmd_halfPipe_regs_payload_wr;
    // Begin mtask footprint all: 5 16 
    CData/*0:0*/ __PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_ready;
    // Begin mtask footprint all: 5 7 12 16 
    IData/*31:0*/ __PVT__cpu_dBus_cmd_halfPipe_regs_payload_address;
    // Begin mtask footprint all: 5 7 
    CData/*1:0*/ __PVT__cpu_dBus_cmd_halfPipe_regs_payload_size;
    // Begin mtask footprint all: 5 8 
    CData/*0:0*/ __PVT__apbBridge__DOT___zz_PipelinedMemoryBusToApbBridge_1_;
    // Begin mtask footprint all: 5 8 11 15 19 
    CData/*0:0*/ __PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_write;
    CData/*0:0*/ __PVT__apbBridge__DOT__state;
    // Begin mtask footprint all: 5 11 19 
    CData/*0:0*/ __PVT__apbBridge__DOT__pipelinedMemoryBusStage_cmd_ready;
    // Begin mtask footprint all: 5 11 13 19 
    CData/*0:0*/ __PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_valid;
    // Begin mtask footprint all: 5 11 20 
    CData/*0:0*/ __PVT___zz_CpuComplex_5_;
    // Begin mtask footprint all: 11 19 
    CData/*0:0*/ __PVT__apbBridge__DOT___zz_PipelinedMemoryBusToApbBridge_2_;
    // Begin mtask footprint all: 2 19 
    CData/*0:0*/ __PVT__mainBusArbiter_io_iBus_rsp_valid;
    // Begin mtask footprint all: 2 3 
    CData/*0:0*/ __PVT__mainBusDecoder_logic_rspPending;
    CData/*0:0*/ __PVT__mainBusArbiter__DOT__rspPending;
    CData/*0:0*/ __PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_1_;
    // Begin mtask footprint all: 2 9 
    CData/*0:0*/ __PVT__mainBusDecoder_logic_rspNoHit;
    CData/*0:0*/ __PVT__apbBridge__DOT__pipelinedMemoryBusStage_rsp_regNext_valid;
    // Begin mtask footprint all: 9 16 
    CData/*0:0*/ __PVT__mainBusDecoder_logic_noHit;
    // Begin mtask footprint all: 9 19 
    CData/*0:0*/ __PVT__apbBridge__DOT__pipelinedMemoryBusStage_rsp_valid;
    // Begin mtask footprint all: 3 4 11 
    IData/*31:0*/ __PVT___zz_CpuComplex_6_;
    // Begin mtask footprint all: 3 11 
    IData/*31:0*/ __PVT__apbBridge__DOT__pipelinedMemoryBusStage_rsp_regNext_payload_data;
    CData/*0:0*/ __PVT__cpu_dBus_cmd_halfPipe_regs_ready;
    CData/*0:0*/ __PVT__mainBusDecoder_logic_rspSourceId;
    CData/*7:0*/ __PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_6_;
    CData/*7:0*/ __PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_7_;
    CData/*7:0*/ __PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_8_;
    CData/*7:0*/ __PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_9_;
    // Begin mtask footprint all: 2 3 20 
    CData/*0:0*/ __PVT__mainBusArbiter_io_masterBus_cmd_valid;
    // Begin mtask footprint all: 3 6 20 
    CData/*0:0*/ __PVT___zz_CpuComplex_4_;
    // Begin mtask footprint all: 3 6 13 16 20 
    IData/*31:0*/ __PVT__mainBusArbiter_io_masterBus_cmd_payload_address;

    // LOCAL VARIABLES
    // Begin mtask footprint all: 6 7 
    SData/*10:0*/ __Vdlyvdim0__ram__DOT__ram_symbol0__v0;
    SData/*10:0*/ __Vdlyvdim0__ram__DOT__ram_symbol1__v0;
    SData/*10:0*/ __Vdlyvdim0__ram__DOT__ram_symbol2__v0;
    SData/*10:0*/ __Vdlyvdim0__ram__DOT__ram_symbol3__v0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__ram_symbol0__v0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__ram_symbol1__v0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__ram_symbol2__v0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__ram_symbol3__v0;
    // Begin mtask footprint all: 1 6 7 
    CData/*0:0*/ __Vdlyvset__ram__DOT__ram_symbol0__v0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__ram_symbol1__v0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__ram_symbol2__v0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__ram_symbol3__v0;
    // Begin mtask footprint all: 
    static VlWide<15>/*479:0*/ __Vconst1;
    static VlWide<15>/*479:0*/ __Vconst2;
    static VlWide<15>/*479:0*/ __Vconst3;
    static VlWide<15>/*479:0*/ __Vconst4;

    // INTERNAL VARIABLES
  private:
    VExampleTop__Syms* __VlSymsp;  // Symbol table
  public:

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VExampleTop_CpuComplex);  ///< Copying not allowed
  public:
    VExampleTop_CpuComplex(const char* name = "TOP");
    ~VExampleTop_CpuComplex();

    // INTERNAL METHODS
    void __Vconfigure(VExampleTop__Syms* symsp, bool first);
  private:
    static void _ctor_var_reset(VExampleTop_CpuComplex* self) VL_ATTR_COLD;
  public:
    static void _initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__1(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__10(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__11(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__12(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__13(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__14(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__15(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__16(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__17(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__2(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__3(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__4(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__5(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__6(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__7(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__8(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__9(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
