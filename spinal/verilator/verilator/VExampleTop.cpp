// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleTop.h for the primary calling header

#include "VExampleTop.h"
#include "VExampleTop__Syms.h"

#include "verilated_dpi.h"

//==========

VerilatedContext* VExampleTop::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VExampleTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VExampleTop::eval\n"); );
    VExampleTop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../spinal/ExampleTop.sim.v", 7067, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VExampleTop::_eval_initial_loop(VExampleTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../spinal/ExampleTop.sim.v", 7067, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VExampleTop::_eval(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_eval\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vm_even_cycle = !vlTOPp->__Vm_even_cycle;
    vlTOPp->__Vm_threadPoolp->workerp(0)->addTask(__Vmtask__1, vlTOPp->__Vm_even_cycle, vlSymsp);
    __Vmtask__5(vlTOPp->__Vm_even_cycle, vlSymsp);
    Verilated::mtaskId(0);
    vlTOPp->__Vm_mt_final.waitUntilUpstreamDone(vlTOPp->__Vm_even_cycle);
    // Final
    vlTOPp->__Vclklast__TOP__osc_clk_in = vlTOPp->osc_clk_in;
}

VL_INLINE_OPT QData VExampleTop::_change_request(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_change_request\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VExampleTop::_change_request_1(VExampleTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_change_request_1\n"); );
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VExampleTop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleTop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((osc_clk_in & 0xfeU))) {
        Verilated::overWidthError("osc_clk_in");}
    if (VL_UNLIKELY((button & 0xfeU))) {
        Verilated::overWidthError("button");}
    if (VL_UNLIKELY((uart_rxd & 0xfeU))) {
        Verilated::overWidthError("uart_rxd");}
}
#endif  // VL_DEBUG

void VExampleTop::__Vmtask__1(bool even_cycle, void* symtab) {
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    Verilated::mtaskId(1);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__38(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_5.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_6.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(9);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__43(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_12.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_8.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(10);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu._sequent__TOP__ExampleTop__cpu_u_cpu__34(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(4);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__40(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(3);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__39(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_13.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(13);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__46(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_2.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_11.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(7);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__48(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_14.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(14);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__50(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_15.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_18.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(19);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop._sequent__TOP__ExampleTop__4(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(16);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__51(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_20.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(20);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu._sequent__TOP__ExampleTop__cpu_u_cpu__36(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}

void VExampleTop::__Vmtask__5(bool even_cycle, void* symtab) {
    VExampleTop__Syms* __restrict vlSymsp = (VExampleTop__Syms*)symtab;
    VExampleTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vlTOPp->__Vm_mt_5.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(5);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__41(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_6.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(6);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__42(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_13.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_12.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(12);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__44(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_13.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_8.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(8);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__45(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_13.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_11.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(11);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__49(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_14.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_2.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(2);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__47(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_14.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(17);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__52(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_20.signalUpstreamDone(even_cycle);
    vlTOPp->__Vm_mt_18.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(18);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu._sequent__TOP__ExampleTop__cpu_u_cpu__u_cpu__cpu__53(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_15.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(15);
    if (((IData)(vlTOPp->osc_clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__osc_clk_in)))) {
        vlSymsp->TOP__ExampleTop__cpu_u_cpu._sequent__TOP__ExampleTop__cpu_u_cpu__35(vlSymsp);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlTOPp->__Vm_mt_final.signalUpstreamDone(even_cycle);
}
