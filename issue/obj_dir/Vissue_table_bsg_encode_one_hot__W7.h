// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vissue_table.h for the primary calling header

#ifndef _Vissue_table_bsg_encode_one_hot__W7_H_
#define _Vissue_table_bsg_encode_one_hot__W7_H_

#include "verilated.h"

class Vissue_table__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vissue_table_bsg_encode_one_hot__W7) {
  public:
    
    // PORTS
    VL_IN8(i,6,0);
    VL_OUT8(addr_o,2,0);
    VL_OUT8(v_o,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs,3,0);
    VL_SIG8(__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs,1,0);
    VL_SIG8(__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs,1,0);
    VL_SIG8(__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs,1,0);
    VL_SIG8(__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs,1,0);
    VL_SIG8(__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs,1,0);
    VL_SIG8(__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs,1,0);
    VL_SIG8(__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs,1,0);
    VL_SIG8(__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs,1,0);
    VL_SIG8(__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs,1,0);
    VL_SIG8(__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs,1,0);
    VL_SIG8(__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs,1,0);
    VL_SIG8(__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs,1,0);
    VL_SIG8(__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs,1,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vissue_table__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vissue_table_bsg_encode_one_hot__W7& operator= (const Vissue_table_bsg_encode_one_hot__W7&);  ///< Copying not allowed
    Vissue_table_bsg_encode_one_hot__W7(const Vissue_table_bsg_encode_one_hot__W7&);  ///< Copying not allowed
  public:
    Vissue_table_bsg_encode_one_hot__W7(const char* name="TOP");
    ~Vissue_table_bsg_encode_one_hot__W7();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vissue_table__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__0__KET____DOT__src_1_encoder__1(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__0__KET____DOT__src_1_encoder__65(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__0__KET____DOT__src_2_encoder__97(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__10__KET____DOT__src_1_encoder__75(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__10__KET____DOT__src_2_encoder__107(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__11__KET____DOT__src_1_encoder__76(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__11__KET____DOT__src_2_encoder__108(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__12__KET____DOT__src_1_encoder__77(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__12__KET____DOT__src_2_encoder__109(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__13__KET____DOT__src_1_encoder__78(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__13__KET____DOT__src_2_encoder__110(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__14__KET____DOT__src_1_encoder__79(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__14__KET____DOT__src_2_encoder__111(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__15__KET____DOT__src_1_encoder__80(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__15__KET____DOT__src_2_encoder__112(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__16__KET____DOT__src_1_encoder__81(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__16__KET____DOT__src_2_encoder__113(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__17__KET____DOT__src_1_encoder__82(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__17__KET____DOT__src_2_encoder__114(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__18__KET____DOT__src_1_encoder__83(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__18__KET____DOT__src_2_encoder__115(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__19__KET____DOT__src_1_encoder__84(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__19__KET____DOT__src_2_encoder__116(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__1__KET____DOT__src_1_encoder__66(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__1__KET____DOT__src_2_encoder__98(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__20__KET____DOT__src_1_encoder__85(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__20__KET____DOT__src_2_encoder__117(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__21__KET____DOT__src_1_encoder__86(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__21__KET____DOT__src_2_encoder__118(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__22__KET____DOT__src_1_encoder__87(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__22__KET____DOT__src_2_encoder__119(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__23__KET____DOT__src_1_encoder__88(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__23__KET____DOT__src_2_encoder__120(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__24__KET____DOT__src_1_encoder__89(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__24__KET____DOT__src_2_encoder__121(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__25__KET____DOT__src_1_encoder__90(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__25__KET____DOT__src_2_encoder__122(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__26__KET____DOT__src_1_encoder__91(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__26__KET____DOT__src_2_encoder__123(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__27__KET____DOT__src_1_encoder__92(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__27__KET____DOT__src_2_encoder__124(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__28__KET____DOT__src_1_encoder__93(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__28__KET____DOT__src_2_encoder__125(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__29__KET____DOT__src_1_encoder__94(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__29__KET____DOT__src_2_encoder__126(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__2__KET____DOT__src_1_encoder__67(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__2__KET____DOT__src_2_encoder__99(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__30__KET____DOT__src_1_encoder__95(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__30__KET____DOT__src_2_encoder__127(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__31__KET____DOT__src_1_encoder__96(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__31__KET____DOT__src_2_encoder__128(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__3__KET____DOT__src_1_encoder__68(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__3__KET____DOT__src_2_encoder__100(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__4__KET____DOT__src_1_encoder__69(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__4__KET____DOT__src_2_encoder__101(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__5__KET____DOT__src_1_encoder__70(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__5__KET____DOT__src_2_encoder__102(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__6__KET____DOT__src_1_encoder__71(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__6__KET____DOT__src_2_encoder__103(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__7__KET____DOT__src_1_encoder__72(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__7__KET____DOT__src_2_encoder__104(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__8__KET____DOT__src_1_encoder__73(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__8__KET____DOT__src_2_encoder__105(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__9__KET____DOT__src_1_encoder__74(Vissue_table__Syms* __restrict vlSymsp);
    void _settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__9__KET____DOT__src_2_encoder__106(Vissue_table__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
