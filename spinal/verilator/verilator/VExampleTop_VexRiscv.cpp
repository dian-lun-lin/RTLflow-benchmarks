// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleTop.h for the primary calling header

#include "VExampleTop_VexRiscv.h"
#include "VExampleTop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__38(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__38\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__Vdly__CsrPlugin_mstatus_MIE 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MIE;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvset__ram__DOT__ram_symbol3__v0 = 0U;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvset__ram__DOT__ram_symbol2__v0 = 0U;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvset__ram__DOT__ram_symbol1__v0 = 0U;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvset__ram__DOT__ram_symbol0__v0 = 0U;
}

VL_INLINE_OPT void VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__39(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__39\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mip_MEIP = 0U;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mip_MTIP 
        = (0U != (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__interruptCtrl_1___05Fio_pendings));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mcycle 
        = (1ULL + vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mcycle);
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT___zz_StreamFifoLowLatency_1_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT___zz_StreamFifoLowLatency_3_ 
            = ((QData)((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_6_)) 
               << 1U);
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_output_valid) 
             & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_isStuckByOthers)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_throw2BytesReg 
                = ((((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_unaligned)) 
                     & (3U != (3U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst))) 
                    | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferValid)) 
                   & (3U != (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                                   >> 0x10U))));
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_externalFlush) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_throw2BytesReg = 0U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_throw2BytesReg = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_3072 
            = (0xc00U == (0xfffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                    >> 0x14U)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_3200 
            = (0xc80U == (0xfffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                    >> 0x14U)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_834 
            = (0x342U == (0xfffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                    >> 0x14U)));
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_832) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeEnable) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mscratch 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeData;
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mip_MSIP = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_836) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeEnable) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mip_MSIP 
                = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeData 
                         >> 3U));
        }
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_7_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__counter 
            = (0xffffU & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__counter) 
                          + (1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__limitHit)))));
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_8_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__counter = 0U;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_9_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__counter 
            = (0xffffU & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__counter) 
                          + (1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__limitHit)))));
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_10_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__counter = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__interruptCtrl_1___DOT__pendings 
        = ((IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext)
            ? (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__interruptCtrl_1___DOT__pendings) 
                & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_12_))) 
               | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB_io_full) 
                   << 1U) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA_io_full)))
            : 0U);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__prescaler_1___DOT__counter 
        = (0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__prescaler_1___DOT__counter)));
    if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_2_) 
         | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__prescaler_1___05Fio_overflow))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__prescaler_1___DOT__counter = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__pipelinedMemoryBusStage_rsp_regNext_payload_data 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__apb3Router_1___DOT___zz_Apb3Router_4_;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_4_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_6_ 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT__ram_symbol0
            [(0x7ffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address 
                        >> 2U))];
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_4_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_9_ 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT__ram_symbol3
            [(0x7ffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address 
                        >> 2U))];
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_4_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_7_ 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT__ram_symbol1
            [(0x7ffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address 
                        >> 2U))];
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_4_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_8_ 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT__ram_symbol2
            [(0x7ffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address 
                        >> 2U))];
    }
    if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_valid) 
         & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_cmd_ready))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_rspSourceId 
            = (0x80000000U == (0xfff00000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext)) 
                 | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid)
                     ? (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_dBus_cmd_ready)
                     : (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__dBus_cmd_valid)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_1_ 
        = ((IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) 
           & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_4_) 
              & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_write))));
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_rsp_valid) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT__rspPending = 0U;
        }
        if ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_valid) 
              & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_cmd_ready)) 
             & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_write)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT__rspPending = 1U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT__rspPending = 0U;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_rsp_valid) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_rspPending = 0U;
        }
        if ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_valid) 
              & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_cmd_ready)) 
             & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_write)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_rspPending = 1U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_rspPending = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_159_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_3072) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_159_ 
            = (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mcycle);
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_160_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_3200) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_160_ 
            = (IData)((vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mcycle 
                       >> 0x20U));
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_isStuckByOthers)) 
             & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_join_valid))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferValid = 0U;
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_182_) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferFill) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferValid = 1U;
            }
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_externalFlush) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferValid = 0U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferValid = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_832 
            = (0x340U == (0xfffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                    >> 0x14U)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_836 
            = (0x344U == (0xfffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                    >> 0x14U)));
    }
}

VL_INLINE_OPT void VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__40(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__40\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_READ_DATA 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_6_;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MEMORY_ADDRESS_LOW;
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC_LESS_UNSIGNED 
            = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                     >> 0xeU));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2_FORCE_ZERO 
            = (IData)((1U == (0x401U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC_USE_SUB_LESS 
            = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                     >> 0xaU));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE 
            = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                     >> 0x16U));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_CSR_WRITE_OPCODE 
            = (1U & (~ ((IData)((0x2000U == (0xfe000U 
                                             & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_))) 
                        | (IData)((0x6000U == (0xfe000U 
                                               & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_))))));
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_772) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeEnable) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MEIE 
                    = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeData 
                             >> 0xbU));
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MEIE = 0U;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_772) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeEnable) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MTIE 
                    = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeData 
                             >> 7U));
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MTIE = 0U;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_772) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeEnable) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MSIE 
                    = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeData 
                             >> 3U));
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MSIE = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
            = ((0U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                             >> 4U))) ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS1
                : ((2U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                                 >> 4U))) ? ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_94_)
                                              ? 2U : 4U)
                    : ((1U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                                     >> 4U))) ? (0xfffff000U 
                                                 & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)
                        : (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                    >> 0xfU)))));
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (((0x68U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter)) 
             & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_readBreak_regNext)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_breakDetected = 1U;
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_4_) {
            if ((0x200U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data)) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_breakDetected = 0U;
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_breakDetected = 0U;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if ((0U != (0xfU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
            if ((4U != (0xfU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                if ((8U == (0xfU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__ctrl_doWrite) {
                        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__io_gpio_writeEnable_driver 
                            = (7U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data);
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__io_gpio_writeEnable_driver = 0U;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if ((1U & (~ ((((((((0U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) 
                            | (0x40U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
                           | (0x44U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
                          | (0x48U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
                         | (0x50U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
                        | (0x54U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
                       | (0x58U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
                      | (0x10U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)))))) {
            if ((0x14U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__busCtrl_doWrite) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__interruptCtrl_1___05Fio_masks_driver 
                        = (3U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data);
                }
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__interruptCtrl_1___05Fio_masks_driver = 0U;
    }
    if (((((((((0U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) 
               | (0x40U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
              | (0x44U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
             | (0x48U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
            | (0x50U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
           | (0x54U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
          | (0x58U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
         | (0x10U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)))) {
        if ((0U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__busCtrl_doWrite) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_1_ 
                    = (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data);
            }
        }
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter 
            = (0xfffffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter 
                           - (IData)(1U)));
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_tick) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_clockDivider;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_READ_DATA;
    if ((1U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted 
            = ((0xffffff00U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted) 
               | (0xffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_READ_DATA 
                           >> 8U)));
    } else if ((2U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted 
            = ((0xffff0000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted) 
               | (0xffffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_READ_DATA 
                             >> 0x10U)));
    } else if ((3U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted 
            = ((0xffffff00U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted) 
               | (0xffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_READ_DATA 
                           >> 0x18U)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MEMORY_ADDRESS_LOW 
            = (3U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_SrcPlugin_addSub);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE 
            = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                     >> 0x12U));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_772 
            = (0x304U == (0xfffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                    >> 0x14U)));
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                      >> 4U)))) {
            if ((8U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) {
                if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                              >> 2U)))) {
                    if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                                  >> 1U)))) {
                        if ((1U & (~ vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__busCtrl_doWrite) {
                                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_clockDivider 
                                    = (0xfffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data);
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_clockDivider = 0U;
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_clockDivider = 0x35U;
    }
}

VL_INLINE_OPT void VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__41(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__41\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_rsp_valid) 
                        & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT__rspTarget)) 
                       & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MEMORY_ENABLE)) 
                      & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid)) 
                     & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        VL_WRITEF("FAILURE DBusSimplePlugin doesn't allow memory stage stall when read happend\n");
        VL_FINISH_MT("../spinal/ExampleTop.sim.v", 4444, "");
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_171_) {
        if ((3U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_targetPrivilege))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mcause_exceptionCode 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.CsrPlugin_interrupt_code;
        }
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_171_) {
        if ((3U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_targetPrivilege))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mepc 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_decodePc_pcReg;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MEMORY_STORE 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_MEMORY_STORE;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_BRANCH_CALC 
            = (0xfffffffeU & (((3U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BRANCH_CTRL))
                                ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS1
                                : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_PC) 
                              + vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_BranchPlugin_branch_src2));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
            = (IData)((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                       (((QData)((IData)(
                                                                         ((3U 
                                                                           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                                          & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_FullBarrelShifterPlugin_reversed 
                                                                             >> 0x1fU)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
                                                       (0x1fU 
                                                        & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2))));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_137_ 
        = (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                    >> 7U));
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_171_) {
            if ((3U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_targetPrivilege))) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__Vdly__CsrPlugin_mstatus_MIE = 0U;
            }
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_172_) {
            if ((3U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__Vdly__CsrPlugin_mstatus_MIE 
                    = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MPIE;
            }
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_768) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeEnable) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__Vdly__CsrPlugin_mstatus_MIE 
                    = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeData 
                             >> 3U));
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__Vdly__CsrPlugin_mstatus_MIE = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext)) 
                 | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_valid)
                     ? (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__pipelinedMemoryBusStage_cmd_ready)
                     : (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_5_)))));
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_address 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_SrcPlugin_addSub;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_valid)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_write 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_write;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT___zz_PipelinedMemoryBusToApbBridge_1_) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__state 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_valid;
        } else if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_input_PREADY) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__state = 0U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__state = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_wr 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_MEMORY_STORE;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_size 
            = (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                     >> 0xcU));
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MIE) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_109_) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.CsrPlugin_interrupt_code = 7U;
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_110_) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.CsrPlugin_interrupt_code = 3U;
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_111_) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.CsrPlugin_interrupt_code = 0xbU;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2 
            = ((0U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                             >> 0xcU))) ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS2
                : ((1U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                                 >> 0xcU))) ? ((0xfffff000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                                  >> 0x1fU)))) 
                                                   << 0xcU)) 
                                               | (0xfffU 
                                                  & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                     >> 0x14U)))
                    : ((2U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                                     >> 0xcU))) ? (
                                                   (0xfffff000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                                      >> 0x1fU)))) 
                                                       << 0xcU)) 
                                                   | ((0xfe0U 
                                                       & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                            >> 7U))))
                        : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_decodePc_pcReg)));
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_171_) {
            if ((3U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_targetPrivilege))) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MPIE 
                    = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MIE;
            }
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_172_) {
            if ((3U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MPIE = 1U;
            }
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_768) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeEnable) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MPIE 
                    = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeData 
                             >> 7U));
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MPIE = 0U;
    }
}

VL_INLINE_OPT void VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__42(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__42\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdlyvset__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0 = 0U;
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_correction) 
             | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_pcRegPropagate))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_inc = 0U;
        }
        if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_output_valid) 
             & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_1_input_ready))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_inc = 1U;
        }
        if (((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_output_valid)) 
             & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_1_input_ready))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_inc = 0U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_inc = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_pending_value 
        = ((IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext)
            ? (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_pending_next)
            : 0U);
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_externalFlush) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_61_ = 0U;
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_2_output_ready) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_61_ 
                = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_59_) 
                    & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_1_halt))) 
                   & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_externalFlush)));
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_61_ = 0U;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter 
            = (7U & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter) 
                     - (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_236_)));
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_externalFlush) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_pending_next;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter = 0U;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_182_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferData 
            = (0xffffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                          >> 0x10U));
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__pushing) 
             != (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__popping))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__risingOccupancy 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__pushing;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__risingOccupancy = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value 
        = ((IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext)
            ? (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext)
            : 0U);
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushing) 
             != (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popping))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_risingOccupancy 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushing;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_risingOccupancy = 0U;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_2_) {
            if ((1U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data)) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_readError = 0U;
            }
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_readError = 1U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_readError = 0U;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_StreamFifo_1_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT____Vlvbound1 
            = (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data);
        if ((0xfeU >= (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdlyvval__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu.u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT____Vlvbound1;
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdlyvset__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0 = 1U;
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdlyvdim0__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value;
        }
    }
    if (((((((((0U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) 
               | (0x40U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
              | (0x44U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
             | (0x48U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
            | (0x50U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
           | (0x54U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
          | (0x58U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
         | (0x10U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)))) {
        if ((0U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
            if ((0x40U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                if ((0x44U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                    if ((0x48U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                        if ((0x50U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                            if ((0x54U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__busCtrl_doWrite) {
                                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB_io_limit_driver 
                                        = (0xffffU 
                                           & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (((((((((0U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) 
                   | (0x40U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
                  | (0x44U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
                 | (0x48U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
                | (0x50U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
               | (0x54U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
              | (0x58U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
             | (0x10U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)))) {
            if ((0U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                if ((0x40U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                    if ((0x44U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                        if ((0x48U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                            if ((0x50U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__busCtrl_doWrite) {
                                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerBBridge_clearsEnable 
                                        = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data 
                                                 >> 0x10U));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerBBridge_clearsEnable = 0U;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                      >> 4U)))) {
            if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                          >> 3U)))) {
                if ((4U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) {
                    if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                                  >> 1U)))) {
                        if ((1U & (~ vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__busCtrl_doWrite) {
                                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_interruptCtrl_writeIntEnable 
                                    = (1U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data);
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_interruptCtrl_writeIntEnable = 0U;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                      >> 4U)))) {
            if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                          >> 3U)))) {
                if ((4U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) {
                    if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                                  >> 1U)))) {
                        if ((1U & (~ vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__busCtrl_doWrite) {
                                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_interruptCtrl_readIntEnable 
                                    = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data 
                                             >> 1U));
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_interruptCtrl_readIntEnable = 0U;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (((((((((0U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) 
                   | (0x40U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
                  | (0x44U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
                 | (0x48U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
                | (0x50U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
               | (0x54U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
              | (0x58U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
             | (0x10U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)))) {
            if ((0U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                if ((0x40U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                    if ((0x44U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                        if ((0x48U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                            if ((0x50U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__busCtrl_doWrite) {
                                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerBBridge_ticksEnable 
                                        = (3U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerBBridge_ticksEnable = 0U;
    }
    if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                  >> 4U)))) {
        if ((8U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) {
            if ((4U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) {
                if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                              >> 1U)))) {
                    if ((1U & (~ vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__busCtrl_doWrite) {
                            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_frame_dataLength 
                                = (7U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data);
                        }
                    }
                }
            }
        }
    }
    if ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_mask) 
          & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_4_)) 
         & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_write))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvval__ram__DOT__ram_symbol0__v0 
            = (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_data);
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvset__ram__DOT__ram_symbol0__v0 = 1U;
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvdim0__ram__DOT__ram_symbol0__v0 
            = (0x7ffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address 
                         >> 2U));
    }
    if (((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_mask) 
           >> 1U) & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_4_)) 
         & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_write))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvval__ram__DOT__ram_symbol1__v0 
            = (0xffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_data 
                        >> 8U));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvset__ram__DOT__ram_symbol1__v0 = 1U;
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvdim0__ram__DOT__ram_symbol1__v0 
            = (0x7ffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address 
                         >> 2U));
    }
    if (((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_mask) 
           >> 2U) & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_4_)) 
         & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_write))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvval__ram__DOT__ram_symbol2__v0 
            = (0xffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_data 
                        >> 0x10U));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvset__ram__DOT__ram_symbol2__v0 = 1U;
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvdim0__ram__DOT__ram_symbol2__v0 
            = (0x7ffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address 
                         >> 2U));
    }
    if (((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_mask) 
           >> 3U) & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_4_)) 
         & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_write))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvval__ram__DOT__ram_symbol3__v0 
            = (0xffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_data 
                        >> 0x18U));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvset__ram__DOT__ram_symbol3__v0 = 1U;
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvdim0__ram__DOT__ram_symbol3__v0 
            = (0x7ffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address 
                         >> 2U));
    }
}

VL_INLINE_OPT void VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__43(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__43\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdlyvset__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram__v0 = 0U;
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_valid = 0U;
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MIE) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_109_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_110_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_111_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_valid = 1U;
            }
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.CsrPlugin_interruptJump) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_valid = 0U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_valid = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MUL_HH 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MUL_HH;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_171_) {
        if ((3U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_targetPrivilege))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mcause_interrupt 
                = (1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_hadException)));
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_ALU_CTRL 
            = (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                     >> 0x13U));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_ALU_BITWISE_CTRL 
            = (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                     >> 0x18U));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_CTRL 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SHIFT_CTRL;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_IS_MUL 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_IS_MUL;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MUL_LOW 
        = (0xfffffffffffffULL & (((((QData)((IData)(
                                                    (0x7ffffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             ((QData)((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MUL_LL)) 
                                                                              >> 0x20U)))))))) 
                                    << 0x21U) | (QData)((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MUL_LL))) 
                                  + (((QData)((IData)(
                                                      (3U 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (1ULL 
                                                                                & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MUL_LH 
                                                                                >> 0x21U))))))))) 
                                      << 0x32U) | (0x3ffffffffffffULL 
                                                   & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MUL_LH 
                                                      << 0x10U)))) 
                                 + (((QData)((IData)(
                                                     (3U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (1ULL 
                                                                               & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MUL_HL 
                                                                                >> 0x21U))))))))) 
                                     << 0x32U) | (0x3ffffffffffffULL 
                                                  & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MUL_HL 
                                                     << 0x10U)))));
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_IS_CSR 
            = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                     >> 6U));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_ENABLE 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MEMORY_ENABLE;
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_BRANCH_DO 
            = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
               != ((0U != (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BRANCH_CTRL)) 
                   & ((2U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BRANCH_CTRL)) 
                      | ((3U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BRANCH_CTRL)) 
                         | ((0U == (7U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                          >> 0xcU)))
                             ? (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_BranchPlugin_eq)
                             : ((1U == (7U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                              >> 0xcU)))
                                 ? (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_BranchPlugin_eq))
                                 : ((5U == (5U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                  >> 0xcU)))
                                     ? (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_SrcPlugin_less))
                                     : (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_SrcPlugin_less))))))));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_136_ 
        = ((IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) 
           & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
              & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid)));
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_171_) {
            if ((3U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_targetPrivilege))) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MPP = 3U;
            }
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_172_) {
            if ((3U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MPP = 0U;
            }
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_768) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeEnable) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MPP 
                    = (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeData 
                             >> 0xbU));
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MPP = 3U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_StreamFifo_2_ 
        = ((IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) 
           & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext) 
              == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value)));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F1_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdlyvval__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram__v0 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdlyvset__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram__v0 = 1U;
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdlyvdim0__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram__v0 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_value;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__pipelinedMemoryBusStage_rsp_regNext_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__pipelinedMemoryBusStage_rsp_valid));
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_rspNoHit = 0U;
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_noHit) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_rspNoHit = 1U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_rspNoHit = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MUL_HL 
            = (0x3ffffffffULL & VL_MULS_QQQ(34,34,34, 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_MulPlugin_aHigh)), 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, 
                                                             (0xffffU 
                                                              & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS2)))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MUL_LL 
            = ((0xffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS1) 
               * (0xffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS2));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_IS_MUL 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_IS_MUL;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_REGFILE_WRITE_VALID;
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid = 0U;
        if ((1U & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)) 
                   & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_removeIt))))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_IS_MUL 
            = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                     >> 7U));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_REGFILE_WRITE_VALID 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_REGFILE_WRITE_VALID;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_REGFILE_WRITE_VALID 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_REGFILE_WRITE_VALID;
    }
}

VL_INLINE_OPT void VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__44(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__44\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_IS_RVC 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_94_;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_2_output_ready) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_62_ 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_fetchPc_pcReg;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_PC 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_PC;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F3_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram
        [vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_valueNext];
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter 
            = (7U & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter) 
                     - (IData)(1U)));
    }
    if ((1U & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state)))) {
                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_5_) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter = 2U;
                }
            }
        }
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing) 
             != (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy = 0U;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willOverflow) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value)));
    }
    if ((1U & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
            if ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willOverflow) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
                }
            } else if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willOverflow) {
                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT___zz_UartCtrlTx_2_) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
                }
            }
        } else if ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willOverflow) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = 0U;
            }
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__apb3Router_1___DOT__selIndex 
        = (3U & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL) 
                 >> 1U));
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext;
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_value 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_valueNext;
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F2_ 
            = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_valueNext) 
                == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_value)) 
               & 1U);
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value = 0U;
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_value = 0U;
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F2_ = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStagePc 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_PC;
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_booted) 
             & (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_1_input_ready) 
                 | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_correction)) 
                | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_pcRegPropagate)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_fetchPc_pcReg 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_pc;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_fetchPc_pcReg = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BRANCH_CTRL 
            = (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                     >> 0xfU));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_PC 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_PC;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MEMORY_ENABLE 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_MEMORY_ENABLE;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick 
        = ((IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) 
           & (0U == vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value)));
    }
    if ((1U & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
            if ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
                }
            } else if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter 
                    = (((~ ((IData)(1U) << (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))) 
                        & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter)) 
                       | (0xffU & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) 
                                   << (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value))));
                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_6_) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
                }
            }
        } else if ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = 0U;
            }
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_value 
        = ((IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext)
            ? (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_valueNext)
            : 0U);
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_PC 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_decodePc_pcReg;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_MEMORY_ENABLE 
            = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                     >> 8U));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_768 
            = (0x300U == (0xfffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                    >> 0x14U)));
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if ((1U & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)) 
                   | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_removeIt)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid = 0U;
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)) 
                   & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_removeIt))))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isValid;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
        = ((IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext)
            ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_INSTRUCTION
            : 0U);
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_90_) 
              & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_isStuckByOthers))) 
             & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_removeIt)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_decodePc_pcReg 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decodePc_pcPlus;
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_174_) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_decodePc_pcReg 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_165_;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_decodePc_pcReg = 0U;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if ((1U & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)) 
                   | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_removeIt)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isValid = 0U;
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_isStuckByOthers)) 
                   & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_removeIt))))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isValid 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_90_;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isValid = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_INSTRUCTION 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION;
    }
}

VL_INLINE_OPT void VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__45(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__45\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_138_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_46_;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA 
        = ((IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext)
            ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_22_
            : 0U);
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_42_;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_active) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_pcValids_2 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_pcValids_1;
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_active)) 
                   | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_removeIt)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_pcValids_2 = 0U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_pcValids_2 = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_ENV_CTRL 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_ENV_CTRL;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xfffffff8U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((4U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                     >> 0x1bU)) | ((2U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                          >> 0x1dU)) 
                                   | (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                            >> 0x1fU)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xffffffc7U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x20U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                        >> 0x15U)) | ((0x10U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                >> 0x17U)) 
                                      | (8U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                               >> 0x19U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xfffffe3fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x100U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                         >> 0xfU)) | ((0x80U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                  >> 0x13U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xfffff1ffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x800U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                         >> 9U)) | ((0x400U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 >> 0xdU)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xffff8fffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x4000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                          >> 3U)) | ((0x2000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   >> 7U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xfffc7fffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x20000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                           << 3U)) | ((0x10000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                          >> 1U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xffe3ffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x100000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                            << 9U)) | ((0x80000U & 
                                        (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                         << 5U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xff1fffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x800000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                               << 0xbU)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xf8ffffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x4000000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 << 0x11U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xc7ffffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x20000000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                  << 0x17U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0x3fffffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x80000000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                              << 0x1fU)) | (0x40000000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                               << 0x1dU))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_hadException = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MUL_HH 
            = (0x3ffffffffULL & VL_MULS_QQQ(34,34,34, 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_MulPlugin_aHigh)), 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_MulPlugin_bHigh))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MUL_LH 
            = (0x3ffffffffULL & VL_MULS_QQQ(34,34,34, 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, 
                                                             (0xffffU 
                                                              & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS1))), 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_MulPlugin_bHigh))));
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_active) {
            if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_pcValids_1 
                    = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_pcValids_0;
            }
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_active)) 
                   | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_removeIt)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = 0U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_MEMORY_STORE 
            = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                     >> 0x15U));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SHIFT_CTRL 
            = (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                     >> 2U));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_ENV_CTRL 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_ENV_CTRL;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT___zz_PipelinedMemoryBusToApbBridge_1_ 
        = (1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__state)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_done 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_pcValids_2;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_hadException) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_active) {
            if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 1U;
            }
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_active)) 
                   | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_removeIt)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 0U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_ENV_CTRL 
            = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                     >> 0xbU));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.CsrPlugin_interruptJump 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_valid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_done));
}

VL_INLINE_OPT void VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__46(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__46\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__interruptCtrl_1___05Fio_pendings 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__interruptCtrl_1___DOT__pendings) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__interruptCtrl_1___05Fio_masks_driver));
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_valid)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_valid)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_data;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_178_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_data 
            = ((0U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                             >> 0xcU))) ? ((0xff000000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS2 
                                               << 0x18U)) 
                                           | ((0xff0000U 
                                               & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS2 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS2 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS2))))
                : ((1U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                 >> 0xcU))) ? ((0xffff0000U 
                                                & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS2 
                                                   << 0x10U)) 
                                               | (0xffffU 
                                                  & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS2))
                    : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS2));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_180_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_isStuckByOthers)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_output_payload_rsp_inst;
    }
}

VL_INLINE_OPT void VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__47(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__47\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    VlWide<3>/*95:0*/ __Vtemp16;
    VlWide<3>/*95:0*/ __Vtemp17;
    VlWide<3>/*95:0*/ __Vtemp18;
    VlWide<3>/*95:0*/ __Vtemp19;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_124_ 
        = (1U & (~ (IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext)));
    if (vlSymsp->TOP__ExampleTop.__PVT___zz_ExampleTop_2_) {
        vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_cntr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_cntr)));
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_7_) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__inhibitFull 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__limitHit;
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_8_) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__inhibitFull = 0U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__inhibitFull = 0U;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_9_) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__inhibitFull 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__limitHit;
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_10_) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__inhibitFull = 0U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__inhibitFull = 0U;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_valid) 
              & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_cmd_ready)) 
             & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_write)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT__rspTarget 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT__rspTarget = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_158_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_834) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_158_ 
            = ((0x7fffffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_158_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mcause_interrupt) 
                  << 0x1fU));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_158_ 
            = ((0xfffffff0U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_158_) 
               | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mcause_exceptionCode));
    }
    vlSymsp->TOP__ExampleTop.__PVT___zz_ExampleTop_2_ 
        = (0x1fU != (IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_cntr));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_rsp_valid 
        = ((0U != (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__pipelinedMemoryBusStage_rsp_regNext_valid) 
                    << 1U) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_1_))) 
           | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_rspPending) 
              & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_rspNoHit)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT___zz_CCMasterArbiter_2_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT__rspPending) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_rsp_valid)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_7_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_rspPending) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_rsp_valid)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_iBus_rsp_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_rsp_valid) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT__rspTarget)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_157_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_832) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_157_ 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mscratch;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_155_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_836) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_155_ 
            = ((0xfffff7ffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_155_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mip_MEIP) 
                  << 0xbU));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_155_ 
            = ((0xffffff7fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_155_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mip_MTIP) 
                  << 7U));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_155_ 
            = ((0xfffffff7U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_155_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mip_MSIP) 
                  << 3U));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_156_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_772) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_156_ 
            = ((0xfffff7ffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_156_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MEIE) 
                  << 0xbU));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_156_ 
            = ((0xffffff7fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_156_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MTIE) 
                  << 7U));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_156_ 
            = ((0xfffffff7U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_156_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MSIE) 
                  << 3U));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_SrcPlugin_addSub 
        = ((vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
            + ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                ? (~ vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2)
                : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2)) 
           + ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC_USE_SUB_LESS)
               ? 1U : 0U));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2_FORCE_ZERO) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_SrcPlugin_addSub 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MIE) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_109_) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_110_) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_111_) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__risingOccupancy) 
           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_iBus_rsp_valid));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_236_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_valid) 
           & (0U != (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_SrcPlugin_less 
        = (1U & (((1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2 
                                              >> 0x1fU)))
                  ? (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_SrcPlugin_addSub 
                     >> 0x1fU) : ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC_LESS_UNSIGNED)
                                   ? (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2 
                                      >> 0x1fU) : (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                   >> 0x1fU))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MIE 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__Vdly__CsrPlugin_mstatus_MIE;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_valid) 
           & (0U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_46_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid) 
         & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_ENABLE))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_46_ 
            = ((0U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                             >> 0xcU))) ? ((0xffffff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted 
                                                               >> 7U) 
                                                              & (~ 
                                                                 (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                                                                  >> 0xeU)))))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted))
                : ((1U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                                 >> 0xcU))) ? ((0xffff0000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted 
                                                                   >> 0xfU) 
                                                                  & (~ 
                                                                     (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                                                                      >> 0xeU)))))) 
                                                   << 0x10U)) 
                                               | (0xffffU 
                                                  & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted))
                    : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted));
    }
    if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid) 
         & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_IS_MUL))) {
        __Vtemp16[0U] = (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MUL_LOW);
        __Vtemp16[1U] = ((0xfff00000U & ((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MUL_LOW 
                                                                >> 0x33U))))) 
                                         << 0x14U)) 
                         | (IData)((vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MUL_LOW 
                                    >> 0x20U)));
        __Vtemp16[2U] = (3U & ((- (IData)((1U & (IData)(
                                                        (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MUL_LOW 
                                                         >> 0x33U))))) 
                               >> 0xcU));
        VL_EXTEND_WQ(66,34, __Vtemp17, vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MUL_HH);
        VL_SHIFTL_WWI(66,66,32, __Vtemp18, __Vtemp17, 0x20U);
        VL_ADD_W(3, __Vtemp19, __Vtemp16, __Vtemp18);
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_46_ 
            = ((0U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                             >> 0xcU))) ? (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MUL_LOW)
                : __Vtemp19[1U]);
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_154_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_768) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_154_ 
            = ((0xffffe7ffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_154_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MPP) 
                  << 0xbU));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_154_ 
            = ((0xffffff7fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_154_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MPIE) 
                  << 7U));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_154_ 
            = ((0xfffffff7U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_154_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MIE) 
                  << 3U));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_join_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_61_) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself = 0U;
    if (((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MEMORY_ENABLE)) 
          & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MEMORY_STORE))) 
         & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_rsp_valid) 
               & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT__rspTarget))))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself = 1U;
    }
}

VL_INLINE_OPT void VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__48(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__48\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_StreamFifo_3_ 
        = ((0xfeU >= (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext))
            ? vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram
           [vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext]
            : 0U);
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdlyvset__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdlyvdim0__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0] 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdlyvval__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvset__ram__DOT__ram_symbol3__v0) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT__ram_symbol3[vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvdim0__ram__DOT__ram_symbol3__v0] 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvval__ram__DOT__ram_symbol3__v0;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvset__ram__DOT__ram_symbol2__v0) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT__ram_symbol2[vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvdim0__ram__DOT__ram_symbol2__v0] 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvval__ram__DOT__ram_symbol2__v0;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvset__ram__DOT__ram_symbol1__v0) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT__ram_symbol1[vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvdim0__ram__DOT__ram_symbol1__v0] 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvval__ram__DOT__ram_symbol1__v0;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvset__ram__DOT__ram_symbol0__v0) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT__ram_symbol0[vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvdim0__ram__DOT__ram_symbol0__v0] 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vdlyvval__ram__DOT__ram_symbol0__v0;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_externalFlush) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_59_ = 0U;
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_1_input_ready) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_59_ 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_output_valid;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_59_ = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = 1U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd 
                = (1U & ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))
                          ? (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity)
                          : ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_StreamFifo_3_) 
                             >> (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value))));
        } else if ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = 0U;
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT___zz_UartCtrlTx_2_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value) 
           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_frame_dataLength));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_mask 
        = (0xfU & (((0U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_size))
                     ? 1U : ((1U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_size))
                              ? 3U : 0xfU)) << (3U 
                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_address)));
    vlTOPp->uart_txd = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT___zz_UartCtrlTx_1_;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_booted 
        = vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_172_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_ENV_CTRL));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_22_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid) {
        if ((1U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_CTRL))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_22_ 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_;
        } else if (((2U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_CTRL)) 
                    | (3U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_CTRL)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_22_ 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT;
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__BranchPlugin_jumpInterface_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_BRANCH_DO));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_171_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_hadException) 
           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.CsrPlugin_interruptJump));
    vlTOPp->led_blue = (1U & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__io_gpio_write_driver) 
                              >> 2U));
    vlTOPp->led_green = (1U & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__io_gpio_write_driver) 
                               >> 1U));
    vlTOPp->led_red = (1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__io_gpio_write_driver));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetcherHalt = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_171_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetcherHalt = 1U;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_172_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetcherHalt = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_valid = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_171_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_172_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__BranchPlugin_jumpInterface_valid) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_flushNext = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_171_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_172_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_flushNext = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_output_valid 
        = ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetcherHalt)) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_booted));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isFlushed 
        = (0U != (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_flushNext) 
                   << 1U) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_flushNext)));
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_removeIt) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_90_ = 0U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_isStuckByOthers)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_90_ 
                = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_output_valid) 
                   & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_externalFlush)));
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_90_ = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl_io_apb_PRDATA = 0U;
    if ((0U == (0xfU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl_io_apb_PRDATA 
            = ((0xfffffff8U & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl_io_apb_PRDATA) 
               | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__io_gpio_read_buffercc__DOT__buffers_1));
    } else if ((4U == (0xfU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl_io_apb_PRDATA 
            = ((0xfffffff8U & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl_io_apb_PRDATA) 
               | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__io_gpio_write_driver));
    } else if ((8U == (0xfU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl_io_apb_PRDATA 
            = ((0xfffffff8U & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl_io_apb_PRDATA) 
               | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__io_gpio_writeEnable_driver));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_active 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_valid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_90_));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_141_ 
        = ((0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_INSTRUCTION 
                     >> 7U)) == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                          >> 0xfU)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_142_ 
        = ((0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_INSTRUCTION 
                     >> 7U)) == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                          >> 0x14U)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_143_ 
        = ((0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                     >> 7U)) == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                          >> 0xfU)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_144_ 
        = ((0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                     >> 7U)) == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                          >> 0x14U)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
        = (((0x1000U == (0x1000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
            << 0x19U) | (((0x2000U == (0x3000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                          << 0x18U) | (((0U != (((0x48U 
                                                  == 
                                                  (0x48U 
                                                   & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                 << 5U) 
                                                | (((0x1010U 
                                                     == 
                                                     (0x1010U 
                                                      & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                    << 4U) 
                                                   | (((0x2010U 
                                                        == 
                                                        (0x2010U 
                                                         & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                       << 3U) 
                                                      | (((0x10U 
                                                           == 
                                                           (0x50U 
                                                            & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                          << 2U) 
                                                         | (((4U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                             << 1U) 
                                                            | (0U 
                                                               == 
                                                               (0x28U 
                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))))))) 
                                        << 0x17U) | 
                                       (((0U != (((4U 
                                                   == 
                                                   (4U 
                                                    & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                  << 4U) 
                                                 | (((0x2010U 
                                                      == 
                                                      (0x2030U 
                                                       & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                     << 3U) 
                                                    | (((0x10U 
                                                         == 
                                                         (0x1030U 
                                                          & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                        << 2U) 
                                                       | (((0x2020U 
                                                            == 
                                                            (0x2002060U 
                                                             & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                           << 1U) 
                                                          | (0x20U 
                                                             == 
                                                             (0x2003020U 
                                                              & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_))))))) 
                                         << 0x16U) 
                                        | (((0x20U 
                                             == (0x20U 
                                                 & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                            << 0x15U) 
                                           | (((0x4000U 
                                                == 
                                                (0x4004U 
                                                 & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                               << 0x14U) 
                                              | (((0x2000U 
                                                   == 
                                                   (0x6004U 
                                                    & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                  << 0x13U) 
                                                 | (((0U 
                                                      != 
                                                      (((0x40U 
                                                         == 
                                                         (0x40U 
                                                          & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                        << 3U) 
                                                       | (((4U 
                                                            == 
                                                            (4U 
                                                             & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                           << 2U) 
                                                          | (((0x10U 
                                                               == 
                                                               (0x30U 
                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                              << 1U) 
                                                             | (0x20U 
                                                                == 
                                                                (0x2000020U 
                                                                 & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))))) 
                                                     << 0x12U) 
                                                    | (((0U 
                                                         != 
                                                         (((0x40U 
                                                            == 
                                                            (0x50U 
                                                             & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                           << 1U) 
                                                          | (0x40U 
                                                             == 
                                                             (0x3040U 
                                                              & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                        << 0x11U) 
                                                       | (((0U 
                                                            != 
                                                            (((0x48U 
                                                               == 
                                                               (0x48U 
                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                              << 1U) 
                                                             | (4U 
                                                                == 
                                                                (0x1cU 
                                                                 & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                           << 0x10U) 
                                                          | (((0x40U 
                                                               == 
                                                               (0x58U 
                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                              << 0xfU) 
                                                             | (((0U 
                                                                  != 
                                                                  (((0x2000U 
                                                                     == 
                                                                     (0x2010U 
                                                                      & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                    << 1U) 
                                                                   | (0x1000U 
                                                                      == 
                                                                      (0x5000U 
                                                                       & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                                 << 0xeU) 
                                                                | (((0U 
                                                                     != 
                                                                     (((4U 
                                                                        == 
                                                                        (4U 
                                                                         & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                       << 1U) 
                                                                      | (0x20U 
                                                                         == 
                                                                         (0x70U 
                                                                          & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                                    << 0xdU) 
                                                                   | (((0U 
                                                                        != 
                                                                        (((4U 
                                                                           == 
                                                                           (4U 
                                                                            & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                          << 1U) 
                                                                         | (0U 
                                                                            == 
                                                                            (0x20U 
                                                                             & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                                       << 0xcU) 
                                                                      | (((0x50U 
                                                                           == 
                                                                           (0x3050U 
                                                                            & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                          << 0xbU) 
                                                                         | (((0U 
                                                                              != 
                                                                              (((0x40U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 2U) 
                                                                               | (((0x2010U 
                                                                                == 
                                                                                (0x2014U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 1U) 
                                                                                | (0x40000030U 
                                                                                == 
                                                                                (0x40000034U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_))))) 
                                                                             << 0xaU) 
                                                                            | (((0U 
                                                                                != 
                                                                                (((0U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 2U) 
                                                                                | (((0x2000U 
                                                                                == 
                                                                                (0x6004U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 1U) 
                                                                                | (0x1000U 
                                                                                == 
                                                                                (0x5004U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))))) 
                                                                                << 9U) 
                                                                               | (((0U 
                                                                                == 
                                                                                (0x58U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 8U) 
                                                                                | (((0x2000030U 
                                                                                == 
                                                                                (0x2000074U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 7U) 
                                                                                | (((0U 
                                                                                != 
                                                                                (((0x1050U 
                                                                                == 
                                                                                (0x1050U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 1U) 
                                                                                | (0x2050U 
                                                                                == 
                                                                                (0x2050U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                                                << 6U) 
                                                                                | (((0U 
                                                                                != 
                                                                                (((4U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 1U) 
                                                                                | (0x4050U 
                                                                                == 
                                                                                (0x4050U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                                                << 5U) 
                                                                                | (((0U 
                                                                                != 
                                                                                (((4U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 1U) 
                                                                                | (0x4050U 
                                                                                == 
                                                                                (0x4050U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                                                << 4U) 
                                                                                | (((0x5010U 
                                                                                == 
                                                                                (0x7054U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                != 
                                                                                (((0x40001010U 
                                                                                == 
                                                                                (0x40003054U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 2U) 
                                                                                | (((0x1010U 
                                                                                == 
                                                                                (0x7034U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 1U) 
                                                                                | (0x1010U 
                                                                                == 
                                                                                (0x2007054U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_))))) 
                                                                                << 2U) 
                                                                                | (((0U 
                                                                                != 
                                                                                (((0x20U 
                                                                                == 
                                                                                (0x34U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 1U) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x64U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                                                << 1U) 
                                                                                | (0x24U 
                                                                                == 
                                                                                (0x64U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))))))))))))))))))))))))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_134_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_178_) {
        if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_141_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_134_ = 1U;
            }
        }
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_180_) {
        if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_143_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_134_ = 1U;
            }
        }
    }
    if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                  >> 9U)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_134_ = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_135_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_178_) {
        if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_142_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_135_ = 1U;
            }
        }
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_180_) {
        if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_144_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_135_ = 1U;
            }
        }
    }
    if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                  >> 1U)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_135_ = 0U;
    }
}

VL_INLINE_OPT void VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__49(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__49\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_163_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.RegFilePlugin_regFile
        [(0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_INSTRUCTION_ANTICIPATED 
                   >> 0xfU))];
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_164_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.RegFilePlugin_regFile
        [(0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_INSTRUCTION_ANTICIPATED 
                   >> 0x14U))];
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdlyvset__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram__v0) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdlyvdim0__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram__v0] 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdlyvval__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram__v0;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_throw2Bytes 
        = (1U & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_throw2BytesReg) 
                 | (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_62_ 
                    >> 1U)));
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_isStuckByOthers)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_94_ 
            = (3U != (3U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decodePrediction_cmd_hadBranch;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_readBreak_regNext 
        = (0x68U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value 
        = ((IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext)
            ? (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_valueNext)
            : 0U);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_6_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_rspSourceId)
            ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__pipelinedMemoryBusStage_rsp_regNext_payload_data
            : (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_9_) 
                << 0x18U) | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_8_) 
                              << 0x10U) | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_7_) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__ram__DOT___zz_CCPipelinedMemoryBusRam_6_)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__risingOccupancy)
            ? (IData)((vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT___zz_StreamFifoLowLatency_3_ 
                       >> 1U)) : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_6_);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageIsValid 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageIsFiring 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_166_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS1 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS1;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrDif 
        = (0xffU & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
                    - (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ptrMatch 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_value) 
           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_value));
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if ((0U == vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
        }
        if ((0U == vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
        }
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value 
            = (((((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_9_) 
                    | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_10_)) 
                   | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_11_) 
                      & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
                  | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1) 
                      & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
                     & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
                 | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
                     & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
                    & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
                | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1) 
                    & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
                   & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4))) 
               | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2) 
                   & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)) 
                  & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4)));
        if ((0U == vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 = 1U;
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 = 1U;
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 = 1U;
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_full 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ptrMatch) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_risingOccupancy));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_blockedBySideEffects 
        = (0U != (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid) 
                   << 1U) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushing 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_full)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid 
        = (1U & ((~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_StreamFifo_2_) 
                       & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full))))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy_io_pop_valid 
        = (1U & ((~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F2_) 
                       & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_full))))));
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if ((0U == vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F1_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushing) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F1_ = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushing) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_interruptCtrl_writeInt 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_interruptCtrl_writeIntEnable) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_read_streamBreaked_valid 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy_io_pop_valid;
    if ((0x68U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_read_streamBreaked_valid = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) 
           & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT___zz_PipelinedMemoryBusToApbBridge_2_)
               ? (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_5_)
               : (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__pipelinedMemoryBusStage_cmd_ready))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decodePc_pcPlus 
        = (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_decodePc_pcReg 
           + ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_94_)
               ? 2U : 4U));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_170_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_IS_CSR));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_value) 
                    + (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_interruptCtrl_readInt 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_interruptCtrl_readIntEnable) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_read_streamBreaked_valid));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1 
        = ((IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_haltItself = 0U;
    if ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isValid) 
          & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_MEMORY_ENABLE)) 
         & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_ready)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_haltItself = 1U;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_170_) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_blockedBySideEffects) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_haltItself = 1U;
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_11_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_10_ 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
            & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_9_ 
        = ((((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
               & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
              & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
             | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
                 & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1)) 
                & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3))) 
            | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
                & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
               & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3))) 
           | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1) 
               & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2)) 
              & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL 
        = ((6U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL)) 
           | ((0U == (0xff000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) 
              & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_valid)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL 
        = ((5U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL)) 
           | (((0x10000U == (0xff000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) 
               & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_valid)) 
              << 1U));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL 
        = ((3U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL)) 
           | (((0x20000U == (0xff000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) 
               & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_valid)) 
              << 2U));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__busCtrl_doWrite 
        = ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL) 
             >> 2U) & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__state)) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_write));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__busCtrl_doWrite 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL) 
            & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__state)) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_write));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx1 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__busCtrl_doWrite) 
            << 5U) | (0x1fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_1_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_
        [vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx1];
}

VL_INLINE_OPT void VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__50(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__50\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferValid)
            ? ((0xffff0000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                               << 0x10U)) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferData))
            : ((0xffff0000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst) 
               | (0xffffU & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_throw2Bytes)
                              ? (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                                 >> 0x10U) : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_unaligned 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_throw2Bytes) 
           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferValid));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_ 
        = ((0x18U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                     << 3U)) | (7U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                      >> 0xdU)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_66_ 
        = ((0x40U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                     << 1U)) | ((0x38U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                          >> 7U)) | 
                                (4U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                       >> 4U))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_68_ 
        = ((0xfe0U & ((- (IData)((1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                        >> 0xcU)))) 
                      << 5U)) | (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                          >> 2U)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_ 
        = ((0x1ff800U & ((- (IData)((1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                           >> 0xcU)))) 
                         << 0xbU)) | ((0x400U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 << 2U)) 
                                      | ((0x300U & 
                                          (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                           >> 1U)) 
                                         | ((0x80U 
                                             & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                << 1U)) 
                                            | ((0x40U 
                                                & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                   >> 1U)) 
                                               | ((0x20U 
                                                   & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                      << 3U)) 
                                                  | ((0x10U 
                                                      & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                         >> 7U)) 
                                                     | (0xeU 
                                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                           >> 2U)))))))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_readData 
        = (((vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_154_ 
             | vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_155_) 
            | (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_156_ 
               | vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_157_)) 
           | ((vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_158_ 
               | vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_159_) 
              | vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_160_));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_42_ 
        = ((2U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_ALU_CTRL))
            ? ((2U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                ? (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                   & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2)
                : ((1U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                    ? (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                       | vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2)
                    : (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                       ^ vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2)))
            : ((1U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_ALU_CTRL))
                ? (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_SrcPlugin_less)
                : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_SrcPlugin_addSub));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_170_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_42_ 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_readData;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS2 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS2;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) 
           & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_8_)
               ? (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__dBus_cmd_valid)
               : (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_dBus_cmd_ready))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_haltItself) 
           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself));
}

VL_INLINE_OPT void VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__51(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__51\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_ 
        = ((0x1f00U & ((- (IData)((1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                         >> 0xcU)))) 
                       << 8U)) | ((0xc0U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                            << 1U)) 
                                  | ((0x20U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                               << 3U)) 
                                     | ((0x18U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                  >> 7U)) 
                                        | (6U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 >> 2U))))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed = 0U;
    if ((0x10U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))) {
                if ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_)))) {
                        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed 
                            = (0x12023U | (((0xc000000U 
                                             & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                << 0x13U)) 
                                            | (0x2000000U 
                                               & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                  << 0xdU))) 
                                           | ((0x1f00000U 
                                               & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                  << 0x12U)) 
                                              | (0xe00U 
                                                 & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw))));
                    }
                } else if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_)))) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed 
                        = ((0x400U == (0x7ffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 >> 2U)))
                            ? 0x100073U : ((0U == (0x1fU 
                                                   & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                      >> 2U)))
                                            ? (0x67U 
                                               | ((0xf8000U 
                                                   & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                      << 8U)) 
                                                  | (((0x1000U 
                                                       & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw)
                                                       ? 1U
                                                       : 0U) 
                                                     << 7U)))
                                            : (0x33U 
                                               | ((0x1f00000U 
                                                   & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                      << 0x12U)) 
                                                  | ((((0x1000U 
                                                        & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw)
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                           >> 7U))
                                                        : 0U) 
                                                      << 0xfU) 
                                                     | (0xf80U 
                                                        & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw))))));
                }
            } else if ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_)))) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed 
                        = (0x12003U | ((0xc000000U 
                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                           << 0x18U)) 
                                       | ((0x2000000U 
                                           & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                              << 0xdU)) 
                                          | ((0x1c00000U 
                                              & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 << 0x12U)) 
                                             | (0xf80U 
                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw)))));
                }
            } else if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_)))) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed 
                    = (0x1013U | ((0x1f00000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 << 0x12U)) 
                                  | ((0xf8000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                  << 8U)) 
                                     | (0xf80U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw))));
            }
        }
    } else if ((8U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed 
            = ((4U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))
                ? ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))
                    ? ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))
                        ? (0x41063U | ((0x80000000U 
                                        & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_) 
                                           << 0x13U)) 
                                       | ((0x7e000000U 
                                           & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_) 
                                              << 0x14U)) 
                                          | ((0x38000U 
                                              & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 << 8U)) 
                                             | ((0xf00U 
                                                 & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_) 
                                                    << 7U)) 
                                                | (0x80U 
                                                   & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_) 
                                                      >> 4U)))))))
                        : (0x40063U | ((0x80000000U 
                                        & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_) 
                                           << 0x13U)) 
                                       | ((0x7e000000U 
                                           & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_) 
                                              << 0x14U)) 
                                          | ((0x38000U 
                                              & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 << 8U)) 
                                             | ((0xf00U 
                                                 & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_) 
                                                    << 7U)) 
                                                | (0x80U 
                                                   & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_) 
                                                      >> 4U))))))))
                    : ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))
                        ? (0x6fU | ((0x80000000U & 
                                     (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_ 
                                      << 0xbU)) | (
                                                   (0x7fe00000U 
                                                    & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_ 
                                                       << 0x14U)) 
                                                   | ((0x100000U 
                                                       & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_ 
                                                          << 9U)) 
                                                      | (0xff000U 
                                                         & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_)))))
                        : (0x40400U | ((0xfe000000U 
                                        & (((2U == 
                                             (3U & 
                                              (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                               >> 0xaU)))
                                             ? (- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                              >> 0xcU))))
                                             : (((1U 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                      >> 0xaU))) 
                                                 | (IData)(
                                                           (0xc00U 
                                                            == 
                                                            (0xc60U 
                                                             & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw)))) 
                                                << 5U)) 
                                           << 0x19U)) 
                                       | ((0x1f00000U 
                                           & (((IData)(
                                                       (0xc00U 
                                                        != 
                                                        (0xc00U 
                                                         & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw)))
                                                ? (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                   >> 2U)
                                                : (8U 
                                                   | (7U 
                                                      & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                         >> 2U)))) 
                                              << 0x14U)) 
                                          | ((0x38000U 
                                              & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 << 8U)) 
                                             | ((((0U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                       >> 0xaU)))
                                                   ? 5U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                        >> 0xaU)))
                                                    ? 5U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                         >> 0xaU)))
                                                     ? 7U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                          >> 5U)))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                           >> 5U)))
                                                       ? 4U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                            >> 5U)))
                                                        ? 6U
                                                        : 7U)))))) 
                                                 << 0xcU) 
                                                | ((0x380U 
                                                    & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw) 
                                                   | ((3U 
                                                       != 
                                                       (3U 
                                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                           >> 0xaU)))
                                                       ? 0x13U
                                                       : 0x33U)))))))))
                : ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))
                    ? ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))
                        ? ((2U == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                            >> 7U)))
                            ? (0x13U | ((0xe0000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                           >> 0xcU)))) 
                                            << 0x1dU)) 
                                        | ((0x18000000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                               << 0x18U)) 
                                           | ((0x4000000U 
                                               & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                  << 0x15U)) 
                                              | ((0x2000000U 
                                                  & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                     << 0x17U)) 
                                                 | ((0x1000000U 
                                                     & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                        << 0x12U)) 
                                                    | ((0xf8000U 
                                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                           << 8U)) 
                                                       | (0xf80U 
                                                          & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw))))))))
                            : (0x37U | (((0xfffe0000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                            >> 0xcU)))) 
                                             << 0x11U)) 
                                         | (0x1f000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                               << 0xaU))) 
                                        | (0xf80U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw))))
                        : (0x13U | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_68_) 
                                     << 0x14U) | (0xf80U 
                                                  & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw))))
                    : ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))
                        ? (0xefU | ((0x80000000U & 
                                     (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_ 
                                      << 0xbU)) | (
                                                   (0x7fe00000U 
                                                    & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_ 
                                                       << 0x14U)) 
                                                   | ((0x100000U 
                                                       & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_ 
                                                          << 9U)) 
                                                      | (0xff000U 
                                                         & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_)))))
                        : (0x13U | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_68_) 
                                     << 0x14U) | ((0xf8000U 
                                                   & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                      << 8U)) 
                                                  | (0xf80U 
                                                     & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw)))))));
    } else if ((4U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))) {
        if ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_)))) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed 
                    = (0x842023U | ((0xfe000000U & 
                                     ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_66_) 
                                      << 0x14U)) | 
                                    ((0x700000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                   << 0x12U)) 
                                     | ((0x38000U & 
                                         (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                          << 8U)) | 
                                        (0xf80U & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_66_) 
                                                   << 7U))))));
            }
        }
    } else if ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed 
                = (0x42403U | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_66_) 
                                << 0x14U) | ((0x38000U 
                                              & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 << 8U)) 
                                             | (0x380U 
                                                & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                   << 5U)))));
        }
    } else if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed 
            = (0x10413U | ((0x3c000000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                           << 0x13U)) 
                           | ((0x3000000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                             << 0xdU)) 
                              | ((0x800000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                               << 0x12U)) 
                                 | ((0x400000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                  << 0x10U)) 
                                    | (0x380U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 << 5U)))))));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__dBus_cmd_valid 
        = ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isValid) 
             & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_MEMORY_ENABLE)) 
            & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself))) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isFlushed)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_8_ 
        = (1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_write 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_wr));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid)
            ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_payload_address
            : (0xfffffffcU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_fetchPc_pcReg));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_output_payload_rsp_inst 
        = ((3U != (3U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw))
            ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed
            : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_2_ = 0U;
    if (((((((((0U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) 
               | (0x40U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
              | (0x44U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
             | (0x48U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
            | (0x50U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
           | (0x54U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
          | (0x58U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
         | (0x10U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)))) {
        if ((0U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__busCtrl_doWrite) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_2_ = 1U;
            }
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_3_ = 0U;
    if (((((((((0U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) 
               | (0x40U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
              | (0x44U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
             | (0x48U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
            | (0x50U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
           | (0x54U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
          | (0x58U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
         | (0x10U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)))) {
        if ((0U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
            if ((0x40U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                if ((0x44U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__busCtrl_doWrite) {
                        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_3_ = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_noHit 
        = (0U == (((0x80000000U == (0xfff00000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address)) 
                   << 1U) | (0U == (0xffffe000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_cmd_ready 
        = ((0U != ((((0x80000000U == (0xfff00000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address)) 
                     & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_ready)) 
                    << 1U) | (0U == (0xffffe000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_payload_address)))) 
           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_noHit));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_7_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_cmd_ready = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_dBus_cmd_ready 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_cmd_ready;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT___zz_CCMasterArbiter_2_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_dBus_cmd_ready = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_iBus_cmd_ready 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_cmd_ready) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid)));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT___zz_CCMasterArbiter_2_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_iBus_cmd_ready = 0U;
    }
}

VL_INLINE_OPT void VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__52(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__52\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 17 
    IData/*31:0*/ __Vdlyvval__RegFilePlugin_regFile__v0;
    CData/*4:0*/ __Vdlyvdim0__RegFilePlugin_regFile__v0;
    CData/*0:0*/ __Vdlyvset__RegFilePlugin_regFile__v0;
    // Body
    __Vdlyvset__RegFilePlugin_regFile__v0 = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_34_) {
        __Vdlyvval__RegFilePlugin_regFile__v0 = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageRegFileWrite_payload_data;
        __Vdlyvset__RegFilePlugin_regFile__v0 = 1U;
        __Vdlyvdim0__RegFilePlugin_regFile__v0 = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageRegFileWrite_payload_address;
    }
    if (__Vdlyvset__RegFilePlugin_regFile__v0) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.RegFilePlugin_regFile[__Vdlyvdim0__RegFilePlugin_regFile__v0] 
            = __Vdlyvval__RegFilePlugin_regFile__v0;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__limitHit 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__counter) 
           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA_io_limit_driver));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__limitHit 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__counter) 
           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB_io_limit_driver));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__prescaler_1___05Fio_overflow 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__prescaler_1___DOT__counter) 
           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_1_));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_7_ 
        = (0U != ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerABridge_ticksEnable) 
                  & (1U | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__prescaler_1___05Fio_overflow) 
                           << 1U))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_9_ 
        = (0U != ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerBBridge_ticksEnable) 
                  & (1U | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__prescaler_1___05Fio_overflow) 
                           << 1U))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageRegFileWrite_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_124_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageRegFileWrite_valid = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA_io_full 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__limitHit) 
            & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_7_)) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__inhibitFull)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB_io_full 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__limitHit) 
            & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_9_)) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__inhibitFull)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_34_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageRegFileWrite_valid) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_34_ = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageInstruction 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageRegFileWrite_payload_address 
        = (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                    >> 7U));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageRegFileWrite_payload_data 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_46_;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_4_ = 0U;
    if (((((((((0U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) 
               | (0x40U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
              | (0x44U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
             | (0x48U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
            | (0x50U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
           | (0x54U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
          | (0x58U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
         | (0x10U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)))) {
        if ((0U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
            if ((0x40U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                if ((0x44U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                    if ((0x48U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__busCtrl_doWrite) {
                            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_4_ = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_5_ = 0U;
    if (((((((((0U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) 
               | (0x40U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
              | (0x44U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
             | (0x48U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
            | (0x50U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
           | (0x54U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
          | (0x58U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
         | (0x10U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)))) {
        if ((0U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
            if ((0x40U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                if ((0x44U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                    if ((0x48U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                        if ((0x50U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                            if ((0x54U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__busCtrl_doWrite) {
                                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_5_ = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_6_ = 0U;
    if (((((((((0U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) 
               | (0x40U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
              | (0x44U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
             | (0x48U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
            | (0x50U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
           | (0x54U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
          | (0x58U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
         | (0x10U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)))) {
        if ((0U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
            if ((0x40U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                if ((0x44U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                    if ((0x48U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                        if ((0x50U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                            if ((0x54U != (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                                if ((0x58U == (0xffU 
                                               & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                                    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__busCtrl_doWrite) {
                                        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_6_ = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__53(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__53\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xfffffff8U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((4U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                     >> 0x1bU)) | ((2U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                          >> 0x1dU)) 
                                   | (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                            >> 0x1fU)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xffffffc7U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x20U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                        >> 0x15U)) | ((0x10U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                >> 0x17U)) 
                                      | (8U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                               >> 0x19U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xfffffe3fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x100U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                         >> 0xfU)) | ((0x80U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                  >> 0x13U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xfffff1ffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x800U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                         >> 9U)) | ((0x400U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                 >> 0xdU)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xffff8fffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x4000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                          >> 3U)) | ((0x2000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                   >> 7U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xfffc7fffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x20000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                           << 3U)) | ((0x10000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                          >> 1U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xffe3ffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x100000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                            << 9U)) | ((0x80000U & 
                                        (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                         << 5U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xff1fffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x800000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                               << 0xbU)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xf8ffffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x4000000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                 << 0x11U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xc7ffffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x20000000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                  << 0x17U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0x3fffffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x80000000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                              << 0x1fU)) | (0x40000000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                               << 0x1dU))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_BranchPlugin_eq 
        = (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
           == vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_FullBarrelShifterPlugin_reversed 
        = ((1U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SHIFT_CTRL))
            ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_
            : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeEnable 
        = (((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isValid) 
              & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_IS_CSR)) 
             & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_CSR_WRITE_OPCODE)) 
            & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_blockedBySideEffects))) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_tick 
        = (0U == vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA = 0U;
    if (((((((((0U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) 
               | (0x40U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
              | (0x44U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
             | (0x48U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
            | (0x50U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
           | (0x54U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
          | (0x58U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) 
         | (0x10U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)))) {
        if ((0U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA 
                = ((0xffffff00U & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA) 
                   | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_1_));
        } else if ((0x40U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA 
                = ((0xfffffffcU & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA) 
                   | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerABridge_ticksEnable));
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA 
                = ((0xfffeffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA) 
                   | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerABridge_clearsEnable) 
                      << 0x10U));
        } else if ((0x44U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA 
                = ((0xffff0000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA) 
                   | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA_io_limit_driver));
        } else if ((0x48U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA 
                = ((0xffff0000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA) 
                   | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__counter));
        } else if ((0x50U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA 
                = ((0xfffffffcU & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA) 
                   | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerBBridge_ticksEnable));
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA 
                = ((0xfffeffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA) 
                   | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerBBridge_clearsEnable) 
                      << 0x10U));
        } else {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA 
                = ((0x54U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))
                    ? ((0xffff0000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA) 
                       | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB_io_limit_driver))
                    : ((0x58U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))
                        ? ((0xffff0000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA) 
                           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__counter))
                        : ((0xfffffffcU & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA) 
                           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__interruptCtrl_1___05Fio_pendings))));
        }
    } else if ((0x14U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA 
            = ((0xfffffffcU & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA) 
               | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__interruptCtrl_1___05Fio_masks_driver));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext 
        = (7U & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
                 + (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart_io_apb_PRDATA = 0U;
    if ((0x10U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) {
        if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                      >> 3U)))) {
            if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                          >> 2U)))) {
                if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                              >> 1U)))) {
                    if ((1U & (~ vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart_io_apb_PRDATA 
                            = ((0xfffffffcU & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart_io_apb_PRDATA) 
                               | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_readOverflowError) 
                                   << 1U) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_readError)));
                        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart_io_apb_PRDATA 
                            = ((0xfffffcffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart_io_apb_PRDATA) 
                               | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_breakDetected) 
                                   << 9U) | ((0x68U 
                                              == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter)) 
                                             << 8U)));
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                         >> 3U)))) {
        if ((4U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) {
            if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                          >> 1U)))) {
                if ((1U & (~ vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart_io_apb_PRDATA 
                        = ((0xc0007fffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart_io_apb_PRDATA) 
                           | (((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_risingOccupancy) 
                                 & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ptrMatch)) 
                                << 0x1dU) | (0x1f000000U 
                                             & (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_value)) 
                                                << 0x18U))) 
                              | ((0xff0000U & (((IData)(0xffU) 
                                                - ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy)
                                                     ? 0xffU
                                                     : 0U)
                                                    : 
                                                   (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value) 
                                                     < (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value))
                                                     ? (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrDif)
                                                     : 
                                                    ((IData)(0xffU) 
                                                     + (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrDif))))) 
                                               << 0x10U)) 
                                 | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid) 
                                    << 0xfU))));
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart_io_apb_PRDATA 
                        = ((0xfffffffcU & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart_io_apb_PRDATA) 
                           | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_interruptCtrl_readIntEnable) 
                               << 1U) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_interruptCtrl_writeIntEnable)));
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart_io_apb_PRDATA 
                        = ((0xfffffcffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart_io_apb_PRDATA) 
                           | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_interruptCtrl_readInt) 
                               << 9U) | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_interruptCtrl_writeInt) 
                                         << 8U)));
                }
            }
        } else if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                             >> 1U)))) {
            if ((1U & (~ vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart_io_apb_PRDATA 
                    = ((0xfffeffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart_io_apb_PRDATA) 
                       | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_read_streamBreaked_valid) 
                          << 0x10U));
                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart_io_apb_PRDATA 
                    = ((0xffffff00U & vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart_io_apb_PRDATA) 
                       | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F3_));
            }
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willOverflow 
        = ((7U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value)) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__apb3Router_1___DOT___zz_Apb3Router_4_ 
        = ((0U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__apb3Router_1___DOT__selIndex))
            ? vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer_io_apb_PRDATA
            : ((1U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__apb3Router_1___DOT__selIndex))
                ? vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl_io_apb_PRDATA
                : vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart_io_apb_PRDATA));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx9 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT___zz_UartCtrlTx_2_) 
            << 5U) | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willOverflow) 
                       << 4U) | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
                                  << 1U) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_doBreak))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready
        [vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx9];
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_MulPlugin_aHigh 
        = ((0x10000U & ((((1U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                        >> 0xcU))) 
                          | (2U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                          >> 0xcU)))) 
                         << 0x10U) & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS1 
                                      >> 0xfU))) | 
           (0xffffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS1 
                       >> 0x10U)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_MulPlugin_bHigh 
        = ((0x10000U & (((1U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                       >> 0xcU))) << 0x10U) 
                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS2 
                           >> 0xfU))) | (0xffffU & 
                                         (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS2 
                                          >> 0x10U)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeData 
        = ((0x2000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION)
            ? ((0x1000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION)
                ? (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_readData 
                   & (~ vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1))
                : (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_readData 
                   | vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1))
            : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1);
    if ((3U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BRANCH_CTRL))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_BranchPlugin_branch_src2 
            = ((0xfffff000U & ((- (IData)((1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0x1fU)))) 
                               << 0xcU)) | (0xfffU 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0x14U)));
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_BranchPlugin_branch_src2 
            = ((2U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BRANCH_CTRL))
                ? ((0xffe00000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0x1fU)))) 
                                   << 0x15U)) | ((0x100000U 
                                                  & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION) 
                                                    | ((0x800U 
                                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                             >> 0x14U))))))
                : ((0xffffe000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0x1fU)))) 
                                   << 0xdU)) | ((0x1000U 
                                                 & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                            >> 7U)))))));
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_BranchPlugin_branch_src2 
                = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_IS_RVC)
                    ? 2U : 4U);
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_write_ready 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready;
    if ((0x68U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_write_ready = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_write_ready));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS2 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_164_;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_136_) {
        if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_137_) 
             == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                          >> 0x14U)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS2 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_138_;
        }
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_166_) {
        if (((0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                       >> 7U)) == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                            >> 0x14U)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS2 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_46_;
        }
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_178_) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_142_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS2 
                    = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_22_;
            }
        }
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_180_) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_144_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS2 
                    = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_42_;
            }
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext 
        = (((0xfeU == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value)) 
            & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value) 
                             + (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement))));
}
