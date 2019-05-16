// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrename_stage__Syms.h"


//======================

void Vrename_stage::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vrename_stage* t=(Vrename_stage*)userthis;
    Vrename_stage__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vrename_stage::traceChgThis(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vrename_stage::traceChgThis__2(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+1,(vlTOPp->rename_stage__DOT__renamed),74);
	vcdp->chgArray(c+4,(vlTOPp->rename_stage__DOT__lut_spec_n),112);
	vcdp->chgArray(c+8,(vlTOPp->rename_stage__DOT__fl_spec_n),896);
	vcdp->chgArray(c+36,(vlTOPp->rename_stage__DOT__lut_n),112);
	vcdp->chgArray(c+40,(vlTOPp->rename_stage__DOT__fl_n),896);
	vcdp->chgBus  (c+68,(vlTOPp->rename_stage__DOT__fl_read_pt_n),7);
	vcdp->chgBus  (c+69,(vlTOPp->rename_stage__DOT__fl_write_pt_n),7);
	vcdp->chgBus  (c+70,(vlTOPp->rename_stage__DOT__fl_spec_read_pt_n),7);
	vcdp->chgBus  (c+71,(vlTOPp->rename_stage__DOT__fl_spec_write_pt_n),7);
	vcdp->chgBus  (c+72,(vlTOPp->rename_stage__DOT__fl_spec_num_n),8);
	vcdp->chgBit  (c+73,(vlTOPp->rename_stage__DOT__roll_back));
	vcdp->chgBit  (c+74,(vlTOPp->rename_stage__DOT__renamed_v));
    }
}

void Vrename_stage::traceChgThis__3(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+75,(vlTOPp->rename_stage__DOT__renamed_r),74);
	vcdp->chgArray(c+78,(vlTOPp->rename_stage__DOT__lut_spec_q),112);
	vcdp->chgArray(c+82,(vlTOPp->rename_stage__DOT__fl_spec_q),896);
	vcdp->chgArray(c+110,(vlTOPp->rename_stage__DOT__lut_q),112);
	vcdp->chgArray(c+114,(vlTOPp->rename_stage__DOT__fl_q),896);
	vcdp->chgBus  (c+142,(vlTOPp->rename_stage__DOT__fl_read_pt),7);
	vcdp->chgBus  (c+143,(vlTOPp->rename_stage__DOT__fl_write_pt),7);
	vcdp->chgBus  (c+144,(vlTOPp->rename_stage__DOT__fl_spec_read_pt),7);
	vcdp->chgBus  (c+145,(vlTOPp->rename_stage__DOT__fl_spec_write_pt),7);
	vcdp->chgBus  (c+146,(vlTOPp->rename_stage__DOT__fl_spec_num),8);
	vcdp->chgBit  (c+147,(vlTOPp->rename_stage__DOT__renamed_v_r));
    }
}

void Vrename_stage::traceChgThis__4(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp16,95,0,3);
    // Body
    {
	vcdp->chgBit  (c+148,(vlTOPp->clk_i));
	vcdp->chgBit  (c+149,(vlTOPp->reset_i));
	vcdp->chgQuad (c+150,(vlTOPp->decoded_i),57);
	vcdp->chgBit  (c+152,(vlTOPp->decoded_v_i));
	vcdp->chgBit  (c+153,(vlTOPp->rename_decode_ready_o));
	vcdp->chgArray(c+154,(vlTOPp->renamed_o),74);
	vcdp->chgBit  (c+157,(vlTOPp->renamed_v_o));
	vcdp->chgBit  (c+158,(vlTOPp->issue_rename_ready_i));
	vcdp->chgBit  (c+159,(vlTOPp->commit_v_i));
	vcdp->chgBus  (c+160,(vlTOPp->commit_rename_i),12);
	vcdp->chgBit  (c+161,(vlTOPp->mispredict_i));
	vcdp->chgBit  (c+162,(vlTOPp->rob_ready_i));
	vcdp->chgQuad (c+163,(vlTOPp->rename_rob_o),60);
	vcdp->chgBit  (c+165,(vlTOPp->rename_rob_v_o));
	__Vtemp16[0U] = ((IData)(vlTOPp->issue_rename_ready_i)
			  ? vlTOPp->rename_stage__DOT__renamed[0U]
			  : vlTOPp->rename_stage__DOT__renamed_r[0U]);
	__Vtemp16[1U] = ((IData)(vlTOPp->issue_rename_ready_i)
			  ? vlTOPp->rename_stage__DOT__renamed[1U]
			  : vlTOPp->rename_stage__DOT__renamed_r[1U]);
	__Vtemp16[2U] = ((IData)(vlTOPp->issue_rename_ready_i)
			  ? vlTOPp->rename_stage__DOT__renamed[2U]
			  : vlTOPp->rename_stage__DOT__renamed_r[2U]);
	vcdp->chgArray(c+166,(__Vtemp16),74);
    }
}
