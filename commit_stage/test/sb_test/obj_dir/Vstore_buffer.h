// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vstore_buffer_H_
#define _Vstore_buffer_H_

#include "verilated.h"

class Vstore_buffer__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vstore_buffer) {
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
    VL_SIG16(store_buffer__DOT__data_match,15,0);
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
    Vstore_buffer__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vstore_buffer);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vstore_buffer(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vstore_buffer();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vstore_buffer__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vstore_buffer__Syms* symsp, bool first);
  private:
    static QData _change_request(Vstore_buffer__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vstore_buffer__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vstore_buffer__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vstore_buffer__Syms* __restrict vlSymsp);
    static void _eval_settle(Vstore_buffer__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(Vstore_buffer__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vstore_buffer__Syms* __restrict vlSymsp);
    static void traceChgThis(Vstore_buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vstore_buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vstore_buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vstore_buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vstore_buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vstore_buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vstore_buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vstore_buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
