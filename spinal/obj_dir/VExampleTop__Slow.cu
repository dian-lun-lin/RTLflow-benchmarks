// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleTop.h for the primary calling header

#include "VExampleTop.h"
#include "VExampleTop__Syms.h"

#include "verilated_dpi.h"
#include "rtlflow.h"

//==========

VExampleTop::VExampleTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VExampleTop__Syms* __restrict vlSymsp = __VlSymsp = new VExampleTop__Syms(_vcontextp__, this, _rtlflow._csignals, _rtlflow._ssignals, _rtlflow._isignals, _rtlflow._qsignals, name());
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(ExampleTop, VExampleTop_ExampleTop);
    // Reset internal values
    _rtlflow.initialize(vlSymsp);
    

    // Reset structure values
    _ctor_var_reset(this, _rtlflow._csignals, _rtlflow._ssignals, _rtlflow._isignals, _rtlflow._qsignals);
}

void VExampleTop::__Vconfigure(VExampleTop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VExampleTop::~VExampleTop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

__device__
void VExampleTop::_settle__TOP__1(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_settle__TOP__1\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 581] 
        = _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 8994];
}

__device__
void VExampleTop::_settle__TOP__2(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_settle__TOP__2\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 580] 
        = (1U & ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 8995]) 
                 >> 2U));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 579] 
        = (1U & ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 8995]) 
                 >> 1U));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 578] 
        = (1U & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 8995]));
}

void VExampleTop::_eval_initial(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_eval_initial\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__1(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__1(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop._initial__TOP__ExampleTop__1(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__2(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    for(size_t i = 0; i < NUM_TESTBENCHES; ++i) {
        // Final
        _csignals[i + NUM_TESTBENCHES * 583] = _csignals[i + NUM_TESTBENCHES * 576];
    }
}

void VExampleTop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::final\n"); );
    // Variables
    for(size_t i = 0; i < NUM_TESTBENCHES; ++i) {
        VExampleTop__Syms* __restrict vlSymsp = this->__VlSymsp;
        VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    }
}

__global__
void _eval_settle(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_eval_settle\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop._settle__TOP__ExampleTop__2(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__2(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__3(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__3(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__1(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__4(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__2(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__5(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__3(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__6(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__4(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__4(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__5(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__7(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__6(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__5(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__8(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__6(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__9(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__7(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__10(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__8(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__11(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__9(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__12(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlTOPp->_settle__TOP__2(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__13(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__10(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__14(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__11(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__15(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__12(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__16(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__13(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__17(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__14(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__18(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__15(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__19(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__16(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__20(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__17(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__21(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__18(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__22(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__19(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__23(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__20(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__24(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__21(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__25(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__22(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__26(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__23(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__27(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__7(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__24(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__28(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__25(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__29(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__26(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__30(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__8(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__27(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__9(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__31(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__28(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__32(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__29(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__10(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop._settle__TOP__ExampleTop__3(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__11(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__30(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__33(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__31(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__12(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__32(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__13(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__34(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__33(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__14(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__35(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__15(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__36(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__16(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__37(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu._settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__17(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
}

void VExampleTop::_ctor_var_reset(VExampleTop* self, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_ctor_var_reset\n"); );
    for(size_t i = 0; i < NUM_TESTBENCHES; ++i) {
        // Body
        if (false && self) {}  // Prevent unused
        _csignals[i + 576 * NUM_TESTBENCHES] = VL_RAND_RESET_I(1);
        _csignals[i + 577 * NUM_TESTBENCHES] = VL_RAND_RESET_I(1);
        _csignals[i + 578 * NUM_TESTBENCHES] = VL_RAND_RESET_I(1);
        _csignals[i + 579 * NUM_TESTBENCHES] = VL_RAND_RESET_I(1);
        _csignals[i + 580 * NUM_TESTBENCHES] = VL_RAND_RESET_I(1);
        _csignals[i + 581 * NUM_TESTBENCHES] = VL_RAND_RESET_I(1);
        _csignals[i + 582 * NUM_TESTBENCHES] = VL_RAND_RESET_I(1);
    }
}
