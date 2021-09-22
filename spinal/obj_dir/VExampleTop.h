// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VEXAMPLETOP_H_
#define VERILATED_VEXAMPLETOP_H_  // guard

#include "rtlflow.h"
#include "verilated_heavy.h"
#include "rf_heavy.h"
#include "VExampleTop__Dpi.h"
#define NUM_TESTBENCHES 1ULL
//==========

class RTLflow;
class VExampleTop__Syms;
class VExampleTop_ExampleTop;


//----------

VL_MODULE(VExampleTop) {
    friend class RTLflow;
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VExampleTop_ExampleTop* ExampleTop;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint all: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 17 19 
    const RF_IN8(osc_clk_in,0,0){576 * NUM_TESTBENCHES/*CData*/};
    // Begin mtask footprint all: 19 
    const RF_IN8(uart_rxd,0,0){582 * NUM_TESTBENCHES/*CData*/};
    // Begin mtask footprint all: 
    const RF_IN8(button,0,0){577 * NUM_TESTBENCHES/*CData*/};
    // Begin mtask footprint all: 7 
    const RF_OUT8(led_red,0,0){578 * NUM_TESTBENCHES/*CData*/};
    const RF_OUT8(led_green,0,0){579 * NUM_TESTBENCHES/*CData*/};
    const RF_OUT8(led_blue,0,0){580 * NUM_TESTBENCHES/*CData*/};
    const RF_OUT8(uart_txd,0,0){581 * NUM_TESTBENCHES/*CData*/};

    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint all: 

    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VExampleTop__Syms* __VlSymsp;  // Symbol table
    static RTLflow& _rtlflow;
  private:
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
    void __Vconfigure(VExampleTop__Syms* symsp, bool first);
    __device__
    static void _settle__TOP__1(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    __device__
    static void _settle__TOP__2(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    static void _eval_initial(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
  private:
    __device__
    static IData _change_request_1(CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
    static void _ctor_var_reset(VExampleTop* self, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals) VL_ATTR_COLD;
    friend __global__ void _last_assign(CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    friend __global__ void _eval_settle(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals);
    friend __global__ void _change_request(VExampleTop__Syms* __restrict vlSymsp, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__1(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__3(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__4(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__5(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__6(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__9(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__10(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__12(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__8(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__13(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__2(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__7(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__11(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__14(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__15(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__16(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__17(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__18(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__19(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
    friend __global__ void __Vmtask__20(void* symtab, CData* _csignals, SData* _ssignals, IData* _isignals, QData* _qsignals, IData* change);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
