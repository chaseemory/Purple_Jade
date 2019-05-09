// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vrob_H_
#define _Vrob_H_

#include "verilated.h"

class Vrob__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vrob) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_IN8(issue_rob_valid_i,0,0);
    VL_OUT8(rob_issue_entry_num_o,5,0);
    VL_OUT8(rob_issue_ready_o,0,0);
    VL_OUT8(rob_phys_valid_o,0,0);
    VL_OUT8(rob_phys_reg_cl_o,6,0);
    VL_OUT8(rob_sb_valid_o,0,0);
    VL_OUT8(rob_mispredict_o,0,0);
    VL_OUT8(rob_rename_valid_o,0,0);
    VL_OUT8(rob_flag_valid_o,0,0);
    VL_OUT8(rob_flag_o,7,0);
    VL_IN8(flag_rob_i,3,0);
    VL_OUT16(rob_fe_redirected_pc_o,15,0);
    VL_OUT16(rob_rename_entry_o,11,0);
    VL_INW(cdb_i,314,0,10);
    VL_IN64(issue_rob_entry_i,59,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(rob__DOT__rob_alloc_pt,5,0);
    VL_SIG8(rob__DOT__rob_alloc_pt_n,5,0);
    VL_SIG8(rob__DOT__rob_commit_pt,5,0);
    VL_SIG8(rob__DOT__rob_commit_pt_n,5,0);
    VL_SIG8(rob__DOT__rob_num,6,0);
    VL_SIG8(rob__DOT__rob_num_n,6,0);
    VL_SIG8(rob__DOT__prev_spec_branch,0,0);
    VL_SIG8(rob__DOT__condition_taken,0,0);
    VL_SIG16(rob__DOT__predicted_pc,15,0);
    VL_SIG16(rob__DOT__rename_entry,11,0);
    VL_SIG(rob__DOT__unnamedblk1__DOT__i,31,0);
    VL_SIG(rob__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j,31,0);
    VL_SIGW(rob__DOT__rob_q,3839,0,120);
    VL_SIGW(rob__DOT__rob_n,3839,0,120);
    VL_SIG64(rob__DOT__committing_instr,59,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(rob__DOT____Vlvbound2,0,0);
    VL_SIG8(rob__DOT____Vlvbound3,3,0);
    VL_SIG8(rob__DOT____Vlvbound5,0,0);
    VL_SIG8(__Vclklast__TOP__clk_i,0,0);
    VL_SIG16(rob__DOT____Vlvbound4,15,0);
    VL_SIG(__Vm_traceActivity,31,0);
    VL_SIG64(rob__DOT____Vlvbound1,59,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vrob__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrob);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vrob(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vrob();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vrob__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vrob__Syms* symsp, bool first);
  private:
    static QData _change_request(Vrob__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vrob__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vrob__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vrob__Syms* __restrict vlSymsp);
    static void _eval_settle(Vrob__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(Vrob__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vrob__Syms* __restrict vlSymsp);
    static void traceChgThis(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard