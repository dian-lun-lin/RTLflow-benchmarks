// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleTop.h for the primary calling header

#include "VExampleTop_ExampleTop.h"
#include "VExampleTop__Syms.h"

#include "verilated_dpi.h"

//==========

VExampleTop_ExampleTop::VExampleTop_ExampleTop(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    VL_CELL(cpu_u_cpu, VExampleTop_CpuTop);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset(this);
}

void VExampleTop_ExampleTop::__Vconfigure(VExampleTop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VExampleTop_ExampleTop::~VExampleTop_ExampleTop() {
}

void VExampleTop_ExampleTop::_initial__TOP__ExampleTop__1(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VExampleTop_ExampleTop::_initial__TOP__ExampleTop__1\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_cntr = 0U;
}

void VExampleTop_ExampleTop::_settle__TOP__ExampleTop__2(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VExampleTop_ExampleTop::_settle__TOP__ExampleTop__2\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop.__PVT___zz_ExampleTop_2_ 
        = (0x1fU != (IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_cntr));
}

void VExampleTop_ExampleTop::_settle__TOP__ExampleTop__3(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VExampleTop_ExampleTop::_settle__TOP__ExampleTop__3\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered_ = 1U;
    if ((0x1fU != (IData)(vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_cntr))) {
        vlSymsp->TOP__ExampleTop.__PVT__clk_cpu_reset_gen_reset_unbuffered_ = 0U;
    }
}

void VExampleTop_ExampleTop::_ctor_var_reset(VExampleTop_ExampleTop* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VExampleTop_ExampleTop::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->osc_clk_in = VL_RAND_RESET_I(1);
    self->button = VL_RAND_RESET_I(1);
    self->led_red = VL_RAND_RESET_I(1);
    self->led_green = VL_RAND_RESET_I(1);
    self->led_blue = VL_RAND_RESET_I(1);
    self->uart_txd = VL_RAND_RESET_I(1);
    self->uart_rxd = VL_RAND_RESET_I(1);
    self->__PVT___zz_ExampleTop_2_ = VL_RAND_RESET_I(1);
    self->__PVT__clk_cpu_reset_gen_reset_unbuffered_ = VL_RAND_RESET_I(1);
    self->__PVT__clk_cpu_reset_gen_reset_cntr = VL_RAND_RESET_I(5);
    self->__PVT__clk_cpu_reset_gen_reset_unbuffered___05FregNext = VL_RAND_RESET_I(1);
}
