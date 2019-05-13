// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vfe_top_H_
#define _Vfe_top_H_

#include "verilated.h"

class Vfe_top__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vfe_top) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_IN8(ready_i,0,0);
    VL_OUT8(valid_o,0,0);
    VL_OUT64(final_decoded_instruction,56,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(fe_top__DOT__take_branch,0,0);
    VL_SIG8(fe_top__DOT__valid_f_d,0,0);
    VL_SIG8(fe_top__DOT__valid_d_b,0,0);
    VL_SIG8(fe_top__DOT__speculative_branch,0,0);
    VL_SIG16(fe_top__DOT__program_counter_fetch_r,15,0);
    VL_SIG16(fe_top__DOT__program_counter_n,15,0);
    VL_SIG64(fe_top__DOT__instruction_decoded_decode,56,0);
    VL_SIG64(fe_top__DOT__instruction_decoded_branch,56,0);
    VL_SIG16(fe_top__DOT__instruction_mem__DOT__mem[65536],15,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG(__Vtable1_fe_top__DOT____Vcellout__decoder__o[1024],18,0);
    static VL_ST_SIG8(__Vtable2_fe_top__DOT__take_branch[16],0,0);
    static VL_ST_SIG8(__Vtable2_fe_top__DOT__speculative_branch[16],0,0);
    VL_SIG8(fe_top__DOT____Vcellinp__decode_branch_pipe__flush,0,0);
    VL_SIG8(__Vtableidx2,3,0);
    VL_SIG8(__Vclklast__TOP__clk_i,0,0);
    VL_SIGW(fe_top__DOT____Vcellout__extend_the_things__immediate_o,127,0,4);
    VL_SIG16(__Vtableidx1,9,0);
    VL_SIG(fe_top__DOT____Vcellout__fetch_decode_pipe__data_o,31,0);
    VL_SIG(fe_top__DOT____Vcellinp__fetch_decode_pipe__data_i,31,0);
    VL_SIG(fe_top__DOT____Vcellout__decoder__o,18,0);
    VL_SIGW(fe_top__DOT____Vcellout__decode_branch_pipe__data_o,73,0,3);
    VL_SIGW(fe_top__DOT____Vcellinp__decode_branch_pipe__data_i,73,0,3);
    VL_SIG(__Vm_traceActivity,31,0);
    VL_SIG64(__Vchglast__TOP__fe_top__DOT__instruction_decoded_branch,56,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vfe_top__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vfe_top& operator= (const Vfe_top&);  ///< Copying not allowed
    Vfe_top(const Vfe_top&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vfe_top(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vfe_top();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vfe_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vfe_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vfe_top__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vfe_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vfe_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vfe_top__Syms* __restrict vlSymsp);
    static void _eval_settle(Vfe_top__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(Vfe_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vfe_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vfe_top__Syms* __restrict vlSymsp);
    static void traceChgThis(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
