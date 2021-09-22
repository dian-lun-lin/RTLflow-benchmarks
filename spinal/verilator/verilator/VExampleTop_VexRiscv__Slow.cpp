// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleTop.h for the primary calling header

#include "VExampleTop_VexRiscv.h"
#include "VExampleTop__Syms.h"

#include "verilated_dpi.h"

//==========

VExampleTop_VexRiscv::VExampleTop_VexRiscv(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset(this);
}

void VExampleTop_VexRiscv::__Vconfigure(VExampleTop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VExampleTop_VexRiscv::~VExampleTop_VexRiscv() {
}

void VExampleTop_VexRiscv::_initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__1(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__1\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.CsrPlugin_inWfi = 0U;
}

void VExampleTop_VexRiscv::_initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__2(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_initial__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__2\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mcycle = 0ULL;
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__3(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__3\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStagePc 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_PC;
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__4(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__4\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xfffffff8U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((4U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                     >> 0x1bU)) | ((2U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                          >> 0x1dU)) 
                                   | (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                            >> 0x1fU)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xffffffc7U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x20U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                        >> 0x15U)) | ((0x10U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                >> 0x17U)) 
                                      | (8U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                               >> 0x19U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xfffffe3fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x100U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                         >> 0xfU)) | ((0x80U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                  >> 0x13U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xfffff1ffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x800U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                         >> 9U)) | ((0x400U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                 >> 0xdU)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xffff8fffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x4000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                          >> 3U)) | ((0x2000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                   >> 7U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xfffc7fffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x20000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                           << 3U)) | ((0x10000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                          >> 1U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xffe3ffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x100000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                            << 9U)) | ((0x80000U & 
                                        (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                         << 5U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xff1fffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x800000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                               << 0xbU)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xf8ffffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x4000000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                 << 0x11U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0xc7ffffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x20000000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                  << 0x17U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_ 
        = ((0x3fffffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_) 
           | ((0x80000000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                              << 0x1fU)) | (0x40000000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                               << 0x1dU))));
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__5(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__5\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xfffffff8U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((4U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                     >> 0x1bU)) | ((2U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                          >> 0x1dU)) 
                                   | (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                            >> 0x1fU)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xffffffc7U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x20U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                        >> 0x15U)) | ((0x10U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                >> 0x17U)) 
                                      | (8U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                               >> 0x19U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xfffffe3fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x100U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                         >> 0xfU)) | ((0x80U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                  >> 0x13U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xfffff1ffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x800U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                         >> 9U)) | ((0x400U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 >> 0xdU)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xffff8fffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x4000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                          >> 3U)) | ((0x2000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   >> 7U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xfffc7fffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x20000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                           << 3U)) | ((0x10000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                          >> 1U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xffe3ffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x100000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                            << 9U)) | ((0x80000U & 
                                        (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                         << 5U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xff1fffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x800000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                               << 0xbU)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xf8ffffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x4000000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 << 0x11U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0xc7ffffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x20000000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                  << 0x17U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_ 
        = ((0x3fffffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_) 
           | ((0x80000000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                              << 0x1fU)) | (0x40000000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT 
                                               << 0x1dU))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_READ_DATA;
    if ((1U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted 
            = ((0xffffff00U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted) 
               | (0xffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_READ_DATA 
                           >> 8U)));
    } else if ((2U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted 
            = ((0xffff0000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted) 
               | (0xffffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_READ_DATA 
                             >> 0x10U)));
    } else if ((3U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted 
            = ((0xffffff00U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted) 
               | (0xffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_READ_DATA 
                           >> 0x18U)));
    }
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__6(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__6\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_159_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_3072) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_159_ 
            = (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mcycle);
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_160_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_3200) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_160_ 
            = (IData)((vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mcycle 
                       >> 0x20U));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_158_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_834) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_158_ 
            = ((0x7fffffffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_158_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mcause_interrupt) 
                  << 0x1fU));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_158_ 
            = ((0xfffffff0U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_158_) 
               | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mcause_exceptionCode));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_throw2Bytes 
        = (1U & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_throw2BytesReg) 
                 | (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_62_ 
                    >> 1U)));
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__7(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__7\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__risingOccupancy)
            ? (IData)((vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT___zz_StreamFifoLowLatency_3_ 
                       >> 1U)) : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT___zz_CpuComplex_6_);
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__8(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__8\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageIsValid 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageIsFiring 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid;
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__9(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__9\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_BranchPlugin_eq 
        = (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
           == vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_FullBarrelShifterPlugin_reversed 
        = ((1U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SHIFT_CTRL))
            ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_132_
            : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1);
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__pushing 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_iBus_rsp_valid) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__risingOccupancy)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageRegFileWrite_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_124_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageRegFileWrite_valid = 1U;
    }
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__10(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__10\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_166_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_157_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_832) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_157_ 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mscratch;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_155_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_836) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_155_ 
            = ((0xfffff7ffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_155_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mip_MEIP) 
                  << 0xbU));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_155_ 
            = ((0xffffff7fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_155_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mip_MTIP) 
                  << 7U));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_155_ 
            = ((0xfffffff7U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_155_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mip_MSIP) 
                  << 3U));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_156_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_772) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_156_ 
            = ((0xfffff7ffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_156_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MEIE) 
                  << 0xbU));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_156_ 
            = ((0xffffff7fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_156_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MTIE) 
                  << 7U));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_156_ 
            = ((0xfffffff7U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_156_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MSIE) 
                  << 3U));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_SrcPlugin_addSub 
        = ((vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
            + ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                ? (~ vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2)
                : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2)) 
           + ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC_USE_SUB_LESS)
               ? 1U : 0U));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2_FORCE_ZERO) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_SrcPlugin_addSub 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_172_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_ENV_CTRL));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferValid)
            ? ((0xffff0000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                               << 0x10U)) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferData))
            : ((0xffff0000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst) 
               | (0xffffU & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_throw2Bytes)
                              ? (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                                 >> 0x10U) : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_unaligned 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_throw2Bytes) 
           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferValid));
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__11(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__11\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_done 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_pcValids_2;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_hadException) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__risingOccupancy) 
           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter_io_iBus_rsp_valid));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_34_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageRegFileWrite_valid) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_34_ = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT___zz_StreamFifoLowLatency_1_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__pushing) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT___zz_StreamFifoLowLatency_1_ = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_236_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_valid) 
           & (0U != (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_109_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mip_MTIP) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MTIE));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_110_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mip_MSIP) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MSIE));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_111_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mip_MEIP) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mie_MEIE));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferFill 
        = (((((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_unaligned)) 
              & (3U != (3U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst))) 
             & (3U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                             >> 0x10U)))) | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferValid) 
                                             & (3U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                                                    >> 0x10U))))) 
           | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_throw2Bytes) 
               & (3U == (3U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw))) 
              & (3U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                              >> 0x10U)))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_ 
        = ((0x18U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                     << 3U)) | (7U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                      >> 0xdU)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_66_ 
        = ((0x40U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                     << 1U)) | ((0x38U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                          >> 7U)) | 
                                (4U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                       >> 4U))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_68_ 
        = ((0xfe0U & ((- (IData)((1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                        >> 0xcU)))) 
                      << 5U)) | (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                          >> 2U)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_ 
        = ((0x1ff800U & ((- (IData)((1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                           >> 0xcU)))) 
                         << 0xbU)) | ((0x400U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 << 2U)) 
                                      | ((0x300U & 
                                          (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                           >> 1U)) 
                                         | ((0x80U 
                                             & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                << 1U)) 
                                            | ((0x40U 
                                                & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                   >> 1U)) 
                                               | ((0x20U 
                                                   & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                      << 3U)) 
                                                  | ((0x10U 
                                                      & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                         >> 7U)) 
                                                     | (0xeU 
                                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                           >> 2U)))))))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_ 
        = ((0x1f00U & ((- (IData)((1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                         >> 0xcU)))) 
                       << 8U)) | ((0xc0U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                            << 1U)) 
                                  | ((0x20U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                               << 3U)) 
                                     | ((0x18U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                  >> 7U)) 
                                        | (6U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 >> 2U))))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_SrcPlugin_less 
        = (1U & (((1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2 
                                              >> 0x1fU)))
                  ? (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_SrcPlugin_addSub 
                     >> 0x1fU) : ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC_LESS_UNSIGNED)
                                   ? (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2 
                                      >> 0x1fU) : (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                                                   >> 0x1fU))));
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__12(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__12\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.CsrPlugin_interruptJump 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_valid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_done));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_valid) 
           & (0U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter)));
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__13(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__13\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageInstruction 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION;
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageRegFileWrite_payload_address 
        = (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                    >> 7U));
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__14(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__14\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed = 0U;
    if ((0x10U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))) {
                if ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_)))) {
                        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed 
                            = (0x12023U | (((0xc000000U 
                                             & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                << 0x13U)) 
                                            | (0x2000000U 
                                               & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                  << 0xdU))) 
                                           | ((0x1f00000U 
                                               & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                  << 0x12U)) 
                                              | (0xe00U 
                                                 & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw))));
                    }
                } else if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_)))) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed 
                        = ((0x400U == (0x7ffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 >> 2U)))
                            ? 0x100073U : ((0U == (0x1fU 
                                                   & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                      >> 2U)))
                                            ? (0x67U 
                                               | ((0xf8000U 
                                                   & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                      << 8U)) 
                                                  | (((0x1000U 
                                                       & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw)
                                                       ? 1U
                                                       : 0U) 
                                                     << 7U)))
                                            : (0x33U 
                                               | ((0x1f00000U 
                                                   & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                      << 0x12U)) 
                                                  | ((((0x1000U 
                                                        & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw)
                                                        ? 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                           >> 7U))
                                                        : 0U) 
                                                      << 0xfU) 
                                                     | (0xf80U 
                                                        & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw))))));
                }
            } else if ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_)))) {
                    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed 
                        = (0x12003U | ((0xc000000U 
                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                           << 0x18U)) 
                                       | ((0x2000000U 
                                           & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                              << 0xdU)) 
                                          | ((0x1c00000U 
                                              & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 << 0x12U)) 
                                             | (0xf80U 
                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw)))));
                }
            } else if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_)))) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed 
                    = (0x1013U | ((0x1f00000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 << 0x12U)) 
                                  | ((0xf8000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                  << 8U)) 
                                     | (0xf80U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw))));
            }
        }
    } else if ((8U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed 
            = ((4U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))
                ? ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))
                    ? ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))
                        ? (0x41063U | ((0x80000000U 
                                        & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_) 
                                           << 0x13U)) 
                                       | ((0x7e000000U 
                                           & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_) 
                                              << 0x14U)) 
                                          | ((0x38000U 
                                              & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 << 8U)) 
                                             | ((0xf00U 
                                                 & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_) 
                                                    << 7U)) 
                                                | (0x80U 
                                                   & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_) 
                                                      >> 4U)))))))
                        : (0x40063U | ((0x80000000U 
                                        & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_) 
                                           << 0x13U)) 
                                       | ((0x7e000000U 
                                           & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_) 
                                              << 0x14U)) 
                                          | ((0x38000U 
                                              & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 << 8U)) 
                                             | ((0xf00U 
                                                 & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_) 
                                                    << 7U)) 
                                                | (0x80U 
                                                   & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_81_) 
                                                      >> 4U))))))))
                    : ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))
                        ? (0x6fU | ((0x80000000U & 
                                     (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_ 
                                      << 0xbU)) | (
                                                   (0x7fe00000U 
                                                    & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_ 
                                                       << 0x14U)) 
                                                   | ((0x100000U 
                                                       & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_ 
                                                          << 9U)) 
                                                      | (0xff000U 
                                                         & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_)))))
                        : (0x40400U | ((0xfe000000U 
                                        & (((2U == 
                                             (3U & 
                                              (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                               >> 0xaU)))
                                             ? (- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                              >> 0xcU))))
                                             : (((1U 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                      >> 0xaU))) 
                                                 | (IData)(
                                                           (0xc00U 
                                                            == 
                                                            (0xc60U 
                                                             & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw)))) 
                                                << 5U)) 
                                           << 0x19U)) 
                                       | ((0x1f00000U 
                                           & (((IData)(
                                                       (0xc00U 
                                                        != 
                                                        (0xc00U 
                                                         & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw)))
                                                ? (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                   >> 2U)
                                                : (8U 
                                                   | (7U 
                                                      & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                         >> 2U)))) 
                                              << 0x14U)) 
                                          | ((0x38000U 
                                              & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 << 8U)) 
                                             | ((((0U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                       >> 0xaU)))
                                                   ? 5U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                        >> 0xaU)))
                                                    ? 5U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                         >> 0xaU)))
                                                     ? 7U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                          >> 5U)))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                           >> 5U)))
                                                       ? 4U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                            >> 5U)))
                                                        ? 6U
                                                        : 7U)))))) 
                                                 << 0xcU) 
                                                | ((0x380U 
                                                    & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw) 
                                                   | ((3U 
                                                       != 
                                                       (3U 
                                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                           >> 0xaU)))
                                                       ? 0x13U
                                                       : 0x33U)))))))))
                : ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))
                    ? ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))
                        ? ((2U == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                            >> 7U)))
                            ? (0x13U | ((0xe0000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                           >> 0xcU)))) 
                                            << 0x1dU)) 
                                        | ((0x18000000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                               << 0x18U)) 
                                           | ((0x4000000U 
                                               & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                  << 0x15U)) 
                                              | ((0x2000000U 
                                                  & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                     << 0x17U)) 
                                                 | ((0x1000000U 
                                                     & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                        << 0x12U)) 
                                                    | ((0xf8000U 
                                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                           << 8U)) 
                                                       | (0xf80U 
                                                          & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw))))))))
                            : (0x37U | (((0xfffe0000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                            >> 0xcU)))) 
                                             << 0x11U)) 
                                         | (0x1f000U 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                               << 0xaU))) 
                                        | (0xf80U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw))))
                        : (0x13U | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_68_) 
                                     << 0x14U) | (0xf80U 
                                                  & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw))))
                    : ((1U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))
                        ? (0xefU | ((0x80000000U & 
                                     (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_ 
                                      << 0xbU)) | (
                                                   (0x7fe00000U 
                                                    & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_ 
                                                       << 0x14U)) 
                                                   | ((0x100000U 
                                                       & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_ 
                                                          << 9U)) 
                                                      | (0xff000U 
                                                         & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_78_)))))
                        : (0x13U | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_68_) 
                                     << 0x14U) | ((0xf8000U 
                                                   & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                      << 8U)) 
                                                  | (0xf80U 
                                                     & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw)))))));
    } else if ((4U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))) {
        if ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_)))) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed 
                    = (0x842023U | ((0xfe000000U & 
                                     ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_66_) 
                                      << 0x14U)) | 
                                    ((0x700000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                   << 0x12U)) 
                                     | ((0x38000U & 
                                         (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                          << 8U)) | 
                                        (0xf80U & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_66_) 
                                                   << 7U))))));
            }
        }
    } else if ((2U & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed 
                = (0x42403U | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_66_) 
                                << 0x14U) | ((0x38000U 
                                              & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 << 8U)) 
                                             | (0x380U 
                                                & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                   << 5U)))));
        }
    } else if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_187_)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed 
            = (0x10413U | ((0x3c000000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                           << 0x13U)) 
                           | ((0x3000000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                             << 0xdU)) 
                              | ((0x800000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                               << 0x12U)) 
                                 | ((0x400000U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                  << 0x10U)) 
                                    | (0x380U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw 
                                                 << 5U)))))));
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_22_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid) {
        if ((1U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_CTRL))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_22_ 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_133_;
        } else if (((2U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_CTRL)) 
                    | (3U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_CTRL)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_22_ 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_SHIFT_RIGHT;
        }
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_46_ 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid) 
         & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MEMORY_ENABLE))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_46_ 
            = ((0U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                             >> 0xcU))) ? ((0xffffff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted 
                                                               >> 7U) 
                                                              & (~ 
                                                                 (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                                                                  >> 0xeU)))))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted))
                : ((1U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                                 >> 0xcU))) ? ((0xffff0000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted 
                                                                   >> 0xfU) 
                                                                  & (~ 
                                                                     (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                                                                      >> 0xeU)))))) 
                                                   << 0x10U)) 
                                               | (0xffffU 
                                                  & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted))
                    : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_DBusSimplePlugin_rspShifted));
    }
    if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid) 
         & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_IS_MUL))) {
        __Vtemp2[0U] = (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MUL_LOW);
        __Vtemp2[1U] = ((0xfff00000U & ((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MUL_LOW 
                                                               >> 0x33U))))) 
                                        << 0x14U)) 
                        | (IData)((vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MUL_LOW 
                                   >> 0x20U)));
        __Vtemp2[2U] = (3U & ((- (IData)((1U & (IData)(
                                                       (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MUL_LOW 
                                                        >> 0x33U))))) 
                              >> 0xcU));
        VL_EXTEND_WQ(66,34, __Vtemp3, vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MUL_HH);
        VL_SHIFTL_WWI(66,66,32, __Vtemp4, __Vtemp3, 0x20U);
        VL_ADD_W(3, __Vtemp5, __Vtemp2, __Vtemp4);
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_46_ 
            = ((0U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                             >> 0xcU))) ? (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_MUL_LOW)
                : __Vtemp5[1U]);
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_xtvec_base = 0U;
    if ((3U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_targetPrivilege))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_xtvec_base = 8U;
    }
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__15(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__15\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_154_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_csr_768) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_154_ 
            = ((0xffffe7ffU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_154_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MPP) 
                  << 0xbU));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_154_ 
            = ((0xffffff7fU & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_154_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MPIE) 
                  << 7U));
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_154_ 
            = ((0xfffffff7U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_154_) 
               | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mstatus_MIE) 
                  << 3U));
    }
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__16(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__16\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__BranchPlugin_jumpInterface_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_BRANCH_DO));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_171_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_hadException) 
           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.CsrPlugin_interruptJump));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_join_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_61_) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_blockedBySideEffects 
        = (0U != (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid) 
                   << 1U) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_178_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__17(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__17\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageRegFileWrite_payload_data 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_46_;
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__18(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__18\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetcherHalt = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_171_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetcherHalt = 1U;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_172_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetcherHalt = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_payload = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_171_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_payload 
            = (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_xtvec_base 
               << 2U);
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_172_) {
        if ((3U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                          >> 0x1cU)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_payload 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_mepc;
        }
    }
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__19(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__19\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_valid = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_171_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_172_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_readData 
        = (((vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_154_ 
             | vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_155_) 
            | (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_156_ 
               | vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_157_)) 
           | ((vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_158_ 
               | vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_159_) 
              | vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_160_));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__BranchPlugin_jumpInterface_valid) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_flushNext = 1U;
    }
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__20(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__20\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_171_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_172_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_flushNext = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself = 0U;
    if (((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MEMORY_ENABLE)) 
          & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_MEMORY_STORE))) 
         & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusDecoder_logic_masterPipelined_rsp_valid) 
               & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__mainBusArbiter__DOT__rspTarget))))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself = 1U;
    }
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__21(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__21\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_flushNext) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_removeIt = 1U;
    }
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__22(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__22\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_output_valid 
        = ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetcherHalt)) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_booted));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decodePc_pcPlus 
        = (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_decodePc_pcReg 
           + ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_94_)
               ? 2U : 4U));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeEnable 
        = (((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isValid) 
              & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_IS_CSR)) 
             & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_CSR_WRITE_OPCODE)) 
            & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_blockedBySideEffects))) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)));
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__23(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__23\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isFlushed 
        = (0U != (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_flushNext) 
                   << 1U) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_flushNext)));
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__24(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__24\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_170_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_IS_CSR));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_180_ 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isFlushed) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_removeIt = 1U;
    }
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__25(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__25\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_output_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_join_valid) 
           & (~ (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_throw2Bytes) 
                  & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferValid))) 
                 & (3U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                                 >> 0x10U))))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_removeIt = 0U;
    if ((0U != (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_flushNext) 
                 << 2U) | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_flushNext) 
                           << 1U)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_removeIt = 1U;
    }
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__26(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__26\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_42_ 
        = ((2U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_ALU_CTRL))
            ? ((2U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                ? (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                   & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2)
                : ((1U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                    ? (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                       | vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2)
                    : (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1 
                       ^ vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC2)))
            : ((1U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_ALU_CTRL))
                ? (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_SrcPlugin_less)
                : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_SrcPlugin_addSub));
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_170_) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_42_ 
            = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_readData;
    }
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__27(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__27\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_haltItself = 0U;
    if ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isValid) 
          & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_MEMORY_ENABLE)) 
         & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu.__PVT__cpu_dBus_cmd_halfPipe_regs_ready)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_haltItself = 1U;
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_170_) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_blockedBySideEffects) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_haltItself = 1U;
        }
    }
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__28(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__28\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_active 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_interrupt_valid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_90_));
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__29(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__29\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__dBus_cmd_valid 
        = ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isValid) 
             & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_MEMORY_ENABLE)) 
            & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself))) 
           & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isFlushed)));
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__30(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__30\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_haltItself) 
           | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself));
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__31(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__31\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_MulPlugin_aHigh 
        = ((0x10000U & ((((1U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                        >> 0xcU))) 
                          | (2U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                          >> 0xcU)))) 
                         << 0x10U) & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS1 
                                      >> 0xfU))) | 
           (0xffffU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS1 
                       >> 0x10U)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_MulPlugin_bHigh 
        = ((0x10000U & (((1U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                       >> 0xcU))) << 0x10U) 
                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS2 
                           >> 0xfU))) | (0xffffU & 
                                         (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_RS2 
                                          >> 0x10U)));
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__32(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__32\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_writeData 
        = ((0x2000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION)
            ? ((0x1000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION)
                ? (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_readData 
                   & (~ vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1))
                : (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_CsrPlugin_readData 
                   | vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1))
            : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_SRC1);
    if ((3U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BRANCH_CTRL))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_BranchPlugin_branch_src2 
            = ((0xfffff000U & ((- (IData)((1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0x1fU)))) 
                               << 0xcU)) | (0xfffU 
                                            & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0x14U)));
    } else {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_BranchPlugin_branch_src2 
            = ((2U == (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BRANCH_CTRL))
                ? ((0xffe00000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0x1fU)))) 
                                   << 0x15U)) | ((0x100000U 
                                                  & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION) 
                                                    | ((0x800U 
                                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                             >> 0x14U))))))
                : ((0xffffe000U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0x1fU)))) 
                                   << 0xdU)) | ((0x1000U 
                                                 & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                                                            >> 7U)))))));
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_BranchPlugin_branch_src2 
                = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_IS_RVC)
                    ? 2U : 4U);
        }
    }
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__33(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__33\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_output_payload_rsp_inst 
        = ((3U != (3U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw))
            ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_decompressed
            : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_raw);
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__34(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__34\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_141_ 
        = ((0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_INSTRUCTION 
                     >> 7U)) == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                          >> 0xfU)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_142_ 
        = ((0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_INSTRUCTION 
                     >> 7U)) == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                          >> 0x14U)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_143_ 
        = ((0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                     >> 7U)) == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                          >> 0xfU)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_144_ 
        = ((0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_INSTRUCTION 
                     >> 7U)) == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                          >> 0x14U)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
        = (((0x1000U == (0x1000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
            << 0x19U) | (((0x2000U == (0x3000U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                          << 0x18U) | (((0U != (((0x48U 
                                                  == 
                                                  (0x48U 
                                                   & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                 << 5U) 
                                                | (((0x1010U 
                                                     == 
                                                     (0x1010U 
                                                      & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                    << 4U) 
                                                   | (((0x2010U 
                                                        == 
                                                        (0x2010U 
                                                         & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                       << 3U) 
                                                      | (((0x10U 
                                                           == 
                                                           (0x50U 
                                                            & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                          << 2U) 
                                                         | (((4U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                             << 1U) 
                                                            | (0U 
                                                               == 
                                                               (0x28U 
                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))))))) 
                                        << 0x17U) | 
                                       (((0U != (((4U 
                                                   == 
                                                   (4U 
                                                    & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                  << 4U) 
                                                 | (((0x2010U 
                                                      == 
                                                      (0x2030U 
                                                       & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                     << 3U) 
                                                    | (((0x10U 
                                                         == 
                                                         (0x1030U 
                                                          & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                        << 2U) 
                                                       | (((0x2020U 
                                                            == 
                                                            (0x2002060U 
                                                             & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                           << 1U) 
                                                          | (0x20U 
                                                             == 
                                                             (0x2003020U 
                                                              & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_))))))) 
                                         << 0x16U) 
                                        | (((0x20U 
                                             == (0x20U 
                                                 & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                            << 0x15U) 
                                           | (((0x4000U 
                                                == 
                                                (0x4004U 
                                                 & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                               << 0x14U) 
                                              | (((0x2000U 
                                                   == 
                                                   (0x6004U 
                                                    & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                  << 0x13U) 
                                                 | (((0U 
                                                      != 
                                                      (((0x40U 
                                                         == 
                                                         (0x40U 
                                                          & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                        << 3U) 
                                                       | (((4U 
                                                            == 
                                                            (4U 
                                                             & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                           << 2U) 
                                                          | (((0x10U 
                                                               == 
                                                               (0x30U 
                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                              << 1U) 
                                                             | (0x20U 
                                                                == 
                                                                (0x2000020U 
                                                                 & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))))) 
                                                     << 0x12U) 
                                                    | (((0U 
                                                         != 
                                                         (((0x40U 
                                                            == 
                                                            (0x50U 
                                                             & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                           << 1U) 
                                                          | (0x40U 
                                                             == 
                                                             (0x3040U 
                                                              & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                        << 0x11U) 
                                                       | (((0U 
                                                            != 
                                                            (((0x48U 
                                                               == 
                                                               (0x48U 
                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                              << 1U) 
                                                             | (4U 
                                                                == 
                                                                (0x1cU 
                                                                 & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                           << 0x10U) 
                                                          | (((0x40U 
                                                               == 
                                                               (0x58U 
                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                              << 0xfU) 
                                                             | (((0U 
                                                                  != 
                                                                  (((0x2000U 
                                                                     == 
                                                                     (0x2010U 
                                                                      & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                    << 1U) 
                                                                   | (0x1000U 
                                                                      == 
                                                                      (0x5000U 
                                                                       & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                                 << 0xeU) 
                                                                | (((0U 
                                                                     != 
                                                                     (((4U 
                                                                        == 
                                                                        (4U 
                                                                         & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                       << 1U) 
                                                                      | (0x20U 
                                                                         == 
                                                                         (0x70U 
                                                                          & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                                    << 0xdU) 
                                                                   | (((0U 
                                                                        != 
                                                                        (((4U 
                                                                           == 
                                                                           (4U 
                                                                            & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                          << 1U) 
                                                                         | (0U 
                                                                            == 
                                                                            (0x20U 
                                                                             & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                                       << 0xcU) 
                                                                      | (((0x50U 
                                                                           == 
                                                                           (0x3050U 
                                                                            & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                          << 0xbU) 
                                                                         | (((0U 
                                                                              != 
                                                                              (((0x40U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 2U) 
                                                                               | (((0x2010U 
                                                                                == 
                                                                                (0x2014U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 1U) 
                                                                                | (0x40000030U 
                                                                                == 
                                                                                (0x40000034U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_))))) 
                                                                             << 0xaU) 
                                                                            | (((0U 
                                                                                != 
                                                                                (((0U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 2U) 
                                                                                | (((0x2000U 
                                                                                == 
                                                                                (0x6004U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 1U) 
                                                                                | (0x1000U 
                                                                                == 
                                                                                (0x5004U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))))) 
                                                                                << 9U) 
                                                                               | (((0U 
                                                                                == 
                                                                                (0x58U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 8U) 
                                                                                | (((0x2000030U 
                                                                                == 
                                                                                (0x2000074U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 7U) 
                                                                                | (((0U 
                                                                                != 
                                                                                (((0x1050U 
                                                                                == 
                                                                                (0x1050U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 1U) 
                                                                                | (0x2050U 
                                                                                == 
                                                                                (0x2050U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                                                << 6U) 
                                                                                | (((0U 
                                                                                != 
                                                                                (((4U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 1U) 
                                                                                | (0x4050U 
                                                                                == 
                                                                                (0x4050U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                                                << 5U) 
                                                                                | (((0U 
                                                                                != 
                                                                                (((4U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 1U) 
                                                                                | (0x4050U 
                                                                                == 
                                                                                (0x4050U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                                                << 4U) 
                                                                                | (((0x5010U 
                                                                                == 
                                                                                (0x7054U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                != 
                                                                                (((0x40001010U 
                                                                                == 
                                                                                (0x40003054U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 2U) 
                                                                                | (((0x1010U 
                                                                                == 
                                                                                (0x7034U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 1U) 
                                                                                | (0x1010U 
                                                                                == 
                                                                                (0x2007054U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_))))) 
                                                                                << 2U) 
                                                                                | (((0U 
                                                                                != 
                                                                                (((0x20U 
                                                                                == 
                                                                                (0x34U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)) 
                                                                                << 1U) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x64U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))) 
                                                                                << 1U) 
                                                                                | (0x24U 
                                                                                == 
                                                                                (0x64U 
                                                                                & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_)))))))))))))))))))))))))));
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__35(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__35\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_REGFILE_WRITE_VALID 
        = (1U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                 >> 0x17U));
    if ((0U == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                         >> 7U)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS2 
        = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_164_;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_136_) {
        if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_137_) 
             == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                          >> 0x14U)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS2 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_138_;
        }
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_166_) {
        if (((0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_INSTRUCTION 
                       >> 7U)) == (0x1fU & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                            >> 0x14U)))) {
            vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS2 
                = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_46_;
        }
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_178_) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_142_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS2 
                    = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_22_;
            }
        }
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_180_) {
        if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_144_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_RS2 
                    = vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_42_;
            }
        }
    }
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
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_predictionJumpInterface_payload 
        = (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_decodePc_pcReg 
           + ((2U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                            >> 0xfU))) ? ((0xffe00000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                             >> 0x1fU)))) 
                                              << 0x15U)) 
                                          | ((0x100000U 
                                              & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                         >> 0x14U))))))
               : ((0xffffe000U & ((- (IData)((1U & 
                                              (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                               >> 0x1fU)))) 
                                  << 0xdU)) | ((0x1000U 
                                                & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                                           >> 7U))))))));
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__36(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__36\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decodePrediction_cmd_hadBranch 
        = ((2U == (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                         >> 0xfU))) | ((1U == (3U & 
                                               (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                                                >> 0xfU))) 
                                       & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_93_ 
                                          >> 0x1fU)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_134_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_178_) {
        if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_141_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_134_ = 1U;
            }
        }
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_180_) {
        if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_143_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_134_ = 1U;
            }
        }
    }
    if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                  >> 9U)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_134_ = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_135_ = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_178_) {
        if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_142_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_135_ = 1U;
            }
        }
    }
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_180_) {
        if ((1U & (~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))) {
            if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_144_) {
                vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_135_ = 1U;
            }
        }
    }
    if ((1U & (~ (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_112_ 
                  >> 1U)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_135_ = 0U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_predictionJumpInterface_valid 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_90_) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decodePrediction_cmd_hadBranch));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_haltByOther = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_pipelineLiberator_active) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_haltByOther = 1U;
    }
    if ((0U != ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_isValid) 
                  & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_to_writeBack_ENV_CTRL)) 
                 << 2U) | ((((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_isValid) 
                             & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_ENV_CTRL)) 
                            << 1U) | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isValid) 
                                      & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_to_execute_ENV_CTRL)))))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_haltByOther = 1U;
    }
    if (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_90_) 
         & ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_134_) 
            | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_135_)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_haltByOther = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_jump_pcLoad_valid 
        = (0U != (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__BranchPlugin_jumpInterface_valid) 
                   << 2U) | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_valid) 
                              << 1U) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_predictionJumpInterface_valid))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_50_ 
        = (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_predictionJumpInterface_valid) 
            << 2U) | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__BranchPlugin_jumpInterface_valid) 
                       << 1U) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_valid)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_predictionJumpInterface_valid) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_flushNext = 1U;
    }
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_isStuckByOthers 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_haltByOther) 
           | ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_arbitration_isStuck) 
              | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_haltItself)));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_correction = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_jump_pcLoad_valid) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_correction = 1U;
    }
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
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_165_ 
        = ((0U == (3U & (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_50_) 
                          & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_50_) 
                                - (IData)(1U)))) >> 1U)))
            ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__CsrPlugin_jumpInterface_payload
            : ((1U == (3U & (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_50_) 
                              & (~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_50_) 
                                    - (IData)(1U)))) 
                             >> 1U))) ? vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__execute_to_memory_BRANCH_CALC
                : vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_predictionJumpInterface_payload));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_externalFlush 
        = (0U != (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__writeBack_arbitration_flushNext) 
                   << 3U) | (((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__memory_arbitration_flushNext) 
                              << 2U) | (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_flushNext))));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_input_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__decode_arbitration_isStuckByOthers)) 
                 & ((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_61_)) 
                    | ((~ ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_bufferValid) 
                           & (3U != (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                                           >> 0x10U))))) 
                       & (~ (((~ (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_unaligned)) 
                              & (3U != (3U & vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst))) 
                             & (3U != (3U & (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst 
                                             >> 0x10U)))))))));
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
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_2_output_ready 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_61_)
            ? ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_join_valid) 
               & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_input_ready))
            : (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_decompressor_input_ready));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__popping 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_valid) 
           & (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT___zz_VexRiscv_161_));
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_cmdFork_canEmit 
        = ((IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_2_output_ready) 
           & (7U != (IData)(vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_pending_value)));
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
}

void VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__37(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_settle__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__37\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_pcRegPropagate = 0U;
    if (vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_iBusRsp_stages_1_input_ready) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__PVT__IBusSimplePlugin_fetchPc_pcRegPropagate = 1U;
    }
}

void VExampleTop_VexRiscv::_ctor_var_reset(VExampleTop_VexRiscv* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VExampleTop_VexRiscv::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->__PVT__iBus_cmd_valid = VL_RAND_RESET_I(1);
    self->__PVT__iBus_cmd_ready = VL_RAND_RESET_I(1);
    self->__PVT__iBus_cmd_payload_pc = VL_RAND_RESET_I(32);
    self->__PVT__iBus_rsp_valid = VL_RAND_RESET_I(1);
    self->__PVT__iBus_rsp_payload_error = VL_RAND_RESET_I(1);
    self->__PVT__iBus_rsp_payload_inst = VL_RAND_RESET_I(32);
    self->__PVT__timerInterrupt = VL_RAND_RESET_I(1);
    self->__PVT__externalInterrupt = VL_RAND_RESET_I(1);
    self->__PVT__softwareInterrupt = VL_RAND_RESET_I(1);
    self->__PVT__dBus_cmd_valid = VL_RAND_RESET_I(1);
    self->__PVT__dBus_cmd_ready = VL_RAND_RESET_I(1);
    self->__PVT__dBus_cmd_payload_wr = VL_RAND_RESET_I(1);
    self->__PVT__dBus_cmd_payload_address = VL_RAND_RESET_I(32);
    self->__PVT__dBus_cmd_payload_data = VL_RAND_RESET_I(32);
    self->__PVT__dBus_cmd_payload_size = VL_RAND_RESET_I(2);
    self->__PVT__dBus_rsp_ready = VL_RAND_RESET_I(1);
    self->__PVT__dBus_rsp_error = VL_RAND_RESET_I(1);
    self->__PVT__dBus_rsp_data = VL_RAND_RESET_I(32);
    self->__PVT__clk_cpu = VL_RAND_RESET_I(1);
    self->__PVT__clk_cpu_reset_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_161_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_163_ = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_164_ = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_165_ = VL_RAND_RESET_I(32);
    self->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_valid = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c_io_pop_payload_inst = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_166_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_170_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_171_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_172_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_174_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_178_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_180_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_182_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_187_ = VL_RAND_RESET_I(5);
    self->__PVT___zz_VexRiscv_236_ = VL_RAND_RESET_I(1);
    self->__PVT__decode_RS2 = VL_RAND_RESET_I(32);
    self->__PVT__decode_RS1 = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_22_ = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_34_ = VL_RAND_RESET_I(1);
    self->__PVT__decode_INSTRUCTION_ANTICIPATED = VL_RAND_RESET_I(32);
    self->__PVT__decode_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_42_ = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_46_ = VL_RAND_RESET_I(32);
    self->__PVT__decode_arbitration_haltByOther = VL_RAND_RESET_I(1);
    self->__PVT__decode_arbitration_removeIt = VL_RAND_RESET_I(1);
    self->__PVT__decode_arbitration_flushNext = VL_RAND_RESET_I(1);
    self->__PVT__decode_arbitration_isStuckByOthers = VL_RAND_RESET_I(1);
    self->__PVT__execute_arbitration_haltItself = VL_RAND_RESET_I(1);
    self->__PVT__execute_arbitration_removeIt = VL_RAND_RESET_I(1);
    self->__PVT__execute_arbitration_isValid = VL_RAND_RESET_I(1);
    self->__PVT__execute_arbitration_isStuck = VL_RAND_RESET_I(1);
    self->__PVT__execute_arbitration_isFlushed = VL_RAND_RESET_I(1);
    self->__PVT__memory_arbitration_haltItself = VL_RAND_RESET_I(1);
    self->__PVT__memory_arbitration_removeIt = VL_RAND_RESET_I(1);
    self->__PVT__memory_arbitration_flushNext = VL_RAND_RESET_I(1);
    self->__PVT__memory_arbitration_isValid = VL_RAND_RESET_I(1);
    self->__PVT__writeBack_arbitration_flushNext = VL_RAND_RESET_I(1);
    self->__PVT__writeBack_arbitration_isValid = VL_RAND_RESET_I(1);
    self->lastStageInstruction = VL_RAND_RESET_I(32);
    self->lastStagePc = VL_RAND_RESET_I(32);
    self->lastStageIsValid = VL_RAND_RESET_I(1);
    self->lastStageIsFiring = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_fetcherHalt = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_predictionJumpInterface_valid = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_predictionJumpInterface_payload = VL_RAND_RESET_I(32);
    self->__PVT__IBusSimplePlugin_decodePrediction_cmd_hadBranch = VL_RAND_RESET_I(1);
    self->CsrPlugin_inWfi = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_jumpInterface_valid = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_jumpInterface_payload = VL_RAND_RESET_I(32);
    self->__PVT__BranchPlugin_jumpInterface_valid = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_externalFlush = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_jump_pcLoad_valid = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_50_ = VL_RAND_RESET_I(3);
    self->__PVT__IBusSimplePlugin_fetchPc_output_valid = VL_RAND_RESET_I(1);
    self->IBusSimplePlugin_fetchPc_pcReg = VL_RAND_RESET_I(32);
    self->__PVT__IBusSimplePlugin_fetchPc_correction = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_fetchPc_pcRegPropagate = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_fetchPc_booted = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_fetchPc_inc = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_fetchPc_pc = VL_RAND_RESET_I(32);
    self->IBusSimplePlugin_decodePc_pcReg = VL_RAND_RESET_I(32);
    self->__PVT__IBusSimplePlugin_decodePc_pcPlus = VL_RAND_RESET_I(32);
    self->__PVT__IBusSimplePlugin_iBusRsp_stages_1_input_ready = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_iBusRsp_stages_1_halt = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_iBusRsp_stages_2_output_ready = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_59_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_61_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_62_ = VL_RAND_RESET_I(32);
    self->__PVT__IBusSimplePlugin_decompressor_input_ready = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_decompressor_output_valid = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_decompressor_output_payload_rsp_inst = VL_RAND_RESET_I(32);
    self->__PVT__IBusSimplePlugin_decompressor_bufferValid = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_decompressor_bufferData = VL_RAND_RESET_I(16);
    self->__PVT__IBusSimplePlugin_decompressor_throw2BytesReg = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_decompressor_throw2Bytes = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_decompressor_unaligned = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_decompressor_raw = VL_RAND_RESET_I(32);
    self->__PVT__IBusSimplePlugin_decompressor_decompressed = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_66_ = VL_RAND_RESET_I(12);
    self->__PVT___zz_VexRiscv_68_ = VL_RAND_RESET_I(12);
    self->__PVT___zz_VexRiscv_78_ = VL_RAND_RESET_I(21);
    self->__PVT___zz_VexRiscv_81_ = VL_RAND_RESET_I(13);
    self->__PVT__IBusSimplePlugin_decompressor_bufferFill = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_90_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_93_ = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_94_ = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_cmd_valid = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_pending_value = VL_RAND_RESET_I(3);
    self->__PVT__IBusSimplePlugin_pending_next = VL_RAND_RESET_I(3);
    self->__PVT__IBusSimplePlugin_cmdFork_canEmit = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_output_valid = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_discardCounter = VL_RAND_RESET_I(3);
    self->__PVT__IBusSimplePlugin_rspJoin_join_valid = VL_RAND_RESET_I(1);
    self->__PVT__writeBack_DBusSimplePlugin_rspShifted = VL_RAND_RESET_I(32);
    self->__PVT__CsrPlugin_mepc = VL_RAND_RESET_I(32);
    self->__PVT__CsrPlugin_mstatus_MIE = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_mstatus_MPIE = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_mstatus_MPP = VL_RAND_RESET_I(2);
    self->__PVT__CsrPlugin_mip_MEIP = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_mip_MTIP = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_mip_MSIP = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_mie_MEIE = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_mie_MTIE = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_mie_MSIE = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_mscratch = VL_RAND_RESET_I(32);
    self->__PVT__CsrPlugin_mcause_interrupt = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_mcause_exceptionCode = VL_RAND_RESET_I(4);
    self->__PVT__CsrPlugin_mcycle = VL_RAND_RESET_Q(64);
    self->__PVT___zz_VexRiscv_109_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_110_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_111_ = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_interrupt_valid = VL_RAND_RESET_I(1);
    self->CsrPlugin_interrupt_code = VL_RAND_RESET_I(4);
    self->__PVT__CsrPlugin_interrupt_targetPrivilege = VL_RAND_RESET_I(2);
    self->__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_pipelineLiberator_pcValids_2 = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_pipelineLiberator_active = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_pipelineLiberator_done = VL_RAND_RESET_I(1);
    self->CsrPlugin_interruptJump = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_hadException = VL_RAND_RESET_I(1);
    self->__PVT__CsrPlugin_xtvec_base = VL_RAND_RESET_I(30);
    self->__PVT__execute_CsrPlugin_blockedBySideEffects = VL_RAND_RESET_I(1);
    self->__PVT__execute_CsrPlugin_readData = VL_RAND_RESET_I(32);
    self->__PVT__execute_CsrPlugin_writeEnable = VL_RAND_RESET_I(1);
    self->__PVT__execute_CsrPlugin_writeData = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_112_ = VL_RAND_RESET_I(26);
    self->lastStageRegFileWrite_valid = VL_RAND_RESET_I(1);
    self->lastStageRegFileWrite_payload_address = VL_RAND_RESET_I(5);
    self->lastStageRegFileWrite_payload_data = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_124_ = VL_RAND_RESET_I(1);
    self->__PVT__execute_MulPlugin_aHigh = VL_RAND_RESET_I(17);
    self->__PVT__execute_MulPlugin_bHigh = VL_RAND_RESET_I(17);
    self->__PVT__execute_SrcPlugin_addSub = VL_RAND_RESET_I(32);
    self->__PVT__execute_SrcPlugin_less = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_132_ = VL_RAND_RESET_I(32);
    self->__PVT__execute_FullBarrelShifterPlugin_reversed = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_133_ = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_134_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_135_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_136_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_137_ = VL_RAND_RESET_I(5);
    self->__PVT___zz_VexRiscv_138_ = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_141_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_142_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_143_ = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_144_ = VL_RAND_RESET_I(1);
    self->__PVT__execute_BranchPlugin_eq = VL_RAND_RESET_I(1);
    self->__PVT__execute_BranchPlugin_branch_src2 = VL_RAND_RESET_I(32);
    self->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE = VL_RAND_RESET_I(1);
    self->__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2 = VL_RAND_RESET_I(1);
    self->__PVT__execute_to_memory_MEMORY_ADDRESS_LOW = VL_RAND_RESET_I(2);
    self->__PVT__memory_to_writeBack_MEMORY_ADDRESS_LOW = VL_RAND_RESET_I(2);
    self->__PVT__memory_to_writeBack_MUL_LOW = VL_RAND_RESET_Q(52);
    self->__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE = VL_RAND_RESET_I(1);
    self->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE = VL_RAND_RESET_I(1);
    self->__PVT__decode_to_execute_SRC_USE_SUB_LESS = VL_RAND_RESET_I(1);
    self->__PVT__decode_to_execute_SRC1 = VL_RAND_RESET_I(32);
    self->__PVT__decode_to_execute_MEMORY_STORE = VL_RAND_RESET_I(1);
    self->__PVT__execute_to_memory_MEMORY_STORE = VL_RAND_RESET_I(1);
    self->__PVT__execute_to_memory_MUL_LH = VL_RAND_RESET_Q(34);
    self->__PVT__decode_to_execute_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    self->__PVT__execute_to_memory_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    self->__PVT__memory_to_writeBack_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    self->__PVT__execute_to_memory_MUL_LL = VL_RAND_RESET_I(32);
    self->__PVT__decode_to_execute_SRC2_FORCE_ZERO = VL_RAND_RESET_I(1);
    self->__PVT__decode_to_execute_ENV_CTRL = VL_RAND_RESET_I(1);
    self->__PVT__execute_to_memory_ENV_CTRL = VL_RAND_RESET_I(1);
    self->__PVT__memory_to_writeBack_ENV_CTRL = VL_RAND_RESET_I(1);
    self->__PVT__execute_to_memory_REGFILE_WRITE_DATA = VL_RAND_RESET_I(32);
    self->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA = VL_RAND_RESET_I(32);
    self->__PVT__decode_to_execute_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    self->__PVT__execute_to_memory_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    self->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    self->__PVT__decode_to_execute_SHIFT_CTRL = VL_RAND_RESET_I(2);
    self->__PVT__execute_to_memory_SHIFT_CTRL = VL_RAND_RESET_I(2);
    self->__PVT__execute_to_memory_BRANCH_DO = VL_RAND_RESET_I(1);
    self->__PVT__decode_to_execute_BRANCH_CTRL = VL_RAND_RESET_I(2);
    self->__PVT__execute_to_memory_MUL_HL = VL_RAND_RESET_Q(34);
    self->__PVT__decode_to_execute_ALU_CTRL = VL_RAND_RESET_I(2);
    self->__PVT__decode_to_execute_IS_MUL = VL_RAND_RESET_I(1);
    self->__PVT__execute_to_memory_IS_MUL = VL_RAND_RESET_I(1);
    self->__PVT__memory_to_writeBack_IS_MUL = VL_RAND_RESET_I(1);
    self->__PVT__decode_to_execute_SRC_LESS_UNSIGNED = VL_RAND_RESET_I(1);
    self->__PVT__decode_to_execute_SRC2 = VL_RAND_RESET_I(32);
    self->__PVT__execute_to_memory_BRANCH_CALC = VL_RAND_RESET_I(32);
    self->__PVT__decode_to_execute_IS_RVC = VL_RAND_RESET_I(1);
    self->__PVT__decode_to_execute_INSTRUCTION = VL_RAND_RESET_I(32);
    self->__PVT__execute_to_memory_INSTRUCTION = VL_RAND_RESET_I(32);
    self->__PVT__memory_to_writeBack_INSTRUCTION = VL_RAND_RESET_I(32);
    self->__PVT__execute_to_memory_MUL_HH = VL_RAND_RESET_Q(34);
    self->__PVT__memory_to_writeBack_MUL_HH = VL_RAND_RESET_Q(34);
    self->__PVT__execute_to_memory_SHIFT_RIGHT = VL_RAND_RESET_I(32);
    self->__PVT__decode_to_execute_RS2 = VL_RAND_RESET_I(32);
    self->__PVT__decode_to_execute_PC = VL_RAND_RESET_I(32);
    self->__PVT__execute_to_memory_PC = VL_RAND_RESET_I(32);
    self->__PVT__memory_to_writeBack_PC = VL_RAND_RESET_I(32);
    self->__PVT__decode_to_execute_ALU_BITWISE_CTRL = VL_RAND_RESET_I(2);
    self->__PVT__memory_to_writeBack_MEMORY_READ_DATA = VL_RAND_RESET_I(32);
    self->__PVT__decode_to_execute_RS1 = VL_RAND_RESET_I(32);
    self->__PVT__decode_to_execute_CSR_WRITE_OPCODE = VL_RAND_RESET_I(1);
    self->__PVT__decode_to_execute_IS_CSR = VL_RAND_RESET_I(1);
    self->__PVT__execute_CsrPlugin_csr_768 = VL_RAND_RESET_I(1);
    self->__PVT__execute_CsrPlugin_csr_836 = VL_RAND_RESET_I(1);
    self->__PVT__execute_CsrPlugin_csr_772 = VL_RAND_RESET_I(1);
    self->__PVT__execute_CsrPlugin_csr_832 = VL_RAND_RESET_I(1);
    self->__PVT__execute_CsrPlugin_csr_834 = VL_RAND_RESET_I(1);
    self->__PVT__execute_CsrPlugin_csr_3072 = VL_RAND_RESET_I(1);
    self->__PVT__execute_CsrPlugin_csr_3200 = VL_RAND_RESET_I(1);
    self->__PVT___zz_VexRiscv_154_ = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_155_ = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_156_ = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_157_ = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_158_ = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_159_ = VL_RAND_RESET_I(32);
    self->__PVT___zz_VexRiscv_160_ = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        self->RegFilePlugin_regFile[__Vi0] = VL_RAND_RESET_I(32);
    }
    self->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT___zz_StreamFifoLowLatency_1_ = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__risingOccupancy = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__pushing = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT__popping = VL_RAND_RESET_I(1);
    self->__PVT__IBusSimplePlugin_rspJoin_rspBuffer_c__DOT___zz_StreamFifoLowLatency_3_ = VL_RAND_RESET_Q(33);
    self->__Vdly__CsrPlugin_mstatus_MIE = VL_RAND_RESET_I(1);
}
