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

void Vrob::traceChgThis__2(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+1,(vlTOPp->rob__DOT__committing_instr),60);
	vcdp->chgBit  (c+3,((1U & (IData)((vlTOPp->rob__DOT__committing_instr 
					   >> 0x2aU)))));
	vcdp->chgBus  (c+4,(vlTOPp->rob__DOT__rename_entry),12);
    }
}

void Vrob::traceChgThis__3(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+5,((0xffffU & ((1U & (IData)(
						      (vlTOPp->rob__DOT__committing_instr 
						       >> 0x29U)))
					 ? ((IData)(vlTOPp->rob__DOT__condition_taken)
					     ? (0xffffU 
						& (IData)(
							  (vlTOPp->rob__DOT__committing_instr 
							   >> 0x15U)))
					     : ((IData)(4U) 
						+ (0xffffU 
						   & (IData)(
							     (vlTOPp->rob__DOT__committing_instr 
							      >> 0x2cU)))))
					 : (IData)(
						   (vlTOPp->rob__DOT__committing_instr 
						    >> 0x15U))))),16);
	vcdp->chgBus  (c+6,((0xffffU & ((IData)(vlTOPp->rob__DOT__condition_taken)
					 ? (0xffffU 
					    & (IData)(
						      (vlTOPp->rob__DOT__committing_instr 
						       >> 0x15U)))
					 : ((IData)(4U) 
					    + (0xffffU 
					       & (IData)(
							 (vlTOPp->rob__DOT__committing_instr 
							  >> 0x2cU))))))),16);
    }
}

void Vrob::traceChgThis__4(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+7,(vlTOPp->rob__DOT__rob_n),3840);
	vcdp->chgBus  (c+127,(vlTOPp->rob__DOT__rob_alloc_pt_n),6);
	vcdp->chgBus  (c+128,(vlTOPp->rob__DOT__rob_commit_pt_n),6);
	vcdp->chgBus  (c+129,(vlTOPp->rob__DOT__rob_num_n),7);
	vcdp->chgBit  (c+130,(vlTOPp->rob__DOT__condition_taken));
	vcdp->chgBus  (c+131,(vlTOPp->rob__DOT__unnamedblk1__DOT__i),32);
	vcdp->chgBus  (c+132,(vlTOPp->rob__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    }
}

void Vrob::traceChgThis__5(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+133,(vlTOPp->rob__DOT__rob_q),3840);
	vcdp->chgBus  (c+253,(vlTOPp->rob__DOT__rob_alloc_pt),6);
	vcdp->chgBus  (c+254,(vlTOPp->rob__DOT__rob_commit_pt),6);
	vcdp->chgBus  (c+255,(vlTOPp->rob__DOT__rob_num),7);
	vcdp->chgBit  (c+256,(vlTOPp->rob__DOT__prev_spec_branch));
	vcdp->chgBus  (c+257,(vlTOPp->rob__DOT__predicted_pc),16);
    }
}

void Vrob::traceChgThis__6(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+258,(vlTOPp->clk_i));
	vcdp->chgBit  (c+259,(vlTOPp->reset_i));
	vcdp->chgArray(c+260,(vlTOPp->cdb_i),315);
	vcdp->chgBit  (c+270,(vlTOPp->issue_rob_valid_i));
	vcdp->chgQuad (c+271,(vlTOPp->issue_rob_entry_i),60);
	vcdp->chgBus  (c+273,(vlTOPp->rob_issue_entry_num_o),6);
	vcdp->chgBit  (c+274,(vlTOPp->rob_issue_ready_o));
	vcdp->chgBit  (c+275,(vlTOPp->rob_phys_valid_o));
	vcdp->chgBus  (c+276,(vlTOPp->rob_phys_reg_cl_o),7);
	vcdp->chgBit  (c+277,(vlTOPp->rob_sb_valid_o));
	vcdp->chgBit  (c+278,(vlTOPp->rob_mispredict_o));
	vcdp->chgBus  (c+279,(vlTOPp->rob_fe_redirected_pc_o),16);
	vcdp->chgBit  (c+280,(vlTOPp->rob_rename_valid_o));
	vcdp->chgBus  (c+281,(vlTOPp->rob_rename_entry_o),12);
	vcdp->chgBit  (c+282,(vlTOPp->rob_flag_valid_o));
	vcdp->chgBus  (c+283,(vlTOPp->rob_flag_o),8);
	vcdp->chgBus  (c+284,(vlTOPp->flag_rob_i),4);
	vcdp->chgBit  (c+285,((1U & ((IData)(vlTOPp->flag_rob_i) 
				     >> 2U))));
	vcdp->chgBit  (c+286,((1U & ((IData)(vlTOPp->flag_rob_i) 
				     >> 1U))));
	vcdp->chgBit  (c+287,((1U & (IData)(vlTOPp->flag_rob_i))));
	vcdp->chgBit  (c+288,((1U & ((IData)(vlTOPp->flag_rob_i) 
				     >> 3U))));
    }
}
