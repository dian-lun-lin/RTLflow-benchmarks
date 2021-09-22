// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VExampleTop.h for the primary calling header

#ifndef VERILATED_VEXAMPLETOP_VEXRISCV_H_
#define VERILATED_VEXAMPLETOP_VEXRISCV_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"
#include "VExampleTop__Dpi.h"

//==========

class VExampleTop__Syms;

//----------

VL_MODULE(VExampleTop_VexRiscv) {
  public:

    // PORTS
    // Begin mtask footprint all: 3 14 16 
    VL_OUT8(__PVT__dBus_cmd_valid,0,0);
    // Begin mtask footprint all: 
    VL_OUT(__PVT__iBus_cmd_payload_pc,31,0);
    VL_IN(__PVT__iBus_rsp_payload_inst,31,0);
    VL_OUT(__PVT__dBus_cmd_payload_address,31,0);
    VL_OUT(__PVT__dBus_cmd_payload_data,31,0);
    VL_IN(__PVT__dBus_rsp_data,31,0);
    VL_OUT8(__PVT__iBus_cmd_valid,0,0);
    VL_IN8(__PVT__iBus_cmd_ready,0,0);
    VL_IN8(__PVT__iBus_rsp_valid,0,0);
    VL_IN8(__PVT__iBus_rsp_payload_error,0,0);
    VL_IN8(__PVT__timerInterrupt,0,0);
    VL_IN8(__PVT__externalInterrupt,0,0);
    VL_IN8(__PVT__softwareInterrupt,0,0);
    VL_IN8(__PVT__dBus_cmd_ready,0,0);
    VL_OUT8(__PVT__dBus_cmd_payload_wr,0,0);
    VL_OUT8(__PVT__dBus_cmd_payload_size,1,0);
    VL_IN8(__PVT__dBus_rsp_ready,0,0);
    VL_IN8(__PVT__dBus_rsp_error,0,0);
    VL_IN8(__PVT__clk_cpu_reset_,0,0);
    VL_IN8(__PVT__clk_cpu,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 3 4 5 7 12 13 15 18 19 20 
        IData/*31:0*/ __PVT___zz_VexRiscv_93_;
        // Begin mtask footprint all: 3 7 11 12 13 19 20 
        CData/*0:0*/ __PVT__decode_arbitration_isStuckByOthers;
        // Begin mtask footprint all: 3 6 7 19 20 
        CData/*0:0*/ __PVT__IBusSimplePlugin_externalFlush;
        // Begin mtask footprint all: 3 6 20 
        CData/*0:0*/ __PVT___zz_VexRiscv_182_;
        // Begin mtask footprint all: 6 20 
        CData/*0:0*/ __PVT__IBusSimplePlugin_iBusRsp_stages_1_halt;
        CData/*2:0*/ __PVT__IBusSimplePlugin_pending_next;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__popping;
        // Begin mtask footprint all: 2 6 20 
        CData/*2:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter;
        // Begin mtask footprint all: 2 6 
        CData/*0:0*/ __PVT___zz_VexRiscv_236_;
        // Begin mtask footprint all: 2 4 
        IData/*31:0*/ __PVT__writeBack_DBusSimplePlugin_rspShifted;
        CData/*1:0*/ __PVT__execute_to_memory_MEMORY_ADDRESS_LOW;
        CData/*0:0*/ __PVT__decode_to_execute_SRC_USE_SUB_LESS;
        CData/*0:0*/ __PVT__decode_to_execute_SRC2_FORCE_ZERO;
        CData/*0:0*/ __PVT__decode_to_execute_SRC_LESS_UNSIGNED;
        CData/*0:0*/ __PVT__execute_CsrPlugin_csr_772;
        // Begin mtask footprint all: 2 4 5 14 
        IData/*31:0*/ __PVT__execute_SrcPlugin_addSub;
        // Begin mtask footprint all: 2 4 14 18 
        IData/*31:0*/ __PVT__decode_to_execute_SRC1;
        // Begin mtask footprint all: 2 4 19 
        CData/*0:0*/ __PVT__CsrPlugin_mie_MEIE;
        CData/*0:0*/ __PVT__CsrPlugin_mie_MTIE;
        CData/*0:0*/ __PVT__CsrPlugin_mie_MSIE;
        // Begin mtask footprint all: 2 6 11 19 
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__risingOccupancy;
        // Begin mtask footprint all: 2 6 19 
        CData/*0:0*/ __PVT___zz_VexRiscv_61_;
        // Begin mtask footprint all: 6 19 
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__pushing;
        // Begin mtask footprint all: 6 12 19 
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_correction;
        // Begin mtask footprint all: 6 12 19 20 
        CData/*0:0*/ __PVT__IBusSimplePlugin_iBusRsp_stages_2_output_ready;
        // Begin mtask footprint all: 12 19 20 
        IData/*31:0*/ __PVT___zz_VexRiscv_165_;
        // Begin mtask footprint all: 6 19 20 
        CData/*2:0*/ __PVT__IBusSimplePlugin_pending_value;
        // Begin mtask footprint all: 19 20 
        CData/*0:0*/ __PVT__IBusSimplePlugin_jump_pcLoad_valid;
        CData/*0:0*/ __PVT__IBusSimplePlugin_decompressor_input_ready;
        CData/*0:0*/ __PVT__IBusSimplePlugin_cmdFork_canEmit;
        // Begin mtask footprint all: 11 20 
        IData/*31:0*/ __PVT__decode_INSTRUCTION_ANTICIPATED;
        // Begin mtask footprint all: 11 17 
        VlUnpacked<IData/*31:0*/, 32> RegFilePlugin_regFile;
        // Begin mtask footprint all: 9 11 17 
        CData/*0:0*/ __PVT__memory_to_writeBack_REGFILE_WRITE_VALID;
        // Begin mtask footprint all: 2 7 8 9 11 17 19 
        CData/*0:0*/ __PVT__writeBack_arbitration_isValid;
        // Begin mtask footprint all: 2 5 
        CData/*0:0*/ __PVT__CsrPlugin_mstatus_MPIE;
        CData/*3:0*/ __PVT__CsrPlugin_mcause_exceptionCode;
        CData/*0:0*/ __PVT__execute_to_memory_MEMORY_STORE;
        // Begin mtask footprint all: 2 5 8 
        CData/*0:0*/ __PVT__decode_to_execute_MEMORY_STORE;
        // Begin mtask footprint all: 2 5 7 9 11 12 13 19 
        CData/*0:0*/ __PVT__memory_arbitration_isValid;
        // Begin mtask footprint all: 5 7 9 12 13 18 
        IData/*31:0*/ __PVT__decode_to_execute_INSTRUCTION;
        // Begin mtask footprint all: 5 9 12 18 
        CData/*1:0*/ __PVT__decode_to_execute_BRANCH_CTRL;
        // Begin mtask footprint all: 18 
        IData/*31:0*/ __PVT___zz_VexRiscv_132_;
        // Begin mtask footprint all: 4 
        IData/*31:0*/ __PVT__memory_to_writeBack_MEMORY_READ_DATA;
        CData/*1:0*/ __PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW;
        CData/*0:0*/ __PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE;
        // Begin mtask footprint all: 7 8 15 18 
        IData/*31:0*/ __PVT___zz_VexRiscv_22_;
        // Begin mtask footprint all: 8 14 15 18 
        IData/*31:0*/ __PVT___zz_VexRiscv_42_;
        // Begin mtask footprint all: 8 11 15 18 
        IData/*31:0*/ __PVT___zz_VexRiscv_138_;
        // Begin mtask footprint all: 11 15 18 
        CData/*0:0*/ __PVT___zz_VexRiscv_166_;
        // Begin mtask footprint all: 5 11 15 18 
        CData/*4:0*/ __PVT___zz_VexRiscv_137_;
        // Begin mtask footprint all: 9 11 15 18 
        CData/*0:0*/ __PVT___zz_VexRiscv_136_;
        // Begin mtask footprint all: 9 11 18 
        CData/*0:0*/ __PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2;
        CData/*0:0*/ __PVT__decode_to_execute_IS_CSR;
        // Begin mtask footprint all: 11 18 
        IData/*31:0*/ __PVT___zz_VexRiscv_164_;
        CData/*0:0*/ __PVT__execute_CsrPlugin_blockedBySideEffects;
        // Begin mtask footprint all: 9 18 
        QData/*33:0*/ __PVT__execute_to_memory_MUL_HL;
        IData/*31:0*/ __PVT__execute_to_memory_MUL_LL;
        CData/*0:0*/ __PVT__execute_BranchPlugin_eq;
        // Begin mtask footprint all: 8 9 18 
        QData/*33:0*/ __PVT__execute_to_memory_MUL_LH;
        QData/*33:0*/ __PVT__execute_to_memory_MUL_HH;
        IData/*16:0*/ __PVT__execute_MulPlugin_aHigh;
        // Begin mtask footprint all: 5 8 9 18 
        CData/*1:0*/ __PVT__decode_to_execute_SHIFT_CTRL;
        // Begin mtask footprint all: 5 8 9 11 18 
        IData/*31:0*/ __PVT__decode_to_execute_RS1;
        // Begin mtask footprint all: 8 18 
        IData/*16:0*/ __PVT__execute_MulPlugin_bHigh;
    };
    struct {
        // Begin mtask footprint all: 8 
        CData/*0:0*/ __PVT__CsrPlugin_pipelineLiberator_pcValids_0;
        CData/*0:0*/ __PVT__CsrPlugin_pipelineLiberator_pcValids_1;
        CData/*0:0*/ __PVT__CsrPlugin_pipelineLiberator_pcValids_2;
        CData/*0:0*/ __PVT__CsrPlugin_pipelineLiberator_done;
        // Begin mtask footprint all: 3 
        QData/*63:0*/ __PVT__CsrPlugin_mcycle;
        CData/*0:0*/ __PVT__execute_CsrPlugin_csr_3072;
        CData/*0:0*/ __PVT__execute_CsrPlugin_csr_3200;
        // Begin mtask footprint all: 3 11 
        QData/*32:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT___zz_StreamFifoLowLatency_3_;
        CData/*0:0*/ __PVT__IBusSimplePlugin_decompressor_throw2BytesReg;
        // Begin mtask footprint all: 3 14 
        IData/*31:0*/ __PVT___zz_VexRiscv_159_;
        IData/*31:0*/ __PVT___zz_VexRiscv_160_;
        // Begin mtask footprint all: 3 14 19 
        CData/*0:0*/ __PVT__IBusSimplePlugin_decompressor_bufferValid;
        CData/*0:0*/ __PVT__IBusSimplePlugin_decompressor_unaligned;
        // Begin mtask footprint all: 3 6 11 14 19 
        IData/*31:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst;
        // Begin mtask footprint all: 11 14 16 19 
        IData/*31:0*/ __PVT__IBusSimplePlugin_decompressor_raw;
        // Begin mtask footprint all: 11 14 19 
        CData/*0:0*/ __PVT__IBusSimplePlugin_decompressor_throw2Bytes;
        // Begin mtask footprint all: 11 14 
        CData/*0:0*/ __PVT___zz_VexRiscv_170_;
        CData/*0:0*/ __PVT__execute_arbitration_haltItself;
        // Begin mtask footprint all: 2 3 
        IData/*31:0*/ __PVT__CsrPlugin_mscratch;
        CData/*0:0*/ __PVT__execute_CsrPlugin_csr_836;
        CData/*0:0*/ __PVT__execute_CsrPlugin_csr_832;
        CData/*0:0*/ __PVT__execute_CsrPlugin_csr_834;
        // Begin mtask footprint all: 2 3 19 
        CData/*0:0*/ __PVT__CsrPlugin_mip_MEIP;
        CData/*0:0*/ __PVT__CsrPlugin_mip_MTIP;
        CData/*0:0*/ __PVT__CsrPlugin_mip_MSIP;
        // Begin mtask footprint all: 2 3 19 20 
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_join_valid;
        // Begin mtask footprint all: 3 19 
        CData/*0:0*/ __PVT__IBusSimplePlugin_decompressor_bufferFill;
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT___zz_StreamFifoLowLatency_1_;
        // Begin mtask footprint all: 3 7 19 
        CData/*0:0*/ __PVT__IBusSimplePlugin_decompressor_output_valid;
        // Begin mtask footprint all: 7 19 
        CData/*0:0*/ __PVT__memory_arbitration_flushNext;
        CData/*0:0*/ __PVT__writeBack_arbitration_flushNext;
        CData/*0:0*/ __PVT__CsrPlugin_jumpInterface_valid;
        CData/*0:0*/ __PVT__BranchPlugin_jumpInterface_valid;
        CData/*0:0*/ __PVT___zz_VexRiscv_134_;
        CData/*0:0*/ __PVT___zz_VexRiscv_135_;
        // Begin mtask footprint all: 7 16 19 
        CData/*0:0*/ __PVT__execute_arbitration_isFlushed;
        // Begin mtask footprint all: 9 12 19 
        CData/*0:0*/ __PVT__memory_arbitration_removeIt;
        // Begin mtask footprint all: 9 19 
        CData/*0:0*/ __PVT__decode_REGFILE_WRITE_VALID;
        // Begin mtask footprint all: 
        CData/*0:0*/ CsrPlugin_inWfi;
        // Begin mtask footprint all: 17 
        IData/*31:0*/ lastStageInstruction;
        IData/*31:0*/ lastStageRegFileWrite_payload_data;
        CData/*0:0*/ __PVT___zz_VexRiscv_34_;
        CData/*0:0*/ lastStageRegFileWrite_valid;
        CData/*4:0*/ lastStageRegFileWrite_payload_address;
        // Begin mtask footprint all: 2 17 
        CData/*0:0*/ __PVT___zz_VexRiscv_124_;
        // Begin mtask footprint all: 2 
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid;
        // Begin mtask footprint all: 2 9 
        CData/*1:0*/ __PVT__CsrPlugin_mstatus_MPP;
        CData/*0:0*/ __PVT__CsrPlugin_mcause_interrupt;
        // Begin mtask footprint all: 2 9 14 
        CData/*0:0*/ __PVT__execute_SrcPlugin_less;
        // Begin mtask footprint all: 2 14 
        IData/*31:0*/ __PVT___zz_VexRiscv_154_;
        IData/*31:0*/ __PVT___zz_VexRiscv_155_;
        IData/*31:0*/ __PVT___zz_VexRiscv_156_;
        IData/*31:0*/ __PVT___zz_VexRiscv_157_;
        IData/*31:0*/ __PVT___zz_VexRiscv_158_;
        // Begin mtask footprint all: 2 20 
        CData/*0:0*/ __PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_valid;
        // Begin mtask footprint all: 20 
        CData/*0:0*/ __PVT___zz_VexRiscv_161_;
        CData/*0:0*/ __PVT__IBusSimplePlugin_cmd_valid;
        // Begin mtask footprint all: 16 
        IData/*31:0*/ __PVT__IBusSimplePlugin_decompressor_decompressed;
        SData/*12:0*/ __PVT___zz_VexRiscv_81_;
        // Begin mtask footprint all: 14 16 
        IData/*20:0*/ __PVT___zz_VexRiscv_78_;
        SData/*11:0*/ __PVT___zz_VexRiscv_66_;
        SData/*11:0*/ __PVT___zz_VexRiscv_68_;
        CData/*4:0*/ __PVT___zz_VexRiscv_187_;
        // Begin mtask footprint all: 6 14 
        SData/*15:0*/ __PVT__IBusSimplePlugin_decompressor_bufferData;
    };
    struct {
        // Begin mtask footprint all: 12 
        IData/*31:0*/ lastStagePc;
        IData/*31:0*/ __PVT__execute_to_memory_PC;
        IData/*31:0*/ __PVT__memory_to_writeBack_PC;
        // Begin mtask footprint all: 12 18 
        CData/*0:0*/ __PVT__decode_to_execute_IS_RVC;
        // Begin mtask footprint all: 5 12 18 
        IData/*31:0*/ __PVT__decode_to_execute_PC;
        // Begin mtask footprint all: 5 18 
        IData/*31:0*/ __PVT__execute_FullBarrelShifterPlugin_reversed;
        IData/*31:0*/ __PVT__execute_BranchPlugin_branch_src2;
        // Begin mtask footprint all: 5 14 18 
        IData/*31:0*/ __PVT__decode_RS2;
        // Begin mtask footprint all: 2 5 14 18 
        IData/*31:0*/ __PVT__decode_to_execute_SRC2;
        // Begin mtask footprint all: 14 18 
        IData/*31:0*/ __PVT__execute_CsrPlugin_readData;
        // Begin mtask footprint all: 7 18 
        CData/*0:0*/ __PVT___zz_VexRiscv_142_;
        CData/*0:0*/ __PVT___zz_VexRiscv_144_;
        // Begin mtask footprint all: 7 
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetcherHalt;
        // Begin mtask footprint all: 7 8 
        IData/*31:0*/ __PVT___zz_VexRiscv_133_;
        IData/*31:0*/ __PVT__execute_to_memory_REGFILE_WRITE_DATA;
        // Begin mtask footprint all: 5 7 8 
        IData/*31:0*/ __PVT__execute_to_memory_SHIFT_RIGHT;
        // Begin mtask footprint all: 7 8 9 
        CData/*0:0*/ __PVT__CsrPlugin_interrupt_valid;
        CData/*0:0*/ CsrPlugin_interruptJump;
        CData/*0:0*/ __PVT__CsrPlugin_hadException;
        CData/*1:0*/ __PVT__execute_to_memory_SHIFT_CTRL;
        // Begin mtask footprint all: 7 8 19 
        CData/*0:0*/ __PVT__CsrPlugin_pipelineLiberator_active;
        CData/*0:0*/ __PVT__memory_to_writeBack_ENV_CTRL;
        // Begin mtask footprint all: 8 19 
        CData/*0:0*/ __PVT__decode_to_execute_ENV_CTRL;
        CData/*0:0*/ __PVT__execute_to_memory_ENV_CTRL;
        // Begin mtask footprint all: 7 8 12 19 20 
        CData/*0:0*/ __PVT__decode_arbitration_removeIt;
        // Begin mtask footprint all: 4 5 7 8 9 12 19 
        IData/*25:0*/ __PVT___zz_VexRiscv_112_;
        // Begin mtask footprint all: 2 4 5 8 9 12 14 16 18 19 
        CData/*0:0*/ __PVT__memory_arbitration_haltItself;
        // Begin mtask footprint all: 3 4 5 8 9 11 12 13 14 19 
        CData/*0:0*/ __PVT__execute_arbitration_isStuck;
        // Begin mtask footprint all: 5 7 9 19 
        CData/*0:0*/ __PVT___zz_VexRiscv_171_;
        CData/*0:0*/ __PVT___zz_VexRiscv_172_;
        // Begin mtask footprint all: 2 5 9 19 
        CData/*0:0*/ __PVT___zz_VexRiscv_109_;
        CData/*0:0*/ __PVT___zz_VexRiscv_110_;
        CData/*0:0*/ __PVT___zz_VexRiscv_111_;
        CData/*1:0*/ __PVT__CsrPlugin_interrupt_targetPrivilege;
        // Begin mtask footprint all: 1 2 5 9 
        CData/*0:0*/ __PVT__CsrPlugin_mstatus_MIE;
        // Begin mtask footprint all: 2 5 9 12 
        CData/*0:0*/ __PVT__execute_to_memory_MEMORY_ENABLE;
        CData/*0:0*/ __PVT__execute_CsrPlugin_csr_768;
        // Begin mtask footprint all: 2 5 9 12 15 17 18 19 
        IData/*31:0*/ __PVT__memory_to_writeBack_INSTRUCTION;
        // Begin mtask footprint all: 2 8 15 17 18 
        IData/*31:0*/ __PVT___zz_VexRiscv_46_;
        // Begin mtask footprint all: 2 8 
        IData/*31:0*/ __PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
        // Begin mtask footprint all: 2 8 9 
        QData/*51:0*/ __PVT__memory_to_writeBack_MUL_LOW;
        QData/*33:0*/ __PVT__memory_to_writeBack_MUL_HH;
        CData/*0:0*/ __PVT__memory_to_writeBack_MEMORY_ENABLE;
        CData/*0:0*/ __PVT__memory_to_writeBack_IS_MUL;
        // Begin mtask footprint all: 8 9 14 
        CData/*1:0*/ __PVT__decode_to_execute_ALU_CTRL;
        CData/*1:0*/ __PVT__decode_to_execute_ALU_BITWISE_CTRL;
        // Begin mtask footprint all: 9 
        CData/*0:0*/ __PVT__decode_to_execute_IS_MUL;
        CData/*0:0*/ __PVT__execute_to_memory_IS_MUL;
        // Begin mtask footprint all: 9 13 
        CData/*0:0*/ __PVT__decode_to_execute_REGFILE_WRITE_VALID;
        CData/*0:0*/ __PVT__execute_to_memory_REGFILE_WRITE_VALID;
        // Begin mtask footprint all: 9 13 14 18 
        IData/*31:0*/ __PVT__decode_to_execute_RS2;
        // Begin mtask footprint all: 3 4 5 9 18 
        IData/*31:0*/ __PVT__execute_CsrPlugin_writeData;
        CData/*0:0*/ __PVT__execute_CsrPlugin_writeEnable;
        // Begin mtask footprint all: 4 18 
        CData/*0:0*/ __PVT__decode_to_execute_CSR_WRITE_OPCODE;
        // Begin mtask footprint all: 4 7 15 18 
        CData/*0:0*/ __PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE;
        CData/*0:0*/ __PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE;
        // Begin mtask footprint all: 7 13 15 18 
        CData/*0:0*/ __PVT___zz_VexRiscv_178_;
        CData/*0:0*/ __PVT___zz_VexRiscv_180_;
        // Begin mtask footprint all: 7 15 
        CData/*0:0*/ __PVT___zz_VexRiscv_141_;
        CData/*0:0*/ __PVT___zz_VexRiscv_143_;
        // Begin mtask footprint all: 7 9 
        CData/*0:0*/ __PVT__execute_to_memory_BRANCH_DO;
        // Begin mtask footprint all: 7 12 
        IData/*31:0*/ __PVT__execute_to_memory_INSTRUCTION;
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_booted;
        // Begin mtask footprint all: 7 12 19 
        CData/*0:0*/ __PVT___zz_VexRiscv_90_;
    };
    struct {
        // Begin mtask footprint all: 12 19 
        CData/*0:0*/ __PVT__execute_arbitration_removeIt;
        // Begin mtask footprint all: 5 12 19 
        IData/*31:0*/ __PVT__execute_to_memory_BRANCH_CALC;
        // Begin mtask footprint all: 5 11 12 19 
        IData/*31:0*/ IBusSimplePlugin_decodePc_pcReg;
        // Begin mtask footprint all: 5 11 19 
        IData/*31:0*/ __PVT__CsrPlugin_mepc;
        // Begin mtask footprint all: 11 19 
        CData/*0:0*/ __PVT__IBusSimplePlugin_decodePrediction_cmd_hadBranch;
        // Begin mtask footprint all: 5 19 
        CData/*3:0*/ CsrPlugin_interrupt_code;
        // Begin mtask footprint all: 19 
        IData/*31:0*/ __PVT__IBusSimplePlugin_predictionJumpInterface_payload;
        IData/*31:0*/ __PVT__CsrPlugin_jumpInterface_payload;
        IData/*29:0*/ __PVT__CsrPlugin_xtvec_base;
        CData/*0:0*/ __PVT__decode_arbitration_haltByOther;
        CData/*0:0*/ __PVT__decode_arbitration_flushNext;
        CData/*0:0*/ __PVT__IBusSimplePlugin_predictionJumpInterface_valid;
        CData/*2:0*/ __PVT___zz_VexRiscv_50_;
        // Begin mtask footprint all: 6 7 
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_output_valid;
        // Begin mtask footprint all: 6 7 20 
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_inc;
        CData/*0:0*/ __PVT___zz_VexRiscv_59_;
        // Begin mtask footprint all: 6 7 12 20 
        CData/*0:0*/ __PVT__IBusSimplePlugin_iBusRsp_stages_1_input_ready;
        // Begin mtask footprint all: 6 12 20 
        CData/*0:0*/ __PVT__IBusSimplePlugin_fetchPc_pcRegPropagate;
        // Begin mtask footprint all: 12 20 
        IData/*31:0*/ __PVT__IBusSimplePlugin_fetchPc_pc;
        CData/*0:0*/ __PVT___zz_VexRiscv_174_;
        // Begin mtask footprint all: 12 16 20 
        IData/*31:0*/ IBusSimplePlugin_fetchPc_pcReg;
        // Begin mtask footprint all: 13 16 20 
        IData/*31:0*/ __PVT__IBusSimplePlugin_decompressor_output_payload_rsp_inst;
        // Begin mtask footprint all: 11 12 13 16 18 19 
        CData/*0:0*/ __PVT__execute_arbitration_isValid;
        // Begin mtask footprint all: 11 12 16 
        CData/*0:0*/ __PVT__decode_to_execute_MEMORY_ENABLE;
        // Begin mtask footprint all: 11 12 
        IData/*31:0*/ __PVT__IBusSimplePlugin_decodePc_pcPlus;
        IData/*31:0*/ __PVT___zz_VexRiscv_62_;
        // Begin mtask footprint all: 4 11 12 
        CData/*0:0*/ __PVT___zz_VexRiscv_94_;
        // Begin mtask footprint all: 11 
        CData/*0:0*/ lastStageIsValid;
        CData/*0:0*/ lastStageIsFiring;
        // Begin mtask footprint all: 11 15 
        IData/*31:0*/ __PVT___zz_VexRiscv_163_;
        // Begin mtask footprint all: 4 11 15 
        IData/*31:0*/ __PVT__decode_RS1;
    };

    // LOCAL VARIABLES
    // Begin mtask footprint all: 1 2 5 
    CData/*0:0*/ __Vdly__CsrPlugin_mstatus_MIE;

    // INTERNAL VARIABLES
  private:
    VExampleTop__Syms* __VlSymsp;  // Symbol table
  public:

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VExampleTop_VexRiscv);  ///< Copying not allowed
  public:
    VExampleTop_VexRiscv(const char* name = "TOP");
    ~VExampleTop_VexRiscv();

    // INTERNAL METHODS
    void __Vconfigure(VExampleTop__Syms* symsp, bool first);
  private:
    static void _ctor_var_reset(VExampleTop_VexRiscv* self) VL_ATTR_COLD;
  public:
    static void _initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__1(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__2(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__38(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__39(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__40(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__41(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__42(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__43(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__44(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__45(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__46(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__47(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__48(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__49(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__50(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__51(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__52(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__53(VExampleTop__Syms* __restrict vlSymsp);
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__10(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__11(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__12(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__13(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__14(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__15(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__16(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__17(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__18(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__19(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__20(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__21(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__22(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__23(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__24(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__25(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__26(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__27(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__28(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__29(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__3(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__30(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__31(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__32(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__33(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__34(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__35(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__36(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__37(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__4(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__5(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__6(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__7(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__8(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__9(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
