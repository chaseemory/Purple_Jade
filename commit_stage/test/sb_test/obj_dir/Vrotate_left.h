// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vrotate_left_H_
#define _Vrotate_left_H_

#include "verilated.h"

class Vrotate_left__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vrotate_left) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_IN8(rob_sb_valid_i,0,0);
    VL_IN8(rob_mispredict_i,0,0);
    VL_IN8(issue_sb_v_i,0,0);
    VL_OUT8(sb_issue_entry_num_o,3,0);
    VL_OUT8(sb_issue_ready_o,0,0);
    VL_IN8(exe_sb_v_i,0,0);
    VL_IN8(exe_ld_pass_sb_num_i,3,0);
    VL_OUT8(sb_ld_pass_valid_o,0,0);
    VL_OUT8(sb_mem_v_o,0,0);
    VL_IN16(exe_ld_bypass_addr_i,15,0);
    VL_OUT16(sb_ld_pass_value_o,15,0);
    VL_OUT16(sb_mem_addr_o,15,0);
    VL_OUT16(sb_mem_data_o,15,0);
    VL_IN64(exe_sb_i,35,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(store_buffer__DOT__sb_alloc_pt,3,0);
    VL_SIG8(store_buffer__DOT__sb_alloc_pt_n,3,0);
    VL_SIG8(store_buffer__DOT__sb_commit_pt,3,0);
    VL_SIG8(store_buffer__DOT__sb_commit_pt_n,3,0);
    VL_SIG8(store_buffer__DOT__sb_num,4,0);
    VL_SIG8(store_buffer__DOT__sb_num_n,4,0);
    VL_SIG8(store_buffer__DOT__address_match,0,0);
    VL_SIG8(store_buffer__DOT__trimed_sb_num,3,0);
    VL_SIG8(store_buffer__DOT__matched_trimed_sb_num,3,0);
    VL_SIG8(store_buffer__DOT__matched_sb_num,3,0);
    VL_SIG16(store_buffer__DOT__match_vector,15,0);
    VL_SIGW(store_buffer__DOT__sb_n,527,0,17);
    VL_SIGW(store_buffer__DOT__sb_q,527,0,17);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(store_buffer__DOT____Vlvbound1,0,0);
    VL_SIG8(store_buffer__DOT____Vlvbound2,0,0);
    VL_SIG8(store_buffer__DOT____Vlvbound5,0,0);
    VL_SIG8(__Vclklast__TOP__clk_i,0,0);
    VL_SIG16(store_buffer__DOT____Vlvbound3,15,0);
    VL_SIG16(store_buffer__DOT____Vlvbound4,15,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vrotate_left__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrotate_left);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vrotate_left(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vrotate_left();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vrotate_left__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vrotate_left__Syms* symsp, bool first);
  private:
    static QData _change_request(Vrotate_left__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vrotate_left__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vrotate_left__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vrotate_left__Syms* __restrict vlSymsp);
    static void _eval_settle(Vrotate_left__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(Vrotate_left__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vrotate_left__Syms* __restrict vlSymsp);
    static void traceChgThis(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
