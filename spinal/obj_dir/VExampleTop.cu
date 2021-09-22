// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleTop.h for the primary calling header

#include "VExampleTop.h"
#include "VExampleTop__Syms.h"

#include "verilated_dpi.h"
#include "rtlflow.h"

//==========

VerilatedContext* VExampleTop::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VExampleTop::eval_step() {
    _rtlflow.run();
}

__global__
void _last_assign(CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_last_assign\n"); );
    // Body
    // Final
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583] 
        = _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576];
}

__global__
void _change_request(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_change_request\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    IData __req = false;
    __req |= vlTOPp->_change_request_1(_csignals, _ssignals, _isignals, _qsignals);
    change[blockDim.x * blockIdx.x + threadIdx.x] = __req;
}

__device__
IData VExampleTop::_change_request_1(CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_change_request_1\n"); );
    // Body
    // Change detection
    IData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VExampleTop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_eval_debug_assertions\n"); );
    for(size_t i = 0; i < NUM_TESTBENCHES; ++i) {
        // Body
        if (VL_UNLIKELY((_csignals[i + NUM_TESTBENCHES * 576] 
                         & 0xfeU))) {
            Verilated::overWidthError("osc_clk_in");}
        if (VL_UNLIKELY((_csignals[i + NUM_TESTBENCHES * 577] 
                         & 0xfeU))) {
            Verilated::overWidthError("button");}
        if (VL_UNLIKELY((_csignals[i + NUM_TESTBENCHES * 582] 
                         & 0xfeU))) {
            Verilated::overWidthError("uart_rxd");}
    }
}
#endif  // VL_DEBUG

__global__
void __Vmtask__1(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__38(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__3(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__39(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__4(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__40(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__5(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__41(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__6(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__42(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__9(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__43(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__10(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu._sequent__TOP__ExampleTop__cpu_u_cpu__34(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__12(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__44(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__8(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__45(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__13(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__46(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__2(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__47(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__7(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__48(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__11(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__49(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__14(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__50(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__15(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu._sequent__TOP__ExampleTop__cpu_u_cpu__35(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__16(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__51(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__17(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__52(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__18(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__53(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__19(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop._sequent__TOP__ExampleTop__4(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}

__global__
void __Vmtask__20(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change) {
    if(!change[blockDim.x * blockIdx.x + threadIdx.x]) return;
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 576]) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 583])))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu._sequent__TOP__ExampleTop__cpu_u_cpu__36(vlSymsp, _csignals, _ssignals, _isignals, _qsignals);
    }
}
