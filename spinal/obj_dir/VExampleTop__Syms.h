// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VEXAMPLETOP__SYMS_H_
#define VERILATED_VEXAMPLETOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VExampleTop.h"
#include "VExampleTop_ExampleTop.h"
#include "VExampleTop_CpuTop.h"
#include "VExampleTop_CpuComplex.h"
#include "VExampleTop_VexRiscv.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VExampleTop__Syms : public VerilatedSyms {
  public:

    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;

    // SUBCELL STATE
    VExampleTop*                   TOPp;
    VExampleTop_ExampleTop         TOP__ExampleTop;
    VExampleTop_CpuTop             TOP__ExampleTop__cpu_u_cpu;
    VExampleTop_CpuComplex         TOP__ExampleTop__cpu_u_cpu__u_cpu;
    VExampleTop_VexRiscv           TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu;

    // SCOPE NAMES
    VerilatedScope __Vscope_ExampleTop__cpu_u_cpu__u_cpu__cpu;

    // CREATORS
    VExampleTop__Syms(VerilatedContext* contextp, VExampleTop* topp, CData* _csignals, SData* _ssignals,  IData* _isignals, QData* _qsignals, const char* namep);
    ~VExampleTop__Syms();

    // METHODS
    inline const char* name() { return __Vm_namep; }

} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
