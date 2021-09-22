// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VExampleTop__Syms.h"
#include "VExampleTop.h"
#include "VExampleTop_ExampleTop.h"
#include "VExampleTop_CpuTop.h"
#include "VExampleTop_CpuComplex.h"
#include "VExampleTop_VexRiscv.h"



// FUNCTIONS
VExampleTop__Syms::~VExampleTop__Syms()
{
}

VExampleTop__Syms::VExampleTop__Syms(VerilatedContext* contextp, VExampleTop* topp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, const char* namep)
    // Setup locals
    : VerilatedSyms{contextp}
    , __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__ExampleTop(_csignals, _ssignals, _isignals, _qsignals, Verilated::catName(topp->name(), "ExampleTop"))
    , TOP__ExampleTop__cpu_u_cpu(_csignals, _ssignals, _isignals, _qsignals, Verilated::catName(topp->name(), "ExampleTop.cpu_u_cpu"))
    , TOP__ExampleTop__cpu_u_cpu__u_cpu(_csignals, _ssignals, _isignals, _qsignals, Verilated::catName(topp->name(), "ExampleTop.cpu_u_cpu.u_cpu"))
    , TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu(_csignals, _ssignals, _isignals, _qsignals, Verilated::catName(topp->name(), "ExampleTop.cpu_u_cpu.u_cpu.cpu"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->ExampleTop = &TOP__ExampleTop;
    TOPp->ExampleTop->cpu_u_cpu = &TOP__ExampleTop__cpu_u_cpu;
    TOPp->ExampleTop->cpu_u_cpu->u_cpu = &TOP__ExampleTop__cpu_u_cpu__u_cpu;
    TOPp->ExampleTop->cpu_u_cpu->u_cpu->cpu = &TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__ExampleTop.__Vconfigure(this, true);
    TOP__ExampleTop__cpu_u_cpu.__Vconfigure(this, true);
    TOP__ExampleTop__cpu_u_cpu__u_cpu.__Vconfigure(this, true);
    TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_ExampleTop__cpu_u_cpu__u_cpu__cpu.configure(this, name(), "ExampleTop.cpu_u_cpu.u_cpu.cpu", "cpu", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        //__Vscope_ExampleTop__cpu_u_cpu__u_cpu__cpu.varInsert(__Vfinal,"CsrPlugin_inWfi", _csignals + TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.CsrPlugin_inWfi, false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        //__Vscope_ExampleTop__cpu_u_cpu__u_cpu__cpu.varInsert(__Vfinal,"CsrPlugin_interruptJump", _csignals + TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.CsrPlugin_interruptJump, false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        //__Vscope_ExampleTop__cpu_u_cpu__u_cpu__cpu.varInsert(__Vfinal,"CsrPlugin_interrupt_code", _csignals + TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.CsrPlugin_interrupt_code, false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        //__Vscope_ExampleTop__cpu_u_cpu__u_cpu__cpu.varInsert(__Vfinal,"IBusSimplePlugin_decodePc_pcReg", _isignals + TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_decodePc_pcReg, false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        //__Vscope_ExampleTop__cpu_u_cpu__u_cpu__cpu.varInsert(__Vfinal,"IBusSimplePlugin_fetchPc_pcReg", _isignals + TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.IBusSimplePlugin_fetchPc_pcReg, false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        //__Vscope_ExampleTop__cpu_u_cpu__u_cpu__cpu.varInsert(__Vfinal,"RegFilePlugin_regFile", _isignals + TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.RegFilePlugin_regFile, false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,31);
        //__Vscope_ExampleTop__cpu_u_cpu__u_cpu__cpu.varInsert(__Vfinal,"lastStageInstruction", _isignals + TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageInstruction, false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        //__Vscope_ExampleTop__cpu_u_cpu__u_cpu__cpu.varInsert(__Vfinal,"lastStageIsFiring", _csignals + TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageIsFiring, false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        //__Vscope_ExampleTop__cpu_u_cpu__u_cpu__cpu.varInsert(__Vfinal,"lastStageIsValid", _csignals + TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageIsValid, false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        //__Vscope_ExampleTop__cpu_u_cpu__u_cpu__cpu.varInsert(__Vfinal,"lastStagePc", _isignals + TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStagePc, false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        //__Vscope_ExampleTop__cpu_u_cpu__u_cpu__cpu.varInsert(__Vfinal,"lastStageRegFileWrite_payload_address", _csignals + TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageRegFileWrite_payload_address, false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        //__Vscope_ExampleTop__cpu_u_cpu__u_cpu__cpu.varInsert(__Vfinal,"lastStageRegFileWrite_payload_data", _isignals + TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageRegFileWrite_payload_data, false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        //__Vscope_ExampleTop__cpu_u_cpu__u_cpu__cpu.varInsert(__Vfinal,"lastStageRegFileWrite_valid", _csignals + TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu.lastStageRegFileWrite_valid, false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
