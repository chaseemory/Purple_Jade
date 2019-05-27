// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vissue_table_H_
#define _Vissue_table_H_

#include "verilated.h"

class Vissue_table__Syms;
class Vissue_table_bsg_priority_encode__W20_L1;
class Vissue_table_bsg_encode_one_hot__W7;
class VerilatedVcd;

//----------

VL_MODULE(Vissue_table) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vissue_table_bsg_priority_encode__W20_L1*	__PVT__issue_table__DOT__chosen_selector;
    Vissue_table_bsg_priority_encode__W20_L1*	__PVT__issue_table__DOT__new_selector;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__0__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__0__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__1__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__1__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__2__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__2__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__3__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__3__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__4__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__4__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__5__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__5__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__6__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__6__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__7__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__7__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__8__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__8__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__9__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__9__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__10__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__10__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__11__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__11__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__12__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__12__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__13__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__13__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__14__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__14__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__15__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__15__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__16__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__16__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__17__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__17__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__18__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__18__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__19__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__19__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__20__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__20__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__21__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__21__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__22__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__22__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__23__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__23__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__24__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__24__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__25__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__25__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__26__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__26__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__27__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__27__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__28__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__28__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__29__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__29__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__30__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__30__KET____DOT__src_2_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__31__KET____DOT__src_1_encoder;
    Vissue_table_bsg_encode_one_hot__W7*	__PVT__issue_table__DOT__src_tag_match_encode__BRA__31__KET____DOT__src_2_encoder;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_OUT8(new_instr_addr_1,3,0);
    VL_OUT8(new_instr_addr_2,3,0);
    VL_IN8(new_instr_data_1_v,0,0);
    VL_IN8(new_instr_data_2_v,0,0);
    VL_IN8(valid_i,0,0);
    VL_OUT8(ready_o,0,0);
    VL_OUT8(valid_o,6,0);
    VL_OUT64(issue_sb_num_vector_o,63,0);
    VL_IN16(new_instr_data_1,15,0);
    VL_IN16(new_instr_data_2,15,0);
    VL_IN(st_clear_vector_i,31,0);
    VL_IN64(instruction_i,62,0);
    VL_OUTW(instruction_o,93,0,3);
    VL_IN(cdb[7],24,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(issue_table__DOT__inst_count,5,0);
    VL_SIG8(issue_table__DOT__inst_count_n,5,0);
    VL_SIG8(issue_table__DOT__chosen,4,0);
    VL_SIGW(issue_table__DOT__instr_order_table,164,0,6);
    VL_SIGW(issue_table__DOT__instr_order_table_n,159,0,5);
    VL_SIG8(issue_table__DOT__chosen_ordered,5,0);
    VL_SIG64(issue_table__DOT__store_buff_table,63,0);
    VL_SIGW(issue_table__DOT__src1_tag_match,223,0,7);
    VL_SIGW(issue_table__DOT__src2_tag_match,223,0,7);
    VL_SIGW(issue_table__DOT__src1_tag_index,95,0,3);
    VL_SIGW(issue_table__DOT__src2_tag_index,95,0,3);
    VL_SIG8(issue_table__DOT__accepting_new_instruction,0,0);
    VL_SIG(issue_table__DOT__valid_inst,31,0);
    VL_SIG(issue_table__DOT__inst_ready,31,0);
    VL_SIG(issue_table__DOT__order_inst_v_n,31,0);
    VL_SIG(issue_table__DOT__order_inst_less,31,0);
    VL_SIG(issue_table__DOT__ordered_instr_ready,31,0);
    VL_SIG(issue_table__DOT__store_buff_table_v,31,0);
    VL_SIG(issue_table__DOT__store_buff_table_v_n,31,0);
    VL_SIG(issue_table__DOT__src1_tag_v,31,0);
    VL_SIG(issue_table__DOT__src2_tag_v,31,0);
    VL_SIG(issue_table__DOT__tag_match__DOT__unnamedblk2__DOT__q,31,0);
    VL_SIG(issue_table__DOT__tag_match__DOT__unnamedblk2__DOT__instruction_to_match__DOT__unnamedblk3__DOT__r,31,0);
    VL_SIG(issue_table__DOT__reset_logic__DOT__unnamedblk9__DOT__i,31,0);
    VL_SIG(issue_table__DOT__normal_operation__DOT__unnamedblk10__DOT__l,31,0);
    VL_SIG(issue_table__DOT__normal_operation__DOT__unnamedblk11__DOT__x,31,0);
    VL_SIG(issue_table__DOT__normal_operation__DOT__unnamedblk12__DOT__v,31,0);
    VL_SIGW(issue_table__DOT__tabled_inst,3007,0,94);
    VL_SIG64(issue_table__DOT__order_inst_v,32,0);
    VL_SIGW(issue_table__DOT__new_instr,93,0,3);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(issue_table__DOT____Vlvbound1,0,0);
    VL_SIG8(issue_table__DOT____Vlvbound2,0,0);
    VL_SIG8(issue_table__DOT____Vlvbound3,4,0);
    VL_SIG8(issue_table__DOT____Vlvbound4,4,0);
    VL_SIG8(issue_table__DOT____Vlvbound5,4,0);
    VL_SIG8(issue_table__DOT____Vlvbound6,0,0);
    VL_SIG8(issue_table__DOT____Vlvbound8,4,0);
    VL_SIG8(issue_table__DOT____Vlvbound9,0,0);
    VL_SIG8(__Vclklast__TOP__clk_i,0,0);
    VL_SIG16(issue_table__DOT____Vlvbound12,15,0);
    VL_SIG16(issue_table__DOT____Vlvbound14,15,0);
    VL_SIGW(__Vchglast__TOP__issue_table__DOT__chosen_selector__a__DOT__scan__DOT__t,191,0,6);
    VL_SIGW(__Vchglast__TOP__issue_table__DOT__new_selector__a__DOT__scan__DOT__t,191,0,6);
    VL_SIG(__Vm_traceActivity,31,0);
    VL_SIGW(issue_table__DOT____Vlvbound10,93,0,3);
    VL_SIGW(issue_table__DOT____Vlvbound11,93,0,3);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vissue_table__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vissue_table& operator= (const Vissue_table&);  ///< Copying not allowed
    Vissue_table(const Vissue_table&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vissue_table(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vissue_table();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vissue_table__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vissue_table__Syms* symsp, bool first);
  private:
    static QData _change_request(Vissue_table__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vissue_table__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(Vissue_table__Syms* __restrict vlSymsp);
    static void _combo__TOP__6(Vissue_table__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vissue_table__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vissue_table__Syms* __restrict vlSymsp);
    static void _eval_settle(Vissue_table__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vissue_table__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vissue_table__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vissue_table__Syms* __restrict vlSymsp);
    static void traceChgThis(Vissue_table__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vissue_table__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vissue_table__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vissue_table__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vissue_table__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vissue_table__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(Vissue_table__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vissue_table__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vissue_table__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vissue_table__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vissue_table__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
