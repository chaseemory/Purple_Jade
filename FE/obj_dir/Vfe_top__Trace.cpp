// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfe_top__Syms.h"


//======================

void Vfe_top::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vfe_top* t=(Vfe_top*)userthis;
    Vfe_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vfe_top::traceChgThis(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfe_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vfe_top::traceChgThis__2(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfe_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->fe_top__DOT__instruction_mem__DOT__mem
			    [vlTOPp->fe_top__DOT__program_counter_fetch_r]),16);
	vcdp->chgBus  (c+2,((3U & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
				   >> 6U))),2);
	vcdp->chgBus  (c+3,((3U & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
				   >> 4U))),2);
	vcdp->chgBus  (c+4,((7U & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
				   >> 1U))),3);
	vcdp->chgBus  (c+5,((0xffffU & vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[0U])),16);
	vcdp->chgBus  (c+6,((0xffffU & ((vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[1U] 
					 << 0x10U) 
					| (vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[0U] 
					   >> 0x10U)))),16);
	vcdp->chgBus  (c+7,((0xffffU & vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[1U])),16);
	vcdp->chgBus  (c+8,((0xffffU & ((vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[2U] 
					 << 0x10U) 
					| (vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[1U] 
					   >> 0x10U)))),16);
	vcdp->chgBus  (c+9,((0xffffU & vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[2U])),16);
	vcdp->chgBus  (c+10,((0xffffU & ((vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[3U] 
					  << 0x10U) 
					 | (vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[2U] 
					    >> 0x10U)))),16);
	vcdp->chgBus  (c+11,((0xffffU & vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[3U])),16);
	vcdp->chgBus  (c+12,((0xffffU & (vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[3U] 
					 >> 0x10U))),16);
	vcdp->chgBit  (c+13,((4U == (7U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
						   >> 0xbU))))));
	vcdp->chgBus  (c+14,((0xfU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					      >> 0x35U)))),4);
	vcdp->chgBus  (c+15,((0xfU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					      >> 0x31U)))),4);
	vcdp->chgBus  (c+16,((0xffffU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
						 >> 0x21U)))),16);
	vcdp->chgBus  (c+17,((0xffffU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
						 >> 0x11U)))),16);
	vcdp->chgBus  (c+18,((7U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					    >> 0xeU)))),3);
	vcdp->chgBus  (c+19,((7U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					    >> 0xbU)))),3);
	vcdp->chgBus  (c+20,((0xfU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					      >> 7U)))),4);
	vcdp->chgBus  (c+21,((0xfU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					      >> 3U)))),4);
	vcdp->chgBit  (c+22,((1U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					    >> 2U)))));
	vcdp->chgBit  (c+23,((1U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					    >> 1U)))));
	vcdp->chgBit  (c+24,((1U & (IData)(vlTOPp->fe_top__DOT__instruction_decoded_decode))));
	vcdp->chgBus  (c+25,((0xffffU & (((0U == (0x1fU 
						  & ((IData)(0x40U) 
						     + 
						     (0x30U 
						      & ((IData)(
								 (vlTOPp->fe_top__DOT__instruction_decoded_decode 
								  >> 0xeU)) 
							 << 4U)))))
					   ? 0U : (
						   vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[
						   ((IData)(1U) 
						    + 
						    (3U 
						     & (((IData)(0x40U) 
							 + 
							 (0x30U 
							  & ((IData)(
								     (vlTOPp->fe_top__DOT__instruction_decoded_decode 
								      >> 0xeU)) 
							     << 4U))) 
							>> 5U)))] 
						   << 
						   ((IData)(0x20U) 
						    - 
						    (0x1fU 
						     & ((IData)(0x40U) 
							+ 
							(0x30U 
							 & ((IData)(
								    (vlTOPp->fe_top__DOT__instruction_decoded_decode 
								     >> 0xeU)) 
							    << 4U))))))) 
					 | (vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[
					    (3U & (
						   ((IData)(0x40U) 
						    + 
						    (0x30U 
						     & ((IData)(
								(vlTOPp->fe_top__DOT__instruction_decoded_decode 
								 >> 0xeU)) 
							<< 4U))) 
						   >> 5U))] 
					    >> (0x1fU 
						& ((IData)(0x40U) 
						   + 
						   (0x30U 
						    & ((IData)(
							       (vlTOPp->fe_top__DOT__instruction_decoded_decode 
								>> 0xeU)) 
						       << 4U)))))))),16);
	vcdp->chgBus  (c+26,(vlTOPp->fe_top__DOT____Vcellinp__fetch_decode_pipe__data_i),32);
	vcdp->chgBus  (c+27,(vlTOPp->fe_top__DOT____Vcellout__decoder__o),19);
	vcdp->chgBus  (c+28,((0xfU & ((0xed00U | ((0x70U 
						   & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
						      >> 4U)) 
						  | (7U 
						     & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o))) 
				      >> (0xcU & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
						  >> 4U))))),4);
	vcdp->chgBus  (c+29,((0xfU & ((0xcd00U | ((0x70U 
						   & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
						      << 4U)) 
						  | (7U 
						     & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
							>> 3U)))) 
				      >> (0xcU & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
						  >> 2U))))),4);
	vcdp->chgBus  (c+30,((0xffffU & (((0U == (0x10U 
						  & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
						     << 3U)))
					   ? 0U : (
						   vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[
						   ((IData)(1U) 
						    + 
						    (3U 
						     & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
							>> 2U)))] 
						   << 
						   ((IData)(0x20U) 
						    - 
						    (0x10U 
						     & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
							<< 3U))))) 
					 | (vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[
					    (3U & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
						   >> 2U))] 
					    >> (0x10U 
						& (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
						   << 3U)))))),16);
	vcdp->chgBus  (c+31,((3U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					    >> 0xeU)))),2);
	vcdp->chgArray(c+32,(vlTOPp->fe_top__DOT____Vcellinp__decode_branch_pipe__data_i),74);
    }
}

void Vfe_top::traceChgThis__3(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfe_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+35,((0xffffU & (vlTOPp->fe_top__DOT____Vcellout__decode_branch_pipe__data_o[0U] 
					 + (IData)(
						   (vlTOPp->fe_top__DOT__instruction_decoded_branch 
						    >> 0x11U))))),16);
	vcdp->chgBus  (c+36,((0xfU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					      >> 0x35U)))),4);
	vcdp->chgBus  (c+37,((0xfU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					      >> 0x31U)))),4);
	vcdp->chgBus  (c+38,((0xffffU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
						 >> 0x21U)))),16);
	vcdp->chgBus  (c+39,((0xffffU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
						 >> 0x11U)))),16);
	vcdp->chgBus  (c+40,((7U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					    >> 0xeU)))),3);
	vcdp->chgBus  (c+41,((7U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					    >> 0xbU)))),3);
	vcdp->chgBus  (c+42,((0xfU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					      >> 7U)))),4);
	vcdp->chgBus  (c+43,((0xfU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					      >> 3U)))),4);
	vcdp->chgBit  (c+44,((1U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					    >> 2U)))));
	vcdp->chgBit  (c+45,((1U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					    >> 1U)))));
	vcdp->chgBit  (c+46,((1U & (IData)(vlTOPp->fe_top__DOT__instruction_decoded_branch))));
	vcdp->chgBus  (c+47,((3U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					    >> 0xeU)))),2);
    }
}

void Vfe_top::traceChgThis__4(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfe_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+48,(vlTOPp->fe_top__DOT__take_branch));
	vcdp->chgBit  (c+49,(vlTOPp->fe_top__DOT__speculative_branch));
	vcdp->chgBit  (c+50,(vlTOPp->fe_top__DOT____Vcellinp__decode_branch_pipe__flush));
    }
}

void Vfe_top::traceChgThis__5(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfe_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+51,(vlTOPp->fe_top__DOT__program_counter_fetch_r),16);
	vcdp->chgBus  (c+52,((0xffffU & ((IData)(1U) 
					 + (IData)(vlTOPp->fe_top__DOT__program_counter_fetch_r)))),16);
	vcdp->chgBus  (c+53,((0xffffU & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
					 >> 0x10U))),16);
	vcdp->chgBus  (c+54,((0xffffU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o)),16);
	vcdp->chgBit  (c+55,(vlTOPp->fe_top__DOT__valid_f_d));
	vcdp->chgBus  (c+56,((0xffffU & vlTOPp->fe_top__DOT____Vcellout__decode_branch_pipe__data_o[0U])),16);
	vcdp->chgBit  (c+57,(vlTOPp->fe_top__DOT__valid_d_b));
	vcdp->chgBit  (c+58,((1U & (vlTOPp->fe_top__DOT____Vcellout__decode_branch_pipe__data_o[0U] 
				    >> 0x10U))));
	vcdp->chgBus  (c+59,(vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o),32);
	vcdp->chgBus  (c+60,((0xffU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o)),16);
	vcdp->chgBus  (c+61,((7U & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
				    >> 6U))),16);
	vcdp->chgBus  (c+62,((0x7fU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o)),16);
	vcdp->chgBus  (c+63,((0x1fU & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
				       >> 6U))),16);
	vcdp->chgBus  (c+64,(((0xff00U & (VL_NEGATE_I((IData)(
							      (1U 
							       & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
								  >> 7U)))) 
					  << 8U)) | 
			      (0xffU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o))),16);
	vcdp->chgBus  (c+65,(((0xf800U & (VL_NEGATE_I((IData)(
							      (1U 
							       & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
								  >> 0xaU)))) 
					  << 0xbU)) 
			      | (0x7ffU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o))),16);
	vcdp->chgBus  (c+66,(((0xffc0U & (VL_NEGATE_I((IData)(
							      (1U 
							       & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
								  >> 5U)))) 
					  << 6U)) | 
			      (0x3fU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o))),16);
	vcdp->chgBus  (c+67,((0xfU & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
				      >> 3U))),16);
	vcdp->chgBus  (c+68,((0xffU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o)),8);
	vcdp->chgBus  (c+69,((7U & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
				    >> 6U))),3);
	vcdp->chgBus  (c+70,((0x7fU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o)),7);
	vcdp->chgBus  (c+71,((0x1fU & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
				       >> 6U))),5);
	vcdp->chgBus  (c+72,((0x7ffU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o)),11);
	vcdp->chgBus  (c+73,((0x3fU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o)),6);
	vcdp->chgBus  (c+74,((0xfU & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
				      >> 3U))),4);
	vcdp->chgBus  (c+75,((0x3ffU & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
					>> 6U))),10);
	vcdp->chgBus  (c+76,((7U & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o)),4);
	vcdp->chgBus  (c+77,((7U & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
				    >> 8U))),4);
	vcdp->chgBus  (c+78,((7U & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
				    >> 3U))),4);
	vcdp->chgArray(c+79,(vlTOPp->fe_top__DOT____Vcellout__decode_branch_pipe__data_o),74);
	vcdp->chgBit  (c+82,((1U & (vlTOPp->fe_top__DOT____Vcellout__decode_branch_pipe__data_o[0U] 
				    >> 0xfU))));
    }
}

void Vfe_top::traceChgThis__6(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfe_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+83,(vlTOPp->clk_i));
	vcdp->chgBit  (c+84,(vlTOPp->reset_i));
	vcdp->chgBit  (c+85,(vlTOPp->ready_i));
	vcdp->chgQuad (c+86,(vlTOPp->final_decoded_instruction),57);
	vcdp->chgBit  (c+88,(vlTOPp->valid_o));
	vcdp->chgBit  (c+89,((1U & (~ (IData)(vlTOPp->ready_i)))));
	vcdp->chgBus  (c+90,((0xffffU & ((4U == (4U 
						 & (((IData)(vlTOPp->reset_i) 
						     << 2U) 
						    | ((2U 
							& ((~ (IData)(vlTOPp->ready_i)) 
							   << 1U)) 
						       | (IData)(vlTOPp->fe_top__DOT__take_branch)))))
					  ? 0U : ((2U 
						   == 
						   (6U 
						    & (((IData)(vlTOPp->reset_i) 
							<< 2U) 
						       | ((2U 
							   & ((~ (IData)(vlTOPp->ready_i)) 
							      << 1U)) 
							  | (IData)(vlTOPp->fe_top__DOT__take_branch)))))
						   ? (IData)(vlTOPp->fe_top__DOT__program_counter_fetch_r)
						   : 
						  ((1U 
						    == 
						    (((IData)(vlTOPp->reset_i) 
						      << 2U) 
						     | ((2U 
							 & ((~ (IData)(vlTOPp->ready_i)) 
							    << 1U)) 
							| (IData)(vlTOPp->fe_top__DOT__take_branch))))
						    ? 
						   (vlTOPp->fe_top__DOT____Vcellout__decode_branch_pipe__data_o[0U] 
						    + (IData)(
							      (vlTOPp->fe_top__DOT__instruction_decoded_branch 
							       >> 0x11U)))
						    : 
						   ((IData)(1U) 
						    + (IData)(vlTOPp->fe_top__DOT__program_counter_fetch_r))))))),16);
    }
}
