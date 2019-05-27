// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbsg_mem_1r1w_sync__Syms.h"


//======================

void Vbsg_mem_1r1w_sync::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vbsg_mem_1r1w_sync* t=(Vbsg_mem_1r1w_sync*)userthis;
    Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vbsg_mem_1r1w_sync::traceChgThis(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vbsg_mem_1r1w_sync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity 
					      >> 2U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vbsg_mem_1r1w_sync::traceChgThis__2(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vbsg_mem_1r1w_sync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,((0x7fU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					      >> 4U)))),7);
	vcdp->chgBus  (c+2,((0xffU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					      >> 0xdU)))),8);
	vcdp->chgBit  (c+3,(vlTOPp->commit_stage__DOT__sb_mem_v));
	vcdp->chgQuad (c+4,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr),61);
	vcdp->chgBus  (c+6,((0xffffU & ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__condition_taken)
					 ? (0xffffU 
					    & (IData)(
						      (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						       >> 0x15U)))
					 : ((IData)(1U) 
					    + (0xffffU 
					       & (IData)(
							 (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							  >> 0x2cU))))))),16);
	vcdp->chgBit  (c+7,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__condition_taken));
	vcdp->chgBus  (c+8,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rename_entry),12);
	vcdp->chgBus  (c+9,(vlTOPp->commit_stage__DOT__states__DOT__flag_n),4);
	vcdp->chgBus  (c+10,((0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					      >> 0xdU)))),4);
	vcdp->chgBus  (c+11,((0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					      >> 0x11U)))),4);
    }
}

void Vbsg_mem_1r1w_sync::traceChgThis__3(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vbsg_mem_1r1w_sync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+12,((0xffffU & ((0x20fU >= 
					  (0x3ffU & 
					   ((IData)(0x21U) 
					    * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num))))
					  ? (((0U == 
					       (0x1fU 
						& ((IData)(0x21U) 
						   * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num))))
					       ? 0U
					       : (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[
						  ((IData)(1U) 
						   + 
						   (0x1fU 
						    & (((IData)(0x21U) 
							* (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num)) 
						       >> 5U)))] 
						  << 
						  ((IData)(0x20U) 
						   - 
						   (0x1fU 
						    & ((IData)(0x21U) 
						       * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num)))))) 
					     | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[
						(0x1fU 
						 & (((IData)(0x21U) 
						     * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num)) 
						    >> 5U))] 
						>> 
						(0x1fU 
						 & ((IData)(0x21U) 
						    * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num)))))
					  : 0U))),16);
	vcdp->chgBus  (c+13,((0xffffU & ((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
					   << 0x10U) 
					  | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
					 >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))),16);
	vcdp->chgBus  (c+14,(((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
				<< 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
			      >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))),32);
    }
}

void Vbsg_mem_1r1w_sync::traceChgThis__4(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vbsg_mem_1r1w_sync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+15,(vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[0]),34);
	vcdp->chgQuad (c+17,(vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[1]),34);
	vcdp->chgQuad (c+19,(vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[2]),34);
	vcdp->chgQuad (c+21,(vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[3]),34);
	vcdp->chgQuad (c+23,(vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[4]),34);
	vcdp->chgQuad (c+25,(vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[5]),34);
	vcdp->chgQuad (c+27,(vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[6]),34);
	vcdp->chgQuad (c+29,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [0U]),34);
	vcdp->chgQuad (c+31,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [1U]),34);
	vcdp->chgQuad (c+33,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [2U]),34);
	vcdp->chgQuad (c+35,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [3U]),34);
	vcdp->chgQuad (c+37,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [4U]),34);
	vcdp->chgQuad (c+39,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [5U]),34);
	vcdp->chgQuad (c+41,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [6U]),34);
	vcdp->chgArray(c+43,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n),3904);
	vcdp->chgBus  (c+165,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt_n),6);
	vcdp->chgBus  (c+166,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt_n),6);
	vcdp->chgBus  (c+167,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num_n),7);
	vcdp->chgBus  (c+168,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i),32);
	vcdp->chgBus  (c+169,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
	vcdp->chgArray(c+170,(vlTOPp->commit_stage__DOT__states__DOT__reg_n),2048);
	vcdp->chgArray(c+234,(vlTOPp->commit_stage__DOT__states__DOT__valid_n),128);
	vcdp->chgArray(c+238,(vlTOPp->commit_stage__DOT__sb__DOT__sb_n),528);
	vcdp->chgBus  (c+255,(vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt_n),4);
	vcdp->chgBus  (c+256,(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt_n),4);
	vcdp->chgBus  (c+257,(vlTOPp->commit_stage__DOT__sb__DOT__sb_num_n),5);
	vcdp->chgBit  (c+258,(vlTOPp->commit_stage__DOT__sb__DOT__address_match));
	vcdp->chgBus  (c+259,(vlTOPp->commit_stage__DOT__sb__DOT__match_vector),16);
	vcdp->chgBus  (c+260,(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num),4);
	vcdp->chgBus  (c+261,(vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num),4);
	vcdp->chgBus  (c+262,(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num),4);
    }
}

void Vbsg_mem_1r1w_sync::traceChgThis__5(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vbsg_mem_1r1w_sync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+263,(vlTOPp->commit_stage__DOT__states__DOT__flag),4);
	vcdp->chgBus  (c+264,((0xffffU & ((0x20fU >= 
					   (0x3ffU 
					    & ((IData)(0x10U) 
					       + ((IData)(0x21U) 
						  * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))))
					   ? (((0U 
						== 
						(0x1fU 
						 & ((IData)(0x10U) 
						    + 
						    ((IData)(0x21U) 
						     * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))))
					        ? 0U
					        : (
						   vlTOPp->commit_stage__DOT__sb__DOT__sb_q[
						   ((IData)(1U) 
						    + 
						    (0x1fU 
						     & (((IData)(0x10U) 
							 + 
							 ((IData)(0x21U) 
							  * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))) 
							>> 5U)))] 
						   << 
						   ((IData)(0x20U) 
						    - 
						    (0x1fU 
						     & ((IData)(0x10U) 
							+ 
							((IData)(0x21U) 
							 * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))))))) 
					      | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[
						 (0x1fU 
						  & (((IData)(0x10U) 
						      + 
						      ((IData)(0x21U) 
						       * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))) 
						     >> 5U))] 
						 >> 
						 (0x1fU 
						  & ((IData)(0x10U) 
						     + 
						     ((IData)(0x21U) 
						      * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))))))
					   : 0U))),16);
	vcdp->chgBus  (c+265,((0xffffU & ((0x20fU >= 
					   (0x3ffU 
					    & ((IData)(0x21U) 
					       * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))))
					   ? (((0U 
						== 
						(0x1fU 
						 & ((IData)(0x21U) 
						    * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))))
					        ? 0U
					        : (
						   vlTOPp->commit_stage__DOT__sb__DOT__sb_q[
						   ((IData)(1U) 
						    + 
						    (0x1fU 
						     & (((IData)(0x21U) 
							 * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
							>> 5U)))] 
						   << 
						   ((IData)(0x20U) 
						    - 
						    (0x1fU 
						     & ((IData)(0x21U) 
							* (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))))) 
					      | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[
						 (0x1fU 
						  & (((IData)(0x21U) 
						      * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
						     >> 5U))] 
						 >> 
						 (0x1fU 
						  & ((IData)(0x21U) 
						     * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))))
					   : 0U))),16);
	vcdp->chgArray(c+266,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q),3904);
	vcdp->chgBus  (c+388,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt),6);
	vcdp->chgBus  (c+389,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt),6);
	vcdp->chgBus  (c+390,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num),7);
	vcdp->chgBit  (c+391,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__prev_spec_branch));
	vcdp->chgBus  (c+392,(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__predicted_pc),16);
	vcdp->chgBit  (c+393,((1U & ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
				     >> 2U))));
	vcdp->chgBit  (c+394,((1U & ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
				     >> 1U))));
	vcdp->chgBit  (c+395,((1U & (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag))));
	vcdp->chgBit  (c+396,((1U & ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
				     >> 3U))));
	vcdp->chgArray(c+397,(vlTOPp->commit_stage__DOT__states__DOT__reg_q),2048);
	vcdp->chgArray(c+461,(vlTOPp->commit_stage__DOT__states__DOT__valid),128);
	vcdp->chgArray(c+465,(vlTOPp->commit_stage__DOT__sb__DOT__sb_q),528);
	vcdp->chgBus  (c+482,(vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt),4);
	vcdp->chgBus  (c+483,(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt),4);
	vcdp->chgBus  (c+484,(vlTOPp->commit_stage__DOT__sb__DOT__sb_num),5);
	vcdp->chgBus  (c+485,(vlTOPp->commit_stage__DOT__mem__DOT__synth__DOT__r_addr_r),16);
    }
}

void Vbsg_mem_1r1w_sync::traceChgThis__6(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vbsg_mem_1r1w_sync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+486,(vlTOPp->clk_i));
	vcdp->chgBit  (c+487,(vlTOPp->reset_i));
	vcdp->chgBus  (c+488,(vlTOPp->exe_w_v_i),7);
	vcdp->chgQuad (c+489,(vlTOPp->exe_addr_i),49);
	vcdp->chgArray(c+491,(vlTOPp->exe_data_i),112);
	vcdp->chgBus  (c+495,(vlTOPp->issue_read_rs1_i),7);
	vcdp->chgBit  (c+496,(vlTOPp->rs1_valid_o));
	vcdp->chgBus  (c+497,(vlTOPp->rs1_data_o),16);
	vcdp->chgBus  (c+498,(vlTOPp->issue_read_rs2_i),7);
	vcdp->chgBit  (c+499,(vlTOPp->rs2_valid_o));
	vcdp->chgBus  (c+500,(vlTOPp->rs2_data_o),16);
	vcdp->chgBit  (c+501,(vlTOPp->issue_sb_v_i));
	vcdp->chgBus  (c+502,(vlTOPp->sb_issue_entry_num_o),4);
	vcdp->chgBit  (c+503,(vlTOPp->sb_issue_ready_o));
	vcdp->chgBit  (c+504,(vlTOPp->exe_sb_v_i));
	vcdp->chgQuad (c+505,(vlTOPp->exe_sb_i),36);
	vcdp->chgQuad (c+507,(vlTOPp->cdb_i[0]),34);
	vcdp->chgQuad (c+509,(vlTOPp->cdb_i[1]),34);
	vcdp->chgQuad (c+511,(vlTOPp->cdb_i[2]),34);
	vcdp->chgQuad (c+513,(vlTOPp->cdb_i[3]),34);
	vcdp->chgQuad (c+515,(vlTOPp->cdb_i[4]),34);
	vcdp->chgQuad (c+517,(vlTOPp->cdb_i[5]),34);
	vcdp->chgQuad (c+519,(vlTOPp->cdb_i[6]),34);
	vcdp->chgBus  (c+521,(vlTOPp->exe_mem_addr_i),16);
	vcdp->chgBus  (c+522,(vlTOPp->exe_ld_bypass_sb_num_i),4);
	vcdp->chgBus  (c+523,(vlTOPp->exe_mem_data_o),16);
	vcdp->chgBit  (c+524,(vlTOPp->rename_rob_valid_i));
	vcdp->chgQuad (c+525,(vlTOPp->rename_rob_entry_i),61);
	vcdp->chgBit  (c+527,(vlTOPp->rob_rename_ready_o));
	vcdp->chgBus  (c+528,(vlTOPp->exe_ld_bypass_addr_i),16);
	vcdp->chgBit  (c+529,(vlTOPp->sb_ld_bypass_valid_o));
	vcdp->chgBus  (c+530,(vlTOPp->sb_ld_bypass_value_o),16);
	vcdp->chgBit  (c+531,(vlTOPp->rob_rename_valid_o));
	vcdp->chgBus  (c+532,(vlTOPp->rob_rename_entry_o),12);
	vcdp->chgBus  (c+533,(vlTOPp->rob_rename_entry_num_o),6);
	vcdp->chgBit  (c+534,(vlTOPp->sb_rename_clear_st_v_o));
	vcdp->chgBus  (c+535,(vlTOPp->sb_rename_clear_st_num_o),4);
	vcdp->chgBit  (c+536,(vlTOPp->rob_mispredict_o));
	vcdp->chgBus  (c+537,(vlTOPp->rob_fe_redirected_pc_o),16);
	vcdp->chgBus  (c+538,(vlTOPp->sb_wb_vector_o),16);
	vcdp->chgBus  (c+539,(vlTOPp->sb_commit_pt_o),4);
	vcdp->chgBit  (c+540,((1U & ((((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						>> 0x2bU)) 
				       & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						  >> 0xbU))) 
				      & (~ (IData)(
						   (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						    >> 0xcU)))) 
				     & (~ (IData)(vlTOPp->rob_mispredict_o))))));
	vcdp->chgBit  (c+541,((((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					 >> 0x2bU)) 
				& (~ (IData)(vlTOPp->rob_mispredict_o))) 
			       & (0U != (0xfU & (IData)(
							(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							 >> 0x11U)))))));
	vcdp->chgBit  (c+542,((1U & (((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					       >> 0x2bU)) 
				      & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						 >> 0xcU))) 
				     & (~ (IData)(vlTOPp->rob_mispredict_o))))));
	vcdp->chgBit  (c+543,((1U & ((1U & ((IData)(
						    (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						     >> 0x2bU)) 
					    & (~ (IData)(vlTOPp->rob_mispredict_o))))
				      ? (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						 >> 0x2aU))
				      : (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__prev_spec_branch)))));
	vcdp->chgBus  (c+544,((0xffffU & ((1U & ((IData)(
							 (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							  >> 0x2bU)) 
						 & (~ (IData)(vlTOPp->rob_mispredict_o))))
					   ? ((1U & (IData)(
							    (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							     >> 0x29U)))
					       ? ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__condition_taken)
						   ? 
						  (0xffffU 
						   & (IData)(
							     (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							      >> 0x15U)))
						   : 
						  ((IData)(1U) 
						   + 
						   (0xffffU 
						    & (IData)(
							      (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							       >> 0x2cU)))))
					       : (IData)(
							 (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							  >> 0x15U)))
					   : (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__predicted_pc)))),16);
    }
}
