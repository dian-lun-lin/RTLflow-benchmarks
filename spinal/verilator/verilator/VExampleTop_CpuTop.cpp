// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleTop.h for the primary calling header

#include "VExampleTop_CpuTop.h"
#include "VExampleTop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VExampleTop_CpuTop::_sequent__TOP__ExampleTop__cpu_u_cpu__34(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_sequent__TOP__ExampleTop__cpu_u_cpu__34\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT___zz_UartCtrlTx_1_ 
        = (1U & ((~ (IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext)) 
                 | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd) 
                    & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_doBreak)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__io_gpio_read_buffercc__DOT__buffers_1 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__io_gpio_read_buffercc__DOT__buffers_0;
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
                        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA_io_limit_driver 
                            = (0xffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data);
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
                if ((0x40U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__busCtrl_doWrite) {
                        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerABridge_clearsEnable 
                            = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data 
                                     >> 0x10U));
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerABridge_clearsEnable = 0U;
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
                if ((0x40U == (0xffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__busCtrl_doWrite) {
                        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerABridge_ticksEnable 
                            = (3U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data);
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerABridge_ticksEnable = 0U;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willOverflow) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
            = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity) 
               ^ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd));
    }
    if ((1U & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willOverflow) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity 
                        = (2U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_frame_parity));
                }
            }
        }
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
            = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity) 
               ^ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
    }
    if ((1U & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity 
                        = (2U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_frame_parity));
                }
            }
        }
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if ((4U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willOverflow) {
                if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value) 
                     == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_frame_stop))) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
                        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__io_write_thrown_valid)
                            ? 1U : 0U);
                }
            }
        } else if ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
            if ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willOverflow) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 4U;
                }
            } else if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willOverflow) {
                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT___zz_UartCtrlTx_2_) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state 
                        = ((0U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_frame_parity))
                            ? 4U : 3U);
                }
            }
        } else if ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willOverflow) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 2U;
            }
        } else if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__io_write_thrown_valid) 
                    & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willOverflow))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 1U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = 0U;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_3_) {
            if ((2U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data)) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_readOverflowError = 0U;
            }
        }
        if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) 
             & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_full))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_readOverflowError = 1U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_readOverflowError = 0U;
    }
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_5_) {
            if ((0x400U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data)) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_doBreak = 1U;
            }
        }
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_6_) {
            if ((0x800U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data)) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_doBreak = 0U;
            }
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_misc_doBreak = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__io_gpio_read_buffercc__DOT__buffers_0 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__io_gpio_write_driver;
    if (vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter = 0U;
        } else if (((0U == vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter) 
                    & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_valid)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter 
                = (0x7fU & ((IData)(1U) + (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter)));
        }
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 0U;
        if ((4U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) {
                    if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value) 
                         == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_frame_stop))) {
                        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
                    }
                } else {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
                }
            }
        } else if ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
            if ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
                    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_3_) {
                        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 4U;
                        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 1U;
                    } else {
                        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
                    }
                }
            } else if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_6_) {
                    if ((0U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_frame_parity))) {
                        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 4U;
                        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 1U;
                    } else {
                        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 3U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 2U;
                if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
                }
            }
        } else if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_5_) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 1U;
        }
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter = 0U;
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = 0U;
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = 0U;
    }
    if ((0U != (0xfU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
        if ((4U == (0xfU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__ctrl_doWrite) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__io_gpio_write_driver 
                    = (7U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data);
            }
        }
    }
    if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                  >> 4U)))) {
        if ((8U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) {
            if ((4U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) {
                if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                              >> 1U)))) {
                    if ((1U & (~ vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__busCtrl_doWrite) {
                            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_frame_stop 
                                = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data 
                                         >> 0x10U));
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                  >> 4U)))) {
        if ((8U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) {
            if ((4U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address)) {
                if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address 
                              >> 1U)))) {
                    if ((1U & (~ vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__busCtrl_doWrite) {
                            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_frame_parity 
                                = (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data 
                                         >> 8U));
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VExampleTop_CpuTop::_sequent__TOP__ExampleTop__cpu_u_cpu__35(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_sequent__TOP__ExampleTop__cpu_u_cpu__35\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_valid 
        = (0x68U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_6_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value) 
           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_frame_dataLength));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
        if ((0U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 1U;
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_5_ 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) 
            & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value))) 
           & (0x68U != (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_3_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity) 
           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__io_write_thrown_valid 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid;
    if ((0x68U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__io_write_thrown_valid = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx11 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_3_) 
            << 5U) | ((0x10U & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value)) 
                                << 4U)) | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick) 
                                            << 3U) 
                                           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error
        [vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx11];
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx2 
        = ((0xffffffe0U & ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL) 
                             << 3U) & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__state) 
                                       << 5U)) & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_write)) 
                                                  << 5U))) 
           | (0x1fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_read_streamBreaked_ready 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready
        [vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx2];
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_12_ = 0U;
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
                                if ((0x58U != (0xffU 
                                               & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address))) {
                                    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__busCtrl_doWrite) {
                                        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_12_ 
                                            = (3U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_data);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx3 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__busCtrl_doWrite) 
            << 5U) | (0x1fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_2_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_
        [vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx3];
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx4 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__busCtrl_doWrite) 
            << 5U) | (0x1fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_3_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_
        [vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx4];
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx5 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__busCtrl_doWrite) 
            << 5U) | (0x1fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_4_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_
        [vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx5];
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx6 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__busCtrl_doWrite) 
            << 5U) | (0x1fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_5_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_
        [vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx6];
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx7 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__busCtrl_doWrite) 
            << 5U) | (0x1fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_6_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_
        [vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx7];
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_10_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_read_streamBreaked_ready;
    if ((0x68U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_10_ = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popping 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy_io_pop_valid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_10_));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_1_) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS1 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_163_;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_136_) {
        if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_137_) 
             == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                          >> 0xfU)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS1 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_138_;
        }
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_166_) {
        if (((0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                       >> 7U)) == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                            >> 0xfU)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS1 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_46_;
        }
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_178_) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_141_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS1 
                    = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_22_;
            }
        }
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_180_) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_143_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS1 
                    = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_42_;
            }
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_StreamFifo_1_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_StreamFifo_1_ = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popping) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_valueNext 
        = (((0xfeU == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value)) 
            & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
                             + (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_value) 
                    + (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement)));
}

VL_INLINE_OPT void VExampleTop_CpuTop::_sequent__TOP__ExampleTop__cpu_u_cpu__36(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_sequent__TOP__ExampleTop__cpu_u_cpu__36\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerABridge_busClearing = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_3_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerABridge_busClearing = 1U;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_4_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerABridge_busClearing = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerBBridge_busClearing = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_5_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerBBridge_busClearing = 1U;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_6_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerBBridge_busClearing = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_8_ 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerABridge_clearsEnable) 
            & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA_io_full)) 
           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerABridge_busClearing));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_10_ 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerBBridge_clearsEnable) 
            & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB_io_full)) 
           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerBBridge_busClearing));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_182_ 
        = ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_isStuckByOthers)) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_join_valid));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_174_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_jump_pcLoad_valid) 
           & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_isStuckByOthers)) 
              | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_removeIt)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_INSTRUCTION_ANTICIPATED 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_isStuckByOthers)
            ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_
            : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_output_payload_rsp_inst);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_pc 
        = (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_fetchPc_pcReg 
           + ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_inc) 
              << 2U));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_inc) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_pc 
            = (0xfffffffdU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_pc);
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_jump_pcLoad_valid) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_pc 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_165_;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_pc 
        = (0xfffffffeU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_pc);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_161_ 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_join_valid) 
            & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_input_ready)) 
           | ((0U != (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)) 
              | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_externalFlush)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__popping 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_valid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_161_));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_1_halt = 0U;
    if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_59_) 
         & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_cmdFork_canEmit)) 
            | (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_iBus_cmd_ready))))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_1_halt = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_cmd_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_59_) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_cmdFork_canEmit));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_pending_next 
        = (7U & (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_pending_value) 
                  + ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_cmd_valid) 
                     & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_iBus_cmd_ready))) 
                 - ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_valid) 
                    & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_161_))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_1_input_ready 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_2_output_ready) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_1_halt)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_cmd_valid) 
           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_valid));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT___zz_CCMasterArbiter_2_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_masterBus_cmd_valid = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_pcRegPropagate = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_1_input_ready) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_pcRegPropagate = 1U;
    }
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
