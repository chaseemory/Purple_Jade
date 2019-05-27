// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vbsg_mem_1r1w_sync_H_
#define _Vbsg_mem_1r1w_sync_H_

#include "verilated.h"

class Vbsg_mem_1r1w_sync__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vbsg_mem_1r1w_sync) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_IN8(exe_w_v_i,6,0);
    VL_IN64(exe_addr_i,48,0);
    VL_IN8(issue_read_rs1_i,6,0);
    VL_OUT8(rs1_valid_o,0,0);
    VL_IN8(issue_read_rs2_i,6,0);
    VL_OUT8(rs2_valid_o,0,0);
    VL_IN8(issue_sb_v_i,0,0);
    VL_OUT8(sb_issue_entry_num_o,3,0);
    VL_OUT8(sb_issue_ready_o,0,0);
    VL_IN8(exe_sb_v_i,0,0);
    VL_IN8(exe_ld_bypass_sb_num_i,3,0);
    VL_IN8(rename_rob_valid_i,0,0);
    VL_OUT8(rob_rename_ready_o,0,0);
    VL_OUT8(sb_ld_bypass_valid_o,0,0);
    VL_OUT8(rob_rename_valid_o,0,0);
    VL_OUT8(rob_rename_entry_num_o,5,0);
    VL_OUT8(sb_rename_clear_st_v_o,0,0);
    VL_OUT8(sb_rename_clear_st_num_o,3,0);
    VL_OUT8(rob_mispredict_o,0,0);
    VL_OUT8(sb_commit_pt_o,3,0);
    VL_INW(exe_data_i,111,0,4);
    VL_OUT16(rs1_data_o,15,0);
    VL_OUT16(rs2_data_o,15,0);
    VL_IN16(exe_mem_addr_i,15,0);
    VL_OUT16(exe_mem_data_o,15,0);
    VL_IN16(exe_ld_bypass_addr_i,15,0);
    VL_OUT16(sb_ld_bypass_value_o,15,0);
    VL_OUT16(rob_rename_entry_o,11,0);
    VL_OUT16(rob_fe_redirected_pc_o,15,0);
    VL_OUT16(sb_wb_vector_o,15,0);
    VL_IN64(exe_sb_i,35,0);
    VL_IN64(rename_rob_entry_i,60,0);
    VL_IN64(cdb_i[7],33,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(commit_stage__DOT__sb_mem_v,0,0);
    VL_SIG8(commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt,5,0);
    VL_SIG8(commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt_n,5,0);
    VL_SIG8(commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt,5,0);
    VL_SIG8(commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt_n,5,0);
    VL_SIG8(commit_stage__DOT__reorder_buffer__DOT__rob_num,6,0);
    VL_SIG8(commit_stage__DOT__reorder_buffer__DOT__rob_num_n,6,0);
    VL_SIG8(commit_stage__DOT__reorder_buffer__DOT__prev_spec_branch_n,0,0);
    VL_SIG8(commit_stage__DOT__reorder_buffer__DOT__prev_spec_branch,0,0);
    VL_SIG8(commit_stage__DOT__reorder_buffer__DOT__condition_taken,0,0);
    VL_SIG8(commit_stage__DOT__states__DOT__flag,3,0);
    VL_SIG8(commit_stage__DOT__states__DOT__flag_n,3,0);
    VL_SIG8(commit_stage__DOT__sb__DOT__sb_alloc_pt,3,0);
    VL_SIG8(commit_stage__DOT__sb__DOT__sb_alloc_pt_n,3,0);
    VL_SIG8(commit_stage__DOT__sb__DOT__sb_commit_pt,3,0);
    VL_SIG8(commit_stage__DOT__sb__DOT__sb_commit_pt_n,3,0);
    VL_SIG8(commit_stage__DOT__sb__DOT__sb_num,4,0);
    VL_SIG8(commit_stage__DOT__sb__DOT__sb_num_n,4,0);
    VL_SIG8(commit_stage__DOT__sb__DOT__address_match,0,0);
    VL_SIG8(commit_stage__DOT__sb__DOT__trimed_sb_num,3,0);
    VL_SIG8(commit_stage__DOT__sb__DOT__matched_trimed_sb_num,3,0);
    VL_SIG8(commit_stage__DOT__sb__DOT__matched_sb_num,3,0);
    VL_SIG16(commit_stage__DOT__reorder_buffer__DOT__predicted_pc_n,15,0);
    VL_SIG16(commit_stage__DOT__reorder_buffer__DOT__predicted_pc,15,0);
    VL_SIG16(commit_stage__DOT__reorder_buffer__DOT__rename_entry,11,0);
    VL_SIGW(commit_stage__DOT__states__DOT__reg_n,2047,0,64);
    VL_SIGW(commit_stage__DOT__states__DOT__reg_q,2047,0,64);
    VL_SIG16(commit_stage__DOT__sb__DOT__match_vector,15,0);
    VL_SIG16(commit_stage__DOT__mem__DOT__synth__DOT__r_addr_r,15,0);
    VL_SIG(commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i,31,0);
    VL_SIG(commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j,31,0);
    VL_SIGW(commit_stage__DOT__states__DOT__valid,127,0,4);
    VL_SIGW(commit_stage__DOT__states__DOT__valid_n,127,0,4);
    VL_SIGW(commit_stage__DOT__reorder_buffer__DOT__rob_q,3903,0,122);
    VL_SIGW(commit_stage__DOT__reorder_buffer__DOT__rob_n,3903,0,122);
    VL_SIG64(commit_stage__DOT__reorder_buffer__DOT__committing_instr,60,0);
    VL_SIGW(commit_stage__DOT__sb__DOT__sb_n,527,0,17);
    VL_SIGW(commit_stage__DOT__sb__DOT__sb_q,527,0,17);
    VL_SIG64(commit_stage__DOT__reorder_buffer__DOT__cdb[7],33,0);
    VL_SIG16(commit_stage__DOT__mem__DOT__synth__DOT__mem[65536],15,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(commit_stage__DOT__reorder_buffer__DOT____Vlvbound2,0,0);
    VL_SIG8(commit_stage__DOT__reorder_buffer__DOT____Vlvbound3,0,0);
    VL_SIG8(commit_stage__DOT__reorder_buffer__DOT____Vlvbound4,3,0);
    VL_SIG8(commit_stage__DOT__reorder_buffer__DOT____Vlvbound6,0,0);
    VL_SIG8(commit_stage__DOT__reorder_buffer__DOT____Vlvbound7,0,0);
    VL_SIG8(commit_stage__DOT__sb__DOT____Vlvbound1,0,0);
    VL_SIG8(commit_stage__DOT__sb__DOT____Vlvbound2,0,0);
    VL_SIG8(commit_stage__DOT__sb__DOT____Vlvbound5,0,0);
    VL_SIG8(__Vclklast__TOP__clk_i,0,0);
    VL_SIG16(commit_stage__DOT__reorder_buffer__DOT____Vlvbound5,15,0);
    VL_SIG16(commit_stage__DOT__sb__DOT____Vlvbound3,15,0);
    VL_SIG16(commit_stage__DOT__sb__DOT____Vlvbound4,15,0);
    VL_SIG(__Vm_traceActivity,31,0);
    VL_SIG64(commit_stage__DOT__reorder_buffer__DOT____Vlvbound1,60,0);
    VL_SIG64(commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[7],33,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vbsg_mem_1r1w_sync__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vbsg_mem_1r1w_sync);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vbsg_mem_1r1w_sync(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vbsg_mem_1r1w_sync();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vbsg_mem_1r1w_sync__Syms* symsp, bool first);
  private:
    static QData _change_request(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp);
    static void _eval_settle(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp);
    static void traceChgThis(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
