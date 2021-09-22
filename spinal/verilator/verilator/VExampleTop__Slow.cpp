// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleTop.h for the primary calling header

#include "VExampleTop.h"
#include "VExampleTop__Syms.h"

#include "verilated_dpi.h"

//==========

VExampleTop::VExampleTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
, __Vm_mt_5(1), __Vm_mt_6(1), __Vm_mt_12(1), __Vm_mt_8(1), 
  __Vm_mt_13(3), __Vm_mt_2(1), __Vm_mt_11(1), __Vm_mt_14(2), 
  __Vm_mt_15(1), __Vm_mt_18(1), __Vm_mt_20(1), __Vm_mt_final(2), 
  __Vm_threadPoolp(nullptr), __Vm_even_cycle(false) {
    VExampleTop__Syms* __restrict vlSymsp = __VlSymsp = new VExampleTop__Syms(_vcontextp__, this, name());
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(ExampleTop, VExampleTop_ExampleTop);
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
    __Vm_threadPoolp = new VlThreadPool(vlSymsp->_vm_contextp__, 1, 0);
}

void VExampleTop::__Vconfigure(VExampleTop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VExampleTop::~VExampleTop() {
    VL_DO_CLEAR(delete __Vm_threadPoolp, __Vm_threadPoolp = nullptr);
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VExampleTop::_settle__TOP__1(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_settle__TOP__1\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uart_txd = vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_uart__DOT__uartCtrl_1___DOT__tx__DOT___zz_UartCtrlTx_1_;
}

void VExampleTop::_settle__TOP__2(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_settle__TOP__2\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->led_blue = (1U & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__io_gpio_write_driver) 
                              >> 2U));
    vlTOPp->led_green = (1U & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__io_gpio_write_driver) 
                               >> 1U));
    vlTOPp->led_red = (1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu.__PVT__u_led_ctrl__DOT__io_gpio_write_driver));
}

void VExampleTop::_eval_initial(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_eval_initial\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__1(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__1(vlSymsp);
    vlSymsp->TOP__ExampleTop._initial__TOP__ExampleTop__1(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__2(vlSymsp);
    vlTOPp->__Vclklast__TOP__osc_clk_in = vlTOPp->osc_clk_in;
}

void VExampleTop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::final\n"); );
    // Variables
    VExampleTop__Syms* __restrict vlSymsp = this->__VlSymsp;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VExampleTop::_eval_settle(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_eval_settle\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__ExampleTop._settle__TOP__ExampleTop__2(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__2(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__3(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__3(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__1(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__4(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__2(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__5(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__3(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__6(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__4(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__4(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__5(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__7(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__6(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__5(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__8(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__6(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__9(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__7(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__10(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__8(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__11(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__9(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__12(vlSymsp);
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__13(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__10(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__14(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__11(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__15(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__12(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__16(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__13(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__17(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__14(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__18(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__15(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__19(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__16(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__20(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__17(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__21(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__18(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__22(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__19(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__23(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__20(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__24(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__21(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__25(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__22(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__26(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__23(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__27(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__7(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__24(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__28(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__25(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__29(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__26(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__30(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__8(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__27(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__9(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__31(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__28(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__32(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__29(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__10(vlSymsp);
    vlSymsp->TOP__ExampleTop._settle__TOP__ExampleTop__3(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__11(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__30(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__33(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__31(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__12(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__32(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__13(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__34(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__33(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__14(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__35(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__15(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__36(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__16(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__37(vlSymsp);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__17(vlSymsp);
}

void VExampleTop::_ctor_var_reset(VExampleTop* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->osc_clk_in = VL_RAND_RESET_I(1);
    self->button = VL_RAND_RESET_I(1);
    self->led_red = VL_RAND_RESET_I(1);
    self->led_green = VL_RAND_RESET_I(1);
    self->led_blue = VL_RAND_RESET_I(1);
    self->uart_txd = VL_RAND_RESET_I(1);
    self->uart_rxd = VL_RAND_RESET_I(1);
}
