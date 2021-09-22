// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#pragma once

#include "verilated_heavy.h"
#include "verilated_threads.h"
#include "VExampleTop__Dpi.h"

//==========

class VExampleTop__Syms;
class VExampleTop_ExampleTop;


//----------

VL_MODULE(VExampleTop) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VExampleTop_ExampleTop* ExampleTop;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint all: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 17 19 
    VL_IN8(osc_clk_in,0,0);
    // Begin mtask footprint all: 19 
    VL_IN8(uart_rxd,0,0);
    // Begin mtask footprint all: 
    VL_IN8(button,0,0);
    // Begin mtask footprint all: 7 
    VL_OUT8(led_red,0,0);
    VL_OUT8(led_green,0,0);
    VL_OUT8(led_blue,0,0);
    VL_OUT8(uart_txd,0,0);

    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint all: 
    CData/*0:0*/ __Vclklast__TOP__osc_clk_in;

    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VExampleTop__Syms* __VlSymsp;  // Symbol table
  private:
    VlMTaskVertex __Vm_mt_5;
    VlMTaskVertex __Vm_mt_6;
    VlMTaskVertex __Vm_mt_12;
    VlMTaskVertex __Vm_mt_8;
    VlMTaskVertex __Vm_mt_13;
    VlMTaskVertex __Vm_mt_2;
    VlMTaskVertex __Vm_mt_11;
    VlMTaskVertex __Vm_mt_14;
    VlMTaskVertex __Vm_mt_15;
    VlMTaskVertex __Vm_mt_18;
    VlMTaskVertex __Vm_mt_20;
    VlMTaskVertex __Vm_mt_final;
    VlThreadPool* __Vm_threadPoolp;
    bool __Vm_even_cycle;
  public:

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VExampleTop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VExampleTop(VerilatedContext* contextp, const char* name = "TOP");
    VExampleTop(const char* name = "TOP")
      : VExampleTop(nullptr, name) {}
    /// Destroy the model; called (often implicitly) by application code
    ~VExampleTop();

    // API METHODS
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp();
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();

    // INTERNAL METHODS
    static void _eval_initial_loop(VExampleTop__Syms* __restrict vlSymsp);
    void __Vconfigure(VExampleTop__Syms* symsp, bool first);
  private:
    static QData _change_request(VExampleTop__Syms* __restrict vlSymsp);
    static QData _change_request_1(VExampleTop__Syms* __restrict vlSymsp);
    static void _ctor_var_reset(VExampleTop* self) VL_ATTR_COLD;
  public:
    static void _eval(VExampleTop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__2(VExampleTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void __Vmtask__1(bool even_cycle, void* symtab);
    static void __Vmtask__5(bool even_cycle, void* symtab);
    static void __Vmtask__final(bool even_cycle, void* symtab);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


