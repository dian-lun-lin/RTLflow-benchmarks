// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleTop.h for the primary calling header

#include "VExampleTop_CpuComplex.h"
#include "VExampleTop__Syms.h"

#include "verilated_dpi.h"

//==========
// Begin mtask footprint all: 
VlWide<15>/*479:0*/ VExampleTop_CpuComplex::__Vconst1;
VlWide<15>/*479:0*/ VExampleTop_CpuComplex::__Vconst2;
VlWide<15>/*479:0*/ VExampleTop_CpuComplex::__Vconst3;
VlWide<15>/*479:0*/ VExampleTop_CpuComplex::__Vconst4;

VExampleTop_CpuComplex::VExampleTop_CpuComplex(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    VL_CELL(cpu, VExampleTop_VexRiscv);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset(this);
}

void VExampleTop_CpuComplex::__Vconfigure(VExampleTop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VExampleTop_CpuComplex::~VExampleTop_CpuComplex() {
}

void VExampleTop_CpuComplex::_initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__1(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__1\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_READMEM_N(false, 8, 2048, 0, VL_CVT_PACK_STR_NW(15, __Vconst1)
                 ,  &(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT__ram_symbol0)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 8, 2048, 0, VL_CVT_PACK_STR_NW(15, __Vconst2)
                 ,  &(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT__ram_symbol1)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 8, 2048, 0, VL_CVT_PACK_STR_NW(15, __Vconst3)
                 ,  &(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT__ram_symbol2)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 8, 2048, 0, VL_CVT_PACK_STR_NW(15, __Vconst4)
                 ,  &(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT__ram_symbol3)
                 , 0, ~0ULL);
}

void VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__2(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__2\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT___zz_PipelinedMemoryBusToApbBridge_1_ 
        = (1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__state)));
}

void VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__3(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__3\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_mask 
        = (0xfU & (((0U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_size))
                     ? 1U : ((1U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_size))
                              ? 3U : 0xfU)) << (3U 
                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_address)));
}

void VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__4(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__4\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_6_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_rspSourceId)
            ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__pipelinedMemoryBusStage_rsp_regNext_payload_data
            : (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_9_) 
                << 0x18U) | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_8_) 
                              << 0x10U) | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_7_) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_6_)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_rsp_valid 
        = ((0U != (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__pipelinedMemoryBusStage_rsp_regNext_valid) 
                    << 1U) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_1_))) 
           | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_rspPending) 
              & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_rspNoHit)));
}

void VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__5(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__5\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT___zz_CCMasterArbiter_2_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT__rspPending) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_rsp_valid)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_7_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_rspPending) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_rsp_valid)));
}

void VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__6(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__6\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_iBus_rsp_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_rsp_valid) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT__rspTarget)));
}

void VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__7(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__7\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT___zz_PipelinedMemoryBusToApbBridge_2_ 
        = (1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_valid)));
}

void VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__8(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__8\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_8_ 
        = (1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid)));
}

void VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__9(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__9\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_write 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_wr));
}

void VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__10(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__10\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid)
            ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_address
            : (0xfffffffcU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_fetchPc_pcReg));
}

void VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__11(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__11\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__pipelinedMemoryBusStage_cmd_ready = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__state) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_input_PREADY) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__pipelinedMemoryBusStage_cmd_ready = 1U;
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__pipelinedMemoryBusStage_rsp_valid = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__state) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_input_PREADY) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__pipelinedMemoryBusStage_rsp_valid 
                = (1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_write)));
        }
    }
}

void VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__12(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__12\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_noHit 
        = (0U == (((0x80000000U == (0xfff00000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address)) 
                   << 1U) | (0U == (0xffffe000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address))));
}

void VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__13(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__13\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_cmd_ready 
        = ((0U != ((((0x80000000U == (0xfff00000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address)) 
                     & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_ready)) 
                    << 1U) | (0U == (0xffffe000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address)))) 
           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_noHit));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_7_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_cmd_ready = 0U;
    }
}

void VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__14(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__14\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_dBus_cmd_ready 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_cmd_ready;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT___zz_CCMasterArbiter_2_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_dBus_cmd_ready = 0U;
    }
}

void VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__15(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__15\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_iBus_cmd_ready 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_cmd_ready) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid)));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT___zz_CCMasterArbiter_2_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_iBus_cmd_ready = 0U;
    }
}

void VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__16(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__16\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_cmd_valid) 
           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT___zz_CCMasterArbiter_2_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_valid = 0U;
    }
}

void VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__17(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__17\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_4_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_valid) 
           & (0U == (0xffffe000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address)));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_7_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_4_ = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_5_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_valid) 
           & (0x80000000U == (0xfff00000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address)));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_7_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_5_ = 0U;
    }
}

void VExampleTop_CpuComplex::_ctor_var_reset(VExampleTop_CpuComplex* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VExampleTop_CpuComplex::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->__PVT__io_apb_PADDR = VL_RAND_RESET_I(20);
    self->__PVT__io_apb_PSEL = VL_RAND_RESET_I(1);
    self->__PVT__io_apb_PENABLE = VL_RAND_RESET_I(1);
    self->__PVT__io_apb_PREADY = VL_RAND_RESET_I(1);
    self->__PVT__io_apb_PWRITE = VL_RAND_RESET_I(1);
    self->__PVT__io_apb_PWDATA = VL_RAND_RESET_I(32);
    self->__PVT__io_apb_PRDATA = VL_RAND_RESET_I(32);
    self->__PVT__io_apb_PSLVERROR = VL_RAND_RESET_I(1);
    self->__PVT__io_externalInterrupt = VL_RAND_RESET_I(1);
    self->__PVT__io_timerInterrupt = VL_RAND_RESET_I(1);
    self->__PVT__clk_cpu = VL_RAND_RESET_I(1);
    self->__PVT__clk_cpu_reset_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_CpuComplex_4_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_CpuComplex_5_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_CpuComplex_6_ = VL_RAND_RESET_I(32);
    self->__PVT__mainBusArbiter_io_iBus_cmd_ready = VL_RAND_RESET_I(1);
    self->__PVT__mainBusArbiter_io_iBus_rsp_valid = VL_RAND_RESET_I(1);
    self->__PVT__mainBusArbiter_io_dBus_cmd_ready = VL_RAND_RESET_I(1);
    self->__PVT__mainBusArbiter_io_masterBus_cmd_valid = VL_RAND_RESET_I(1);
    self->__PVT__mainBusArbiter_io_masterBus_cmd_payload_write = VL_RAND_RESET_I(1);
    self->__PVT__mainBusArbiter_io_masterBus_cmd_payload_address = VL_RAND_RESET_I(32);
    self->__PVT__mainBusArbiter_io_masterBus_cmd_payload_mask = VL_RAND_RESET_I(4);
    self->__PVT___zz_CpuComplex_7_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_CpuComplex_8_ = VL_RAND_RESET_I(1);
    self->__PVT__cpu_dBus_cmd_halfPipe_regs_valid = VL_RAND_RESET_I(1);
    self->__PVT__cpu_dBus_cmd_halfPipe_regs_ready = VL_RAND_RESET_I(1);
    self->__PVT__cpu_dBus_cmd_halfPipe_regs_payload_wr = VL_RAND_RESET_I(1);
    self->__PVT__cpu_dBus_cmd_halfPipe_regs_payload_address = VL_RAND_RESET_I(32);
    self->__PVT__cpu_dBus_cmd_halfPipe_regs_payload_data = VL_RAND_RESET_I(32);
    self->__PVT__cpu_dBus_cmd_halfPipe_regs_payload_size = VL_RAND_RESET_I(2);
    self->__PVT__mainBusDecoder_logic_masterPipelined_cmd_ready = VL_RAND_RESET_I(1);
    self->__PVT__mainBusDecoder_logic_masterPipelined_rsp_valid = VL_RAND_RESET_I(1);
    self->__PVT__mainBusDecoder_logic_noHit = VL_RAND_RESET_I(1);
    self->__PVT__mainBusDecoder_logic_rspPending = VL_RAND_RESET_I(1);
    self->__PVT__mainBusDecoder_logic_rspNoHit = VL_RAND_RESET_I(1);
    self->__PVT__mainBusDecoder_logic_rspSourceId = VL_RAND_RESET_I(1);
    self->__PVT__mainBusArbiter__DOT___zz_CCMasterArbiter_2_ = VL_RAND_RESET_I(1);
    self->__PVT__mainBusArbiter__DOT__rspPending = VL_RAND_RESET_I(1);
    self->__PVT__mainBusArbiter__DOT__rspTarget = VL_RAND_RESET_I(1);
    self->__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_1_ = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        self->__PVT__ram__DOT__ram_symbol0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        self->__PVT__ram__DOT__ram_symbol1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        self->__PVT__ram__DOT__ram_symbol2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        self->__PVT__ram__DOT__ram_symbol3[__Vi0] = VL_RAND_RESET_I(8);
    }
    self->__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_6_ = VL_RAND_RESET_I(8);
    self->__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_7_ = VL_RAND_RESET_I(8);
    self->__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_8_ = VL_RAND_RESET_I(8);
    self->__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_9_ = VL_RAND_RESET_I(8);
    self->__PVT__apbBridge__DOT___zz_PipelinedMemoryBusToApbBridge_1_ = VL_RAND_RESET_I(1);
    self->__PVT__apbBridge__DOT___zz_PipelinedMemoryBusToApbBridge_2_ = VL_RAND_RESET_I(1);
    self->__PVT__apbBridge__DOT__pipelinedMemoryBusStage_cmd_ready = VL_RAND_RESET_I(1);
    self->__PVT__apbBridge__DOT__pipelinedMemoryBusStage_rsp_valid = VL_RAND_RESET_I(1);
    self->__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_valid = VL_RAND_RESET_I(1);
    self->__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_ready = VL_RAND_RESET_I(1);
    self->__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_write = VL_RAND_RESET_I(1);
    self->__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address = VL_RAND_RESET_I(32);
    self->__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data = VL_RAND_RESET_I(32);
    self->__PVT__apbBridge__DOT__pipelinedMemoryBusStage_rsp_regNext_valid = VL_RAND_RESET_I(1);
    self->__PVT__apbBridge__DOT__pipelinedMemoryBusStage_rsp_regNext_payload_data = VL_RAND_RESET_I(32);
    self->__PVT__apbBridge__DOT__state = VL_RAND_RESET_I(1);
    self->__Vdlyvdim0__ram__DOT__ram_symbol0__v0 = 0;
    self->__Vdlyvval__ram__DOT__ram_symbol0__v0 = VL_RAND_RESET_I(8);
    self->__Vdlyvset__ram__DOT__ram_symbol0__v0 = 0;
    self->__Vdlyvdim0__ram__DOT__ram_symbol1__v0 = 0;
    self->__Vdlyvval__ram__DOT__ram_symbol1__v0 = VL_RAND_RESET_I(8);
    self->__Vdlyvset__ram__DOT__ram_symbol1__v0 = 0;
    self->__Vdlyvdim0__ram__DOT__ram_symbol2__v0 = 0;
    self->__Vdlyvval__ram__DOT__ram_symbol2__v0 = VL_RAND_RESET_I(8);
    self->__Vdlyvset__ram__DOT__ram_symbol2__v0 = 0;
    self->__Vdlyvdim0__ram__DOT__ram_symbol3__v0 = 0;
    self->__Vdlyvval__ram__DOT__ram_symbol3__v0 = VL_RAND_RESET_I(8);
    self->__Vdlyvset__ram__DOT__ram_symbol3__v0 = 0;
    self->__Vconst1[0] = 778201454U;
    self->__Vconst1[1] = 1651469360U;
    self->__Vconst1[2] = 1601403245U;
    self->__Vconst1[3] = 1601331565U;
    self->__Vconst1[4] = 1601331565U;
    self->__Vconst1[5] = 1600352373U;
    self->__Vconst1[6] = 1886740341U;
    self->__Vconst1[7] = 1601527651U;
    self->__Vconst1[8] = 1600352373U;
    self->__Vconst1[9] = 1702258028U;
    self->__Vconst1[10] = 1953460332U;
    self->__Vconst1[11] = 1882093151U;
    self->__Vconst1[12] = 1818580079U;
    self->__Vconst1[13] = 2019650928U;
    self->__Vconst1[14] = 69U;
    self->__Vconst2[0] = 778201454U;
    self->__Vconst2[1] = 1651469361U;
    self->__Vconst2[2] = 1601403245U;
    self->__Vconst2[3] = 1601331565U;
    self->__Vconst2[4] = 1601331565U;
    self->__Vconst2[5] = 1600352373U;
    self->__Vconst2[6] = 1886740341U;
    self->__Vconst2[7] = 1601527651U;
    self->__Vconst2[8] = 1600352373U;
    self->__Vconst2[9] = 1702258028U;
    self->__Vconst2[10] = 1953460332U;
    self->__Vconst2[11] = 1882093151U;
    self->__Vconst2[12] = 1818580079U;
    self->__Vconst2[13] = 2019650928U;
    self->__Vconst2[14] = 69U;
    self->__Vconst3[0] = 778201454U;
    self->__Vconst3[1] = 1651469362U;
    self->__Vconst3[2] = 1601403245U;
    self->__Vconst3[3] = 1601331565U;
    self->__Vconst3[4] = 1601331565U;
    self->__Vconst3[5] = 1600352373U;
    self->__Vconst3[6] = 1886740341U;
    self->__Vconst3[7] = 1601527651U;
    self->__Vconst3[8] = 1600352373U;
    self->__Vconst3[9] = 1702258028U;
    self->__Vconst3[10] = 1953460332U;
    self->__Vconst3[11] = 1882093151U;
    self->__Vconst3[12] = 1818580079U;
    self->__Vconst3[13] = 2019650928U;
    self->__Vconst3[14] = 69U;
    self->__Vconst4[0] = 778201454U;
    self->__Vconst4[1] = 1651469363U;
    self->__Vconst4[2] = 1601403245U;
    self->__Vconst4[3] = 1601331565U;
    self->__Vconst4[4] = 1601331565U;
    self->__Vconst4[5] = 1600352373U;
    self->__Vconst4[6] = 1886740341U;
    self->__Vconst4[7] = 1601527651U;
    self->__Vconst4[8] = 1600352373U;
    self->__Vconst4[9] = 1702258028U;
    self->__Vconst4[10] = 1953460332U;
    self->__Vconst4[11] = 1882093151U;
    self->__Vconst4[12] = 1818580079U;
    self->__Vconst4[13] = 2019650928U;
    self->__Vconst4[14] = 69U;
}
