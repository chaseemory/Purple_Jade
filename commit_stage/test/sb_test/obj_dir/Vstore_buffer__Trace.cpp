// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vstore_buffer__Syms.h"


//======================

void Vstore_buffer::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vstore_buffer* t=(Vstore_buffer*)userthis;
    Vstore_buffer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vstore_buffer::traceChgThis(Vstore_buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vstore_buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vstore_buffer::traceChgThis__2(Vstore_buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vstore_buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+1,(vlTOPp->store_buffer__DOT__sb_n),528);
	vcdp->chgBus  (c+18,(vlTOPp->store_buffer__DOT__sb_alloc_pt_n),4);
	vcdp->chgBus  (c+19,(vlTOPp->store_buffer__DOT__sb_commit_pt_n),4);
	vcdp->chgBus  (c+20,(vlTOPp->store_buffer__DOT__sb_num_n),5);
	vcdp->chgBit  (c+21,(vlTOPp->store_buffer__DOT__address_match));
	vcdp->chgBus  (c+22,(vlTOPp->store_buffer__DOT__data_match),16);
    }
}

void Vstore_buffer::traceChgThis__3(Vstore_buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vstore_buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+23,(vlTOPp->store_buffer__DOT__sb_q),528);
	vcdp->chgBus  (c+40,(vlTOPp->store_buffer__DOT__sb_alloc_pt),4);
	vcdp->chgBus  (c+41,(vlTOPp->store_buffer__DOT__sb_commit_pt),4);
	vcdp->chgBus  (c+42,(vlTOPp->store_buffer__DOT__sb_num),5);
    }
}

void Vstore_buffer::traceChgThis__4(Vstore_buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vstore_buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+43,(vlTOPp->clk_i));
	vcdp->chgBit  (c+44,(vlTOPp->reset_i));
	vcdp->chgBit  (c+45,(vlTOPp->rob_sb_valid_i));
	vcdp->chgBit  (c+46,(vlTOPp->rob_mispredict_i));
	vcdp->chgBit  (c+47,(vlTOPp->issue_sb_v_i));
	vcdp->chgBus  (c+48,(vlTOPp->sb_issue_entry_num_o),4);
	vcdp->chgBit  (c+49,(vlTOPp->sb_issue_ready_o));
	vcdp->chgBit  (c+50,(vlTOPp->exe_sb_v_i));
	vcdp->chgQuad (c+51,(vlTOPp->exe_sb_i),36);
	vcdp->chgBus  (c+53,(vlTOPp->exe_ld_bypass_addr_i),16);
	vcdp->chgBit  (c+54,(vlTOPp->sb_ld_pass_valid_o));
	vcdp->chgBus  (c+55,(vlTOPp->sb_ld_pass_value_o),16);
	vcdp->chgBit  (c+56,(vlTOPp->sb_mem_v_o));
	vcdp->chgBus  (c+57,(vlTOPp->sb_mem_addr_o),16);
	vcdp->chgBus  (c+58,(vlTOPp->sb_mem_data_o),16);
    }
}
