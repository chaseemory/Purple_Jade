// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrotate_left__Syms.h"


//======================

void Vrotate_left::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vrotate_left* t=(Vrotate_left*)userthis;
    Vrotate_left__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vrotate_left::traceChgThis(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity 
					      >> 2U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vrotate_left::traceChgThis__2(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,((0xffffU & ((0x20fU >= 
					 (0x3ffU & 
					  ((IData)(0x21U) 
					   * (IData)(vlTOPp->store_buffer__DOT__matched_sb_num))))
					 ? (((0U == 
					      (0x1fU 
					       & ((IData)(0x21U) 
						  * (IData)(vlTOPp->store_buffer__DOT__matched_sb_num))))
					      ? 0U : 
					     (vlTOPp->store_buffer__DOT__sb_q[
					      ((IData)(1U) 
					       + (0x1fU 
						  & (((IData)(0x21U) 
						      * (IData)(vlTOPp->store_buffer__DOT__matched_sb_num)) 
						     >> 5U)))] 
					      << ((IData)(0x20U) 
						  - 
						  (0x1fU 
						   & ((IData)(0x21U) 
						      * (IData)(vlTOPp->store_buffer__DOT__matched_sb_num)))))) 
					    | (vlTOPp->store_buffer__DOT__sb_q[
					       (0x1fU 
						& (((IData)(0x21U) 
						    * (IData)(vlTOPp->store_buffer__DOT__matched_sb_num)) 
						   >> 5U))] 
					       >> (0x1fU 
						   & ((IData)(0x21U) 
						      * (IData)(vlTOPp->store_buffer__DOT__matched_sb_num)))))
					 : 0U))),16);
	vcdp->chgBus  (c+2,((0xffffU & (((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
					   << 0x10U) 
					  | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
					 << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
					>> 0x10U))),16);
	vcdp->chgBus  (c+3,(((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
			       << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
			     << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))),32);
    }
}

void Vrotate_left::traceChgThis__3(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+4,(vlTOPp->store_buffer__DOT__sb_n),528);
	vcdp->chgBus  (c+21,(vlTOPp->store_buffer__DOT__sb_alloc_pt_n),4);
	vcdp->chgBus  (c+22,(vlTOPp->store_buffer__DOT__sb_commit_pt_n),4);
	vcdp->chgBus  (c+23,(vlTOPp->store_buffer__DOT__sb_num_n),5);
	vcdp->chgBit  (c+24,(vlTOPp->store_buffer__DOT__address_match));
	vcdp->chgBus  (c+25,(vlTOPp->store_buffer__DOT__match_vector),16);
	vcdp->chgBus  (c+26,(vlTOPp->store_buffer__DOT__trimed_sb_num),4);
	vcdp->chgBus  (c+27,(vlTOPp->store_buffer__DOT__matched_trimed_sb_num),4);
	vcdp->chgBus  (c+28,(vlTOPp->store_buffer__DOT__matched_sb_num),4);
    }
}

void Vrotate_left::traceChgThis__4(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+29,(vlTOPp->store_buffer__DOT__sb_q),528);
	vcdp->chgBus  (c+46,(vlTOPp->store_buffer__DOT__sb_alloc_pt),4);
	vcdp->chgBus  (c+47,(vlTOPp->store_buffer__DOT__sb_commit_pt),4);
	vcdp->chgBus  (c+48,(vlTOPp->store_buffer__DOT__sb_num),5);
    }
}

void Vrotate_left::traceChgThis__5(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+49,(vlTOPp->clk_i));
	vcdp->chgBit  (c+50,(vlTOPp->reset_i));
	vcdp->chgBit  (c+51,(vlTOPp->rob_sb_valid_i));
	vcdp->chgBit  (c+52,(vlTOPp->rob_mispredict_i));
	vcdp->chgBit  (c+53,(vlTOPp->issue_sb_v_i));
	vcdp->chgBus  (c+54,(vlTOPp->sb_issue_entry_num_o),4);
	vcdp->chgBit  (c+55,(vlTOPp->sb_issue_ready_o));
	vcdp->chgBit  (c+56,(vlTOPp->exe_sb_v_i));
	vcdp->chgQuad (c+57,(vlTOPp->exe_sb_i),36);
	vcdp->chgBus  (c+59,(vlTOPp->exe_ld_bypass_addr_i),16);
	vcdp->chgBus  (c+60,(vlTOPp->exe_ld_pass_sb_num_i),4);
	vcdp->chgBit  (c+61,(vlTOPp->sb_ld_pass_valid_o));
	vcdp->chgBus  (c+62,(vlTOPp->sb_ld_pass_value_o),16);
	vcdp->chgBit  (c+63,(vlTOPp->sb_mem_v_o));
	vcdp->chgBus  (c+64,(vlTOPp->sb_mem_addr_o),16);
	vcdp->chgBus  (c+65,(vlTOPp->sb_mem_data_o),16);
    }
}
