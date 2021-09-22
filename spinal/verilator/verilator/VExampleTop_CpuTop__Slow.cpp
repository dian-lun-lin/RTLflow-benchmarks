// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleTop.h for the primary calling header

#include "VExampleTop_CpuTop.h"
#include "VExampleTop__Syms.h"

#include "verilated_dpi.h"

//==========
// Begin mtask footprint all: 15 
VlUnpacked<CData/*0:0*/, 64> VExampleTop_CpuTop::__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready;
VlUnpacked<CData/*0:0*/, 64> VExampleTop_CpuTop::__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_;
VlUnpacked<CData/*0:0*/, 64> VExampleTop_CpuTop::__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_;
VlUnpacked<CData/*0:0*/, 64> VExampleTop_CpuTop::__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_;
VlUnpacked<CData/*0:0*/, 64> VExampleTop_CpuTop::__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_;
VlUnpacked<CData/*0:0*/, 64> VExampleTop_CpuTop::__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_;
VlUnpacked<CData/*0:0*/, 64> VExampleTop_CpuTop::__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error;
// Begin mtask footprint all: 18 
VlUnpacked<CData/*0:0*/, 64> VExampleTop_CpuTop::__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready;
// Begin mtask footprint all: 11 
VlUnpacked<CData/*0:0*/, 64> VExampleTop_CpuTop::__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_;

VExampleTop_CpuTop::VExampleTop_CpuTop(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    VL_CELL(u_cpu, VExampleTop_CpuComplex);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset(this);
}

void VExampleTop_CpuTop::__Vconfigure(VExampleTop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VExampleTop_CpuTop::~VExampleTop_CpuTop() {
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__1(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__1\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__2(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__2\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__limitHit 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__counter) 
           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA_io_limit_driver));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__limitHit 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__counter) 
           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB_io_limit_driver));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__interruptCtrl_1___05Fio_pendings 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__interruptCtrl_1___DOT__pendings) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__interruptCtrl_1___05Fio_masks_driver));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__prescaler_1___05Fio_overflow 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__prescaler_1___DOT__counter) 
           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_1_));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__3(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__3\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT___zz_UartCtrlTx_2_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value) 
           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_frame_dataLength));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__4(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__4\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_7_ 
        = (0U != ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerABridge_ticksEnable) 
                  & (1U | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__prescaler_1___05Fio_overflow) 
                           << 1U))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_9_ 
        = (0U != ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerBBridge_ticksEnable) 
                  & (1U | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__prescaler_1___05Fio_overflow) 
                           << 1U))));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__5(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__5\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_valid 
        = (0x68U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__6(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__6\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_6_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value) 
           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_uartConfigReg_frame_dataLength));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__7(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__7\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA_io_full 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__limitHit) 
            & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_7_)) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA__DOT__inhibitFull)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB_io_full 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__limitHit) 
            & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_9_)) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB__DOT__inhibitFull)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) {
        if ((0U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = 1U;
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrDif 
        = (0xffU & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
                    - (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value)));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__8(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__8\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ptrMatch 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_value) 
           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_value));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__9(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__9\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_full 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ptrMatch) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_risingOccupancy));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__10(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__10\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_5_ 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick) 
            & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value))) 
           & (0x68U != (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_3_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity) 
           == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushing 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_full)));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__11(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__11\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid 
        = (1U & ((~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_StreamFifo_2_) 
                       & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full))))));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__12(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__12\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy_io_pop_valid 
        = (1U & ((~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F2_) 
                       & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_full))))));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__13(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__13\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F1_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushing) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F1_ = 1U;
    }
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__14(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__14\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushing) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = 1U;
    }
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__15(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__15\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_interruptCtrl_writeInt 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_interruptCtrl_writeIntEnable) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid)));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__16(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__16\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_read_streamBreaked_valid 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy_io_pop_valid;
    if ((0x68U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_read_streamBreaked_valid = 0U;
    }
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__17(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__17\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_tick 
        = (0U == vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter);
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__18(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__18\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_valueNext 
        = (0x1fU & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_value) 
                    + (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement)));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__19(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__19\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__20(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__20\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_interruptCtrl_readInt 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_interruptCtrl_readIntEnable) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_read_streamBreaked_valid));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter)) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
    }
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__21(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__21\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext 
        = (7U & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value) 
                 + (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement)));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__22(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__22\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__23(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__23\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willOverflow 
        = ((7U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value)) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__24(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__24\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__25(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__25\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__ctrl_doWrite 
        = ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL) 
             >> 1U) & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__state)) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_write));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__26(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__26\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder__DOT___zz_Apb3Decoder_1_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_valid) 
           & (0U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_write_ready 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready;
    if ((0x68U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_write_ready = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx2 
        = ((0xffffffe0U & ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL) 
                             << 3U) & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__state) 
                                       << 5U)) & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_write)) 
                                                  << 5U))) 
           | (0x1fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_read_streamBreaked_ready 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready
        [vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx2];
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__busCtrl_doWrite 
        = ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL) 
             >> 2U) & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__state)) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_write));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__busCtrl_doWrite 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_output_PSEL) 
            & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__state)) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_write));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__27(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__27\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__28(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__28\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__29(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__29\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_input_PREADY = 1U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder__DOT___zz_Apb3Decoder_1_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__io_apb_decoder_io_input_PREADY = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_write_ready));
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
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_10_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_read_streamBreaked_ready;
    if ((0x68U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_10_ = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx1 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__busCtrl_doWrite) 
            << 5U) | (0x1fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__apbBridge__DOT__io_pipelinedMemoryBus_cmd_halfPipe_regs_payload_address));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_1_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_
        [vlSymsp->TOP__ExampleTop__cpu_u_cpu.__Vtableidx1];
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__30(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__30\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement = 1U;
    }
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
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__31(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__31\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popping 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy_io_pop_valid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_10_));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT___zz_Apb3UartCtrl_1_) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full)));
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__32(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__32\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_StreamFifo_1_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_StreamFifo_1_ = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext 
        = (((0xfeU == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value)) 
            & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value) 
                             + (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_8_ 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerABridge_clearsEnable) 
            & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerA_io_full)) 
           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerABridge_busClearing));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT___zz_CCApb3Timer_10_ 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerBBridge_clearsEnable) 
            & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerB_io_full)) 
           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_timer__DOT__timerBBridge_busClearing));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popping) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement = 1U;
    }
}

void VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__33(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_settle__TOP__ExampleTop__cpu_u_cpu__33\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_valueNext 
        = (((0xfeU == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value)) 
            & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement))
            ? 0U : (0xffU & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
                             + (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_valueNext 
        = (0x1fU & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_value) 
                    + (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement)));
}

void VExampleTop_CpuTop::_ctor_var_reset(VExampleTop_CpuTop* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExampleTop_CpuTop::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->__PVT__io_led_red = VL_RAND_RESET_I(1);
    self->__PVT__io_led_green = VL_RAND_RESET_I(1);
    self->__PVT__io_led_blue = VL_RAND_RESET_I(1);
    self->__PVT__io_uart_txd = VL_RAND_RESET_I(1);
    self->__PVT__io_uart_rxd = VL_RAND_RESET_I(1);
    self->__PVT__clk_cpu = VL_RAND_RESET_I(1);
    self->__PVT__clk_cpu_reset_ = VL_RAND_RESET_I(1);
    self->__PVT__u_timer_io_apb_PRDATA = VL_RAND_RESET_I(32);
    self->__PVT__u_led_ctrl_io_apb_PRDATA = VL_RAND_RESET_I(32);
    self->__PVT__u_uart_io_apb_PRDATA = VL_RAND_RESET_I(32);
    self->__PVT__io_apb_decoder_io_input_PREADY = VL_RAND_RESET_I(1);
    self->__PVT__io_apb_decoder_io_output_PSEL = VL_RAND_RESET_I(3);
    self->__PVT__u_timer__DOT___zz_CCApb3Timer_7_ = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT___zz_CCApb3Timer_8_ = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT___zz_CCApb3Timer_9_ = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT___zz_CCApb3Timer_10_ = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT___zz_CCApb3Timer_12_ = VL_RAND_RESET_I(2);
    self->__PVT__u_timer__DOT__prescaler_1___05Fio_overflow = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT__timerA_io_full = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT__timerB_io_full = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT__interruptCtrl_1___05Fio_pendings = VL_RAND_RESET_I(2);
    self->__PVT__u_timer__DOT__busCtrl_doWrite = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT___zz_CCApb3Timer_1_ = VL_RAND_RESET_I(8);
    self->__PVT__u_timer__DOT___zz_CCApb3Timer_2_ = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT__timerABridge_ticksEnable = VL_RAND_RESET_I(2);
    self->__PVT__u_timer__DOT__timerABridge_clearsEnable = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT__timerABridge_busClearing = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT__timerA_io_limit_driver = VL_RAND_RESET_I(16);
    self->__PVT__u_timer__DOT___zz_CCApb3Timer_3_ = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT___zz_CCApb3Timer_4_ = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT__timerBBridge_ticksEnable = VL_RAND_RESET_I(2);
    self->__PVT__u_timer__DOT__timerBBridge_clearsEnable = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT__timerBBridge_busClearing = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT__timerB_io_limit_driver = VL_RAND_RESET_I(16);
    self->__PVT__u_timer__DOT___zz_CCApb3Timer_5_ = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT___zz_CCApb3Timer_6_ = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT__interruptCtrl_1___05Fio_masks_driver = VL_RAND_RESET_I(2);
    self->__PVT__u_timer__DOT__prescaler_1___DOT__counter = VL_RAND_RESET_I(8);
    self->__PVT__u_timer__DOT__timerA__DOT__counter = VL_RAND_RESET_I(16);
    self->__PVT__u_timer__DOT__timerA__DOT__limitHit = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT__timerA__DOT__inhibitFull = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT__timerB__DOT__counter = VL_RAND_RESET_I(16);
    self->__PVT__u_timer__DOT__timerB__DOT__limitHit = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT__timerB__DOT__inhibitFull = VL_RAND_RESET_I(1);
    self->__PVT__u_timer__DOT__interruptCtrl_1___DOT__pendings = VL_RAND_RESET_I(2);
    self->__PVT__u_led_ctrl__DOT__ctrl_doWrite = VL_RAND_RESET_I(1);
    self->__PVT__u_led_ctrl__DOT__io_gpio_write_driver = VL_RAND_RESET_I(3);
    self->__PVT__u_led_ctrl__DOT__io_gpio_writeEnable_driver = VL_RAND_RESET_I(3);
    self->__PVT__u_led_ctrl__DOT__io_gpio_read_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(3);
    self->__PVT__u_led_ctrl__DOT__io_gpio_read_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(3);
    self->__PVT__u_uart__DOT___zz_Apb3UartCtrl_10_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_write_ready = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy_io_pop_valid = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__busCtrl_doWrite = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_uartConfigReg_frame_dataLength = VL_RAND_RESET_I(3);
    self->__PVT__u_uart__DOT__bridge_uartConfigReg_frame_stop = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_uartConfigReg_frame_parity = VL_RAND_RESET_I(2);
    self->__PVT__u_uart__DOT__bridge_uartConfigReg_clockDivider = VL_RAND_RESET_I(20);
    self->__PVT__u_uart__DOT___zz_Apb3UartCtrl_1_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_read_streamBreaked_valid = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_read_streamBreaked_ready = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_interruptCtrl_writeIntEnable = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_interruptCtrl_readIntEnable = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_interruptCtrl_readInt = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_interruptCtrl_writeInt = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_misc_readError = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT___zz_Apb3UartCtrl_2_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_misc_readOverflowError = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT___zz_Apb3UartCtrl_3_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_misc_breakDetected = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_readBreak_regNext = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT___zz_Apb3UartCtrl_4_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_misc_doBreak = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT___zz_Apb3UartCtrl_5_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT___zz_Apb3UartCtrl_6_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter = VL_RAND_RESET_I(20);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__clockDivider_tick = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__io_write_thrown_valid = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT___zz_UartCtrlTx_2_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willIncrement = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_valueNext = VL_RAND_RESET_I(3);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_value = VL_RAND_RESET_I(3);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__clockDivider_counter_willOverflow = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = VL_RAND_RESET_I(3);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = VL_RAND_RESET_I(3);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_parity = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_txd = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT___zz_UartCtrlTx_1_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_3_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_5_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_6_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_9_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_10_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT___zz_UartCtrlRx_11_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_1 = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_2 = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_value = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_tick = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_counter = VL_RAND_RESET_I(3);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitTimer_tick = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = VL_RAND_RESET_I(3);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter = VL_RAND_RESET_I(7);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_valid = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = VL_RAND_RESET_I(3);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_parity = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_shifter = VL_RAND_RESET_I(8);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_validReg = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_StreamFifo_3_ = VL_RAND_RESET_I(8);
    self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_StreamFifo_1_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_StreamFifo_2_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrDif = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<255; ++__Vi0) {
        self->__PVT__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    self->u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F3_ = VL_RAND_RESET_I(8);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F1_ = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(5);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushPtr_value = VL_RAND_RESET_I(5);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(5);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popPtr_value = VL_RAND_RESET_I(5);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_pushing = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_popping = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_full = VL_RAND_RESET_I(1);
    self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT___zz_StreamFifo_1___05F2_ = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        self->__PVT__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    self->__PVT__io_apb_decoder__DOT___zz_Apb3Decoder_1_ = VL_RAND_RESET_I(1);
    self->__PVT__apb3Router_1___DOT___zz_Apb3Router_4_ = VL_RAND_RESET_I(32);
    self->__PVT__apb3Router_1___DOT__selIndex = VL_RAND_RESET_I(2);
    self->__Vtableidx1 = 0;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[0] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[1] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[2] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[3] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[4] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[5] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[6] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[7] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[8] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[9] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[10] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[11] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[12] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[13] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[14] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[15] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[16] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[17] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[18] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[19] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[20] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[21] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[22] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[23] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[24] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[25] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[26] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[27] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[28] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[29] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[30] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[31] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[32] = 1U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[33] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[34] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[35] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[36] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[37] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[38] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[39] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[40] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[41] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[42] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[43] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[44] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[45] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[46] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[47] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[48] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[49] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[50] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[51] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[52] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[53] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[54] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[55] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[56] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[57] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[58] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[59] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[60] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[61] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[62] = 0U;
    self->__Vtable1___PVT__u_uart__DOT___zz_Apb3UartCtrl_1_[63] = 0U;
    self->__Vtableidx2 = 0;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[0] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[1] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[2] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[3] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[4] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[5] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[6] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[7] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[8] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[9] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[10] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[11] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[12] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[13] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[14] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[15] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[16] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[17] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[18] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[19] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[20] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[21] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[22] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[23] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[24] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[25] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[26] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[27] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[28] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[29] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[30] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[31] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[32] = 1U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[33] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[34] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[35] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[36] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[37] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[38] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[39] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[40] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[41] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[42] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[43] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[44] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[45] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[46] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[47] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[48] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[49] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[50] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[51] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[52] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[53] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[54] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[55] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[56] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[57] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[58] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[59] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[60] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[61] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[62] = 0U;
    self->__Vtable2___PVT__u_uart__DOT__bridge_read_streamBreaked_ready[63] = 0U;
    self->__Vtableidx3 = 0;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[0] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[1] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[2] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[3] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[4] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[5] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[6] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[7] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[8] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[9] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[10] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[11] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[12] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[13] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[14] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[15] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[16] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[17] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[18] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[19] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[20] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[21] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[22] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[23] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[24] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[25] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[26] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[27] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[28] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[29] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[30] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[31] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[32] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[33] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[34] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[35] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[36] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[37] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[38] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[39] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[40] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[41] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[42] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[43] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[44] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[45] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[46] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[47] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[48] = 1U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[49] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[50] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[51] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[52] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[53] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[54] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[55] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[56] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[57] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[58] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[59] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[60] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[61] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[62] = 0U;
    self->__Vtable3___PVT__u_uart__DOT___zz_Apb3UartCtrl_2_[63] = 0U;
    self->__Vtableidx4 = 0;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[0] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[1] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[2] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[3] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[4] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[5] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[6] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[7] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[8] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[9] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[10] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[11] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[12] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[13] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[14] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[15] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[16] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[17] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[18] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[19] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[20] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[21] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[22] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[23] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[24] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[25] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[26] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[27] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[28] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[29] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[30] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[31] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[32] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[33] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[34] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[35] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[36] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[37] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[38] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[39] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[40] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[41] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[42] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[43] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[44] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[45] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[46] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[47] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[48] = 1U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[49] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[50] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[51] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[52] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[53] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[54] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[55] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[56] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[57] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[58] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[59] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[60] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[61] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[62] = 0U;
    self->__Vtable4___PVT__u_uart__DOT___zz_Apb3UartCtrl_3_[63] = 0U;
    self->__Vtableidx5 = 0;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[0] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[1] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[2] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[3] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[4] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[5] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[6] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[7] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[8] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[9] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[10] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[11] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[12] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[13] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[14] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[15] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[16] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[17] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[18] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[19] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[20] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[21] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[22] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[23] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[24] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[25] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[26] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[27] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[28] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[29] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[30] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[31] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[32] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[33] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[34] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[35] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[36] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[37] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[38] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[39] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[40] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[41] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[42] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[43] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[44] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[45] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[46] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[47] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[48] = 1U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[49] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[50] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[51] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[52] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[53] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[54] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[55] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[56] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[57] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[58] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[59] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[60] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[61] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[62] = 0U;
    self->__Vtable5___PVT__u_uart__DOT___zz_Apb3UartCtrl_4_[63] = 0U;
    self->__Vtableidx6 = 0;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[0] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[1] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[2] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[3] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[4] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[5] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[6] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[7] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[8] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[9] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[10] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[11] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[12] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[13] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[14] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[15] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[16] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[17] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[18] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[19] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[20] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[21] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[22] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[23] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[24] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[25] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[26] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[27] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[28] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[29] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[30] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[31] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[32] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[33] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[34] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[35] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[36] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[37] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[38] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[39] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[40] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[41] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[42] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[43] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[44] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[45] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[46] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[47] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[48] = 1U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[49] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[50] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[51] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[52] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[53] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[54] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[55] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[56] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[57] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[58] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[59] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[60] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[61] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[62] = 0U;
    self->__Vtable6___PVT__u_uart__DOT___zz_Apb3UartCtrl_5_[63] = 0U;
    self->__Vtableidx7 = 0;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[0] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[1] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[2] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[3] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[4] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[5] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[6] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[7] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[8] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[9] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[10] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[11] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[12] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[13] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[14] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[15] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[16] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[17] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[18] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[19] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[20] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[21] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[22] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[23] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[24] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[25] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[26] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[27] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[28] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[29] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[30] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[31] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[32] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[33] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[34] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[35] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[36] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[37] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[38] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[39] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[40] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[41] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[42] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[43] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[44] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[45] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[46] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[47] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[48] = 1U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[49] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[50] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[51] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[52] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[53] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[54] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[55] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[56] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[57] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[58] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[59] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[60] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[61] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[62] = 0U;
    self->__Vtable7___PVT__u_uart__DOT___zz_Apb3UartCtrl_6_[63] = 0U;
    self->__Vtableidx9 = 0;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[0] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[1] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[2] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[3] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[4] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[5] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[6] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[7] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[8] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[9] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[10] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[11] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[12] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[13] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[14] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[15] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[16] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[17] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[18] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[19] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[20] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[21] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[22] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[23] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[24] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[25] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[26] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[27] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[28] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[29] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[30] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[31] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[32] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[33] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[34] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[35] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[36] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[37] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[38] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[39] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[40] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[41] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[42] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[43] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[44] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[45] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[46] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[47] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[48] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[49] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[50] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[51] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[52] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[53] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[54] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[55] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[56] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[57] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[58] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[59] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[60] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[61] = 1U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[62] = 0U;
    self->__Vtable9___PVT__u_uart__DOT__uartCtrl_1___DOT__tx_io_write_ready[63] = 1U;
    self->__Vtableidx11 = 0;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[0] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[1] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[2] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[3] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[4] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[5] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[6] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[7] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[8] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[9] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[10] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[11] = 1U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[12] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[13] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[14] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[15] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[16] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[17] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[18] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[19] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[20] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[21] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[22] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[23] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[24] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[25] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[26] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[27] = 1U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[28] = 1U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[29] = 1U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[30] = 1U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[31] = 1U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[32] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[33] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[34] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[35] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[36] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[37] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[38] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[39] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[40] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[41] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[42] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[43] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[44] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[45] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[46] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[47] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[48] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[49] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[50] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[51] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[52] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[53] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[54] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[55] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[56] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[57] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[58] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[59] = 0U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[60] = 1U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[61] = 1U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[62] = 1U;
    self->__Vtable11___PVT__u_uart__DOT__uartCtrl_1___DOT__rx_io_error[63] = 1U;
    self->__Vdly__u_uart__DOT__uartCtrl_1___DOT__clockDivider_counter = VL_RAND_RESET_I(20);
    self->__Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__stateMachine_state = VL_RAND_RESET_I(3);
    self->__Vdly__u_uart__DOT__uartCtrl_1___DOT__tx__DOT__tickCounter_value = VL_RAND_RESET_I(3);
    self->__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__break_counter = VL_RAND_RESET_I(7);
    self->__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__stateMachine_state = VL_RAND_RESET_I(3);
    self->__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_3 = VL_RAND_RESET_I(1);
    self->__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__sampler_samples_4 = VL_RAND_RESET_I(1);
    self->__Vdly__u_uart__DOT__uartCtrl_1___DOT__rx__DOT__bitCounter_value = VL_RAND_RESET_I(3);
    self->__Vdlyvdim0__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0 = 0;
    self->__Vdlyvval__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0 = VL_RAND_RESET_I(8);
    self->__Vdlyvset__u_uart__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0 = 0;
    self->__Vdlyvdim0__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram__v0 = 0;
    self->__Vdlyvval__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram__v0 = VL_RAND_RESET_I(8);
    self->__Vdlyvset__u_uart__DOT__uartCtrl_1___05Fio_read_queueWithOccupancy__DOT__logic_ram__v0 = 0;
}
