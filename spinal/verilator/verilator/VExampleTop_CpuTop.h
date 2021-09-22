// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VExampleTop.h for the primary calling header

#ifndef VERILATED_VEXAMPLETOP_CPUTOP_H_
#define VERILATED_VEXAMPLETOP_CPUTOP_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"
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
    VL_OUT8(__PVT__io_led_red,0,0);
    VL_OUT8(__PVT__io_led_green,0,0);
    VL_OUT8(__PVT__io_led_blue,0,0);
    VL_OUT8(__PVT__io_uart_txd,0,0);
    VL_IN8(__PVT__io_uart_rxd,0,0);
    VL_IN8(__PVT__clk_cpu_reset_,0,0);
    VL_IN8(__PVT__clk_cpu,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 16 20 
        CData/*0:0*/ __PVT__u_timer__DOT___zz_CCApb3Timer_3_;
        // Begin mtask footprint all: 20 
        CData/*0:0*/ __PVT__u_timer__DOT__timerABridge_busClearing;
        CData/*0:0*/ __PVT__u_timer__DOT__timerBBridge_busClearing;
        // Begin mtask footprint all: 17 20 
        CData/*0:0*/ __PVT__u_timer__DOT___zz_CCApb3Timer_4_;
        CData/*0:0*/ __PVT__u_timer__DOT___zz_CCApb3Timer_5_;
        CData/*0:0*/ __PVT__u_timer__DOT___zz_CCApb3Timer_6_;
        // Begin mtask footprint all: 3 17 20 
        CData/*0:0*/ __PVT__u_timer__DOT__timerA_io_full;
        CData/*0:0*/ __PVT__u_timer__DOT__timerB_io_full;
        // Begin mtask footprint all: 2 3 20 
        CData/*0:0*/ __PVT__u_timer__DOT___zz_CCApb3Timer_8_;
        CData/*0:0*/ __PVT__u_timer__DOT___zz_CCApb3Timer_10_;
        // Begin mtask footprint all: 2 17 
        CData/*0:0*/ __PVT__u_timer__DOT__timerA__DOT__inhibitFull;
        CData/*0:0*/ __PVT__u_timer__DOT__timerB__DOT__inhibitFull;
        // Begin mtask footprint all: 2 3 17 
        CData/*0:0*/ __PVT__u_timer__DOT___zz_CCApb3Timer_7_;
        CData/*0:0*/ __PVT__u_timer__DOT___zz_CCApb3Timer_9_;
        CData/*0:0*/ __PVT__u_timer__DOT__timerA__DOT__limitHit;
        CData/*0:0*/ __PVT__u_timer__DOT__timerB__DOT__limitHit;
        // Begin mtask footprint all: 3 17 
        CData/*0:0*/ __PVT__u_timer__DOT__prescaler_1___05Fio_overflow;
        CData/*7:0*/ __PVT__u_timer__DOT__prescaler_1___DOT__counter;
        // Begin mtask footprint all: 3 17 18 
        SData/*15:0*/ __PVT__u_timer__DOT__timerA__DOT__counter;
        SData/*15:0*/ __PVT__u_timer__DOT__timerB__DOT__counter;
        // Begin mtask footprint all: 3 18 
        IData/*31:0*/ __PVT__apb3Router_1___DOT___zz_Apb3Router_4_;
        // Begin mtask footprint all: 3 13 18 
        CData/*1:0*/ __PVT__u_timer__DOT__interruptCtrl_1___05Fio_pendings;
        // Begin mtask footprint all: 3 13 
        CData/*1:0*/ __PVT__u_timer__DOT__interruptCtrl_1___DOT__pendings;
        // Begin mtask footprint all: 3 16 
        CData/*0:0*/ __PVT__u_timer__DOT___zz_CCApb3Timer_2_;
        // Begin mtask footprint all: 3 15 
        CData/*1:0*/ __PVT__u_timer__DOT___zz_CCApb3Timer_12_;
        // Begin mtask footprint all: 15 
        CData/*0:0*/ __PVT__u_uart__DOT___zz_Apb3UartCtrl_10_;
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_read_streamBreaked_ready;
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement;
        // Begin mtask footprint all: 4 15 
        IData/*19:0*/ __PVT__u_uart__DOT__bridge_uartConfigReg_clockDivider;
        CData/*0:0*/ __PVT__u_uart__DOT___zz_Apb3UartCtrl_4_;
        // Begin mtask footprint all: 10 15 
        CData/*1:0*/ __PVT__u_uart__DOT__bridge_uartConfigReg_frame_parity;
        CData/*0:0*/ __PVT__u_uart__DOT___zz_Apb3UartCtrl_3_;
        CData/*0:0*/ __PVT__u_uart__DOT___zz_Apb3UartCtrl_5_;
        CData/*0:0*/ __PVT__u_uart__DOT___zz_Apb3UartCtrl_6_;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__io_write_thrown_valid;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_3_;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_valid;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity;
        // Begin mtask footprint all: 10 12 15 
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_5_;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_6_;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick;
        CData/*2:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
        // Begin mtask footprint all: 9 10 12 15 
        CData/*2:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value;
        // Begin mtask footprint all: 12 15 
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick;
        CData/*2:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter;
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing;
        CData/*4:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_valueNext;
        // Begin mtask footprint all: 10 11 12 15 
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value;
        // Begin mtask footprint all: 11 12 15 19 
        CData/*2:0*/ __PVT__io_apb_decoder_io_output_PSEL;
        // Begin mtask footprint all: 6 7 15 
        CData/*2:0*/ __PVT__u_uart__DOT__bridge_uartConfigReg_frame_dataLength;
        // Begin mtask footprint all: 6 15 
        CData/*0:0*/ __PVT__u_uart__DOT___zz_Apb3UartCtrl_2_;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error;
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_StreamFifo_1_;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popping;
        // Begin mtask footprint all: 10 
        CData/*2:0*/ __PVT__u_led_ctrl__DOT__io_gpio_read_buffercc__DOT__buffers_0;
        // Begin mtask footprint all: 7 10 
        CData/*2:0*/ __PVT__u_led_ctrl__DOT__io_gpio_write_driver;
        CData/*2:0*/ __PVT__u_led_ctrl__DOT__io_gpio_read_buffercc__DOT__buffers_1;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT___zz_UartCtrlTx_1_;
        // Begin mtask footprint all: 7 10 12 
        CData/*2:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value;
        // Begin mtask footprint all: 7 10 12 18 
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT___zz_UartCtrlTx_2_;
        CData/*2:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    };
    struct {
        // Begin mtask footprint all: 10 12 18 
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willOverflow;
        // Begin mtask footprint all: 12 18 
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping;
        CData/*7:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F3_;
        // Begin mtask footprint all: 7 9 12 18 
        CData/*7:0*/ __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext;
        // Begin mtask footprint all: 7 10 18 
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_misc_doBreak;
        // Begin mtask footprint all: 7 
        VlUnpacked<CData/*7:0*/, 255> __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram;
        CData/*7:0*/ __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_StreamFifo_3_;
        // Begin mtask footprint all: 4 7 
        CData/*2:0*/ __PVT__u_led_ctrl__DOT__io_gpio_writeEnable_driver;
        // Begin mtask footprint all: 7 18 
        IData/*31:0*/ __PVT__u_led_ctrl_io_apb_PRDATA;
        // Begin mtask footprint all: 18 
        IData/*31:0*/ __PVT__u_timer_io_apb_PRDATA;
        IData/*31:0*/ __PVT__u_uart_io_apb_PRDATA;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_write_ready;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement;
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement;
        // Begin mtask footprint all: 4 18 
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_tick;
        // Begin mtask footprint all: 4 13 18 
        CData/*1:0*/ __PVT__u_timer__DOT__interruptCtrl_1___05Fio_masks_driver;
        // Begin mtask footprint all: 4 13 17 18 
        CData/*7:0*/ __PVT__u_timer__DOT___zz_CCApb3Timer_1_;
        // Begin mtask footprint all: 6 13 17 18 
        SData/*15:0*/ __PVT__u_timer__DOT__timerB_io_limit_driver;
        CData/*1:0*/ __PVT__u_timer__DOT__timerBBridge_ticksEnable;
        // Begin mtask footprint all: 6 13 18 20 
        CData/*0:0*/ __PVT__u_timer__DOT__timerBBridge_clearsEnable;
        // Begin mtask footprint all: 10 13 18 20 
        CData/*0:0*/ __PVT__u_timer__DOT__timerABridge_clearsEnable;
        // Begin mtask footprint all: 10 13 17 18 
        SData/*15:0*/ __PVT__u_timer__DOT__timerA_io_limit_driver;
        CData/*1:0*/ __PVT__u_timer__DOT__timerABridge_ticksEnable;
        // Begin mtask footprint all: 4 11 18 
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_misc_breakDetected;
        // Begin mtask footprint all: 4 11 
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_readBreak_regNext;
        // Begin mtask footprint all: 11 
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_9_;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_10_;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_11_;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement;
        // Begin mtask footprint all: 6 11 
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushing;
        // Begin mtask footprint all: 6 11 18 
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_interruptCtrl_writeIntEnable;
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_interruptCtrl_readIntEnable;
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_misc_readError;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_risingOccupancy;
        // Begin mtask footprint all: 6 18 
        CData/*2:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext;
        CData/*2:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value;
        // Begin mtask footprint all: 6 9 11 15 18 
        CData/*7:0*/ __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value;
        // Begin mtask footprint all: 11 15 18 
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid;
        // Begin mtask footprint all: 11 12 15 18 
        CData/*4:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_value;
        // Begin mtask footprint all: 11 12 18 
        CData/*7:0*/ __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value;
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy;
        CData/*1:0*/ __PVT__apb3Router_1___DOT__selIndex;
        // Begin mtask footprint all: 9 11 12 18 
        CData/*4:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_value;
        // Begin mtask footprint all: 9 11 12 
        CData/*7:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter;
        // Begin mtask footprint all: 11 12 
        VlUnpacked<CData/*7:0*/, 32> __PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4;
        CData/*4:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_valueNext;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F2_;
        // Begin mtask footprint all: 9 11 
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_StreamFifo_2_;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F1_;
        // Begin mtask footprint all: 11 15 
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy_io_pop_valid;
        CData/*0:0*/ __PVT__u_uart__DOT___zz_Apb3UartCtrl_1_;
        CData/*7:0*/ __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_valueNext;
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full;
        // Begin mtask footprint all: 11 19 
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0;
        // Begin mtask footprint all: 19 
        CData/*0:0*/ __PVT__io_apb_decoder__DOT___zz_Apb3Decoder_1_;
        // Begin mtask footprint all: 5 19 
        CData/*0:0*/ __PVT__io_apb_decoder_io_input_PREADY;
        // Begin mtask footprint all: 4 10 19 
        CData/*0:0*/ __PVT__u_led_ctrl__DOT__ctrl_doWrite;
        // Begin mtask footprint all: 10 11 
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_uartConfigReg_frame_stop;
    };
    struct {
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_full;
        // Begin mtask footprint all: 10 11 18 
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_misc_readOverflowError;
        // Begin mtask footprint all: 11 18 
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_read_streamBreaked_valid;
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_interruptCtrl_readInt;
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_interruptCtrl_writeInt;
        CData/*0:0*/ __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch;
        CData/*7:0*/ __PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrDif;
        CData/*0:0*/ __PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ptrMatch;
        // Begin mtask footprint all: 4 10 11 12 18 
        IData/*19:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter;
        // Begin mtask footprint all: 4 10 11 15 18 
        CData/*6:0*/ __PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter;
        // Begin mtask footprint all: 4 6 10 11 15 
        CData/*0:0*/ __PVT__u_uart__DOT__busCtrl_doWrite;
        // Begin mtask footprint all: 4 6 10 11 15 16 17 
        CData/*0:0*/ __PVT__u_timer__DOT__busCtrl_doWrite;
    };

    // LOCAL VARIABLES
    // Begin mtask footprint all: 4 18 
    IData/*19:0*/ __Vdly__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter;
    // Begin mtask footprint all: 18 
    CData/*5:0*/ __Vtableidx9;
    // Begin mtask footprint all: 6 
    CData/*7:0*/ u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT____Vlvbound1;
    // Begin mtask footprint all: 6 7 
    CData/*7:0*/ __Vdlyvdim0__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdlyvval__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0;
    // Begin mtask footprint all: 7 10 
    CData/*2:0*/ __Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    // Begin mtask footprint all: 7 12 
    CData/*2:0*/ __Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value;
    // Begin mtask footprint all: 11 12 
    CData/*0:0*/ __Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3;
    CData/*0:0*/ __Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4;
    // Begin mtask footprint all: 11 
    CData/*5:0*/ __Vtableidx1;
    // Begin mtask footprint all: 9 11 
    CData/*4:0*/ __Vdlyvdim0__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdlyvval__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram__v0;
    // Begin mtask footprint all: 10 11 
    CData/*6:0*/ __Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter;
    // Begin mtask footprint all: 15 
    CData/*5:0*/ __Vtableidx2;
    CData/*5:0*/ __Vtableidx3;
    CData/*5:0*/ __Vtableidx4;
    CData/*5:0*/ __Vtableidx5;
    CData/*5:0*/ __Vtableidx6;
    CData/*5:0*/ __Vtableidx7;
    CData/*5:0*/ __Vtableidx11;
    // Begin mtask footprint all: 10 15 
    CData/*2:0*/ __Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    // Begin mtask footprint all: 9 12 15 
    CData/*2:0*/ __Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value;
    // Begin mtask footprint all: 15 
    static VlUnpacked<CData/*0:0*/, 64> __Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready;
    static VlUnpacked<CData/*0:0*/, 64> __Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_;
    static VlUnpacked<CData/*0:0*/, 64> __Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_;
    static VlUnpacked<CData/*0:0*/, 64> __Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_;
    static VlUnpacked<CData/*0:0*/, 64> __Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_;
    static VlUnpacked<CData/*0:0*/, 64> __Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_;
    static VlUnpacked<CData/*0:0*/, 64> __Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error;
    // Begin mtask footprint all: 18 
    static VlUnpacked<CData/*0:0*/, 64> __Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready;
    // Begin mtask footprint all: 11 
    static VlUnpacked<CData/*0:0*/, 64> __Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_;

    // INTERNAL VARIABLES
  private:
    VExampleTop__Syms* __VlSymsp;  // Symbol table
  public:

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VExampleTop_CpuTop);  ///< Copying not allowed
  public:
    VExampleTop_CpuTop(const char* name = "TOP");
    ~VExampleTop_CpuTop();

    // INTERNAL METHODS
    void __Vconfigure(VExampleTop__Syms* symsp, bool first);
  private:
    static void _ctor_var_reset(VExampleTop_CpuTop* self) VL_ATTR_COLD;
  public:
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__34(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__35(VExampleTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__ExampleTop__cpu_u_cpu__36(VExampleTop__Syms* __restrict vlSymsp);
    static void _settle__TOP__ExampleTop__cpu_u_cpu__1(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__10(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__11(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__12(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__13(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__14(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__15(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__16(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__17(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__18(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__19(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__2(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__20(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__21(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__22(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__23(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__24(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__25(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__26(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__27(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__28(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__29(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__3(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__30(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__31(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__32(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__33(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__4(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__5(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__6(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__7(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__8(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__ExampleTop__cpu_u_cpu__9(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
