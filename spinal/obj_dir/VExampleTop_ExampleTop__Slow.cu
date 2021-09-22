// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleTop.h for the primary calling header

#include "VExampleTop_ExampleTop.h"
#include "VExampleTop__Syms.h"

#include "verilated_dpi.h"

//==========

VExampleTop_ExampleTop::VExampleTop_ExampleTop(CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    VL_CELL(cpu_u_cpu, VExampleTop_CpuTop);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset(this, _csignals, _ssignals, _isignals, _qsignals);
}

void VExampleTop_ExampleTop::__Vconfigure(VExampleTop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VExampleTop_ExampleTop::~VExampleTop_ExampleTop() {
}

void VExampleTop_ExampleTop::_initial__TOP__ExampleTop__1(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VExampleTop_ExampleTop::_initial__TOP__ExampleTop__1\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    for(size_t i = 0; i < NUM_TESTBENCHES; ++i) {
        // Body
        _csignals[i + NUM_TESTBENCHES * 10016] = 0U;
    }
}

__device__
void VExampleTop_ExampleTop::_settle__TOP__ExampleTop__2(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VExampleTop_ExampleTop::_settle__TOP__ExampleTop__2\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 10017] 
        = (0x1fU != (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 10016]));
}

__device__
void VExampleTop_ExampleTop::_settle__TOP__ExampleTop__3(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VExampleTop_ExampleTop::_settle__TOP__ExampleTop__3\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 10018] = 1U;
    if ((0x1fU != (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 10016]))) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 10018] = 0U;
    }
}

void VExampleTop_ExampleTop::_ctor_var_reset(VExampleTop_ExampleTop* self, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VExampleTop_ExampleTop::_ctor_var_reset\n"); );
    for(size_t i = 0; i < NUM_TESTBENCHES; ++i) {
        // Body
        if (false && self) {}  // Prevent unused
    }
}
