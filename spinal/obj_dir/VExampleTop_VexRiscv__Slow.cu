// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleTop.h for the primary calling header

#include "VExampleTop_VexRiscv.h"
#include "VExampleTop__Syms.h"

#include "verilated_dpi.h"

//==========

VExampleTop_VexRiscv::VExampleTop_VexRiscv(CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset(this, _csignals, _ssignals, _isignals, _qsignals);
}

void VExampleTop_VexRiscv::__Vconfigure(VExampleTop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VExampleTop_VexRiscv::~VExampleTop_VexRiscv() {
}

void VExampleTop_VexRiscv::_initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__1(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__1\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    for(size_t i = 0; i < NUM_TESTBENCHES; ++i) {
        // Body
        _csignals[i + NUM_TESTBENCHES * 662] = 0U;
    }
}

void VExampleTop_VexRiscv::_initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__2(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__2\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    for(size_t i = 0; i < NUM_TESTBENCHES; ++i) {
        // Body
        _qsignals[i + NUM_TESTBENCHES * 0] = 0ULL;
    }
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__3(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__3\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 83] 
        = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 82];
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__4(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__4\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84] 
        = ((0xfffffff8U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84]) 
           | ((4U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                     >> 0x1bU)) | ((2U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                          >> 0x1dU)) 
                                   | (1U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                            >> 0x1fU)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84] 
        = ((0xffffffc7U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84]) 
           | ((0x20U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                        >> 0x15U)) | ((0x10U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                                >> 0x17U)) 
                                      | (8U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                               >> 0x19U)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84] 
        = ((0xfffffe3fU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84]) 
           | ((0x100U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                         >> 0xfU)) | ((0x80U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                                >> 0x11U)) 
                                      | (0x40U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                                  >> 0x13U)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84] 
        = ((0xfffff1ffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84]) 
           | ((0x800U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                         >> 9U)) | ((0x400U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                               >> 0xbU)) 
                                    | (0x200U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                                 >> 0xdU)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84] 
        = ((0xffff8fffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84]) 
           | ((0x4000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                          >> 3U)) | ((0x2000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                                 >> 5U)) 
                                     | (0x1000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                                   >> 7U)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84] 
        = ((0xfffc7fffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84]) 
           | ((0x20000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                           << 3U)) | ((0x10000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                          >> 1U)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84] 
        = ((0xffe3ffffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84]) 
           | ((0x100000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                            << 9U)) | ((0x80000U & 
                                        (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                         << 5U)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84] 
        = ((0xff1fffffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84]) 
           | ((0x800000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                            << 0xfU)) | ((0x400000U 
                                          & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                               << 0xbU)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84] 
        = ((0xf8ffffffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84]) 
           | ((0x4000000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                             << 0x15U)) | ((0x2000000U 
                                            & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                                 << 0x11U)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84] 
        = ((0xc7ffffffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84]) 
           | ((0x20000000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                              << 0x1bU)) | ((0x10000000U 
                                             & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                                  << 0x17U)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84] 
        = ((0x3fffffffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84]) 
           | ((0x80000000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                              << 0x1fU)) | (0x40000000U 
                                            & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                               << 0x1dU))));
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__5(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__5\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86] 
        = ((0xfffffff8U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86]) 
           | ((4U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                     >> 0x1bU)) | ((2U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                          >> 0x1dU)) 
                                   | (1U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                            >> 0x1fU)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86] 
        = ((0xffffffc7U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86]) 
           | ((0x20U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                        >> 0x15U)) | ((0x10U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                                >> 0x17U)) 
                                      | (8U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                               >> 0x19U)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86] 
        = ((0xfffffe3fU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86]) 
           | ((0x100U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                         >> 0xfU)) | ((0x80U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                                >> 0x11U)) 
                                      | (0x40U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                                  >> 0x13U)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86] 
        = ((0xfffff1ffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86]) 
           | ((0x800U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                         >> 9U)) | ((0x400U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                               >> 0xbU)) 
                                    | (0x200U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                                 >> 0xdU)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86] 
        = ((0xffff8fffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86]) 
           | ((0x4000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                          >> 3U)) | ((0x2000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                                 >> 5U)) 
                                     | (0x1000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                                   >> 7U)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86] 
        = ((0xfffc7fffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86]) 
           | ((0x20000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                           << 3U)) | ((0x10000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                          >> 1U)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86] 
        = ((0xffe3ffffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86]) 
           | ((0x100000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                            << 9U)) | ((0x80000U & 
                                        (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                         << 5U)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86] 
        = ((0xff1fffffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86]) 
           | ((0x800000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                            << 0xfU)) | ((0x400000U 
                                          & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                               << 0xbU)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86] 
        = ((0xf8ffffffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86]) 
           | ((0x4000000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                             << 0x15U)) | ((0x2000000U 
                                            & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                                 << 0x11U)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86] 
        = ((0xc7ffffffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86]) 
           | ((0x20000000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                              << 0x1bU)) | ((0x10000000U 
                                             & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                                  << 0x17U)))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86] 
        = ((0x3fffffffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86]) 
           | ((0x80000000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                              << 0x1fU)) | (0x40000000U 
                                            & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87] 
                                               << 0x1dU))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 89] 
        = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 88];
    if ((1U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 663]))) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 89] 
            = ((0xffffff00U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 89]) 
               | (0xffU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 88] 
                           >> 8U)));
    } else if ((2U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 663]))) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 89] 
            = ((0xffff0000U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 89]) 
               | (0xffffU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 88] 
                             >> 0x10U)));
    } else if ((3U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 663]))) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 89] 
            = ((0xffffff00U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 89]) 
               | (0xffU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 88] 
                           >> 0x18U)));
    }
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__6(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__6\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 90] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 664]) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 90] 
            = (IData)(_qsignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 0]);
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 91] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 665]) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 91] 
            = (IData)((_qsignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 0] 
                       >> 0x20U));
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 92] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 666]) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 92] 
            = ((0x7fffffffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 92]) 
               | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 667]) 
                  << 0x1fU));
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 92] 
            = ((0xfffffff0U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 92]) 
               | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 668]));
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 598] 
        = (1U & ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 669]) 
                 | (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 93] 
                    >> 1U)));
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__7(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__7\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 584])
            ? (IData)((_qsignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 1] 
                       >> 1U)) : _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 165]);
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__8(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__8\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 670] 
        = _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 617];
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 671] 
        = _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 617];
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__9(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__9\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 672] 
        = (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
           == _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 94]);
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 95] 
        = ((1U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 673]))
            ? _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 84]
            : _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85]);
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 585] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 748]) 
           & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 584])));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 675] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 674]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 617]));
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 676]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 675] = 1U;
    }
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__10(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__10\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 642] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 617]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 674]));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 96] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 677]) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 96] 
            = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 97];
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 98] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 678]) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 98] 
            = ((0xfffff7ffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 98]) 
               | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 593]) 
                  << 0xbU));
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 98] 
            = ((0xffffff7fU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 98]) 
               | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 587]) 
                  << 7U));
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 98] 
            = ((0xfffffff7U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 98]) 
               | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 590]) 
                  << 3U));
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 99] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 679]) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 99] 
            = ((0xfffff7ffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 99]) 
               | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 594]) 
                  << 0xbU));
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 99] 
            = ((0xffffff7fU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 99]) 
               | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 588]) 
                  << 7U));
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 99] 
            = ((0xfffffff7U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 99]) 
               | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 591]) 
                  << 3U));
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 100] 
        = ((_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
            + ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 680])
                ? (~ _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 94])
                : _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 94])) 
           + ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 680])
               ? 1U : 0U));
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 681]) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 100] 
            = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85];
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 602] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 617]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 618]));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 597])
            ? ((0xffff0000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60] 
                               << 0x10U)) | (IData)(_ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 0]))
            : ((0xffff0000U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60]) 
               | (0xffffU & ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 598])
                              ? (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60] 
                                 >> 0x10U) : _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60]))));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 596] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 598]) 
           | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 597]));
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__11(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__11\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 683] 
        = _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 682];
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 684]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 683] = 0U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 654] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 584]) 
           | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 748]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 685] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 675]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 685] = 1U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 586] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 585]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 586] = 1U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 686] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 654]) 
           & (0U != (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 652])));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 589] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 587]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 588]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 592] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 590]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 591]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 595] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 593]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 594]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 599] 
        = (((((~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 596])) 
              & (3U != (3U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60]))) 
             & (3U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60] 
                             >> 0x10U)))) | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 597]) 
                                             & (3U 
                                                == 
                                                (3U 
                                                 & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60] 
                                                    >> 0x10U))))) 
           | (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 598]) 
               & (3U == (3U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61]))) 
              & (3U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60] 
                              >> 0x10U)))));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687] 
        = ((0x18U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                     << 3U)) | (7U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                      >> 0xdU)));
    _ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 1] 
        = ((0x40U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                     << 1U)) | ((0x38U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                          >> 7U)) | 
                                (4U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                       >> 4U))));
    _ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 2] 
        = ((0xfe0U & ((- (IData)((1U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                        >> 0xcU)))) 
                      << 5U)) | (0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                          >> 2U)));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 101] 
        = ((0x1ff800U & ((- (IData)((1U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                           >> 0xcU)))) 
                         << 0xbU)) | ((0x400U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                 << 2U)) 
                                      | ((0x300U & 
                                          (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                           >> 1U)) 
                                         | ((0x80U 
                                             & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                << 1U)) 
                                            | ((0x40U 
                                                & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                   >> 1U)) 
                                               | ((0x20U 
                                                   & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                      << 3U)) 
                                                  | ((0x10U 
                                                      & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                         >> 7U)) 
                                                     | (0xeU 
                                                        & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                           >> 2U)))))))));
    _ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 3] 
        = ((0x1f00U & ((- (IData)((1U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                         >> 0xcU)))) 
                       << 8U)) | ((0xc0U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                            << 1U)) 
                                  | ((0x20U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                               << 3U)) 
                                     | ((0x18U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                  >> 7U)) 
                                        | (6U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                 >> 2U))))));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 689] 
        = (1U & (((1U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                         >> 0x1fU)) == (1U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 94] 
                                              >> 0x1fU)))
                  ? (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 100] 
                     >> 0x1fU) : ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 688])
                                   ? (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 94] 
                                      >> 0x1fU) : (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                                                   >> 0x1fU))));
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__12(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__12\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 691] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 690]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 683]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 692] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 654]) 
           & (0U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 652])));
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__13(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__13\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 102] 
        = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 64];
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 693] 
        = (0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 64] 
                    >> 7U));
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__14(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__14\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    RfWide<3>/*95:0*/ __Vtemp2;
    RfWide<3>/*95:0*/ __Vtemp3;
    RfWide<3>/*95:0*/ __Vtemp4;
    RfWide<3>/*95:0*/ __Vtemp5;
    // Body
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 103] = 0U;
    if ((0x10U & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687]))) {
        if ((1U & (~ ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687]) 
                      >> 3U)))) {
            if ((4U & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687]))) {
                if ((2U & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687]))) {
                    if ((1U & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687])))) {
                        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 103] 
                            = (0x12023U | (((0xc000000U 
                                             & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                << 0x13U)) 
                                            | (0x2000000U 
                                               & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                  << 0xdU))) 
                                           | ((0x1f00000U 
                                               & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                  << 0x12U)) 
                                              | (0xe00U 
                                                 & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61]))));
                    }
                } else if ((1U & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687])))) {
                    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 103] 
                        = ((0x400U == (0x7ffU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                 >> 2U)))
                            ? 0x100073U : ((0U == (0x1fU 
                                                   & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                      >> 2U)))
                                            ? (0x67U 
                                               | ((0xf8000U 
                                                   & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                      << 8U)) 
                                                  | (((0x1000U 
                                                       & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61])
                                                       ? 1U
                                                       : 0U) 
                                                     << 7U)))
                                            : (0x33U 
                                               | ((0x1f00000U 
                                                   & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                      << 0x12U)) 
                                                  | ((((0x1000U 
                                                        & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61])
                                                        ? 
                                                       (0x1fU 
                                                        & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                           >> 7U))
                                                        : 0U) 
                                                      << 0xfU) 
                                                     | (0xf80U 
                                                        & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61]))))));
                }
            } else if ((2U & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687]))) {
                if ((1U & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687])))) {
                    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 103] 
                        = (0x12003U | ((0xc000000U 
                                        & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                           << 0x18U)) 
                                       | ((0x2000000U 
                                           & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                              << 0xdU)) 
                                          | ((0x1c00000U 
                                              & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                 << 0x12U)) 
                                             | (0xf80U 
                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61])))));
                }
            } else if ((1U & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687])))) {
                _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 103] 
                    = (0x1013U | ((0x1f00000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                 << 0x12U)) 
                                  | ((0xf8000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                  << 8U)) 
                                     | (0xf80U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61]))));
            }
        }
    } else if ((8U & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687]))) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 103] 
            = ((4U & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687]))
                ? ((2U & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687]))
                    ? ((1U & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687]))
                        ? (0x41063U | ((0x80000000U 
                                        & ((IData)(_ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 3]) 
                                           << 0x13U)) 
                                       | ((0x7e000000U 
                                           & ((IData)(_ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 3]) 
                                              << 0x14U)) 
                                          | ((0x38000U 
                                              & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                 << 8U)) 
                                             | ((0xf00U 
                                                 & ((IData)(_ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 3]) 
                                                    << 7U)) 
                                                | (0x80U 
                                                   & ((IData)(_ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 3]) 
                                                      >> 4U)))))))
                        : (0x40063U | ((0x80000000U 
                                        & ((IData)(_ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 3]) 
                                           << 0x13U)) 
                                       | ((0x7e000000U 
                                           & ((IData)(_ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 3]) 
                                              << 0x14U)) 
                                          | ((0x38000U 
                                              & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                 << 8U)) 
                                             | ((0xf00U 
                                                 & ((IData)(_ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 3]) 
                                                    << 7U)) 
                                                | (0x80U 
                                                   & ((IData)(_ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 3]) 
                                                      >> 4U))))))))
                    : ((1U & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687]))
                        ? (0x6fU | ((0x80000000U & 
                                     (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 101] 
                                      << 0xbU)) | (
                                                   (0x7fe00000U 
                                                    & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 101] 
                                                       << 0x14U)) 
                                                   | ((0x100000U 
                                                       & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 101] 
                                                          << 9U)) 
                                                      | (0xff000U 
                                                         & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 101])))))
                        : (0x40400U | ((0xfe000000U 
                                        & (((2U == 
                                             (3U & 
                                              (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                               >> 0xaU)))
                                             ? (- (IData)(
                                                          (1U 
                                                           & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                              >> 0xcU))))
                                             : (((1U 
                                                  == 
                                                  (3U 
                                                   & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                      >> 0xaU))) 
                                                 | (IData)(
                                                           (0xc00U 
                                                            == 
                                                            (0xc60U 
                                                             & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61])))) 
                                                << 5U)) 
                                           << 0x19U)) 
                                       | ((0x1f00000U 
                                           & (((IData)(
                                                       (0xc00U 
                                                        != 
                                                        (0xc00U 
                                                         & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61])))
                                                ? (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                   >> 2U)
                                                : (8U 
                                                   | (7U 
                                                      & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                         >> 2U)))) 
                                              << 0x14U)) 
                                          | ((0x38000U 
                                              & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                 << 8U)) 
                                             | ((((0U 
                                                   == 
                                                   (3U 
                                                    & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                       >> 0xaU)))
                                                   ? 5U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                        >> 0xaU)))
                                                    ? 5U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                         >> 0xaU)))
                                                     ? 7U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                          >> 5U)))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                           >> 5U)))
                                                       ? 4U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                            >> 5U)))
                                                        ? 6U
                                                        : 7U)))))) 
                                                 << 0xcU) 
                                                | ((0x380U 
                                                    & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61]) 
                                                   | ((3U 
                                                       != 
                                                       (3U 
                                                        & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                           >> 0xaU)))
                                                       ? 0x13U
                                                       : 0x33U)))))))))
                : ((2U & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687]))
                    ? ((1U & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687]))
                        ? ((2U == (0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                            >> 7U)))
                            ? (0x13U | ((0xe0000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                           >> 0xcU)))) 
                                            << 0x1dU)) 
                                        | ((0x18000000U 
                                            & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                               << 0x18U)) 
                                           | ((0x4000000U 
                                               & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                  << 0x15U)) 
                                              | ((0x2000000U 
                                                  & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                     << 0x17U)) 
                                                 | ((0x1000000U 
                                                     & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                        << 0x12U)) 
                                                    | ((0xf8000U 
                                                        & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                           << 8U)) 
                                                       | (0xf80U 
                                                          & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61]))))))))
                            : (0x37U | (((0xfffe0000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                            >> 0xcU)))) 
                                             << 0x11U)) 
                                         | (0x1f000U 
                                            & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                               << 0xaU))) 
                                        | (0xf80U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61]))))
                        : (0x13U | (((IData)(_ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 2]) 
                                     << 0x14U) | (0xf80U 
                                                  & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61]))))
                    : ((1U & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687]))
                        ? (0xefU | ((0x80000000U & 
                                     (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 101] 
                                      << 0xbU)) | (
                                                   (0x7fe00000U 
                                                    & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 101] 
                                                       << 0x14U)) 
                                                   | ((0x100000U 
                                                       & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 101] 
                                                          << 9U)) 
                                                      | (0xff000U 
                                                         & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 101])))))
                        : (0x13U | (((IData)(_ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 2]) 
                                     << 0x14U) | ((0xf8000U 
                                                   & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                      << 8U)) 
                                                  | (0xf80U 
                                                     & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61])))))));
    } else if ((4U & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687]))) {
        if ((2U & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687]))) {
            if ((1U & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687])))) {
                _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 103] 
                    = (0x842023U | ((0xfe000000U & 
                                     ((IData)(_ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 1]) 
                                      << 0x14U)) | 
                                    ((0x700000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                   << 0x12U)) 
                                     | ((0x38000U & 
                                         (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                          << 8U)) | 
                                        (0xf80U & ((IData)(_ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 1]) 
                                                   << 7U))))));
            }
        }
    } else if ((2U & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687]))) {
        if ((1U & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687])))) {
            _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 103] 
                = (0x42403U | (((IData)(_ssignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 1]) 
                                << 0x14U) | ((0x38000U 
                                              & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                 << 8U)) 
                                             | (0x380U 
                                                & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                   << 5U)))));
        }
    } else if ((1U & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 687])))) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 103] 
            = (0x10413U | ((0x3c000000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                           << 0x13U)) 
                           | ((0x3000000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                             << 0xdU)) 
                              | ((0x800000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                               << 0x12U)) 
                                 | ((0x400000U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                  << 0x10U)) 
                                    | (0x380U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61] 
                                                 << 5U)))))));
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 76] 
        = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 104];
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 619]) {
        if ((1U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 694]))) {
            _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 76] 
                = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 86];
        } else if (((2U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 694])) 
                    | (3U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 694])))) {
            _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 76] 
                = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 87];
        }
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 75] 
        = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 105];
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 617]) 
         & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 695]))) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 75] 
            = ((0U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 64] 
                             >> 0xcU))) ? ((0xffffff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 89] 
                                                               >> 7U) 
                                                              & (~ 
                                                                 (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 64] 
                                                                  >> 0xeU)))))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 89]))
                : ((1U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 64] 
                                 >> 0xcU))) ? ((0xffff0000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 89] 
                                                                   >> 0xfU) 
                                                                  & (~ 
                                                                     (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 64] 
                                                                      >> 0xeU)))))) 
                                                   << 0x10U)) 
                                               | (0xffffU 
                                                  & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 89]))
                    : _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 89]));
    }
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 617]) 
         & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 696]))) {
        __Vtemp2[0U] = (IData)(_qsignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 2]);
        __Vtemp2[1U] = ((0xfff00000U & ((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (_qsignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 2] 
                                                               >> 0x33U))))) 
                                        << 0x14U)) 
                        | (IData)((_qsignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 2] 
                                   >> 0x20U)));
        __Vtemp2[2U] = (3U & ((- (IData)((1U & (IData)(
                                                       (_qsignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 2] 
                                                        >> 0x33U))))) 
                              >> 0xcU));
        VL_EXTEND_WQ(66,34, __Vtemp3, _qsignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 3]);
        VL_SHIFTL_WWI(66,66,32, __Vtemp4, __Vtemp3, 0x20U);
        VL_ADD_W(3, __Vtemp5, __Vtemp2, __Vtemp4);
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 75] 
            = ((0U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 64] 
                             >> 0xcU))) ? (IData)(_qsignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 2])
                : __Vtemp5[1U]);
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 62] = 0U;
    if ((3U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 600]))) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 62] = 8U;
    }
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__15(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__15\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 106] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 697]) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 106] 
            = ((0xffffe7ffU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 106]) 
               | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 698]) 
                  << 0xbU));
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 106] 
            = ((0xffffff7fU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 106]) 
               | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 699]) 
                  << 7U));
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 106] 
            = ((0xfffffff7U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 106]) 
               | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 700]) 
                  << 3U));
    }
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__16(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__16\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 625] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 619]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 701]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 601] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 684]) 
           | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 691]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 607] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 635]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 692]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 702] 
        = (0U != (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 617]) 
                   << 1U) | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 619])));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 643] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 619]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 703]));
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__17(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__17\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 107] 
        = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 75];
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__18(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__18\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 704] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 601]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 704] = 1U;
    }
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 602]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 704] = 1U;
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 63] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 601]) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 63] 
            = (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 62] 
               << 2U);
    }
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 602]) {
        if ((3U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 64] 
                          >> 0x1cU)))) {
            _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 63] 
                = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 65];
        }
    }
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__19(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__19\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 626] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 601]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 626] = 1U;
    }
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 602]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 626] = 1U;
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 108] 
        = (((_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 106] 
             | _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 98]) 
            | (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 99] 
               | _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 96])) 
           | ((_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 92] 
               | _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 90]) 
              | _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 91]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 610] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 625]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 610] = 1U;
    }
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__20(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__20\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 604] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 601]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 604] = 1U;
    }
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 602]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 604] = 1U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 631] = 0U;
    if (((((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 619]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 705])) 
          & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 706]))) 
         & (~ ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 8966]) 
               & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 8968]))))) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 631] = 1U;
    }
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__21(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__21\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 603] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 604]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 603] = 1U;
    }
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__22(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__22\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 708] 
        = ((~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 704])) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 707]));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 109] 
        = (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 68] 
           + ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 709])
               ? 2U : 4U));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 712] 
        = (((((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 621]) 
              & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 710])) 
             & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 711])) 
            & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 702]))) 
           & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 631])));
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__23(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__23\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 606] 
        = (0U != (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 604]) 
                   << 1U) | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 610])));
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__24(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__24\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 713] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 621]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 710]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 646] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 621]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 714]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 605] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 606]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 605] = 1U;
    }
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__25(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__25\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 608] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 607]) 
           & (~ (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 598]) 
                  & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 597]))) 
                 & (3U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60] 
                                 >> 0x10U))))));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 609] = 0U;
    if ((0U != (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 604]) 
                 << 2U) | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 610]) 
                           << 1U)))) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 609] = 1U;
    }
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__26(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__26\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 77] 
        = ((2U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 715]))
            ? ((2U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 716]))
                ? (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                   & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 94])
                : ((1U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 716]))
                    ? (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                       | _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 94])
                    : (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85] 
                       ^ _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 94])))
            : ((1U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 715]))
                ? (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 689])
                : _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 100]));
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 713]) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 77] 
            = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 108];
    }
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__27(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__27\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 717] = 0U;
    if ((((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 621]) 
          & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 718])) 
         & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 8976])))) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 717] = 1U;
    }
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 713]) {
        if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 702]) {
            _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 717] = 1U;
        }
    }
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__28(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__28\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 616] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 690]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 613]));
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__29(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__29\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 719] 
        = ((((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 621]) 
             & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 718])) 
            & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 631]))) 
           & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 606])));
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__30(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__30\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 630] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 717]) 
           | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 631]));
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__31(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__31\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 112] 
        = ((0x10000U & ((((1U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110] 
                                        >> 0xcU))) 
                          | (2U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110] 
                                          >> 0xcU)))) 
                         << 0x10U) & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 111] 
                                      >> 0xfU))) | 
           (0xffffU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 111] 
                       >> 0x10U)));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 114] 
        = ((0x10000U & (((1U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110] 
                                       >> 0xcU))) << 0x10U) 
                        & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 113] 
                           >> 0xfU))) | (0xffffU & 
                                         (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 113] 
                                          >> 0x10U)));
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__32(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__32\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 115] 
        = ((0x2000U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110])
            ? ((0x1000U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110])
                ? (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 108] 
                   & (~ _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85]))
                : (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 108] 
                   | _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85]))
            : _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 85]);
    if ((3U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 720]))) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 116] 
            = ((0xfffff000U & ((- (IData)((1U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110] 
                                                 >> 0x1fU)))) 
                               << 0xcU)) | (0xfffU 
                                            & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110] 
                                               >> 0x14U)));
    } else {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 116] 
            = ((2U == (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 720]))
                ? ((0xffe00000U & ((- (IData)((1U & 
                                               (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110] 
                                                >> 0x1fU)))) 
                                   << 0x15U)) | ((0x100000U 
                                                  & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110] 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110]) 
                                                    | ((0x800U 
                                                        & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110] 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110] 
                                                             >> 0x14U))))))
                : ((0xffffe000U & ((- (IData)((1U & 
                                               (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110] 
                                                >> 0x1fU)))) 
                                   << 0xdU)) | ((0x1000U 
                                                 & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110] 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110] 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110] 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110] 
                                                            >> 7U)))))));
        if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 721]) {
            _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 116] 
                = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 722])
                    ? 2U : 4U);
        }
    }
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__33(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__33\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 78] 
        = ((3U != (3U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61]))
            ? _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 103]
            : _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 61]);
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__34(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__34\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 645] 
        = ((0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 117] 
                     >> 7U)) == (0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                          >> 0xfU)));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 723] 
        = ((0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 117] 
                     >> 7U)) == (0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                          >> 0x14U)));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 648] 
        = ((0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110] 
                     >> 7U)) == (0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                          >> 0xfU)));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 724] 
        = ((0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 110] 
                     >> 7U)) == (0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                          >> 0x14U)));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 66] 
        = (((0x1000U == (0x1000U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
            << 0x19U) | (((0x2000U == (0x3000U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                          << 0x18U) | (((0U != (((0x48U 
                                                  == 
                                                  (0x48U 
                                                   & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                 << 5U) 
                                                | (((0x1010U 
                                                     == 
                                                     (0x1010U 
                                                      & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                    << 4U) 
                                                   | (((0x2010U 
                                                        == 
                                                        (0x2010U 
                                                         & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                       << 3U) 
                                                      | (((0x10U 
                                                           == 
                                                           (0x50U 
                                                            & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                          << 2U) 
                                                         | (((4U 
                                                              == 
                                                              (0xcU 
                                                               & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                             << 1U) 
                                                            | (0U 
                                                               == 
                                                               (0x28U 
                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])))))))) 
                                        << 0x17U) | 
                                       (((0U != (((4U 
                                                   == 
                                                   (4U 
                                                    & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                  << 4U) 
                                                 | (((0x2010U 
                                                      == 
                                                      (0x2030U 
                                                       & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                     << 3U) 
                                                    | (((0x10U 
                                                         == 
                                                         (0x1030U 
                                                          & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                        << 2U) 
                                                       | (((0x2020U 
                                                            == 
                                                            (0x2002060U 
                                                             & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                           << 1U) 
                                                          | (0x20U 
                                                             == 
                                                             (0x2003020U 
                                                              & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67]))))))) 
                                         << 0x16U) 
                                        | (((0x20U 
                                             == (0x20U 
                                                 & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                            << 0x15U) 
                                           | (((0x4000U 
                                                == 
                                                (0x4004U 
                                                 & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                               << 0x14U) 
                                              | (((0x2000U 
                                                   == 
                                                   (0x6004U 
                                                    & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                  << 0x13U) 
                                                 | (((0U 
                                                      != 
                                                      (((0x40U 
                                                         == 
                                                         (0x40U 
                                                          & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                        << 3U) 
                                                       | (((4U 
                                                            == 
                                                            (4U 
                                                             & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                           << 2U) 
                                                          | (((0x10U 
                                                               == 
                                                               (0x30U 
                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                              << 1U) 
                                                             | (0x20U 
                                                                == 
                                                                (0x2000020U 
                                                                 & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])))))) 
                                                     << 0x12U) 
                                                    | (((0U 
                                                         != 
                                                         (((0x40U 
                                                            == 
                                                            (0x50U 
                                                             & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                           << 1U) 
                                                          | (0x40U 
                                                             == 
                                                             (0x3040U 
                                                              & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])))) 
                                                        << 0x11U) 
                                                       | (((0U 
                                                            != 
                                                            (((0x48U 
                                                               == 
                                                               (0x48U 
                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                              << 1U) 
                                                             | (4U 
                                                                == 
                                                                (0x1cU 
                                                                 & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])))) 
                                                           << 0x10U) 
                                                          | (((0x40U 
                                                               == 
                                                               (0x58U 
                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                              << 0xfU) 
                                                             | (((0U 
                                                                  != 
                                                                  (((0x2000U 
                                                                     == 
                                                                     (0x2010U 
                                                                      & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                    << 1U) 
                                                                   | (0x1000U 
                                                                      == 
                                                                      (0x5000U 
                                                                       & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])))) 
                                                                 << 0xeU) 
                                                                | (((0U 
                                                                     != 
                                                                     (((4U 
                                                                        == 
                                                                        (4U 
                                                                         & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                       << 1U) 
                                                                      | (0x20U 
                                                                         == 
                                                                         (0x70U 
                                                                          & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])))) 
                                                                    << 0xdU) 
                                                                   | (((0U 
                                                                        != 
                                                                        (((4U 
                                                                           == 
                                                                           (4U 
                                                                            & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                          << 1U) 
                                                                         | (0U 
                                                                            == 
                                                                            (0x20U 
                                                                             & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])))) 
                                                                       << 0xcU) 
                                                                      | (((0x50U 
                                                                           == 
                                                                           (0x3050U 
                                                                            & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                          << 0xbU) 
                                                                         | (((0U 
                                                                              != 
                                                                              (((0x40U 
                                                                                == 
                                                                                (0x44U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                                << 2U) 
                                                                               | (((0x2010U 
                                                                                == 
                                                                                (0x2014U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                                << 1U) 
                                                                                | (0x40000030U 
                                                                                == 
                                                                                (0x40000034U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67]))))) 
                                                                             << 0xaU) 
                                                                            | (((0U 
                                                                                != 
                                                                                (((0U 
                                                                                == 
                                                                                (0x44U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x18U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                                << 2U) 
                                                                                | (((0x2000U 
                                                                                == 
                                                                                (0x6004U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                                << 1U) 
                                                                                | (0x1000U 
                                                                                == 
                                                                                (0x5004U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])))))) 
                                                                                << 9U) 
                                                                               | (((0U 
                                                                                == 
                                                                                (0x58U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                                << 8U) 
                                                                                | (((0x2000030U 
                                                                                == 
                                                                                (0x2000074U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                                << 7U) 
                                                                                | (((0U 
                                                                                != 
                                                                                (((0x1050U 
                                                                                == 
                                                                                (0x1050U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                                << 1U) 
                                                                                | (0x2050U 
                                                                                == 
                                                                                (0x2050U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])))) 
                                                                                << 6U) 
                                                                                | (((0U 
                                                                                != 
                                                                                (((4U 
                                                                                == 
                                                                                (0x14U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                                << 1U) 
                                                                                | (0x4050U 
                                                                                == 
                                                                                (0x4050U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])))) 
                                                                                << 5U) 
                                                                                | (((0U 
                                                                                != 
                                                                                (((4U 
                                                                                == 
                                                                                (0x44U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                                << 1U) 
                                                                                | (0x4050U 
                                                                                == 
                                                                                (0x4050U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])))) 
                                                                                << 4U) 
                                                                                | (((0x5010U 
                                                                                == 
                                                                                (0x7054U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                != 
                                                                                (((0x40001010U 
                                                                                == 
                                                                                (0x40003054U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                                << 2U) 
                                                                                | (((0x1010U 
                                                                                == 
                                                                                (0x7034U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                                << 1U) 
                                                                                | (0x1010U 
                                                                                == 
                                                                                (0x2007054U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67]))))) 
                                                                                << 2U) 
                                                                                | (((0U 
                                                                                != 
                                                                                (((0x20U 
                                                                                == 
                                                                                (0x34U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])) 
                                                                                << 1U) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x64U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])))) 
                                                                                << 1U) 
                                                                                | (0x24U 
                                                                                == 
                                                                                (0x64U 
                                                                                & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67])))))))))))))))))))))))))));
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__35(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__35\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 611] 
        = (1U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 66] 
                 >> 0x17U));
    if ((0U == (0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                         >> 7U)))) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 611] = 0U;
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 119] 
        = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 118];
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 640]) {
        if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 641]) 
             == (0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                          >> 0x14U)))) {
            _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 119] 
                = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 74];
        }
    }
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 642]) {
        if (((0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 64] 
                       >> 7U)) == (0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                            >> 0x14U)))) {
            _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 119] 
                = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 75];
        }
    }
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 643]) {
        if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 644]) {
            if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 723]) {
                _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 119] 
                    = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 76];
            }
        }
    }
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 646]) {
        if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 647]) {
            if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 724]) {
                _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 119] 
                    = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 77];
            }
        }
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 73] 
        = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 72];
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 640]) {
        if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 641]) 
             == (0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                          >> 0xfU)))) {
            _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 73] 
                = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 74];
        }
    }
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 642]) {
        if (((0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 64] 
                       >> 7U)) == (0x1fU & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                            >> 0xfU)))) {
            _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 73] 
                = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 75];
        }
    }
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 643]) {
        if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 644]) {
            if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 645]) {
                _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 73] 
                    = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 76];
            }
        }
    }
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 646]) {
        if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 647]) {
            if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 648]) {
                _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 73] 
                    = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 77];
            }
        }
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 69] 
        = (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 68] 
           + ((2U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 66] 
                            >> 0xfU))) ? ((0xffe00000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                                             >> 0x1fU)))) 
                                              << 0x15U)) 
                                          | ((0x100000U 
                                              & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67]) 
                                                | ((0x800U 
                                                    & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                                         >> 0x14U))))))
               : ((0xffffe000U & ((- (IData)((1U & 
                                              (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                               >> 0x1fU)))) 
                                  << 0xdU)) | ((0x1000U 
                                                & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                                           >> 7U))))))));
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__36(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__36\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 612] 
        = ((2U == (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 66] 
                         >> 0xfU))) | ((1U == (3U & 
                                               (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 66] 
                                                >> 0xfU))) 
                                       & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67] 
                                          >> 0x1fU)));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 623] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 643]) {
        if ((1U & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 644])))) {
            if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 645]) {
                _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 623] = 1U;
            }
        }
    }
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 646]) {
        if ((1U & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 647])))) {
            if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 648]) {
                _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 623] = 1U;
            }
        }
    }
    if ((1U & (~ (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 66] 
                  >> 9U)))) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 623] = 0U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 624] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 643]) {
        if ((1U & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 644])))) {
            if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 723]) {
                _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 624] = 1U;
            }
        }
    }
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 646]) {
        if ((1U & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 647])))) {
            if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 724]) {
                _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 624] = 1U;
            }
        }
    }
    if ((1U & (~ (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 66] 
                  >> 1U)))) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 624] = 0U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 614] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 613]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 612]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 615] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 616]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 615] = 1U;
    }
    if ((0U != ((((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 617]) 
                  & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 618])) 
                 << 2U) | ((((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 619]) 
                             & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 620])) 
                            << 1U) | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 621]) 
                                      & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 622])))))) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 615] = 1U;
    }
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 613]) 
         & ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 623]) 
            | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 624])))) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 615] = 1U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 627] 
        = (0U != (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 625]) 
                   << 2U) | (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 626]) 
                              << 1U) | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 614]))));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 628] 
        = (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 614]) 
            << 2U) | (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 625]) 
                       << 1U) | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 626])));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 629] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 614]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 629] = 1U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 632] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 615]) 
           | ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 630]) 
              | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 631])));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 633] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 627]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 633] = 1U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 649] 
        = ((~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 632])) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 607]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 650] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 627]) 
           & ((~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 632])) 
              | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 609])));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 79] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 632])
            ? _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 67]
            : _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 78]);
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 71] 
        = ((0U == (3U & (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 628]) 
                          & (~ ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 628]) 
                                - (IData)(1U)))) >> 1U)))
            ? _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 63]
            : ((1U == (3U & (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 628]) 
                              & (~ ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 628]) 
                                    - (IData)(1U)))) 
                             >> 1U))) ? _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 70]
                : _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 69]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 634] 
        = (0U != (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 604]) 
                   << 3U) | (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 610]) 
                              << 2U) | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 629]))));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 636] 
        = (1U & ((~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 632])) 
                 & ((~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 635])) 
                    | ((~ ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 597]) 
                           & (3U != (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60] 
                                           >> 0x10U))))) 
                       & (~ (((~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 596])) 
                              & (3U != (3U & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60]))) 
                             & (3U != (3U & (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 60] 
                                             >> 0x10U)))))))));
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 81] 
        = (_isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 80] 
           + ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 651]) 
              << 2U));
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 651]) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 81] 
            = (0xfffffffdU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 81]);
    }
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 627]) {
        _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 81] 
            = _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 71];
    }
    _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 81] 
        = (0xfffffffeU & _isignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 81]);
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 653] 
        = (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 607]) 
            & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 636])) 
           | ((0U != (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 652])) 
              | (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 634])));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 637] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 635])
            ? ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 607]) 
               & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 636]))
            : (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 636]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 655] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 654]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 653]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 639] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 637]) 
           & (7U != (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 638])));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 656] = 0U;
    if (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 657]) 
         & ((~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 639])) 
            | (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 755]))))) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 656] = 1U;
    }
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 658] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 657]) 
           & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 639]));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 659] 
        = (7U & (((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 638]) 
                  + ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 658]) 
                     & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 755]))) 
                 - ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 654]) 
                    & (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 653]))));
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 660] 
        = ((IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 637]) 
           & (~ (IData)(_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 656])));
}

__device__
void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__37(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__37\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 661] = 0U;
    if (_csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 660]) {
        _csignals[(blockDim.x * blockIdx.x + threadIdx.x) + NUM_TESTBENCHES * 661] = 1U;
    }
}

void VExampleTop_VexRiscv::_ctor_var_reset(VExampleTop_VexRiscv* self, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_ctor_var_reset\n"); );
    for(size_t i = 0; i < NUM_TESTBENCHES; ++i) {
        // Body
        if (false && self) {}  // Prevent unused
    }
}
