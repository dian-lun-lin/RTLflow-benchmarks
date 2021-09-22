// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleTop.h for the primary calling header

#include "VExampleTop_ExampleTop.h"
#include "VExampleTop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VExampleTop_ExampleTop::_sequent__TOP__ExampleTop__4(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VExampleTop_ExampleTop::_sequent__TOP__ExampleTop__4\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__pushing 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_iBus_rsp_valid) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__risingOccupancy)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT___zz_StreamFifoLowLatency_1_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__pushing) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT___zz_StreamFifoLowLatency_1_ = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_109_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mip_MTIP) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MTIE));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_110_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mip_MSIP) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MSIE));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_111_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mip_MEIP) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MEIE));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferFill 
        = (((((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_unaligned)) 
              & (3U != (3U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst))) 
             & (3U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                             >> 0x10U)))) | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferValid) 
                                             & (3U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                                                    >> 0x10U))))) 
           | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_throw2Bytes) 
               & (3U == (3U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw))) 
              & (3U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                              >> 0x10U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_xtvec_base = 0U;
    if ((3U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_targetPrivilege))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_xtvec_base = 8U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_payload = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_171_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_payload 
            = (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_xtvec_base 
               << 2U);
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_172_) {
        if ((3U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                          >> 0x1cU)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_payload 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mepc;
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_flushNext) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_removeIt = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isFlushed) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_removeIt = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_output_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_join_valid) 
           & (~ (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_throw2Bytes) 
                  & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferValid))) 
                 & (3U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                                 >> 0x10U))))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_removeIt = 0U;
    if ((0U != (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_flushNext) 
                 << 2U) | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_flushNext) 
                           << 1U)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_removeIt = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT___zz_PipelinedMemoryBusToApbBridge_2_ 
        = (1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_valid)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0 
        = ((IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) 
           & (IData)(vlTOPp->uart_rxd));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__ctrl_doWrite 
        = ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL) 
             >> 1U) & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__state)) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_write));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder__DOT___zz_Apb3Decoder_1_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_valid) 
           & (0U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_input_PREADY = 1U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder__DOT___zz_Apb3Decoder_1_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_input_PREADY = 1U;
    }
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
    vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext 
        = vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered_;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_REGFILE_WRITE_VALID 
        = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                 >> 0x17U));
    if ((0U == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                         >> 7U)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_predictionJumpInterface_payload 
        = (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_decodePc_pcReg 
           + ((2U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                            >> 0xfU))) ? ((0xffe00000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                             >> 0x1fU)))) 
                                              << 0x15U)) 
                                          | ((0x100000U 
                                              & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                         >> 0x14U))))))
               : ((0xffffe000U & ((- (IData)((1U & 
                                              (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                               >> 0x1fU)))) 
                                  << 0xdU)) | ((0x1000U 
                                                & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                           >> 7U))))))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decodePrediction_cmd_hadBranch 
        = ((2U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                         >> 0xfU))) | ((1U == (3U & 
                                               (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                                                >> 0xfU))) 
                                       & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                          >> 0x1fU)));
    vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered_ = 1U;
    if ((0x1fU != (IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_cntr))) {
        vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered_ = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_predictionJumpInterface_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_90_) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decodePrediction_cmd_hadBranch));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_haltByOther = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_active) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_haltByOther = 1U;
    }
    if ((0U != ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid) 
                  & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_ENV_CTRL)) 
                 << 2U) | ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid) 
                             & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_ENV_CTRL)) 
                            << 1U) | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isValid) 
                                      & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_ENV_CTRL)))))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_haltByOther = 1U;
    }
    if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_90_) 
         & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_134_) 
            | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_135_)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_haltByOther = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_jump_pcLoad_valid 
        = (0U != (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__BranchPlugin_jumpInterface_valid) 
                   << 2U) | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_valid) 
                              << 1U) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_predictionJumpInterface_valid))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_50_ 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_predictionJumpInterface_valid) 
            << 2U) | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__BranchPlugin_jumpInterface_valid) 
                       << 1U) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_valid)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_predictionJumpInterface_valid) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_flushNext = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_isStuckByOthers 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_haltByOther) 
           | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck) 
              | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_correction = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_jump_pcLoad_valid) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_correction = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_165_ 
        = ((0U == (3U & (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_50_) 
                          & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_50_) 
                                - (IData)(1U)))) >> 1U)))
            ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_payload
            : ((1U == (3U & (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_50_) 
                              & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_50_) 
                                    - (IData)(1U)))) 
                             >> 1U))) ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_BRANCH_CALC
                : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_predictionJumpInterface_payload));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_externalFlush 
        = (0U != (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_flushNext) 
                   << 3U) | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_flushNext) 
                              << 2U) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_flushNext))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_input_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_isStuckByOthers)) 
                 & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_61_)) 
                    | ((~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferValid) 
                           & (3U != (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                                           >> 0x10U))))) 
                       & (~ (((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_unaligned)) 
                              & (3U != (3U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst))) 
                             & (3U != (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                                             >> 0x10U)))))))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_2_output_ready 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_61_)
            ? ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_join_valid) 
               & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_input_ready))
            : (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_input_ready));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_cmdFork_canEmit 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_2_output_ready) 
           & (7U != (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_pending_value)));
}
