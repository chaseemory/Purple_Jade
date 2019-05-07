// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrob__Syms.h"


//======================

void Vrob::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vrob* t=(Vrob*)userthis;
    Vrob__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vrob::traceChgThis(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vrob::traceChgThis__2(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+1,(vlTOPp->rob__DOT__rob),2752);
	vcdp->chgBus  (c+87,(vlTOPp->rob__DOT__rob_alloc_pt),6);
	vcdp->chgBus  (c+88,(vlTOPp->rob__DOT__rob_commit_pt),6);
    }
}

void Vrob::traceChgThis__3(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+89,(vlTOPp->clk_i));
	vcdp->chgBit  (c+90,(vlTOPp->reset_i));
	vcdp->chgArray(c+91,(vlTOPp->cdb_i),280);
	vcdp->chgBit  (c+100,(vlTOPp->issue_rob_valid_i));
	vcdp->chgQuad (c+101,(vlTOPp->issue_rob_entry_i),33);
	vcdp->chgBus  (c+103,(vlTOPp->rob_num_o),6);
	vcdp->chgBit  (c+104,(vlTOPp->rob_ready_o));
	vcdp->chgBit  (c+105,(vlTOPp->rob_phys_valid_o));
	vcdp->chgBus  (c+106,(vlTOPp->rob_phys_reg_cl_o),7);
	vcdp->chgBit  (c+107,(vlTOPp->rob_sb_valid_o));
	vcdp->chgBit  (c+108,(vlTOPp->sb_rob_ready_o));
    }
}
