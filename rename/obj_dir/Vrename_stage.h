// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vrename_stage_H_
#define _Vrename_stage_H_

#include "verilated.h"

class Vrename_stage__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vrename_stage) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_IN8(decoded_v_i,0,0);
    VL_OUT8(rename_decode_ready_o,0,0);
    VL_OUT8(renamed_v_o,0,0);
    VL_IN8(issue_rename_ready_i,0,0);
    VL_IN8(commit_v_i,0,0);
    VL_IN8(mispredict_i,0,0);
    VL_IN16(commit_rename_i,11,0);
    VL_OUTW(renamed_o,73,0,3);
    VL_IN64(decoded_i,56,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIGW(rename_stage__DOT__lut_spec_n,111,0,4);
    VL_SIGW(rename_stage__DOT__lut_spec_q,111,0,4);
    VL_SIGW(rename_stage__DOT__fl_spec_n,895,0,28);
    VL_SIGW(rename_stage__DOT__fl_spec_q,895,0,28);
    VL_SIGW(rename_stage__DOT__lut_n,111,0,4);
    VL_SIGW(rename_stage__DOT__lut_q,111,0,4);
    VL_SIGW(rename_stage__DOT__fl_n,895,0,28);
    VL_SIGW(rename_stage__DOT__fl_q,895,0,28);
    VL_SIG8(rename_stage__DOT__fl_read_pt,6,0);
    VL_SIG8(rename_stage__DOT__fl_write_pt,6,0);
    VL_SIG8(rename_stage__DOT__fl_spec_read_pt,6,0);
    VL_SIG8(rename_stage__DOT__fl_spec_write_pt,6,0);
    VL_SIG8(rename_stage__DOT__fl_read_pt_n,6,0);
    VL_SIG8(rename_stage__DOT__fl_write_pt_n,6,0);
    VL_SIG8(rename_stage__DOT__fl_spec_read_pt_n,6,0);
    VL_SIG8(rename_stage__DOT__fl_spec_write_pt_n,6,0);
    VL_SIG8(rename_stage__DOT__fl_spec_num,7,0);
    VL_SIG8(rename_stage__DOT__fl_spec_num_n,7,0);
    VL_SIG8(rename_stage__DOT__roll_back,0,0);
    VL_SIGW(rename_stage__DOT__renamed,73,0,3);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(rename_stage__DOT____Vlvbound1,6,0);
    VL_SIG8(rename_stage__DOT____Vlvbound2,6,0);
    VL_SIG8(rename_stage__DOT____Vlvbound3,6,0);
    VL_SIG8(rename_stage__DOT____Vlvbound4,6,0);
    VL_SIG8(__Vclklast__TOP__clk_i,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vrename_stage__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrename_stage);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vrename_stage(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vrename_stage();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vrename_stage__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vrename_stage__Syms* symsp, bool first);
  private:
    static QData _change_request(Vrename_stage__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vrename_stage__Syms* __restrict vlSymsp);
    static void _combo__TOP__4(Vrename_stage__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vrename_stage__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vrename_stage__Syms* __restrict vlSymsp);
    static void _eval_settle(Vrename_stage__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vrename_stage__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vrename_stage__Syms* __restrict vlSymsp);
    static void traceChgThis(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
