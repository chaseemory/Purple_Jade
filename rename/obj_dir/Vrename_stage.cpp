// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_stage.h for the primary calling header

#include "Vrename_stage.h"     // For This
#include "Vrename_stage__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vrename_stage) {
    Vrename_stage__Syms* __restrict vlSymsp = __VlSymsp = new Vrename_stage__Syms(this, name());
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vrename_stage::__Vconfigure(Vrename_stage__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vrename_stage::~Vrename_stage() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vrename_stage::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrename_stage::eval\n"); );
    Vrename_stage__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void Vrename_stage::_eval_initial_loop(Vrename_stage__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vrename_stage::_combo__TOP__1(Vrename_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_stage::_combo__TOP__1\n"); );
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rename_stage__DOT__rename_rob = ((VL_ULL(0x7ff) 
					      & vlTOPp->rename_stage__DOT__rename_rob) 
					     | (((QData)((IData)(
								 (0xffffU 
								  & (IData)(
									    (vlTOPp->decoded_i 
									     >> 0x11U))))) 
						 << 0x2cU) 
						| (((QData)((IData)(
								    ((((4U 
									== 
									(7U 
									 & (IData)(
										(vlTOPp->decoded_i 
										>> 0xbU)))) 
								       & ((3U 
									   == 
									   (7U 
									    & (IData)(
										(vlTOPp->decoded_i 
										>> 0xeU)))) 
									  | (0U 
									     == 
									     (7U 
									      & (IData)(
										(vlTOPp->decoded_i 
										>> 0xeU)))))) 
								      << 0x1eU) 
								     | ((((4U 
									   == 
									   (7U 
									    & (IData)(
										(vlTOPp->decoded_i 
										>> 0xbU)))) 
									  & (0U 
									     == 
									     (7U 
									      & (IData)(
										(vlTOPp->decoded_i 
										>> 0xeU))))) 
									 << 0x1dU) 
									| ((0x1e000000U 
									    & ((IData)(
										(vlTOPp->decoded_i 
										>> 3U)) 
									       << 0x19U)) 
									   | ((0x1e0U 
									       & ((IData)(
										(vlTOPp->decoded_i 
										>> 7U)) 
										<< 5U)) 
									      | (0U 
										== 
										(7U 
										& (IData)(
										(vlTOPp->decoded_i 
										>> 0xeU)))))))))) 
						    << 0xcU) 
						   | ((QData)((IData)(
								      (1U 
								       & (IData)(
										(vlTOPp->decoded_i 
										>> 1U))))) 
						      << 0xbU))));
    vlTOPp->rename_stage__DOT__rename_rob = ((VL_ULL(0xffffffffffffff0) 
					      & vlTOPp->rename_stage__DOT__rename_rob) 
					     | (IData)((IData)(
							       (0xfU 
								& (IData)(
									  (vlTOPp->decoded_i 
									   >> 0x35U))))));
    vlTOPp->rename_stage__DOT__renamed[0U] = ((0x3fffU 
					       & vlTOPp->rename_stage__DOT__renamed[0U]) 
					      | (0xffffc000U 
						 & ((IData)(
							    (vlTOPp->decoded_i 
							     >> 3U)) 
						    << 0xeU)));
    vlTOPp->rename_stage__DOT__renamed[1U] = ((0xfffff000U 
					       & vlTOPp->rename_stage__DOT__renamed[1U]) 
					      | (0xfffU 
						 & ((IData)(
							    (vlTOPp->decoded_i 
							     >> 3U)) 
						    >> 0x12U)));
    vlTOPp->rename_stage__DOT__renamed[0U] = ((0xffffe7ffU 
					       & vlTOPp->rename_stage__DOT__renamed[0U]) 
					      | (0x1800U 
						 & ((IData)(vlTOPp->decoded_i) 
						    << 0xbU)));
    vlTOPp->rename_stage__DOT__renamed[0U] = ((0xfffffff0U 
					       & vlTOPp->rename_stage__DOT__renamed[0U]) 
					      | (0xfU 
						 & (IData)(
							   (vlTOPp->decoded_i 
							    >> 0x35U))));
    vlTOPp->rename_stage__DOT__renamed[0U] = ((0xffffdfffU 
					       & vlTOPp->rename_stage__DOT__renamed[0U]) 
					      | (0x2000U 
						 & ((IData)(
							    (vlTOPp->decoded_i 
							     >> 2U)) 
						    << 0xdU)));
    vlTOPp->rename_stage__DOT__roll_back = ((IData)(vlTOPp->mispredict_i) 
					    & (IData)(vlTOPp->commit_v_i));
}

void Vrename_stage::_settle__TOP__2(Vrename_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_stage::_settle__TOP__2\n"); );
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rename_stage__DOT__rename_rob = ((VL_ULL(0x7ff) 
					      & vlTOPp->rename_stage__DOT__rename_rob) 
					     | (((QData)((IData)(
								 (0xffffU 
								  & (IData)(
									    (vlTOPp->decoded_i 
									     >> 0x11U))))) 
						 << 0x2cU) 
						| (((QData)((IData)(
								    ((((4U 
									== 
									(7U 
									 & (IData)(
										(vlTOPp->decoded_i 
										>> 0xbU)))) 
								       & ((3U 
									   == 
									   (7U 
									    & (IData)(
										(vlTOPp->decoded_i 
										>> 0xeU)))) 
									  | (0U 
									     == 
									     (7U 
									      & (IData)(
										(vlTOPp->decoded_i 
										>> 0xeU)))))) 
								      << 0x1eU) 
								     | ((((4U 
									   == 
									   (7U 
									    & (IData)(
										(vlTOPp->decoded_i 
										>> 0xbU)))) 
									  & (0U 
									     == 
									     (7U 
									      & (IData)(
										(vlTOPp->decoded_i 
										>> 0xeU))))) 
									 << 0x1dU) 
									| ((0x1e000000U 
									    & ((IData)(
										(vlTOPp->decoded_i 
										>> 3U)) 
									       << 0x19U)) 
									   | ((0x1e0U 
									       & ((IData)(
										(vlTOPp->decoded_i 
										>> 7U)) 
										<< 5U)) 
									      | (0U 
										== 
										(7U 
										& (IData)(
										(vlTOPp->decoded_i 
										>> 0xeU)))))))))) 
						    << 0xcU) 
						   | ((QData)((IData)(
								      (1U 
								       & (IData)(
										(vlTOPp->decoded_i 
										>> 1U))))) 
						      << 0xbU))));
    vlTOPp->rename_stage__DOT__rename_rob = ((VL_ULL(0xffffffffffffff0) 
					      & vlTOPp->rename_stage__DOT__rename_rob) 
					     | (IData)((IData)(
							       (0xfU 
								& (IData)(
									  (vlTOPp->decoded_i 
									   >> 0x35U))))));
    vlTOPp->rename_stage__DOT__renamed[0U] = ((0x3fffU 
					       & vlTOPp->rename_stage__DOT__renamed[0U]) 
					      | (0xffffc000U 
						 & ((IData)(
							    (vlTOPp->decoded_i 
							     >> 3U)) 
						    << 0xeU)));
    vlTOPp->rename_stage__DOT__renamed[1U] = ((0xfffff000U 
					       & vlTOPp->rename_stage__DOT__renamed[1U]) 
					      | (0xfffU 
						 & ((IData)(
							    (vlTOPp->decoded_i 
							     >> 3U)) 
						    >> 0x12U)));
    vlTOPp->rename_stage__DOT__renamed[0U] = ((0xffffe7ffU 
					       & vlTOPp->rename_stage__DOT__renamed[0U]) 
					      | (0x1800U 
						 & ((IData)(vlTOPp->decoded_i) 
						    << 0xbU)));
    vlTOPp->rename_stage__DOT__renamed[0U] = ((0xfffffff0U 
					       & vlTOPp->rename_stage__DOT__renamed[0U]) 
					      | (0xfU 
						 & (IData)(
							   (vlTOPp->decoded_i 
							    >> 0x35U))));
    vlTOPp->rename_stage__DOT__renamed[0U] = ((0xffffdfffU 
					       & vlTOPp->rename_stage__DOT__renamed[0U]) 
					      | (0x2000U 
						 & ((IData)(
							    (vlTOPp->decoded_i 
							     >> 2U)) 
						    << 0xdU)));
    vlTOPp->rename_stage__DOT__roll_back = ((IData)(vlTOPp->mispredict_i) 
					    & (IData)(vlTOPp->commit_v_i));
    vlTOPp->renamed_o[0U] = vlTOPp->rename_stage__DOT__renamed_r[0U];
    vlTOPp->renamed_o[1U] = vlTOPp->rename_stage__DOT__renamed_r[1U];
    vlTOPp->renamed_o[2U] = vlTOPp->rename_stage__DOT__renamed_r[2U];
    vlTOPp->renamed_v_o = vlTOPp->rename_stage__DOT__renamed_v_r;
    vlTOPp->rename_stage__DOT__rename_rob = ((VL_ULL(0xffffffffffff80f) 
					      & vlTOPp->rename_stage__DOT__rename_rob) 
					     | ((QData)((IData)(
								(0x7fU 
								 & ((0x6fU 
								     >= 
								     (0x7fU 
								      & ((IData)(7U) 
									 * 
									 (0xfU 
									  & (IData)(
										(vlTOPp->decoded_i 
										>> 0x35U))))))
								     ? 
								    (((0U 
								       == 
								       (0x1fU 
									& ((IData)(7U) 
									   * 
									   (0xfU 
									    & (IData)(
										(vlTOPp->decoded_i 
										>> 0x35U))))))
								       ? 0U
								       : 
								      (vlTOPp->rename_stage__DOT__lut_spec_q[
								       ((IData)(1U) 
									+ 
									(3U 
									 & (((IData)(7U) 
									     * 
									     (0xfU 
									      & (IData)(
										(vlTOPp->decoded_i 
										>> 0x35U)))) 
									    >> 5U)))] 
								       << 
								       ((IData)(0x20U) 
									- 
									(0x1fU 
									 & ((IData)(7U) 
									    * 
									    (0xfU 
									     & (IData)(
										(vlTOPp->decoded_i 
										>> 0x35U)))))))) 
								     | (vlTOPp->rename_stage__DOT__lut_spec_q[
									(3U 
									 & (((IData)(7U) 
									     * 
									     (0xfU 
									      & (IData)(
										(vlTOPp->decoded_i 
										>> 0x35U)))) 
									    >> 5U))] 
									>> 
									(0x1fU 
									 & ((IData)(7U) 
									    * 
									    (0xfU 
									     & (IData)(
										(vlTOPp->decoded_i 
										>> 0x35U)))))))
								     : 0U)))) 
						<< 4U));
    vlTOPp->rename_stage__DOT__renamed[0U] = ((0xfffff80fU 
					       & vlTOPp->rename_stage__DOT__renamed[0U]) 
					      | (0x7f0U 
						 & (((0x6fU 
						      >= 
						      (0x7fU 
						       & ((IData)(7U) 
							  * 
							  (0xfU 
							   & (IData)(
								     (vlTOPp->decoded_i 
								      >> 0x35U))))))
						      ? 
						     (((0U 
							== 
							(0x1fU 
							 & ((IData)(7U) 
							    * 
							    (0xfU 
							     & (IData)(
								       (vlTOPp->decoded_i 
									>> 0x35U))))))
						        ? 0U
						        : 
						       (vlTOPp->rename_stage__DOT__lut_spec_q[
							((IData)(1U) 
							 + 
							 (3U 
							  & (((IData)(7U) 
							      * 
							      (0xfU 
							       & (IData)(
									 (vlTOPp->decoded_i 
									  >> 0x35U)))) 
							     >> 5U)))] 
							<< 
							((IData)(0x20U) 
							 - 
							 (0x1fU 
							  & ((IData)(7U) 
							     * 
							     (0xfU 
							      & (IData)(
									(vlTOPp->decoded_i 
									 >> 0x35U)))))))) 
						      | (vlTOPp->rename_stage__DOT__lut_spec_q[
							 (3U 
							  & (((IData)(7U) 
							      * 
							      (0xfU 
							       & (IData)(
									 (vlTOPp->decoded_i 
									  >> 0x35U)))) 
							     >> 5U))] 
							 >> 
							 (0x1fU 
							  & ((IData)(7U) 
							     * 
							     (0xfU 
							      & (IData)(
									(vlTOPp->decoded_i 
									 >> 0x35U)))))))
						      : 0U) 
						    << 4U)));
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:152
    vlTOPp->rename_stage__DOT__lut_n[0U] = vlTOPp->rename_stage__DOT__lut_q[0U];
    vlTOPp->rename_stage__DOT__lut_n[1U] = vlTOPp->rename_stage__DOT__lut_q[1U];
    vlTOPp->rename_stage__DOT__lut_n[2U] = vlTOPp->rename_stage__DOT__lut_q[2U];
    vlTOPp->rename_stage__DOT__lut_n[3U] = vlTOPp->rename_stage__DOT__lut_q[3U];
    vlTOPp->rename_stage__DOT__fl_read_pt_n = vlTOPp->rename_stage__DOT__fl_read_pt;
    vlTOPp->rename_stage__DOT__fl_write_pt_n = vlTOPp->rename_stage__DOT__fl_write_pt;
    vlTOPp->rename_stage__DOT__fl_n[0U] = vlTOPp->rename_stage__DOT__fl_q[0U];
    vlTOPp->rename_stage__DOT__fl_n[1U] = vlTOPp->rename_stage__DOT__fl_q[1U];
    vlTOPp->rename_stage__DOT__fl_n[2U] = vlTOPp->rename_stage__DOT__fl_q[2U];
    vlTOPp->rename_stage__DOT__fl_n[3U] = vlTOPp->rename_stage__DOT__fl_q[3U];
    vlTOPp->rename_stage__DOT__fl_n[4U] = vlTOPp->rename_stage__DOT__fl_q[4U];
    vlTOPp->rename_stage__DOT__fl_n[5U] = vlTOPp->rename_stage__DOT__fl_q[5U];
    vlTOPp->rename_stage__DOT__fl_n[6U] = vlTOPp->rename_stage__DOT__fl_q[6U];
    vlTOPp->rename_stage__DOT__fl_n[7U] = vlTOPp->rename_stage__DOT__fl_q[7U];
    vlTOPp->rename_stage__DOT__fl_n[8U] = vlTOPp->rename_stage__DOT__fl_q[8U];
    vlTOPp->rename_stage__DOT__fl_n[9U] = vlTOPp->rename_stage__DOT__fl_q[9U];
    vlTOPp->rename_stage__DOT__fl_n[0xaU] = vlTOPp->rename_stage__DOT__fl_q[0xaU];
    vlTOPp->rename_stage__DOT__fl_n[0xbU] = vlTOPp->rename_stage__DOT__fl_q[0xbU];
    vlTOPp->rename_stage__DOT__fl_n[0xcU] = vlTOPp->rename_stage__DOT__fl_q[0xcU];
    vlTOPp->rename_stage__DOT__fl_n[0xdU] = vlTOPp->rename_stage__DOT__fl_q[0xdU];
    vlTOPp->rename_stage__DOT__fl_n[0xeU] = vlTOPp->rename_stage__DOT__fl_q[0xeU];
    vlTOPp->rename_stage__DOT__fl_n[0xfU] = vlTOPp->rename_stage__DOT__fl_q[0xfU];
    vlTOPp->rename_stage__DOT__fl_n[0x10U] = vlTOPp->rename_stage__DOT__fl_q[0x10U];
    vlTOPp->rename_stage__DOT__fl_n[0x11U] = vlTOPp->rename_stage__DOT__fl_q[0x11U];
    vlTOPp->rename_stage__DOT__fl_n[0x12U] = vlTOPp->rename_stage__DOT__fl_q[0x12U];
    vlTOPp->rename_stage__DOT__fl_n[0x13U] = vlTOPp->rename_stage__DOT__fl_q[0x13U];
    vlTOPp->rename_stage__DOT__fl_n[0x14U] = vlTOPp->rename_stage__DOT__fl_q[0x14U];
    vlTOPp->rename_stage__DOT__fl_n[0x15U] = vlTOPp->rename_stage__DOT__fl_q[0x15U];
    vlTOPp->rename_stage__DOT__fl_n[0x16U] = vlTOPp->rename_stage__DOT__fl_q[0x16U];
    vlTOPp->rename_stage__DOT__fl_n[0x17U] = vlTOPp->rename_stage__DOT__fl_q[0x17U];
    vlTOPp->rename_stage__DOT__fl_n[0x18U] = vlTOPp->rename_stage__DOT__fl_q[0x18U];
    vlTOPp->rename_stage__DOT__fl_n[0x19U] = vlTOPp->rename_stage__DOT__fl_q[0x19U];
    vlTOPp->rename_stage__DOT__fl_n[0x1aU] = vlTOPp->rename_stage__DOT__fl_q[0x1aU];
    vlTOPp->rename_stage__DOT__fl_n[0x1bU] = vlTOPp->rename_stage__DOT__fl_q[0x1bU];
    if ((((IData)(vlTOPp->commit_v_i) & ((IData)(vlTOPp->commit_rename_i) 
					 >> 0xbU)) 
	 & (~ (IData)(vlTOPp->rename_stage__DOT__roll_back)))) {
	vlTOPp->rename_stage__DOT__fl_write_pt_n = 
	    (0x7fU & ((IData)(1U) + (IData)(vlTOPp->rename_stage__DOT__fl_write_pt_n)));
	vlTOPp->rename_stage__DOT__fl_read_pt_n = (0x7fU 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->rename_stage__DOT__fl_read_pt_n)));
	vlTOPp->rename_stage__DOT____Vlvbound3 = (0x7fU 
						  & (IData)(vlTOPp->commit_rename_i));
	if ((0x37fU >= (0x3ffU & ((IData)(7U) * (IData)(vlTOPp->rename_stage__DOT__fl_write_pt))))) {
	    VL_ASSIGNSEL_WIII(7,(0x3ffU & ((IData)(7U) 
					   * (IData)(vlTOPp->rename_stage__DOT__fl_write_pt))), vlTOPp->rename_stage__DOT__fl_n, vlTOPp->rename_stage__DOT____Vlvbound3);
	}
	vlTOPp->rename_stage__DOT____Vlvbound4 = (0x7fU 
						  & ((0x37fU 
						      >= 
						      (0x3ffU 
						       & ((IData)(7U) 
							  * (IData)(vlTOPp->rename_stage__DOT__fl_read_pt))))
						      ? 
						     (((0U 
							== 
							(0x1fU 
							 & ((IData)(7U) 
							    * (IData)(vlTOPp->rename_stage__DOT__fl_read_pt))))
						        ? 0U
						        : 
						       (vlTOPp->rename_stage__DOT__fl_q[
							((IData)(1U) 
							 + 
							 (0x1fU 
							  & (((IData)(7U) 
							      * (IData)(vlTOPp->rename_stage__DOT__fl_read_pt)) 
							     >> 5U)))] 
							<< 
							((IData)(0x20U) 
							 - 
							 (0x1fU 
							  & ((IData)(7U) 
							     * (IData)(vlTOPp->rename_stage__DOT__fl_read_pt)))))) 
						      | (vlTOPp->rename_stage__DOT__fl_q[
							 (0x1fU 
							  & (((IData)(7U) 
							      * (IData)(vlTOPp->rename_stage__DOT__fl_read_pt)) 
							     >> 5U))] 
							 >> 
							 (0x1fU 
							  & ((IData)(7U) 
							     * (IData)(vlTOPp->rename_stage__DOT__fl_read_pt)))))
						      : 0U));
	if ((0x6fU >= (0x7fU & ((IData)(7U) * (0xfU 
					       & ((IData)(vlTOPp->commit_rename_i) 
						  >> 7U)))))) {
	    VL_ASSIGNSEL_WIII(7,(0x7fU & ((IData)(7U) 
					  * (0xfU & 
					     ((IData)(vlTOPp->commit_rename_i) 
					      >> 7U)))), vlTOPp->rename_stage__DOT__lut_n, vlTOPp->rename_stage__DOT____Vlvbound4);
	}
    }
    vlTOPp->rename_decode_ready_o = ((((0U != (IData)(vlTOPp->rename_stage__DOT__fl_spec_num)) 
				       & (~ (IData)(vlTOPp->rename_stage__DOT__roll_back))) 
				      & (IData)(vlTOPp->issue_rename_ready_i)) 
				     & (IData)(vlTOPp->rob_ready_i));
    vlTOPp->rename_rob_o = vlTOPp->rename_stage__DOT__rename_rob;
    vlTOPp->rename_rob_v_o = ((IData)(vlTOPp->rename_decode_ready_o) 
			      & (IData)(vlTOPp->decoded_v_i));
    vlTOPp->rename_stage__DOT__renamed_v = ((IData)(vlTOPp->issue_rename_ready_i)
					     ? (IData)(vlTOPp->rename_rob_v_o)
					     : (IData)(vlTOPp->rename_stage__DOT__renamed_v_r));
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:99
    vlTOPp->rename_stage__DOT__lut_spec_n[0U] = vlTOPp->rename_stage__DOT__lut_spec_q[0U];
    vlTOPp->rename_stage__DOT__lut_spec_n[1U] = vlTOPp->rename_stage__DOT__lut_spec_q[1U];
    vlTOPp->rename_stage__DOT__lut_spec_n[2U] = vlTOPp->rename_stage__DOT__lut_spec_q[2U];
    vlTOPp->rename_stage__DOT__lut_spec_n[3U] = vlTOPp->rename_stage__DOT__lut_spec_q[3U];
    vlTOPp->rename_stage__DOT__fl_spec_read_pt_n = vlTOPp->rename_stage__DOT__fl_spec_read_pt;
    vlTOPp->rename_stage__DOT__fl_spec_write_pt_n = vlTOPp->rename_stage__DOT__fl_spec_write_pt;
    vlTOPp->rename_stage__DOT__fl_spec_num_n = vlTOPp->rename_stage__DOT__fl_spec_num;
    vlTOPp->rename_stage__DOT__fl_spec_n[0U] = vlTOPp->rename_stage__DOT__fl_spec_q[0U];
    vlTOPp->rename_stage__DOT__fl_spec_n[1U] = vlTOPp->rename_stage__DOT__fl_spec_q[1U];
    vlTOPp->rename_stage__DOT__fl_spec_n[2U] = vlTOPp->rename_stage__DOT__fl_spec_q[2U];
    vlTOPp->rename_stage__DOT__fl_spec_n[3U] = vlTOPp->rename_stage__DOT__fl_spec_q[3U];
    vlTOPp->rename_stage__DOT__fl_spec_n[4U] = vlTOPp->rename_stage__DOT__fl_spec_q[4U];
    vlTOPp->rename_stage__DOT__fl_spec_n[5U] = vlTOPp->rename_stage__DOT__fl_spec_q[5U];
    vlTOPp->rename_stage__DOT__fl_spec_n[6U] = vlTOPp->rename_stage__DOT__fl_spec_q[6U];
    vlTOPp->rename_stage__DOT__fl_spec_n[7U] = vlTOPp->rename_stage__DOT__fl_spec_q[7U];
    vlTOPp->rename_stage__DOT__fl_spec_n[8U] = vlTOPp->rename_stage__DOT__fl_spec_q[8U];
    vlTOPp->rename_stage__DOT__fl_spec_n[9U] = vlTOPp->rename_stage__DOT__fl_spec_q[9U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0xaU] = vlTOPp->rename_stage__DOT__fl_spec_q[0xaU];
    vlTOPp->rename_stage__DOT__fl_spec_n[0xbU] = vlTOPp->rename_stage__DOT__fl_spec_q[0xbU];
    vlTOPp->rename_stage__DOT__fl_spec_n[0xcU] = vlTOPp->rename_stage__DOT__fl_spec_q[0xcU];
    vlTOPp->rename_stage__DOT__fl_spec_n[0xdU] = vlTOPp->rename_stage__DOT__fl_spec_q[0xdU];
    vlTOPp->rename_stage__DOT__fl_spec_n[0xeU] = vlTOPp->rename_stage__DOT__fl_spec_q[0xeU];
    vlTOPp->rename_stage__DOT__fl_spec_n[0xfU] = vlTOPp->rename_stage__DOT__fl_spec_q[0xfU];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x10U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x10U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x11U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x11U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x12U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x12U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x13U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x13U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x14U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x14U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x15U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x15U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x16U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x16U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x17U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x17U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x18U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x18U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x19U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x19U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x1aU] = vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x1bU] = vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU];
    vlTOPp->rename_stage__DOT__renamed[1U] = ((0xf0000fffU 
					       & vlTOPp->rename_stage__DOT__renamed[1U]) 
					      | (0xffff000U 
						 & ((IData)(
							    (vlTOPp->decoded_i 
							     >> 0x21U)) 
						    << 0xcU)));
    vlTOPp->rename_stage__DOT__renamed[1U] = ((0xfffffffU 
					       & vlTOPp->rename_stage__DOT__renamed[1U]) 
					      | (0xf0000000U 
						 & ((IData)(
							    (vlTOPp->decoded_i 
							     >> 0x31U)) 
						    << 0x1cU)));
    vlTOPp->rename_stage__DOT__renamed[2U] = (0x3f8U 
					      & vlTOPp->rename_stage__DOT__renamed[2U]);
    vlTOPp->rename_stage__DOT__renamed[2U] = ((7U & 
					       vlTOPp->rename_stage__DOT__renamed[2U]) 
					      | (0x78U 
						 & ((IData)(
							    (vlTOPp->decoded_i 
							     >> 0x35U)) 
						    << 3U)));
    if (vlTOPp->rename_stage__DOT__renamed_v) {
	vlTOPp->rename_stage__DOT__renamed[1U] = ((0xfffffffU 
						   & vlTOPp->rename_stage__DOT__renamed[1U]) 
						  | (0xf0000000U 
						     & (((0x6fU 
							  >= 
							  (0x7fU 
							   & ((IData)(7U) 
							      * 
							      (0xfU 
							       & (IData)(
									 (vlTOPp->decoded_i 
									  >> 0x31U))))))
							  ? 
							 (((0U 
							    == 
							    (0x1fU 
							     & ((IData)(7U) 
								* 
								(0xfU 
								 & (IData)(
									   (vlTOPp->decoded_i 
									    >> 0x31U))))))
							    ? 0U
							    : 
							   (vlTOPp->rename_stage__DOT__lut_spec_q[
							    ((IData)(1U) 
							     + 
							     (3U 
							      & (((IData)(7U) 
								  * 
								  (0xfU 
								   & (IData)(
									     (vlTOPp->decoded_i 
									      >> 0x31U)))) 
								 >> 5U)))] 
							    << 
							    ((IData)(0x20U) 
							     - 
							     (0x1fU 
							      & ((IData)(7U) 
								 * 
								 (0xfU 
								  & (IData)(
									    (vlTOPp->decoded_i 
									     >> 0x31U)))))))) 
							  | (vlTOPp->rename_stage__DOT__lut_spec_q[
							     (3U 
							      & (((IData)(7U) 
								  * 
								  (0xfU 
								   & (IData)(
									     (vlTOPp->decoded_i 
									      >> 0x31U)))) 
								 >> 5U))] 
							     >> 
							     (0x1fU 
							      & ((IData)(7U) 
								 * 
								 (0xfU 
								  & (IData)(
									    (vlTOPp->decoded_i 
									     >> 0x31U)))))))
							  : 0U) 
							<< 0x1cU)));
	vlTOPp->rename_stage__DOT__renamed[2U] = ((0x3f8U 
						   & vlTOPp->rename_stage__DOT__renamed[2U]) 
						  | (7U 
						     & (((0x6fU 
							  >= 
							  (0x7fU 
							   & ((IData)(7U) 
							      * 
							      (0xfU 
							       & (IData)(
									 (vlTOPp->decoded_i 
									  >> 0x31U))))))
							  ? 
							 (((0U 
							    == 
							    (0x1fU 
							     & ((IData)(7U) 
								* 
								(0xfU 
								 & (IData)(
									   (vlTOPp->decoded_i 
									    >> 0x31U))))))
							    ? 0U
							    : 
							   (vlTOPp->rename_stage__DOT__lut_spec_q[
							    ((IData)(1U) 
							     + 
							     (3U 
							      & (((IData)(7U) 
								  * 
								  (0xfU 
								   & (IData)(
									     (vlTOPp->decoded_i 
									      >> 0x31U)))) 
								 >> 5U)))] 
							    << 
							    ((IData)(0x20U) 
							     - 
							     (0x1fU 
							      & ((IData)(7U) 
								 * 
								 (0xfU 
								  & (IData)(
									    (vlTOPp->decoded_i 
									     >> 0x31U)))))))) 
							  | (vlTOPp->rename_stage__DOT__lut_spec_q[
							     (3U 
							      & (((IData)(7U) 
								  * 
								  (0xfU 
								   & (IData)(
									     (vlTOPp->decoded_i 
									      >> 0x31U)))) 
								 >> 5U))] 
							     >> 
							     (0x1fU 
							      & ((IData)(7U) 
								 * 
								 (0xfU 
								  & (IData)(
									    (vlTOPp->decoded_i 
									     >> 0x31U)))))))
							  : 0U) 
							>> 4U)));
	if ((1U & (~ (IData)(vlTOPp->decoded_i)))) {
	    vlTOPp->rename_stage__DOT__renamed[1U] 
		= ((0xf0000fffU & vlTOPp->rename_stage__DOT__renamed[1U]) 
		   | (0x7f000U & (((0x6fU >= (0x7fU 
					      & ((IData)(7U) 
						 * 
						 (0xfU 
						  & (IData)(
							    (vlTOPp->decoded_i 
							     >> 0x21U))))))
				    ? (((0U == (0x1fU 
						& ((IData)(7U) 
						   * 
						   (0xfU 
						    & (IData)(
							      (vlTOPp->decoded_i 
							       >> 0x21U))))))
					 ? 0U : (vlTOPp->rename_stage__DOT__lut_spec_q[
						 ((IData)(1U) 
						  + 
						  (3U 
						   & (((IData)(7U) 
						       * 
						       (0xfU 
							& (IData)(
								  (vlTOPp->decoded_i 
								   >> 0x21U)))) 
						      >> 5U)))] 
						 << 
						 ((IData)(0x20U) 
						  - 
						  (0x1fU 
						   & ((IData)(7U) 
						      * 
						      (0xfU 
						       & (IData)(
								 (vlTOPp->decoded_i 
								  >> 0x21U)))))))) 
				       | (vlTOPp->rename_stage__DOT__lut_spec_q[
					  (3U & (((IData)(7U) 
						  * 
						  (0xfU 
						   & (IData)(
							     (vlTOPp->decoded_i 
							      >> 0x21U)))) 
						 >> 5U))] 
					  >> (0x1fU 
					      & ((IData)(7U) 
						 * 
						 (0xfU 
						  & (IData)(
							    (vlTOPp->decoded_i 
							     >> 0x21U)))))))
				    : 0U) << 0xcU)));
	}
	if ((1U & (IData)((vlTOPp->decoded_i >> 1U)))) {
	    vlTOPp->rename_stage__DOT____Vlvbound1 
		= (0x7fU & ((0x37fU >= (0x3ffU & ((IData)(7U) 
						  * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt))))
			     ? (((0U == (0x1fU & ((IData)(7U) 
						  * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt))))
				  ? 0U : (vlTOPp->rename_stage__DOT__fl_spec_q[
					  ((IData)(1U) 
					   + (0x1fU 
					      & (((IData)(7U) 
						  * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt)) 
						 >> 5U)))] 
					  << ((IData)(0x20U) 
					      - (0x1fU 
						 & ((IData)(7U) 
						    * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt)))))) 
				| (vlTOPp->rename_stage__DOT__fl_spec_q[
				   (0x1fU & (((IData)(7U) 
					      * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt)) 
					     >> 5U))] 
				   >> (0x1fU & ((IData)(7U) 
						* (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt)))))
			     : 0U));
	    vlTOPp->rename_stage__DOT__fl_spec_read_pt_n 
		= (0x7fU & ((IData)(1U) + (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt_n)));
	    vlTOPp->rename_stage__DOT__fl_spec_num_n 
		= (0xffU & ((IData)(vlTOPp->rename_stage__DOT__fl_spec_num_n) 
			    - (IData)(1U)));
	    vlTOPp->rename_stage__DOT__renamed[2U] 
		= ((7U & vlTOPp->rename_stage__DOT__renamed[2U]) 
		   | (0x3f8U & (((0x37fU >= (0x3ffU 
					     & ((IData)(7U) 
						* (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt))))
				  ? (((0U == (0x1fU 
					      & ((IData)(7U) 
						 * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt))))
				       ? 0U : (vlTOPp->rename_stage__DOT__fl_spec_q[
					       ((IData)(1U) 
						+ (0x1fU 
						   & (((IData)(7U) 
						       * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt)) 
						      >> 5U)))] 
					       << ((IData)(0x20U) 
						   - 
						   (0x1fU 
						    & ((IData)(7U) 
						       * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt)))))) 
				     | (vlTOPp->rename_stage__DOT__fl_spec_q[
					(0x1fU & (((IData)(7U) 
						   * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt)) 
						  >> 5U))] 
					>> (0x1fU & 
					    ((IData)(7U) 
					     * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt)))))
				  : 0U) << 3U)));
	    if ((0x6fU >= (0x7fU & ((IData)(7U) * (0xfU 
						   & (IData)(
							     (vlTOPp->decoded_i 
							      >> 0x35U))))))) {
		VL_ASSIGNSEL_WIII(7,(0x7fU & ((IData)(7U) 
					      * (0xfU 
						 & (IData)(
							   (vlTOPp->decoded_i 
							    >> 0x35U))))), vlTOPp->rename_stage__DOT__lut_spec_n, vlTOPp->rename_stage__DOT____Vlvbound1);
	    }
	}
    }
    if (((IData)(vlTOPp->commit_v_i) & ((IData)(vlTOPp->commit_rename_i) 
					>> 0xbU))) {
	vlTOPp->rename_stage__DOT____Vlvbound2 = (0x7fU 
						  & (IData)(vlTOPp->commit_rename_i));
	vlTOPp->rename_stage__DOT__fl_spec_write_pt_n 
	    = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->rename_stage__DOT__fl_spec_write_pt_n)));
	vlTOPp->rename_stage__DOT__fl_spec_num_n = 
	    (0xffU & ((IData)(1U) + (IData)(vlTOPp->rename_stage__DOT__fl_spec_num_n)));
	if ((0x37fU >= (0x3ffU & ((IData)(7U) * (IData)(vlTOPp->rename_stage__DOT__fl_spec_write_pt))))) {
	    VL_ASSIGNSEL_WIII(7,(0x3ffU & ((IData)(7U) 
					   * (IData)(vlTOPp->rename_stage__DOT__fl_spec_write_pt))), vlTOPp->rename_stage__DOT__fl_spec_n, vlTOPp->rename_stage__DOT____Vlvbound2);
	}
    }
    if (vlTOPp->rename_stage__DOT__roll_back) {
	vlTOPp->rename_stage__DOT__lut_spec_n[0U] = 
	    vlTOPp->rename_stage__DOT__lut_q[0U];
	vlTOPp->rename_stage__DOT__lut_spec_n[1U] = 
	    vlTOPp->rename_stage__DOT__lut_q[1U];
	vlTOPp->rename_stage__DOT__lut_spec_n[2U] = 
	    vlTOPp->rename_stage__DOT__lut_q[2U];
	vlTOPp->rename_stage__DOT__lut_spec_n[3U] = 
	    vlTOPp->rename_stage__DOT__lut_q[3U];
	vlTOPp->rename_stage__DOT__fl_spec_read_pt_n 
	    = vlTOPp->rename_stage__DOT__fl_read_pt;
	vlTOPp->rename_stage__DOT__fl_spec_write_pt_n 
	    = vlTOPp->rename_stage__DOT__fl_write_pt;
	vlTOPp->rename_stage__DOT__fl_spec_num_n = 0x70U;
	vlTOPp->rename_stage__DOT__fl_spec_n[0U] = 
	    vlTOPp->rename_stage__DOT__fl_q[0U];
	vlTOPp->rename_stage__DOT__fl_spec_n[1U] = 
	    vlTOPp->rename_stage__DOT__fl_q[1U];
	vlTOPp->rename_stage__DOT__fl_spec_n[2U] = 
	    vlTOPp->rename_stage__DOT__fl_q[2U];
	vlTOPp->rename_stage__DOT__fl_spec_n[3U] = 
	    vlTOPp->rename_stage__DOT__fl_q[3U];
	vlTOPp->rename_stage__DOT__fl_spec_n[4U] = 
	    vlTOPp->rename_stage__DOT__fl_q[4U];
	vlTOPp->rename_stage__DOT__fl_spec_n[5U] = 
	    vlTOPp->rename_stage__DOT__fl_q[5U];
	vlTOPp->rename_stage__DOT__fl_spec_n[6U] = 
	    vlTOPp->rename_stage__DOT__fl_q[6U];
	vlTOPp->rename_stage__DOT__fl_spec_n[7U] = 
	    vlTOPp->rename_stage__DOT__fl_q[7U];
	vlTOPp->rename_stage__DOT__fl_spec_n[8U] = 
	    vlTOPp->rename_stage__DOT__fl_q[8U];
	vlTOPp->rename_stage__DOT__fl_spec_n[9U] = 
	    vlTOPp->rename_stage__DOT__fl_q[9U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0xaU] 
	    = vlTOPp->rename_stage__DOT__fl_q[0xaU];
	vlTOPp->rename_stage__DOT__fl_spec_n[0xbU] 
	    = vlTOPp->rename_stage__DOT__fl_q[0xbU];
	vlTOPp->rename_stage__DOT__fl_spec_n[0xcU] 
	    = vlTOPp->rename_stage__DOT__fl_q[0xcU];
	vlTOPp->rename_stage__DOT__fl_spec_n[0xdU] 
	    = vlTOPp->rename_stage__DOT__fl_q[0xdU];
	vlTOPp->rename_stage__DOT__fl_spec_n[0xeU] 
	    = vlTOPp->rename_stage__DOT__fl_q[0xeU];
	vlTOPp->rename_stage__DOT__fl_spec_n[0xfU] 
	    = vlTOPp->rename_stage__DOT__fl_q[0xfU];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x10U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x10U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x11U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x11U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x12U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x12U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x13U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x13U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x14U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x14U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x15U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x15U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x16U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x16U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x17U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x17U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x18U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x18U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x19U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x19U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x1aU] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x1aU];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x1bU] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x1bU];
    }
    vlTOPp->rename_stage__DOT__renamed_n[0U] = ((IData)(vlTOPp->issue_rename_ready_i)
						 ? 
						vlTOPp->rename_stage__DOT__renamed[0U]
						 : 
						vlTOPp->rename_stage__DOT__renamed_r[0U]);
    vlTOPp->rename_stage__DOT__renamed_n[1U] = ((IData)(vlTOPp->issue_rename_ready_i)
						 ? 
						vlTOPp->rename_stage__DOT__renamed[1U]
						 : 
						vlTOPp->rename_stage__DOT__renamed_r[1U]);
    vlTOPp->rename_stage__DOT__renamed_n[2U] = ((IData)(vlTOPp->issue_rename_ready_i)
						 ? 
						vlTOPp->rename_stage__DOT__renamed[2U]
						 : 
						vlTOPp->rename_stage__DOT__renamed_r[2U]);
}

VL_INLINE_OPT void Vrename_stage::_sequent__TOP__3(Vrename_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_stage::_sequent__TOP__3\n"); );
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:170
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_read_pt = 0U;
	vlTOPp->rename_stage__DOT__fl_write_pt = 0x70U;
	vlTOPp->rename_stage__DOT__fl_spec_read_pt = 0U;
	vlTOPp->rename_stage__DOT__fl_spec_write_pt = 0x70U;
	vlTOPp->rename_stage__DOT__fl_spec_num = 0x70U;
	vlTOPp->rename_stage__DOT__renamed_r[0U] = 0U;
	vlTOPp->rename_stage__DOT__renamed_r[1U] = 0U;
	vlTOPp->rename_stage__DOT__renamed_r[2U] = 0U;
	vlTOPp->rename_stage__DOT__renamed_v_r = 0U;
    } else {
	vlTOPp->rename_stage__DOT__fl_read_pt = vlTOPp->rename_stage__DOT__fl_read_pt_n;
	vlTOPp->rename_stage__DOT__fl_write_pt = vlTOPp->rename_stage__DOT__fl_write_pt_n;
	vlTOPp->rename_stage__DOT__fl_spec_read_pt 
	    = vlTOPp->rename_stage__DOT__fl_spec_read_pt_n;
	vlTOPp->rename_stage__DOT__fl_spec_write_pt 
	    = vlTOPp->rename_stage__DOT__fl_spec_write_pt_n;
	vlTOPp->rename_stage__DOT__fl_spec_num = vlTOPp->rename_stage__DOT__fl_spec_num_n;
	vlTOPp->rename_stage__DOT__renamed_r[0U] = 
	    vlTOPp->rename_stage__DOT__renamed_n[0U];
	vlTOPp->rename_stage__DOT__renamed_r[1U] = 
	    vlTOPp->rename_stage__DOT__renamed_n[1U];
	vlTOPp->rename_stage__DOT__renamed_r[2U] = 
	    vlTOPp->rename_stage__DOT__renamed_n[2U];
	vlTOPp->rename_stage__DOT__renamed_v_r = vlTOPp->rename_stage__DOT__renamed_v;
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:220
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__lut_spec_q[0U] = 
	    (0xffffff80U & vlTOPp->rename_stage__DOT__lut_spec_q[0U]);
	vlTOPp->rename_stage__DOT__lut_q[0U] = (0xffffff80U 
						& vlTOPp->rename_stage__DOT__lut_q[0U]);
    } else {
	vlTOPp->rename_stage__DOT__lut_spec_q[0U] = 
	    ((0xffffff80U & vlTOPp->rename_stage__DOT__lut_spec_q[0U]) 
	     | (0x7fU & vlTOPp->rename_stage__DOT__lut_spec_n[0U]));
	vlTOPp->rename_stage__DOT__lut_q[0U] = ((0xffffff80U 
						 & vlTOPp->rename_stage__DOT__lut_q[0U]) 
						| (0x7fU 
						   & vlTOPp->rename_stage__DOT__lut_n[0U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:220
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__lut_spec_q[0U] = 
	    (0x80U | (0xffffc07fU & vlTOPp->rename_stage__DOT__lut_spec_q[0U]));
	vlTOPp->rename_stage__DOT__lut_q[0U] = (0x80U 
						| (0xffffc07fU 
						   & vlTOPp->rename_stage__DOT__lut_q[0U]));
    } else {
	vlTOPp->rename_stage__DOT__lut_spec_q[0U] = 
	    ((0xffffc07fU & vlTOPp->rename_stage__DOT__lut_spec_q[0U]) 
	     | (0x3f80U & vlTOPp->rename_stage__DOT__lut_spec_n[0U]));
	vlTOPp->rename_stage__DOT__lut_q[0U] = ((0xffffc07fU 
						 & vlTOPp->rename_stage__DOT__lut_q[0U]) 
						| (0x3f80U 
						   & vlTOPp->rename_stage__DOT__lut_n[0U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:220
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__lut_spec_q[0U] = 
	    (0x8000U | (0xffe03fffU & vlTOPp->rename_stage__DOT__lut_spec_q[0U]));
	vlTOPp->rename_stage__DOT__lut_q[0U] = (0x8000U 
						| (0xffe03fffU 
						   & vlTOPp->rename_stage__DOT__lut_q[0U]));
    } else {
	vlTOPp->rename_stage__DOT__lut_spec_q[0U] = 
	    ((0xffe03fffU & vlTOPp->rename_stage__DOT__lut_spec_q[0U]) 
	     | (0x1fc000U & vlTOPp->rename_stage__DOT__lut_spec_n[0U]));
	vlTOPp->rename_stage__DOT__lut_q[0U] = ((0xffe03fffU 
						 & vlTOPp->rename_stage__DOT__lut_q[0U]) 
						| (0x1fc000U 
						   & vlTOPp->rename_stage__DOT__lut_n[0U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:220
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__lut_spec_q[0U] = 
	    (0x600000U | (0xf01fffffU & vlTOPp->rename_stage__DOT__lut_spec_q[0U]));
	vlTOPp->rename_stage__DOT__lut_q[0U] = (0x600000U 
						| (0xf01fffffU 
						   & vlTOPp->rename_stage__DOT__lut_q[0U]));
    } else {
	vlTOPp->rename_stage__DOT__lut_spec_q[0U] = 
	    ((0xf01fffffU & vlTOPp->rename_stage__DOT__lut_spec_q[0U]) 
	     | (0xfe00000U & vlTOPp->rename_stage__DOT__lut_spec_n[0U]));
	vlTOPp->rename_stage__DOT__lut_q[0U] = ((0xf01fffffU 
						 & vlTOPp->rename_stage__DOT__lut_q[0U]) 
						| (0xfe00000U 
						   & vlTOPp->rename_stage__DOT__lut_n[0U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:220
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__lut_spec_q[0U] = 
	    (0x40000000U | (0xfffffffU & vlTOPp->rename_stage__DOT__lut_spec_q[0U]));
	vlTOPp->rename_stage__DOT__lut_spec_q[1U] = 
	    (0xfffffff8U & vlTOPp->rename_stage__DOT__lut_spec_q[1U]);
	vlTOPp->rename_stage__DOT__lut_q[0U] = (0x40000000U 
						| (0xfffffffU 
						   & vlTOPp->rename_stage__DOT__lut_q[0U]));
	vlTOPp->rename_stage__DOT__lut_q[1U] = (0xfffffff8U 
						& vlTOPp->rename_stage__DOT__lut_q[1U]);
    } else {
	vlTOPp->rename_stage__DOT__lut_spec_q[0U] = 
	    ((0xfffffffU & vlTOPp->rename_stage__DOT__lut_spec_q[0U]) 
	     | (0xf0000000U & vlTOPp->rename_stage__DOT__lut_spec_n[0U]));
	vlTOPp->rename_stage__DOT__lut_spec_q[1U] = 
	    ((0xfffffff8U & vlTOPp->rename_stage__DOT__lut_spec_q[1U]) 
	     | (7U & vlTOPp->rename_stage__DOT__lut_spec_n[1U]));
	vlTOPp->rename_stage__DOT__lut_q[0U] = ((0xfffffffU 
						 & vlTOPp->rename_stage__DOT__lut_q[0U]) 
						| (0xf0000000U 
						   & vlTOPp->rename_stage__DOT__lut_n[0U]));
	vlTOPp->rename_stage__DOT__lut_q[1U] = ((0xfffffff8U 
						 & vlTOPp->rename_stage__DOT__lut_q[1U]) 
						| (7U 
						   & vlTOPp->rename_stage__DOT__lut_n[1U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:220
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__lut_spec_q[1U] = 
	    (0x28U | (0xfffffc07U & vlTOPp->rename_stage__DOT__lut_spec_q[1U]));
	vlTOPp->rename_stage__DOT__lut_q[1U] = (0x28U 
						| (0xfffffc07U 
						   & vlTOPp->rename_stage__DOT__lut_q[1U]));
    } else {
	vlTOPp->rename_stage__DOT__lut_spec_q[1U] = 
	    ((0xfffffc07U & vlTOPp->rename_stage__DOT__lut_spec_q[1U]) 
	     | (0x3f8U & vlTOPp->rename_stage__DOT__lut_spec_n[1U]));
	vlTOPp->rename_stage__DOT__lut_q[1U] = ((0xfffffc07U 
						 & vlTOPp->rename_stage__DOT__lut_q[1U]) 
						| (0x3f8U 
						   & vlTOPp->rename_stage__DOT__lut_n[1U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:220
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__lut_spec_q[1U] = 
	    (0x1800U | (0xfffe03ffU & vlTOPp->rename_stage__DOT__lut_spec_q[1U]));
	vlTOPp->rename_stage__DOT__lut_q[1U] = (0x1800U 
						| (0xfffe03ffU 
						   & vlTOPp->rename_stage__DOT__lut_q[1U]));
    } else {
	vlTOPp->rename_stage__DOT__lut_spec_q[1U] = 
	    ((0xfffe03ffU & vlTOPp->rename_stage__DOT__lut_spec_q[1U]) 
	     | (0x1fc00U & vlTOPp->rename_stage__DOT__lut_spec_n[1U]));
	vlTOPp->rename_stage__DOT__lut_q[1U] = ((0xfffe03ffU 
						 & vlTOPp->rename_stage__DOT__lut_q[1U]) 
						| (0x1fc00U 
						   & vlTOPp->rename_stage__DOT__lut_n[1U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:220
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__lut_spec_q[1U] = 
	    (0xe0000U | (0xff01ffffU & vlTOPp->rename_stage__DOT__lut_spec_q[1U]));
	vlTOPp->rename_stage__DOT__lut_q[1U] = (0xe0000U 
						| (0xff01ffffU 
						   & vlTOPp->rename_stage__DOT__lut_q[1U]));
    } else {
	vlTOPp->rename_stage__DOT__lut_spec_q[1U] = 
	    ((0xff01ffffU & vlTOPp->rename_stage__DOT__lut_spec_q[1U]) 
	     | (0xfe0000U & vlTOPp->rename_stage__DOT__lut_spec_n[1U]));
	vlTOPp->rename_stage__DOT__lut_q[1U] = ((0xff01ffffU 
						 & vlTOPp->rename_stage__DOT__lut_q[1U]) 
						| (0xfe0000U 
						   & vlTOPp->rename_stage__DOT__lut_n[1U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:220
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__lut_spec_q[1U] = 
	    (0x8000000U | (0x80ffffffU & vlTOPp->rename_stage__DOT__lut_spec_q[1U]));
	vlTOPp->rename_stage__DOT__lut_q[1U] = (0x8000000U 
						| (0x80ffffffU 
						   & vlTOPp->rename_stage__DOT__lut_q[1U]));
    } else {
	vlTOPp->rename_stage__DOT__lut_spec_q[1U] = 
	    ((0x80ffffffU & vlTOPp->rename_stage__DOT__lut_spec_q[1U]) 
	     | (0x7f000000U & vlTOPp->rename_stage__DOT__lut_spec_n[1U]));
	vlTOPp->rename_stage__DOT__lut_q[1U] = ((0x80ffffffU 
						 & vlTOPp->rename_stage__DOT__lut_q[1U]) 
						| (0x7f000000U 
						   & vlTOPp->rename_stage__DOT__lut_n[1U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:220
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__lut_spec_q[1U] = 
	    (0x80000000U | (0x7fffffffU & vlTOPp->rename_stage__DOT__lut_spec_q[1U]));
	vlTOPp->rename_stage__DOT__lut_spec_q[2U] = 
	    (4U | (0xffffffc0U & vlTOPp->rename_stage__DOT__lut_spec_q[2U]));
	vlTOPp->rename_stage__DOT__lut_q[1U] = (0x80000000U 
						| (0x7fffffffU 
						   & vlTOPp->rename_stage__DOT__lut_q[1U]));
	vlTOPp->rename_stage__DOT__lut_q[2U] = (4U 
						| (0xffffffc0U 
						   & vlTOPp->rename_stage__DOT__lut_q[2U]));
    } else {
	vlTOPp->rename_stage__DOT__lut_spec_q[1U] = 
	    ((0x7fffffffU & vlTOPp->rename_stage__DOT__lut_spec_q[1U]) 
	     | (0x80000000U & vlTOPp->rename_stage__DOT__lut_spec_n[1U]));
	vlTOPp->rename_stage__DOT__lut_spec_q[2U] = 
	    ((0xffffffc0U & vlTOPp->rename_stage__DOT__lut_spec_q[2U]) 
	     | (0x3fU & vlTOPp->rename_stage__DOT__lut_spec_n[2U]));
	vlTOPp->rename_stage__DOT__lut_q[1U] = ((0x7fffffffU 
						 & vlTOPp->rename_stage__DOT__lut_q[1U]) 
						| (0x80000000U 
						   & vlTOPp->rename_stage__DOT__lut_n[1U]));
	vlTOPp->rename_stage__DOT__lut_q[2U] = ((0xffffffc0U 
						 & vlTOPp->rename_stage__DOT__lut_q[2U]) 
						| (0x3fU 
						   & vlTOPp->rename_stage__DOT__lut_n[2U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:220
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__lut_spec_q[2U] = 
	    (0x280U | (0xffffe03fU & vlTOPp->rename_stage__DOT__lut_spec_q[2U]));
	vlTOPp->rename_stage__DOT__lut_q[2U] = (0x280U 
						| (0xffffe03fU 
						   & vlTOPp->rename_stage__DOT__lut_q[2U]));
    } else {
	vlTOPp->rename_stage__DOT__lut_spec_q[2U] = 
	    ((0xffffe03fU & vlTOPp->rename_stage__DOT__lut_spec_q[2U]) 
	     | (0x1fc0U & vlTOPp->rename_stage__DOT__lut_spec_n[2U]));
	vlTOPp->rename_stage__DOT__lut_q[2U] = ((0xffffe03fU 
						 & vlTOPp->rename_stage__DOT__lut_q[2U]) 
						| (0x1fc0U 
						   & vlTOPp->rename_stage__DOT__lut_n[2U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:220
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__lut_spec_q[2U] = 
	    (0x16000U | (0xfff01fffU & vlTOPp->rename_stage__DOT__lut_spec_q[2U]));
	vlTOPp->rename_stage__DOT__lut_q[2U] = (0x16000U 
						| (0xfff01fffU 
						   & vlTOPp->rename_stage__DOT__lut_q[2U]));
    } else {
	vlTOPp->rename_stage__DOT__lut_spec_q[2U] = 
	    ((0xfff01fffU & vlTOPp->rename_stage__DOT__lut_spec_q[2U]) 
	     | (0xfe000U & vlTOPp->rename_stage__DOT__lut_spec_n[2U]));
	vlTOPp->rename_stage__DOT__lut_q[2U] = ((0xfff01fffU 
						 & vlTOPp->rename_stage__DOT__lut_q[2U]) 
						| (0xfe000U 
						   & vlTOPp->rename_stage__DOT__lut_n[2U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:220
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__lut_spec_q[2U] = 
	    (0xc00000U | (0xf80fffffU & vlTOPp->rename_stage__DOT__lut_spec_q[2U]));
	vlTOPp->rename_stage__DOT__lut_q[2U] = (0xc00000U 
						| (0xf80fffffU 
						   & vlTOPp->rename_stage__DOT__lut_q[2U]));
    } else {
	vlTOPp->rename_stage__DOT__lut_spec_q[2U] = 
	    ((0xf80fffffU & vlTOPp->rename_stage__DOT__lut_spec_q[2U]) 
	     | (0x7f00000U & vlTOPp->rename_stage__DOT__lut_spec_n[2U]));
	vlTOPp->rename_stage__DOT__lut_q[2U] = ((0xf80fffffU 
						 & vlTOPp->rename_stage__DOT__lut_q[2U]) 
						| (0x7f00000U 
						   & vlTOPp->rename_stage__DOT__lut_n[2U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:220
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__lut_spec_q[2U] = 
	    (0x68000000U | (0x7ffffffU & vlTOPp->rename_stage__DOT__lut_spec_q[2U]));
	vlTOPp->rename_stage__DOT__lut_spec_q[3U] = 
	    (0xfffcU & vlTOPp->rename_stage__DOT__lut_spec_q[3U]);
	vlTOPp->rename_stage__DOT__lut_q[2U] = (0x68000000U 
						| (0x7ffffffU 
						   & vlTOPp->rename_stage__DOT__lut_q[2U]));
	vlTOPp->rename_stage__DOT__lut_q[3U] = (0xfffcU 
						& vlTOPp->rename_stage__DOT__lut_q[3U]);
    } else {
	vlTOPp->rename_stage__DOT__lut_spec_q[2U] = 
	    ((0x7ffffffU & vlTOPp->rename_stage__DOT__lut_spec_q[2U]) 
	     | (0xf8000000U & vlTOPp->rename_stage__DOT__lut_spec_n[2U]));
	vlTOPp->rename_stage__DOT__lut_spec_q[3U] = 
	    ((0xfffcU & vlTOPp->rename_stage__DOT__lut_spec_q[3U]) 
	     | (3U & vlTOPp->rename_stage__DOT__lut_spec_n[3U]));
	vlTOPp->rename_stage__DOT__lut_q[2U] = ((0x7ffffffU 
						 & vlTOPp->rename_stage__DOT__lut_q[2U]) 
						| (0xf8000000U 
						   & vlTOPp->rename_stage__DOT__lut_n[2U]));
	vlTOPp->rename_stage__DOT__lut_q[3U] = ((0xfffcU 
						 & vlTOPp->rename_stage__DOT__lut_q[3U]) 
						| (3U 
						   & vlTOPp->rename_stage__DOT__lut_n[3U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:220
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__lut_spec_q[3U] = 
	    (0x38U | (0xfe03U & vlTOPp->rename_stage__DOT__lut_spec_q[3U]));
	vlTOPp->rename_stage__DOT__lut_q[3U] = (0x38U 
						| (0xfe03U 
						   & vlTOPp->rename_stage__DOT__lut_q[3U]));
    } else {
	vlTOPp->rename_stage__DOT__lut_spec_q[3U] = 
	    ((0xfe03U & vlTOPp->rename_stage__DOT__lut_spec_q[3U]) 
	     | (0x1fcU & vlTOPp->rename_stage__DOT__lut_spec_n[3U]));
	vlTOPp->rename_stage__DOT__lut_q[3U] = ((0xfe03U 
						 & vlTOPp->rename_stage__DOT__lut_q[3U]) 
						| (0x1fcU 
						   & vlTOPp->rename_stage__DOT__lut_n[3U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:220
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__lut_spec_q[3U] = 
	    (0x1e00U | (0x1ffU & vlTOPp->rename_stage__DOT__lut_spec_q[3U]));
	vlTOPp->rename_stage__DOT__lut_q[3U] = (0x1e00U 
						| (0x1ffU 
						   & vlTOPp->rename_stage__DOT__lut_q[3U]));
    } else {
	vlTOPp->rename_stage__DOT__lut_spec_q[3U] = 
	    ((0x1ffU & vlTOPp->rename_stage__DOT__lut_spec_q[3U]) 
	     | (0xfe00U & vlTOPp->rename_stage__DOT__lut_spec_n[3U]));
	vlTOPp->rename_stage__DOT__lut_q[3U] = ((0x1ffU 
						 & vlTOPp->rename_stage__DOT__lut_q[3U]) 
						| (0xfe00U 
						   & vlTOPp->rename_stage__DOT__lut_n[3U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0U] = 
	    (0x10U | (0xffffff80U & vlTOPp->rename_stage__DOT__fl_spec_q[0U]));
	vlTOPp->rename_stage__DOT__fl_q[0U] = (0x10U 
					       | (0xffffff80U 
						  & vlTOPp->rename_stage__DOT__fl_q[0U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0U] = 
	    ((0xffffff80U & vlTOPp->rename_stage__DOT__fl_spec_q[0U]) 
	     | (0x7fU & vlTOPp->rename_stage__DOT__fl_spec_n[0U]));
	vlTOPp->rename_stage__DOT__fl_q[0U] = ((0xffffff80U 
						& vlTOPp->rename_stage__DOT__fl_q[0U]) 
					       | (0x7fU 
						  & vlTOPp->rename_stage__DOT__fl_n[0U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0U] = 
	    (0x880U | (0xffffc07fU & vlTOPp->rename_stage__DOT__fl_spec_q[0U]));
	vlTOPp->rename_stage__DOT__fl_q[0U] = (0x880U 
					       | (0xffffc07fU 
						  & vlTOPp->rename_stage__DOT__fl_q[0U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0U] = 
	    ((0xffffc07fU & vlTOPp->rename_stage__DOT__fl_spec_q[0U]) 
	     | (0x3f80U & vlTOPp->rename_stage__DOT__fl_spec_n[0U]));
	vlTOPp->rename_stage__DOT__fl_q[0U] = ((0xffffc07fU 
						& vlTOPp->rename_stage__DOT__fl_q[0U]) 
					       | (0x3f80U 
						  & vlTOPp->rename_stage__DOT__fl_n[0U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0U] = 
	    (0x48000U | (0xffe03fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0U]));
	vlTOPp->rename_stage__DOT__fl_q[0U] = (0x48000U 
					       | (0xffe03fffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0U] = 
	    ((0xffe03fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0U]) 
	     | (0x1fc000U & vlTOPp->rename_stage__DOT__fl_spec_n[0U]));
	vlTOPp->rename_stage__DOT__fl_q[0U] = ((0xffe03fffU 
						& vlTOPp->rename_stage__DOT__fl_q[0U]) 
					       | (0x1fc000U 
						  & vlTOPp->rename_stage__DOT__fl_n[0U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0U] = 
	    (0x2600000U | (0xf01fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0U]));
	vlTOPp->rename_stage__DOT__fl_q[0U] = (0x2600000U 
					       | (0xf01fffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0U] = 
	    ((0xf01fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0U]) 
	     | (0xfe00000U & vlTOPp->rename_stage__DOT__fl_spec_n[0U]));
	vlTOPp->rename_stage__DOT__fl_q[0U] = ((0xf01fffffU 
						& vlTOPp->rename_stage__DOT__fl_q[0U]) 
					       | (0xfe00000U 
						  & vlTOPp->rename_stage__DOT__fl_n[0U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0U] = 
	    (0x40000000U | (0xfffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[1U] = 
	    (1U | (0xfffffff8U & vlTOPp->rename_stage__DOT__fl_spec_q[1U]));
	vlTOPp->rename_stage__DOT__fl_q[0U] = (0x40000000U 
					       | (0xfffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0U]));
	vlTOPp->rename_stage__DOT__fl_q[1U] = (1U | 
					       (0xfffffff8U 
						& vlTOPp->rename_stage__DOT__fl_q[1U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0U] = 
	    ((0xfffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0U]) 
	     | (0xf0000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[1U] = 
	    ((0xfffffff8U & vlTOPp->rename_stage__DOT__fl_spec_q[1U]) 
	     | (7U & vlTOPp->rename_stage__DOT__fl_spec_n[1U]));
	vlTOPp->rename_stage__DOT__fl_q[0U] = ((0xfffffffU 
						& vlTOPp->rename_stage__DOT__fl_q[0U]) 
					       | (0xf0000000U 
						  & vlTOPp->rename_stage__DOT__fl_n[0U]));
	vlTOPp->rename_stage__DOT__fl_q[1U] = ((0xfffffff8U 
						& vlTOPp->rename_stage__DOT__fl_q[1U]) 
					       | (7U 
						  & vlTOPp->rename_stage__DOT__fl_n[1U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[1U] = 
	    (0xa8U | (0xfffffc07U & vlTOPp->rename_stage__DOT__fl_spec_q[1U]));
	vlTOPp->rename_stage__DOT__fl_q[1U] = (0xa8U 
					       | (0xfffffc07U 
						  & vlTOPp->rename_stage__DOT__fl_q[1U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[1U] = 
	    ((0xfffffc07U & vlTOPp->rename_stage__DOT__fl_spec_q[1U]) 
	     | (0x3f8U & vlTOPp->rename_stage__DOT__fl_spec_n[1U]));
	vlTOPp->rename_stage__DOT__fl_q[1U] = ((0xfffffc07U 
						& vlTOPp->rename_stage__DOT__fl_q[1U]) 
					       | (0x3f8U 
						  & vlTOPp->rename_stage__DOT__fl_n[1U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[1U] = 
	    (0x5800U | (0xfffe03ffU & vlTOPp->rename_stage__DOT__fl_spec_q[1U]));
	vlTOPp->rename_stage__DOT__fl_q[1U] = (0x5800U 
					       | (0xfffe03ffU 
						  & vlTOPp->rename_stage__DOT__fl_q[1U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[1U] = 
	    ((0xfffe03ffU & vlTOPp->rename_stage__DOT__fl_spec_q[1U]) 
	     | (0x1fc00U & vlTOPp->rename_stage__DOT__fl_spec_n[1U]));
	vlTOPp->rename_stage__DOT__fl_q[1U] = ((0xfffe03ffU 
						& vlTOPp->rename_stage__DOT__fl_q[1U]) 
					       | (0x1fc00U 
						  & vlTOPp->rename_stage__DOT__fl_n[1U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[1U] = 
	    (0x2e0000U | (0xff01ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[1U]));
	vlTOPp->rename_stage__DOT__fl_q[1U] = (0x2e0000U 
					       | (0xff01ffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[1U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[1U] = 
	    ((0xff01ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[1U]) 
	     | (0xfe0000U & vlTOPp->rename_stage__DOT__fl_spec_n[1U]));
	vlTOPp->rename_stage__DOT__fl_q[1U] = ((0xff01ffffU 
						& vlTOPp->rename_stage__DOT__fl_q[1U]) 
					       | (0xfe0000U 
						  & vlTOPp->rename_stage__DOT__fl_n[1U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[1U] = 
	    (0x18000000U | (0x80ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[1U]));
	vlTOPp->rename_stage__DOT__fl_q[1U] = (0x18000000U 
					       | (0x80ffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[1U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[1U] = 
	    ((0x80ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[1U]) 
	     | (0x7f000000U & vlTOPp->rename_stage__DOT__fl_spec_n[1U]));
	vlTOPp->rename_stage__DOT__fl_q[1U] = ((0x80ffffffU 
						& vlTOPp->rename_stage__DOT__fl_q[1U]) 
					       | (0x7f000000U 
						  & vlTOPp->rename_stage__DOT__fl_n[1U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[1U] = 
	    (0x80000000U | (0x7fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[1U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[2U] = 
	    (0xcU | (0xffffffc0U & vlTOPp->rename_stage__DOT__fl_spec_q[2U]));
	vlTOPp->rename_stage__DOT__fl_q[1U] = (0x80000000U 
					       | (0x7fffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[1U]));
	vlTOPp->rename_stage__DOT__fl_q[2U] = (0xcU 
					       | (0xffffffc0U 
						  & vlTOPp->rename_stage__DOT__fl_q[2U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[1U] = 
	    ((0x7fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[1U]) 
	     | (0x80000000U & vlTOPp->rename_stage__DOT__fl_spec_n[1U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[2U] = 
	    ((0xffffffc0U & vlTOPp->rename_stage__DOT__fl_spec_q[2U]) 
	     | (0x3fU & vlTOPp->rename_stage__DOT__fl_spec_n[2U]));
	vlTOPp->rename_stage__DOT__fl_q[1U] = ((0x7fffffffU 
						& vlTOPp->rename_stage__DOT__fl_q[1U]) 
					       | (0x80000000U 
						  & vlTOPp->rename_stage__DOT__fl_n[1U]));
	vlTOPp->rename_stage__DOT__fl_q[2U] = ((0xffffffc0U 
						& vlTOPp->rename_stage__DOT__fl_q[2U]) 
					       | (0x3fU 
						  & vlTOPp->rename_stage__DOT__fl_n[2U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[2U] = 
	    (0x680U | (0xffffe03fU & vlTOPp->rename_stage__DOT__fl_spec_q[2U]));
	vlTOPp->rename_stage__DOT__fl_q[2U] = (0x680U 
					       | (0xffffe03fU 
						  & vlTOPp->rename_stage__DOT__fl_q[2U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[2U] = 
	    ((0xffffe03fU & vlTOPp->rename_stage__DOT__fl_spec_q[2U]) 
	     | (0x1fc0U & vlTOPp->rename_stage__DOT__fl_spec_n[2U]));
	vlTOPp->rename_stage__DOT__fl_q[2U] = ((0xffffe03fU 
						& vlTOPp->rename_stage__DOT__fl_q[2U]) 
					       | (0x1fc0U 
						  & vlTOPp->rename_stage__DOT__fl_n[2U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[2U] = 
	    (0x36000U | (0xfff01fffU & vlTOPp->rename_stage__DOT__fl_spec_q[2U]));
	vlTOPp->rename_stage__DOT__fl_q[2U] = (0x36000U 
					       | (0xfff01fffU 
						  & vlTOPp->rename_stage__DOT__fl_q[2U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[2U] = 
	    ((0xfff01fffU & vlTOPp->rename_stage__DOT__fl_spec_q[2U]) 
	     | (0xfe000U & vlTOPp->rename_stage__DOT__fl_spec_n[2U]));
	vlTOPp->rename_stage__DOT__fl_q[2U] = ((0xfff01fffU 
						& vlTOPp->rename_stage__DOT__fl_q[2U]) 
					       | (0xfe000U 
						  & vlTOPp->rename_stage__DOT__fl_n[2U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[2U] = 
	    (0x1c00000U | (0xf80fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[2U]));
	vlTOPp->rename_stage__DOT__fl_q[2U] = (0x1c00000U 
					       | (0xf80fffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[2U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[2U] = 
	    ((0xf80fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[2U]) 
	     | (0x7f00000U & vlTOPp->rename_stage__DOT__fl_spec_n[2U]));
	vlTOPp->rename_stage__DOT__fl_q[2U] = ((0xf80fffffU 
						& vlTOPp->rename_stage__DOT__fl_q[2U]) 
					       | (0x7f00000U 
						  & vlTOPp->rename_stage__DOT__fl_n[2U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[2U] = 
	    (0xe8000000U | (0x7ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[2U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[3U] = 
	    (0xfffffffcU & vlTOPp->rename_stage__DOT__fl_spec_q[3U]);
	vlTOPp->rename_stage__DOT__fl_q[2U] = (0xe8000000U 
					       | (0x7ffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[2U]));
	vlTOPp->rename_stage__DOT__fl_q[3U] = (0xfffffffcU 
					       & vlTOPp->rename_stage__DOT__fl_q[3U]);
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[2U] = 
	    ((0x7ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[2U]) 
	     | (0xf8000000U & vlTOPp->rename_stage__DOT__fl_spec_n[2U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[3U] = 
	    ((0xfffffffcU & vlTOPp->rename_stage__DOT__fl_spec_q[3U]) 
	     | (3U & vlTOPp->rename_stage__DOT__fl_spec_n[3U]));
	vlTOPp->rename_stage__DOT__fl_q[2U] = ((0x7ffffffU 
						& vlTOPp->rename_stage__DOT__fl_q[2U]) 
					       | (0xf8000000U 
						  & vlTOPp->rename_stage__DOT__fl_n[2U]));
	vlTOPp->rename_stage__DOT__fl_q[3U] = ((0xfffffffcU 
						& vlTOPp->rename_stage__DOT__fl_q[3U]) 
					       | (3U 
						  & vlTOPp->rename_stage__DOT__fl_n[3U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[3U] = 
	    (0x78U | (0xfffffe03U & vlTOPp->rename_stage__DOT__fl_spec_q[3U]));
	vlTOPp->rename_stage__DOT__fl_q[3U] = (0x78U 
					       | (0xfffffe03U 
						  & vlTOPp->rename_stage__DOT__fl_q[3U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[3U] = 
	    ((0xfffffe03U & vlTOPp->rename_stage__DOT__fl_spec_q[3U]) 
	     | (0x1fcU & vlTOPp->rename_stage__DOT__fl_spec_n[3U]));
	vlTOPp->rename_stage__DOT__fl_q[3U] = ((0xfffffe03U 
						& vlTOPp->rename_stage__DOT__fl_q[3U]) 
					       | (0x1fcU 
						  & vlTOPp->rename_stage__DOT__fl_n[3U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[3U] = 
	    (0x3e00U | (0xffff01ffU & vlTOPp->rename_stage__DOT__fl_spec_q[3U]));
	vlTOPp->rename_stage__DOT__fl_q[3U] = (0x3e00U 
					       | (0xffff01ffU 
						  & vlTOPp->rename_stage__DOT__fl_q[3U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[3U] = 
	    ((0xffff01ffU & vlTOPp->rename_stage__DOT__fl_spec_q[3U]) 
	     | (0xfe00U & vlTOPp->rename_stage__DOT__fl_spec_n[3U]));
	vlTOPp->rename_stage__DOT__fl_q[3U] = ((0xffff01ffU 
						& vlTOPp->rename_stage__DOT__fl_q[3U]) 
					       | (0xfe00U 
						  & vlTOPp->rename_stage__DOT__fl_n[3U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[3U] = 
	    (0x200000U | (0xff80ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[3U]));
	vlTOPp->rename_stage__DOT__fl_q[3U] = (0x200000U 
					       | (0xff80ffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[3U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[3U] = 
	    ((0xff80ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[3U]) 
	     | (0x7f0000U & vlTOPp->rename_stage__DOT__fl_spec_n[3U]));
	vlTOPp->rename_stage__DOT__fl_q[3U] = ((0xff80ffffU 
						& vlTOPp->rename_stage__DOT__fl_q[3U]) 
					       | (0x7f0000U 
						  & vlTOPp->rename_stage__DOT__fl_n[3U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[3U] = 
	    (0x10800000U | (0xc07fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[3U]));
	vlTOPp->rename_stage__DOT__fl_q[3U] = (0x10800000U 
					       | (0xc07fffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[3U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[3U] = 
	    ((0xc07fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[3U]) 
	     | (0x3f800000U & vlTOPp->rename_stage__DOT__fl_spec_n[3U]));
	vlTOPp->rename_stage__DOT__fl_q[3U] = ((0xc07fffffU 
						& vlTOPp->rename_stage__DOT__fl_q[3U]) 
					       | (0x3f800000U 
						  & vlTOPp->rename_stage__DOT__fl_n[3U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[3U] = 
	    (0x80000000U | (0x3fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[3U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[4U] = 
	    (8U | (0xffffffe0U & vlTOPp->rename_stage__DOT__fl_spec_q[4U]));
	vlTOPp->rename_stage__DOT__fl_q[3U] = (0x80000000U 
					       | (0x3fffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[3U]));
	vlTOPp->rename_stage__DOT__fl_q[4U] = (8U | 
					       (0xffffffe0U 
						& vlTOPp->rename_stage__DOT__fl_q[4U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[3U] = 
	    ((0x3fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[3U]) 
	     | (0xc0000000U & vlTOPp->rename_stage__DOT__fl_spec_n[3U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[4U] = 
	    ((0xffffffe0U & vlTOPp->rename_stage__DOT__fl_spec_q[4U]) 
	     | (0x1fU & vlTOPp->rename_stage__DOT__fl_spec_n[4U]));
	vlTOPp->rename_stage__DOT__fl_q[3U] = ((0x3fffffffU 
						& vlTOPp->rename_stage__DOT__fl_q[3U]) 
					       | (0xc0000000U 
						  & vlTOPp->rename_stage__DOT__fl_n[3U]));
	vlTOPp->rename_stage__DOT__fl_q[4U] = ((0xffffffe0U 
						& vlTOPp->rename_stage__DOT__fl_q[4U]) 
					       | (0x1fU 
						  & vlTOPp->rename_stage__DOT__fl_n[4U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[4U] = 
	    (0x460U | (0xfffff01fU & vlTOPp->rename_stage__DOT__fl_spec_q[4U]));
	vlTOPp->rename_stage__DOT__fl_q[4U] = (0x460U 
					       | (0xfffff01fU 
						  & vlTOPp->rename_stage__DOT__fl_q[4U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[4U] = 
	    ((0xfffff01fU & vlTOPp->rename_stage__DOT__fl_spec_q[4U]) 
	     | (0xfe0U & vlTOPp->rename_stage__DOT__fl_spec_n[4U]));
	vlTOPp->rename_stage__DOT__fl_q[4U] = ((0xfffff01fU 
						& vlTOPp->rename_stage__DOT__fl_q[4U]) 
					       | (0xfe0U 
						  & vlTOPp->rename_stage__DOT__fl_n[4U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[4U] = 
	    (0x24000U | (0xfff80fffU & vlTOPp->rename_stage__DOT__fl_spec_q[4U]));
	vlTOPp->rename_stage__DOT__fl_q[4U] = (0x24000U 
					       | (0xfff80fffU 
						  & vlTOPp->rename_stage__DOT__fl_q[4U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[4U] = 
	    ((0xfff80fffU & vlTOPp->rename_stage__DOT__fl_spec_q[4U]) 
	     | (0x7f000U & vlTOPp->rename_stage__DOT__fl_spec_n[4U]));
	vlTOPp->rename_stage__DOT__fl_q[4U] = ((0xfff80fffU 
						& vlTOPp->rename_stage__DOT__fl_q[4U]) 
					       | (0x7f000U 
						  & vlTOPp->rename_stage__DOT__fl_n[4U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[4U] = 
	    (0x1280000U | (0xfc07ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[4U]));
	vlTOPp->rename_stage__DOT__fl_q[4U] = (0x1280000U 
					       | (0xfc07ffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[4U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[4U] = 
	    ((0xfc07ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[4U]) 
	     | (0x3f80000U & vlTOPp->rename_stage__DOT__fl_spec_n[4U]));
	vlTOPp->rename_stage__DOT__fl_q[4U] = ((0xfc07ffffU 
						& vlTOPp->rename_stage__DOT__fl_q[4U]) 
					       | (0x3f80000U 
						  & vlTOPp->rename_stage__DOT__fl_n[4U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[4U] = 
	    (0x98000000U | (0x3ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[4U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[5U] = 
	    (0xfffffffeU & vlTOPp->rename_stage__DOT__fl_spec_q[5U]);
	vlTOPp->rename_stage__DOT__fl_q[4U] = (0x98000000U 
					       | (0x3ffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[4U]));
	vlTOPp->rename_stage__DOT__fl_q[5U] = (0xfffffffeU 
					       & vlTOPp->rename_stage__DOT__fl_q[5U]);
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[4U] = 
	    ((0x3ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[4U]) 
	     | (0xfc000000U & vlTOPp->rename_stage__DOT__fl_spec_n[4U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[5U] = 
	    ((0xfffffffeU & vlTOPp->rename_stage__DOT__fl_spec_q[5U]) 
	     | (1U & vlTOPp->rename_stage__DOT__fl_spec_n[5U]));
	vlTOPp->rename_stage__DOT__fl_q[4U] = ((0x3ffffffU 
						& vlTOPp->rename_stage__DOT__fl_q[4U]) 
					       | (0xfc000000U 
						  & vlTOPp->rename_stage__DOT__fl_n[4U]));
	vlTOPp->rename_stage__DOT__fl_q[5U] = ((0xfffffffeU 
						& vlTOPp->rename_stage__DOT__fl_q[5U]) 
					       | (1U 
						  & vlTOPp->rename_stage__DOT__fl_n[5U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[5U] = 
	    (0x4eU | (0xffffff01U & vlTOPp->rename_stage__DOT__fl_spec_q[5U]));
	vlTOPp->rename_stage__DOT__fl_q[5U] = (0x4eU 
					       | (0xffffff01U 
						  & vlTOPp->rename_stage__DOT__fl_q[5U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[5U] = 
	    ((0xffffff01U & vlTOPp->rename_stage__DOT__fl_spec_q[5U]) 
	     | (0xfeU & vlTOPp->rename_stage__DOT__fl_spec_n[5U]));
	vlTOPp->rename_stage__DOT__fl_q[5U] = ((0xffffff01U 
						& vlTOPp->rename_stage__DOT__fl_q[5U]) 
					       | (0xfeU 
						  & vlTOPp->rename_stage__DOT__fl_n[5U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[5U] = 
	    (0x2800U | (0xffff80ffU & vlTOPp->rename_stage__DOT__fl_spec_q[5U]));
	vlTOPp->rename_stage__DOT__fl_q[5U] = (0x2800U 
					       | (0xffff80ffU 
						  & vlTOPp->rename_stage__DOT__fl_q[5U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[5U] = 
	    ((0xffff80ffU & vlTOPp->rename_stage__DOT__fl_spec_q[5U]) 
	     | (0x7f00U & vlTOPp->rename_stage__DOT__fl_spec_n[5U]));
	vlTOPp->rename_stage__DOT__fl_q[5U] = ((0xffff80ffU 
						& vlTOPp->rename_stage__DOT__fl_q[5U]) 
					       | (0x7f00U 
						  & vlTOPp->rename_stage__DOT__fl_n[5U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[5U] = 
	    (0x148000U | (0xffc07fffU & vlTOPp->rename_stage__DOT__fl_spec_q[5U]));
	vlTOPp->rename_stage__DOT__fl_q[5U] = (0x148000U 
					       | (0xffc07fffU 
						  & vlTOPp->rename_stage__DOT__fl_q[5U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[5U] = 
	    ((0xffc07fffU & vlTOPp->rename_stage__DOT__fl_spec_q[5U]) 
	     | (0x3f8000U & vlTOPp->rename_stage__DOT__fl_spec_n[5U]));
	vlTOPp->rename_stage__DOT__fl_q[5U] = ((0xffc07fffU 
						& vlTOPp->rename_stage__DOT__fl_q[5U]) 
					       | (0x3f8000U 
						  & vlTOPp->rename_stage__DOT__fl_n[5U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[5U] = 
	    (0xa800000U | (0xe03fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[5U]));
	vlTOPp->rename_stage__DOT__fl_q[5U] = (0xa800000U 
					       | (0xe03fffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[5U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[5U] = 
	    ((0xe03fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[5U]) 
	     | (0x1fc00000U & vlTOPp->rename_stage__DOT__fl_spec_n[5U]));
	vlTOPp->rename_stage__DOT__fl_q[5U] = ((0xe03fffffU 
						& vlTOPp->rename_stage__DOT__fl_q[5U]) 
					       | (0x1fc00000U 
						  & vlTOPp->rename_stage__DOT__fl_n[5U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[5U] = 
	    (0x60000000U | (0x1fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[5U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[6U] = 
	    (5U | (0xfffffff0U & vlTOPp->rename_stage__DOT__fl_spec_q[6U]));
	vlTOPp->rename_stage__DOT__fl_q[5U] = (0x60000000U 
					       | (0x1fffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[5U]));
	vlTOPp->rename_stage__DOT__fl_q[6U] = (5U | 
					       (0xfffffff0U 
						& vlTOPp->rename_stage__DOT__fl_q[6U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[5U] = 
	    ((0x1fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[5U]) 
	     | (0xe0000000U & vlTOPp->rename_stage__DOT__fl_spec_n[5U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[6U] = 
	    ((0xfffffff0U & vlTOPp->rename_stage__DOT__fl_spec_q[6U]) 
	     | (0xfU & vlTOPp->rename_stage__DOT__fl_spec_n[6U]));
	vlTOPp->rename_stage__DOT__fl_q[5U] = ((0x1fffffffU 
						& vlTOPp->rename_stage__DOT__fl_q[5U]) 
					       | (0xe0000000U 
						  & vlTOPp->rename_stage__DOT__fl_n[5U]));
	vlTOPp->rename_stage__DOT__fl_q[6U] = ((0xfffffff0U 
						& vlTOPp->rename_stage__DOT__fl_q[6U]) 
					       | (0xfU 
						  & vlTOPp->rename_stage__DOT__fl_n[6U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[6U] = 
	    (0x2c0U | (0xfffff80fU & vlTOPp->rename_stage__DOT__fl_spec_q[6U]));
	vlTOPp->rename_stage__DOT__fl_q[6U] = (0x2c0U 
					       | (0xfffff80fU 
						  & vlTOPp->rename_stage__DOT__fl_q[6U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[6U] = 
	    ((0xfffff80fU & vlTOPp->rename_stage__DOT__fl_spec_q[6U]) 
	     | (0x7f0U & vlTOPp->rename_stage__DOT__fl_spec_n[6U]));
	vlTOPp->rename_stage__DOT__fl_q[6U] = ((0xfffff80fU 
						& vlTOPp->rename_stage__DOT__fl_q[6U]) 
					       | (0x7f0U 
						  & vlTOPp->rename_stage__DOT__fl_n[6U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[6U] = 
	    (0x16800U | (0xfffc07ffU & vlTOPp->rename_stage__DOT__fl_spec_q[6U]));
	vlTOPp->rename_stage__DOT__fl_q[6U] = (0x16800U 
					       | (0xfffc07ffU 
						  & vlTOPp->rename_stage__DOT__fl_q[6U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[6U] = 
	    ((0xfffc07ffU & vlTOPp->rename_stage__DOT__fl_spec_q[6U]) 
	     | (0x3f800U & vlTOPp->rename_stage__DOT__fl_spec_n[6U]));
	vlTOPp->rename_stage__DOT__fl_q[6U] = ((0xfffc07ffU 
						& vlTOPp->rename_stage__DOT__fl_q[6U]) 
					       | (0x3f800U 
						  & vlTOPp->rename_stage__DOT__fl_n[6U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[6U] = 
	    (0xb80000U | (0xfe03ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[6U]));
	vlTOPp->rename_stage__DOT__fl_q[6U] = (0xb80000U 
					       | (0xfe03ffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[6U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[6U] = 
	    ((0xfe03ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[6U]) 
	     | (0x1fc0000U & vlTOPp->rename_stage__DOT__fl_spec_n[6U]));
	vlTOPp->rename_stage__DOT__fl_q[6U] = ((0xfe03ffffU 
						& vlTOPp->rename_stage__DOT__fl_q[6U]) 
					       | (0x1fc0000U 
						  & vlTOPp->rename_stage__DOT__fl_n[6U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[6U] = 
	    (0x5e000000U | (0x1ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[6U]));
	vlTOPp->rename_stage__DOT__fl_q[6U] = (0x5e000000U 
					       | (0x1ffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[6U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[6U] = 
	    ((0x1ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[6U]) 
	     | (0xfe000000U & vlTOPp->rename_stage__DOT__fl_spec_n[6U]));
	vlTOPp->rename_stage__DOT__fl_q[6U] = ((0x1ffffffU 
						& vlTOPp->rename_stage__DOT__fl_q[6U]) 
					       | (0xfe000000U 
						  & vlTOPp->rename_stage__DOT__fl_n[6U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[7U] = 
	    (0x30U | (0xffffff80U & vlTOPp->rename_stage__DOT__fl_spec_q[7U]));
	vlTOPp->rename_stage__DOT__fl_q[7U] = (0x30U 
					       | (0xffffff80U 
						  & vlTOPp->rename_stage__DOT__fl_q[7U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[7U] = 
	    ((0xffffff80U & vlTOPp->rename_stage__DOT__fl_spec_q[7U]) 
	     | (0x7fU & vlTOPp->rename_stage__DOT__fl_spec_n[7U]));
	vlTOPp->rename_stage__DOT__fl_q[7U] = ((0xffffff80U 
						& vlTOPp->rename_stage__DOT__fl_q[7U]) 
					       | (0x7fU 
						  & vlTOPp->rename_stage__DOT__fl_n[7U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[7U] = 
	    (0x1880U | (0xffffc07fU & vlTOPp->rename_stage__DOT__fl_spec_q[7U]));
	vlTOPp->rename_stage__DOT__fl_q[7U] = (0x1880U 
					       | (0xffffc07fU 
						  & vlTOPp->rename_stage__DOT__fl_q[7U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[7U] = 
	    ((0xffffc07fU & vlTOPp->rename_stage__DOT__fl_spec_q[7U]) 
	     | (0x3f80U & vlTOPp->rename_stage__DOT__fl_spec_n[7U]));
	vlTOPp->rename_stage__DOT__fl_q[7U] = ((0xffffc07fU 
						& vlTOPp->rename_stage__DOT__fl_q[7U]) 
					       | (0x3f80U 
						  & vlTOPp->rename_stage__DOT__fl_n[7U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[7U] = 
	    (0xc8000U | (0xffe03fffU & vlTOPp->rename_stage__DOT__fl_spec_q[7U]));
	vlTOPp->rename_stage__DOT__fl_q[7U] = (0xc8000U 
					       | (0xffe03fffU 
						  & vlTOPp->rename_stage__DOT__fl_q[7U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[7U] = 
	    ((0xffe03fffU & vlTOPp->rename_stage__DOT__fl_spec_q[7U]) 
	     | (0x1fc000U & vlTOPp->rename_stage__DOT__fl_spec_n[7U]));
	vlTOPp->rename_stage__DOT__fl_q[7U] = ((0xffe03fffU 
						& vlTOPp->rename_stage__DOT__fl_q[7U]) 
					       | (0x1fc000U 
						  & vlTOPp->rename_stage__DOT__fl_n[7U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[7U] = 
	    (0x6600000U | (0xf01fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[7U]));
	vlTOPp->rename_stage__DOT__fl_q[7U] = (0x6600000U 
					       | (0xf01fffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[7U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[7U] = 
	    ((0xf01fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[7U]) 
	     | (0xfe00000U & vlTOPp->rename_stage__DOT__fl_spec_n[7U]));
	vlTOPp->rename_stage__DOT__fl_q[7U] = ((0xf01fffffU 
						& vlTOPp->rename_stage__DOT__fl_q[7U]) 
					       | (0xfe00000U 
						  & vlTOPp->rename_stage__DOT__fl_n[7U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[7U] = 
	    (0x40000000U | (0xfffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[7U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[8U] = 
	    (3U | (0xfffffff8U & vlTOPp->rename_stage__DOT__fl_spec_q[8U]));
	vlTOPp->rename_stage__DOT__fl_q[7U] = (0x40000000U 
					       | (0xfffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[7U]));
	vlTOPp->rename_stage__DOT__fl_q[8U] = (3U | 
					       (0xfffffff8U 
						& vlTOPp->rename_stage__DOT__fl_q[8U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[7U] = 
	    ((0xfffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[7U]) 
	     | (0xf0000000U & vlTOPp->rename_stage__DOT__fl_spec_n[7U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[8U] = 
	    ((0xfffffff8U & vlTOPp->rename_stage__DOT__fl_spec_q[8U]) 
	     | (7U & vlTOPp->rename_stage__DOT__fl_spec_n[8U]));
	vlTOPp->rename_stage__DOT__fl_q[7U] = ((0xfffffffU 
						& vlTOPp->rename_stage__DOT__fl_q[7U]) 
					       | (0xf0000000U 
						  & vlTOPp->rename_stage__DOT__fl_n[7U]));
	vlTOPp->rename_stage__DOT__fl_q[8U] = ((0xfffffff8U 
						& vlTOPp->rename_stage__DOT__fl_q[8U]) 
					       | (7U 
						  & vlTOPp->rename_stage__DOT__fl_n[8U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[8U] = 
	    (0x1a8U | (0xfffffc07U & vlTOPp->rename_stage__DOT__fl_spec_q[8U]));
	vlTOPp->rename_stage__DOT__fl_q[8U] = (0x1a8U 
					       | (0xfffffc07U 
						  & vlTOPp->rename_stage__DOT__fl_q[8U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[8U] = 
	    ((0xfffffc07U & vlTOPp->rename_stage__DOT__fl_spec_q[8U]) 
	     | (0x3f8U & vlTOPp->rename_stage__DOT__fl_spec_n[8U]));
	vlTOPp->rename_stage__DOT__fl_q[8U] = ((0xfffffc07U 
						& vlTOPp->rename_stage__DOT__fl_q[8U]) 
					       | (0x3f8U 
						  & vlTOPp->rename_stage__DOT__fl_n[8U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[8U] = 
	    (0xd800U | (0xfffe03ffU & vlTOPp->rename_stage__DOT__fl_spec_q[8U]));
	vlTOPp->rename_stage__DOT__fl_q[8U] = (0xd800U 
					       | (0xfffe03ffU 
						  & vlTOPp->rename_stage__DOT__fl_q[8U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[8U] = 
	    ((0xfffe03ffU & vlTOPp->rename_stage__DOT__fl_spec_q[8U]) 
	     | (0x1fc00U & vlTOPp->rename_stage__DOT__fl_spec_n[8U]));
	vlTOPp->rename_stage__DOT__fl_q[8U] = ((0xfffe03ffU 
						& vlTOPp->rename_stage__DOT__fl_q[8U]) 
					       | (0x1fc00U 
						  & vlTOPp->rename_stage__DOT__fl_n[8U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[8U] = 
	    (0x6e0000U | (0xff01ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[8U]));
	vlTOPp->rename_stage__DOT__fl_q[8U] = (0x6e0000U 
					       | (0xff01ffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[8U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[8U] = 
	    ((0xff01ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[8U]) 
	     | (0xfe0000U & vlTOPp->rename_stage__DOT__fl_spec_n[8U]));
	vlTOPp->rename_stage__DOT__fl_q[8U] = ((0xff01ffffU 
						& vlTOPp->rename_stage__DOT__fl_q[8U]) 
					       | (0xfe0000U 
						  & vlTOPp->rename_stage__DOT__fl_n[8U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[8U] = 
	    (0x38000000U | (0x80ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[8U]));
	vlTOPp->rename_stage__DOT__fl_q[8U] = (0x38000000U 
					       | (0x80ffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[8U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[8U] = 
	    ((0x80ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[8U]) 
	     | (0x7f000000U & vlTOPp->rename_stage__DOT__fl_spec_n[8U]));
	vlTOPp->rename_stage__DOT__fl_q[8U] = ((0x80ffffffU 
						& vlTOPp->rename_stage__DOT__fl_q[8U]) 
					       | (0x7f000000U 
						  & vlTOPp->rename_stage__DOT__fl_n[8U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[8U] = 
	    (0x80000000U | (0x7fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[8U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[9U] = 
	    (0x1cU | (0xffffffc0U & vlTOPp->rename_stage__DOT__fl_spec_q[9U]));
	vlTOPp->rename_stage__DOT__fl_q[8U] = (0x80000000U 
					       | (0x7fffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[8U]));
	vlTOPp->rename_stage__DOT__fl_q[9U] = (0x1cU 
					       | (0xffffffc0U 
						  & vlTOPp->rename_stage__DOT__fl_q[9U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[8U] = 
	    ((0x7fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[8U]) 
	     | (0x80000000U & vlTOPp->rename_stage__DOT__fl_spec_n[8U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[9U] = 
	    ((0xffffffc0U & vlTOPp->rename_stage__DOT__fl_spec_q[9U]) 
	     | (0x3fU & vlTOPp->rename_stage__DOT__fl_spec_n[9U]));
	vlTOPp->rename_stage__DOT__fl_q[8U] = ((0x7fffffffU 
						& vlTOPp->rename_stage__DOT__fl_q[8U]) 
					       | (0x80000000U 
						  & vlTOPp->rename_stage__DOT__fl_n[8U]));
	vlTOPp->rename_stage__DOT__fl_q[9U] = ((0xffffffc0U 
						& vlTOPp->rename_stage__DOT__fl_q[9U]) 
					       | (0x3fU 
						  & vlTOPp->rename_stage__DOT__fl_n[9U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[9U] = 
	    (0xe80U | (0xffffe03fU & vlTOPp->rename_stage__DOT__fl_spec_q[9U]));
	vlTOPp->rename_stage__DOT__fl_q[9U] = (0xe80U 
					       | (0xffffe03fU 
						  & vlTOPp->rename_stage__DOT__fl_q[9U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[9U] = 
	    ((0xffffe03fU & vlTOPp->rename_stage__DOT__fl_spec_q[9U]) 
	     | (0x1fc0U & vlTOPp->rename_stage__DOT__fl_spec_n[9U]));
	vlTOPp->rename_stage__DOT__fl_q[9U] = ((0xffffe03fU 
						& vlTOPp->rename_stage__DOT__fl_q[9U]) 
					       | (0x1fc0U 
						  & vlTOPp->rename_stage__DOT__fl_n[9U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[9U] = 
	    (0x76000U | (0xfff01fffU & vlTOPp->rename_stage__DOT__fl_spec_q[9U]));
	vlTOPp->rename_stage__DOT__fl_q[9U] = (0x76000U 
					       | (0xfff01fffU 
						  & vlTOPp->rename_stage__DOT__fl_q[9U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[9U] = 
	    ((0xfff01fffU & vlTOPp->rename_stage__DOT__fl_spec_q[9U]) 
	     | (0xfe000U & vlTOPp->rename_stage__DOT__fl_spec_n[9U]));
	vlTOPp->rename_stage__DOT__fl_q[9U] = ((0xfff01fffU 
						& vlTOPp->rename_stage__DOT__fl_q[9U]) 
					       | (0xfe000U 
						  & vlTOPp->rename_stage__DOT__fl_n[9U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[9U] = 
	    (0x3c00000U | (0xf80fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[9U]));
	vlTOPp->rename_stage__DOT__fl_q[9U] = (0x3c00000U 
					       | (0xf80fffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[9U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[9U] = 
	    ((0xf80fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[9U]) 
	     | (0x7f00000U & vlTOPp->rename_stage__DOT__fl_spec_n[9U]));
	vlTOPp->rename_stage__DOT__fl_q[9U] = ((0xf80fffffU 
						& vlTOPp->rename_stage__DOT__fl_q[9U]) 
					       | (0x7f00000U 
						  & vlTOPp->rename_stage__DOT__fl_n[9U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[9U] = 
	    (0xe8000000U | (0x7ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[9U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0xaU] 
	    = (1U | (0xfffffffcU & vlTOPp->rename_stage__DOT__fl_spec_q[0xaU]));
	vlTOPp->rename_stage__DOT__fl_q[9U] = (0xe8000000U 
					       | (0x7ffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[9U]));
	vlTOPp->rename_stage__DOT__fl_q[0xaU] = (1U 
						 | (0xfffffffcU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xaU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[9U] = 
	    ((0x7ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[9U]) 
	     | (0xf8000000U & vlTOPp->rename_stage__DOT__fl_spec_n[9U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0xaU] 
	    = ((0xfffffffcU & vlTOPp->rename_stage__DOT__fl_spec_q[0xaU]) 
	       | (3U & vlTOPp->rename_stage__DOT__fl_spec_n[0xaU]));
	vlTOPp->rename_stage__DOT__fl_q[9U] = ((0x7ffffffU 
						& vlTOPp->rename_stage__DOT__fl_q[9U]) 
					       | (0xf8000000U 
						  & vlTOPp->rename_stage__DOT__fl_n[9U]));
	vlTOPp->rename_stage__DOT__fl_q[0xaU] = ((0xfffffffcU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xaU]) 
						 | (3U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xaU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xaU] 
	    = (0xf8U | (0xfffffe03U & vlTOPp->rename_stage__DOT__fl_spec_q[0xaU]));
	vlTOPp->rename_stage__DOT__fl_q[0xaU] = (0xf8U 
						 | (0xfffffe03U 
						    & vlTOPp->rename_stage__DOT__fl_q[0xaU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xaU] 
	    = ((0xfffffe03U & vlTOPp->rename_stage__DOT__fl_spec_q[0xaU]) 
	       | (0x1fcU & vlTOPp->rename_stage__DOT__fl_spec_n[0xaU]));
	vlTOPp->rename_stage__DOT__fl_q[0xaU] = ((0xfffffe03U 
						  & vlTOPp->rename_stage__DOT__fl_q[0xaU]) 
						 | (0x1fcU 
						    & vlTOPp->rename_stage__DOT__fl_n[0xaU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xaU] 
	    = (0x7e00U | (0xffff01ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xaU]));
	vlTOPp->rename_stage__DOT__fl_q[0xaU] = (0x7e00U 
						 | (0xffff01ffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xaU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xaU] 
	    = ((0xffff01ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xaU]) 
	       | (0xfe00U & vlTOPp->rename_stage__DOT__fl_spec_n[0xaU]));
	vlTOPp->rename_stage__DOT__fl_q[0xaU] = ((0xffff01ffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xaU]) 
						 | (0xfe00U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xaU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xaU] 
	    = (0x400000U | (0xff80ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xaU]));
	vlTOPp->rename_stage__DOT__fl_q[0xaU] = (0x400000U 
						 | (0xff80ffffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xaU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xaU] 
	    = ((0xff80ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xaU]) 
	       | (0x7f0000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xaU]));
	vlTOPp->rename_stage__DOT__fl_q[0xaU] = ((0xff80ffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xaU]) 
						 | (0x7f0000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xaU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xaU] 
	    = (0x20800000U | (0xc07fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xaU]));
	vlTOPp->rename_stage__DOT__fl_q[0xaU] = (0x20800000U 
						 | (0xc07fffffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xaU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xaU] 
	    = ((0xc07fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xaU]) 
	       | (0x3f800000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xaU]));
	vlTOPp->rename_stage__DOT__fl_q[0xaU] = ((0xc07fffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xaU]) 
						 | (0x3f800000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xaU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xaU] 
	    = (0x80000000U | (0x3fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xaU]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0xbU] 
	    = (0x10U | (0xffffffe0U & vlTOPp->rename_stage__DOT__fl_spec_q[0xbU]));
	vlTOPp->rename_stage__DOT__fl_q[0xaU] = (0x80000000U 
						 | (0x3fffffffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xaU]));
	vlTOPp->rename_stage__DOT__fl_q[0xbU] = (0x10U 
						 | (0xffffffe0U 
						    & vlTOPp->rename_stage__DOT__fl_q[0xbU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xaU] 
	    = ((0x3fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xaU]) 
	       | (0xc0000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xaU]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0xbU] 
	    = ((0xffffffe0U & vlTOPp->rename_stage__DOT__fl_spec_q[0xbU]) 
	       | (0x1fU & vlTOPp->rename_stage__DOT__fl_spec_n[0xbU]));
	vlTOPp->rename_stage__DOT__fl_q[0xaU] = ((0x3fffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xaU]) 
						 | (0xc0000000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xaU]));
	vlTOPp->rename_stage__DOT__fl_q[0xbU] = ((0xffffffe0U 
						  & vlTOPp->rename_stage__DOT__fl_q[0xbU]) 
						 | (0x1fU 
						    & vlTOPp->rename_stage__DOT__fl_n[0xbU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xbU] 
	    = (0x860U | (0xfffff01fU & vlTOPp->rename_stage__DOT__fl_spec_q[0xbU]));
	vlTOPp->rename_stage__DOT__fl_q[0xbU] = (0x860U 
						 | (0xfffff01fU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xbU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xbU] 
	    = ((0xfffff01fU & vlTOPp->rename_stage__DOT__fl_spec_q[0xbU]) 
	       | (0xfe0U & vlTOPp->rename_stage__DOT__fl_spec_n[0xbU]));
	vlTOPp->rename_stage__DOT__fl_q[0xbU] = ((0xfffff01fU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xbU]) 
						 | (0xfe0U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xbU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xbU] 
	    = (0x44000U | (0xfff80fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xbU]));
	vlTOPp->rename_stage__DOT__fl_q[0xbU] = (0x44000U 
						 | (0xfff80fffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xbU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xbU] 
	    = ((0xfff80fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xbU]) 
	       | (0x7f000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xbU]));
	vlTOPp->rename_stage__DOT__fl_q[0xbU] = ((0xfff80fffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xbU]) 
						 | (0x7f000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xbU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xbU] 
	    = (0x2280000U | (0xfc07ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xbU]));
	vlTOPp->rename_stage__DOT__fl_q[0xbU] = (0x2280000U 
						 | (0xfc07ffffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xbU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xbU] 
	    = ((0xfc07ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xbU]) 
	       | (0x3f80000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xbU]));
	vlTOPp->rename_stage__DOT__fl_q[0xbU] = ((0xfc07ffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xbU]) 
						 | (0x3f80000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xbU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xbU] 
	    = (0x18000000U | (0x3ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xbU]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0xcU] 
	    = (1U | (0xfffffffeU & vlTOPp->rename_stage__DOT__fl_spec_q[0xcU]));
	vlTOPp->rename_stage__DOT__fl_q[0xbU] = (0x18000000U 
						 | (0x3ffffffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xbU]));
	vlTOPp->rename_stage__DOT__fl_q[0xcU] = (1U 
						 | (0xfffffffeU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xcU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xbU] 
	    = ((0x3ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xbU]) 
	       | (0xfc000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xbU]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0xcU] 
	    = ((0xfffffffeU & vlTOPp->rename_stage__DOT__fl_spec_q[0xcU]) 
	       | (1U & vlTOPp->rename_stage__DOT__fl_spec_n[0xcU]));
	vlTOPp->rename_stage__DOT__fl_q[0xbU] = ((0x3ffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xbU]) 
						 | (0xfc000000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xbU]));
	vlTOPp->rename_stage__DOT__fl_q[0xcU] = ((0xfffffffeU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xcU]) 
						 | (1U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xcU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xcU] 
	    = (0x8eU | (0xffffff01U & vlTOPp->rename_stage__DOT__fl_spec_q[0xcU]));
	vlTOPp->rename_stage__DOT__fl_q[0xcU] = (0x8eU 
						 | (0xffffff01U 
						    & vlTOPp->rename_stage__DOT__fl_q[0xcU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xcU] 
	    = ((0xffffff01U & vlTOPp->rename_stage__DOT__fl_spec_q[0xcU]) 
	       | (0xfeU & vlTOPp->rename_stage__DOT__fl_spec_n[0xcU]));
	vlTOPp->rename_stage__DOT__fl_q[0xcU] = ((0xffffff01U 
						  & vlTOPp->rename_stage__DOT__fl_q[0xcU]) 
						 | (0xfeU 
						    & vlTOPp->rename_stage__DOT__fl_n[0xcU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xcU] 
	    = (0x4800U | (0xffff80ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xcU]));
	vlTOPp->rename_stage__DOT__fl_q[0xcU] = (0x4800U 
						 | (0xffff80ffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xcU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xcU] 
	    = ((0xffff80ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xcU]) 
	       | (0x7f00U & vlTOPp->rename_stage__DOT__fl_spec_n[0xcU]));
	vlTOPp->rename_stage__DOT__fl_q[0xcU] = ((0xffff80ffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xcU]) 
						 | (0x7f00U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xcU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xcU] 
	    = (0x248000U | (0xffc07fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xcU]));
	vlTOPp->rename_stage__DOT__fl_q[0xcU] = (0x248000U 
						 | (0xffc07fffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xcU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xcU] 
	    = ((0xffc07fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xcU]) 
	       | (0x3f8000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xcU]));
	vlTOPp->rename_stage__DOT__fl_q[0xcU] = ((0xffc07fffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xcU]) 
						 | (0x3f8000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xcU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xcU] 
	    = (0x12800000U | (0xe03fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xcU]));
	vlTOPp->rename_stage__DOT__fl_q[0xcU] = (0x12800000U 
						 | (0xe03fffffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xcU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xcU] 
	    = ((0xe03fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xcU]) 
	       | (0x1fc00000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xcU]));
	vlTOPp->rename_stage__DOT__fl_q[0xcU] = ((0xe03fffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xcU]) 
						 | (0x1fc00000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xcU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xcU] 
	    = (0x60000000U | (0x1fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xcU]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0xdU] 
	    = (9U | (0xfffffff0U & vlTOPp->rename_stage__DOT__fl_spec_q[0xdU]));
	vlTOPp->rename_stage__DOT__fl_q[0xcU] = (0x60000000U 
						 | (0x1fffffffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xcU]));
	vlTOPp->rename_stage__DOT__fl_q[0xdU] = (9U 
						 | (0xfffffff0U 
						    & vlTOPp->rename_stage__DOT__fl_q[0xdU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xcU] 
	    = ((0x1fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xcU]) 
	       | (0xe0000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xcU]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0xdU] 
	    = ((0xfffffff0U & vlTOPp->rename_stage__DOT__fl_spec_q[0xdU]) 
	       | (0xfU & vlTOPp->rename_stage__DOT__fl_spec_n[0xdU]));
	vlTOPp->rename_stage__DOT__fl_q[0xcU] = ((0x1fffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xcU]) 
						 | (0xe0000000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xcU]));
	vlTOPp->rename_stage__DOT__fl_q[0xdU] = ((0xfffffff0U 
						  & vlTOPp->rename_stage__DOT__fl_q[0xdU]) 
						 | (0xfU 
						    & vlTOPp->rename_stage__DOT__fl_n[0xdU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xdU] 
	    = (0x4c0U | (0xfffff80fU & vlTOPp->rename_stage__DOT__fl_spec_q[0xdU]));
	vlTOPp->rename_stage__DOT__fl_q[0xdU] = (0x4c0U 
						 | (0xfffff80fU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xdU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xdU] 
	    = ((0xfffff80fU & vlTOPp->rename_stage__DOT__fl_spec_q[0xdU]) 
	       | (0x7f0U & vlTOPp->rename_stage__DOT__fl_spec_n[0xdU]));
	vlTOPp->rename_stage__DOT__fl_q[0xdU] = ((0xfffff80fU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xdU]) 
						 | (0x7f0U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xdU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xdU] 
	    = (0x26800U | (0xfffc07ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xdU]));
	vlTOPp->rename_stage__DOT__fl_q[0xdU] = (0x26800U 
						 | (0xfffc07ffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xdU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xdU] 
	    = ((0xfffc07ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xdU]) 
	       | (0x3f800U & vlTOPp->rename_stage__DOT__fl_spec_n[0xdU]));
	vlTOPp->rename_stage__DOT__fl_q[0xdU] = ((0xfffc07ffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xdU]) 
						 | (0x3f800U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xdU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xdU] 
	    = (0x1380000U | (0xfe03ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xdU]));
	vlTOPp->rename_stage__DOT__fl_q[0xdU] = (0x1380000U 
						 | (0xfe03ffffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xdU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xdU] 
	    = ((0xfe03ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xdU]) 
	       | (0x1fc0000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xdU]));
	vlTOPp->rename_stage__DOT__fl_q[0xdU] = ((0xfe03ffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xdU]) 
						 | (0x1fc0000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xdU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xdU] 
	    = (0x9e000000U | (0x1ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xdU]));
	vlTOPp->rename_stage__DOT__fl_q[0xdU] = (0x9e000000U 
						 | (0x1ffffffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xdU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xdU] 
	    = ((0x1ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xdU]) 
	       | (0xfe000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xdU]));
	vlTOPp->rename_stage__DOT__fl_q[0xdU] = ((0x1ffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xdU]) 
						 | (0xfe000000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xdU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xeU] 
	    = (0x50U | (0xffffff80U & vlTOPp->rename_stage__DOT__fl_spec_q[0xeU]));
	vlTOPp->rename_stage__DOT__fl_q[0xeU] = (0x50U 
						 | (0xffffff80U 
						    & vlTOPp->rename_stage__DOT__fl_q[0xeU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xeU] 
	    = ((0xffffff80U & vlTOPp->rename_stage__DOT__fl_spec_q[0xeU]) 
	       | (0x7fU & vlTOPp->rename_stage__DOT__fl_spec_n[0xeU]));
	vlTOPp->rename_stage__DOT__fl_q[0xeU] = ((0xffffff80U 
						  & vlTOPp->rename_stage__DOT__fl_q[0xeU]) 
						 | (0x7fU 
						    & vlTOPp->rename_stage__DOT__fl_n[0xeU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xeU] 
	    = (0x2880U | (0xffffc07fU & vlTOPp->rename_stage__DOT__fl_spec_q[0xeU]));
	vlTOPp->rename_stage__DOT__fl_q[0xeU] = (0x2880U 
						 | (0xffffc07fU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xeU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xeU] 
	    = ((0xffffc07fU & vlTOPp->rename_stage__DOT__fl_spec_q[0xeU]) 
	       | (0x3f80U & vlTOPp->rename_stage__DOT__fl_spec_n[0xeU]));
	vlTOPp->rename_stage__DOT__fl_q[0xeU] = ((0xffffc07fU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xeU]) 
						 | (0x3f80U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xeU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xeU] 
	    = (0x148000U | (0xffe03fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xeU]));
	vlTOPp->rename_stage__DOT__fl_q[0xeU] = (0x148000U 
						 | (0xffe03fffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xeU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xeU] 
	    = ((0xffe03fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xeU]) 
	       | (0x1fc000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xeU]));
	vlTOPp->rename_stage__DOT__fl_q[0xeU] = ((0xffe03fffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xeU]) 
						 | (0x1fc000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xeU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xeU] 
	    = (0xa600000U | (0xf01fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xeU]));
	vlTOPp->rename_stage__DOT__fl_q[0xeU] = (0xa600000U 
						 | (0xf01fffffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xeU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xeU] 
	    = ((0xf01fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xeU]) 
	       | (0xfe00000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xeU]));
	vlTOPp->rename_stage__DOT__fl_q[0xeU] = ((0xf01fffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xeU]) 
						 | (0xfe00000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xeU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xeU] 
	    = (0x40000000U | (0xfffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xeU]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0xfU] 
	    = (5U | (0xfffffff8U & vlTOPp->rename_stage__DOT__fl_spec_q[0xfU]));
	vlTOPp->rename_stage__DOT__fl_q[0xeU] = (0x40000000U 
						 | (0xfffffffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xeU]));
	vlTOPp->rename_stage__DOT__fl_q[0xfU] = (5U 
						 | (0xfffffff8U 
						    & vlTOPp->rename_stage__DOT__fl_q[0xfU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xeU] 
	    = ((0xfffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xeU]) 
	       | (0xf0000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xeU]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0xfU] 
	    = ((0xfffffff8U & vlTOPp->rename_stage__DOT__fl_spec_q[0xfU]) 
	       | (7U & vlTOPp->rename_stage__DOT__fl_spec_n[0xfU]));
	vlTOPp->rename_stage__DOT__fl_q[0xeU] = ((0xfffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xeU]) 
						 | (0xf0000000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xeU]));
	vlTOPp->rename_stage__DOT__fl_q[0xfU] = ((0xfffffff8U 
						  & vlTOPp->rename_stage__DOT__fl_q[0xfU]) 
						 | (7U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xfU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xfU] 
	    = (0x2a8U | (0xfffffc07U & vlTOPp->rename_stage__DOT__fl_spec_q[0xfU]));
	vlTOPp->rename_stage__DOT__fl_q[0xfU] = (0x2a8U 
						 | (0xfffffc07U 
						    & vlTOPp->rename_stage__DOT__fl_q[0xfU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xfU] 
	    = ((0xfffffc07U & vlTOPp->rename_stage__DOT__fl_spec_q[0xfU]) 
	       | (0x3f8U & vlTOPp->rename_stage__DOT__fl_spec_n[0xfU]));
	vlTOPp->rename_stage__DOT__fl_q[0xfU] = ((0xfffffc07U 
						  & vlTOPp->rename_stage__DOT__fl_q[0xfU]) 
						 | (0x3f8U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xfU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xfU] 
	    = (0x15800U | (0xfffe03ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xfU]));
	vlTOPp->rename_stage__DOT__fl_q[0xfU] = (0x15800U 
						 | (0xfffe03ffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xfU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xfU] 
	    = ((0xfffe03ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xfU]) 
	       | (0x1fc00U & vlTOPp->rename_stage__DOT__fl_spec_n[0xfU]));
	vlTOPp->rename_stage__DOT__fl_q[0xfU] = ((0xfffe03ffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xfU]) 
						 | (0x1fc00U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xfU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xfU] 
	    = (0xae0000U | (0xff01ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xfU]));
	vlTOPp->rename_stage__DOT__fl_q[0xfU] = (0xae0000U 
						 | (0xff01ffffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xfU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xfU] 
	    = ((0xff01ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xfU]) 
	       | (0xfe0000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xfU]));
	vlTOPp->rename_stage__DOT__fl_q[0xfU] = ((0xff01ffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xfU]) 
						 | (0xfe0000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xfU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xfU] 
	    = (0x58000000U | (0x80ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xfU]));
	vlTOPp->rename_stage__DOT__fl_q[0xfU] = (0x58000000U 
						 | (0x80ffffffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xfU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xfU] 
	    = ((0x80ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xfU]) 
	       | (0x7f000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xfU]));
	vlTOPp->rename_stage__DOT__fl_q[0xfU] = ((0x80ffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xfU]) 
						 | (0x7f000000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xfU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xfU] 
	    = (0x80000000U | (0x7fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xfU]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x10U] 
	    = (0x2cU | (0xffffffc0U & vlTOPp->rename_stage__DOT__fl_spec_q[0x10U]));
	vlTOPp->rename_stage__DOT__fl_q[0xfU] = (0x80000000U 
						 | (0x7fffffffU 
						    & vlTOPp->rename_stage__DOT__fl_q[0xfU]));
	vlTOPp->rename_stage__DOT__fl_q[0x10U] = (0x2cU 
						  | (0xffffffc0U 
						     & vlTOPp->rename_stage__DOT__fl_q[0x10U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0xfU] 
	    = ((0x7fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0xfU]) 
	       | (0x80000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0xfU]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x10U] 
	    = ((0xffffffc0U & vlTOPp->rename_stage__DOT__fl_spec_q[0x10U]) 
	       | (0x3fU & vlTOPp->rename_stage__DOT__fl_spec_n[0x10U]));
	vlTOPp->rename_stage__DOT__fl_q[0xfU] = ((0x7fffffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0xfU]) 
						 | (0x80000000U 
						    & vlTOPp->rename_stage__DOT__fl_n[0xfU]));
	vlTOPp->rename_stage__DOT__fl_q[0x10U] = ((0xffffffc0U 
						   & vlTOPp->rename_stage__DOT__fl_q[0x10U]) 
						  | (0x3fU 
						     & vlTOPp->rename_stage__DOT__fl_n[0x10U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x10U] 
	    = (0x1680U | (0xffffe03fU & vlTOPp->rename_stage__DOT__fl_spec_q[0x10U]));
	vlTOPp->rename_stage__DOT__fl_q[0x10U] = (0x1680U 
						  | (0xffffe03fU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x10U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x10U] 
	    = ((0xffffe03fU & vlTOPp->rename_stage__DOT__fl_spec_q[0x10U]) 
	       | (0x1fc0U & vlTOPp->rename_stage__DOT__fl_spec_n[0x10U]));
	vlTOPp->rename_stage__DOT__fl_q[0x10U] = ((0xffffe03fU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x10U]) 
						  | (0x1fc0U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x10U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x10U] 
	    = (0xb6000U | (0xfff01fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x10U]));
	vlTOPp->rename_stage__DOT__fl_q[0x10U] = (0xb6000U 
						  | (0xfff01fffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x10U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x10U] 
	    = ((0xfff01fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x10U]) 
	       | (0xfe000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x10U]));
	vlTOPp->rename_stage__DOT__fl_q[0x10U] = ((0xfff01fffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x10U]) 
						  | (0xfe000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x10U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x10U] 
	    = (0x5c00000U | (0xf80fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x10U]));
	vlTOPp->rename_stage__DOT__fl_q[0x10U] = (0x5c00000U 
						  | (0xf80fffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x10U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x10U] 
	    = ((0xf80fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x10U]) 
	       | (0x7f00000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x10U]));
	vlTOPp->rename_stage__DOT__fl_q[0x10U] = ((0xf80fffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x10U]) 
						  | (0x7f00000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x10U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x10U] 
	    = (0xe8000000U | (0x7ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x10U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x11U] 
	    = (2U | (0xfffffffcU & vlTOPp->rename_stage__DOT__fl_spec_q[0x11U]));
	vlTOPp->rename_stage__DOT__fl_q[0x10U] = (0xe8000000U 
						  | (0x7ffffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x10U]));
	vlTOPp->rename_stage__DOT__fl_q[0x11U] = (2U 
						  | (0xfffffffcU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x11U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x10U] 
	    = ((0x7ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x10U]) 
	       | (0xf8000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x10U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x11U] 
	    = ((0xfffffffcU & vlTOPp->rename_stage__DOT__fl_spec_q[0x11U]) 
	       | (3U & vlTOPp->rename_stage__DOT__fl_spec_n[0x11U]));
	vlTOPp->rename_stage__DOT__fl_q[0x10U] = ((0x7ffffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x10U]) 
						  | (0xf8000000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x10U]));
	vlTOPp->rename_stage__DOT__fl_q[0x11U] = ((0xfffffffcU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x11U]) 
						  | (3U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x11U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x11U] 
	    = (0x178U | (0xfffffe03U & vlTOPp->rename_stage__DOT__fl_spec_q[0x11U]));
	vlTOPp->rename_stage__DOT__fl_q[0x11U] = (0x178U 
						  | (0xfffffe03U 
						     & vlTOPp->rename_stage__DOT__fl_q[0x11U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x11U] 
	    = ((0xfffffe03U & vlTOPp->rename_stage__DOT__fl_spec_q[0x11U]) 
	       | (0x1fcU & vlTOPp->rename_stage__DOT__fl_spec_n[0x11U]));
	vlTOPp->rename_stage__DOT__fl_q[0x11U] = ((0xfffffe03U 
						   & vlTOPp->rename_stage__DOT__fl_q[0x11U]) 
						  | (0x1fcU 
						     & vlTOPp->rename_stage__DOT__fl_n[0x11U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x11U] 
	    = (0xbe00U | (0xffff01ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x11U]));
	vlTOPp->rename_stage__DOT__fl_q[0x11U] = (0xbe00U 
						  | (0xffff01ffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x11U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x11U] 
	    = ((0xffff01ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x11U]) 
	       | (0xfe00U & vlTOPp->rename_stage__DOT__fl_spec_n[0x11U]));
	vlTOPp->rename_stage__DOT__fl_q[0x11U] = ((0xffff01ffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x11U]) 
						  | (0xfe00U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x11U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x11U] 
	    = (0x600000U | (0xff80ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x11U]));
	vlTOPp->rename_stage__DOT__fl_q[0x11U] = (0x600000U 
						  | (0xff80ffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x11U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x11U] 
	    = ((0xff80ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x11U]) 
	       | (0x7f0000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x11U]));
	vlTOPp->rename_stage__DOT__fl_q[0x11U] = ((0xff80ffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x11U]) 
						  | (0x7f0000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x11U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x11U] 
	    = (0x30800000U | (0xc07fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x11U]));
	vlTOPp->rename_stage__DOT__fl_q[0x11U] = (0x30800000U 
						  | (0xc07fffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x11U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x11U] 
	    = ((0xc07fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x11U]) 
	       | (0x3f800000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x11U]));
	vlTOPp->rename_stage__DOT__fl_q[0x11U] = ((0xc07fffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x11U]) 
						  | (0x3f800000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x11U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x11U] 
	    = (0x80000000U | (0x3fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x11U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x12U] 
	    = (0x18U | (0xffffffe0U & vlTOPp->rename_stage__DOT__fl_spec_q[0x12U]));
	vlTOPp->rename_stage__DOT__fl_q[0x11U] = (0x80000000U 
						  | (0x3fffffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x11U]));
	vlTOPp->rename_stage__DOT__fl_q[0x12U] = (0x18U 
						  | (0xffffffe0U 
						     & vlTOPp->rename_stage__DOT__fl_q[0x12U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x11U] 
	    = ((0x3fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x11U]) 
	       | (0xc0000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x11U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x12U] 
	    = ((0xffffffe0U & vlTOPp->rename_stage__DOT__fl_spec_q[0x12U]) 
	       | (0x1fU & vlTOPp->rename_stage__DOT__fl_spec_n[0x12U]));
	vlTOPp->rename_stage__DOT__fl_q[0x11U] = ((0x3fffffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x11U]) 
						  | (0xc0000000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x11U]));
	vlTOPp->rename_stage__DOT__fl_q[0x12U] = ((0xffffffe0U 
						   & vlTOPp->rename_stage__DOT__fl_q[0x12U]) 
						  | (0x1fU 
						     & vlTOPp->rename_stage__DOT__fl_n[0x12U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x12U] 
	    = (0xc60U | (0xfffff01fU & vlTOPp->rename_stage__DOT__fl_spec_q[0x12U]));
	vlTOPp->rename_stage__DOT__fl_q[0x12U] = (0xc60U 
						  | (0xfffff01fU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x12U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x12U] 
	    = ((0xfffff01fU & vlTOPp->rename_stage__DOT__fl_spec_q[0x12U]) 
	       | (0xfe0U & vlTOPp->rename_stage__DOT__fl_spec_n[0x12U]));
	vlTOPp->rename_stage__DOT__fl_q[0x12U] = ((0xfffff01fU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x12U]) 
						  | (0xfe0U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x12U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x12U] 
	    = (0x64000U | (0xfff80fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x12U]));
	vlTOPp->rename_stage__DOT__fl_q[0x12U] = (0x64000U 
						  | (0xfff80fffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x12U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x12U] 
	    = ((0xfff80fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x12U]) 
	       | (0x7f000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x12U]));
	vlTOPp->rename_stage__DOT__fl_q[0x12U] = ((0xfff80fffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x12U]) 
						  | (0x7f000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x12U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x12U] 
	    = (0x3280000U | (0xfc07ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x12U]));
	vlTOPp->rename_stage__DOT__fl_q[0x12U] = (0x3280000U 
						  | (0xfc07ffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x12U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x12U] 
	    = ((0xfc07ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x12U]) 
	       | (0x3f80000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x12U]));
	vlTOPp->rename_stage__DOT__fl_q[0x12U] = ((0xfc07ffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x12U]) 
						  | (0x3f80000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x12U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x12U] 
	    = (0x98000000U | (0x3ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x12U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x13U] 
	    = (1U | (0xfffffffeU & vlTOPp->rename_stage__DOT__fl_spec_q[0x13U]));
	vlTOPp->rename_stage__DOT__fl_q[0x12U] = (0x98000000U 
						  | (0x3ffffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x12U]));
	vlTOPp->rename_stage__DOT__fl_q[0x13U] = (1U 
						  | (0xfffffffeU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x13U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x12U] 
	    = ((0x3ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x12U]) 
	       | (0xfc000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x12U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x13U] 
	    = ((0xfffffffeU & vlTOPp->rename_stage__DOT__fl_spec_q[0x13U]) 
	       | (1U & vlTOPp->rename_stage__DOT__fl_spec_n[0x13U]));
	vlTOPp->rename_stage__DOT__fl_q[0x12U] = ((0x3ffffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x12U]) 
						  | (0xfc000000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x12U]));
	vlTOPp->rename_stage__DOT__fl_q[0x13U] = ((0xfffffffeU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x13U]) 
						  | (1U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x13U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x13U] 
	    = (0xceU | (0xffffff01U & vlTOPp->rename_stage__DOT__fl_spec_q[0x13U]));
	vlTOPp->rename_stage__DOT__fl_q[0x13U] = (0xceU 
						  | (0xffffff01U 
						     & vlTOPp->rename_stage__DOT__fl_q[0x13U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x13U] 
	    = ((0xffffff01U & vlTOPp->rename_stage__DOT__fl_spec_q[0x13U]) 
	       | (0xfeU & vlTOPp->rename_stage__DOT__fl_spec_n[0x13U]));
	vlTOPp->rename_stage__DOT__fl_q[0x13U] = ((0xffffff01U 
						   & vlTOPp->rename_stage__DOT__fl_q[0x13U]) 
						  | (0xfeU 
						     & vlTOPp->rename_stage__DOT__fl_n[0x13U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x13U] 
	    = (0x6800U | (0xffff80ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x13U]));
	vlTOPp->rename_stage__DOT__fl_q[0x13U] = (0x6800U 
						  | (0xffff80ffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x13U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x13U] 
	    = ((0xffff80ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x13U]) 
	       | (0x7f00U & vlTOPp->rename_stage__DOT__fl_spec_n[0x13U]));
	vlTOPp->rename_stage__DOT__fl_q[0x13U] = ((0xffff80ffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x13U]) 
						  | (0x7f00U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x13U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x13U] 
	    = (0x348000U | (0xffc07fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x13U]));
	vlTOPp->rename_stage__DOT__fl_q[0x13U] = (0x348000U 
						  | (0xffc07fffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x13U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x13U] 
	    = ((0xffc07fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x13U]) 
	       | (0x3f8000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x13U]));
	vlTOPp->rename_stage__DOT__fl_q[0x13U] = ((0xffc07fffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x13U]) 
						  | (0x3f8000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x13U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x13U] 
	    = (0x1a800000U | (0xe03fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x13U]));
	vlTOPp->rename_stage__DOT__fl_q[0x13U] = (0x1a800000U 
						  | (0xe03fffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x13U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x13U] 
	    = ((0xe03fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x13U]) 
	       | (0x1fc00000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x13U]));
	vlTOPp->rename_stage__DOT__fl_q[0x13U] = ((0xe03fffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x13U]) 
						  | (0x1fc00000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x13U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x13U] 
	    = (0x60000000U | (0x1fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x13U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x14U] 
	    = (0xdU | (0xfffffff0U & vlTOPp->rename_stage__DOT__fl_spec_q[0x14U]));
	vlTOPp->rename_stage__DOT__fl_q[0x13U] = (0x60000000U 
						  | (0x1fffffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x13U]));
	vlTOPp->rename_stage__DOT__fl_q[0x14U] = (0xdU 
						  | (0xfffffff0U 
						     & vlTOPp->rename_stage__DOT__fl_q[0x14U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x13U] 
	    = ((0x1fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x13U]) 
	       | (0xe0000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x13U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x14U] 
	    = ((0xfffffff0U & vlTOPp->rename_stage__DOT__fl_spec_q[0x14U]) 
	       | (0xfU & vlTOPp->rename_stage__DOT__fl_spec_n[0x14U]));
	vlTOPp->rename_stage__DOT__fl_q[0x13U] = ((0x1fffffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x13U]) 
						  | (0xe0000000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x13U]));
	vlTOPp->rename_stage__DOT__fl_q[0x14U] = ((0xfffffff0U 
						   & vlTOPp->rename_stage__DOT__fl_q[0x14U]) 
						  | (0xfU 
						     & vlTOPp->rename_stage__DOT__fl_n[0x14U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x14U] 
	    = (0x6c0U | (0xfffff80fU & vlTOPp->rename_stage__DOT__fl_spec_q[0x14U]));
	vlTOPp->rename_stage__DOT__fl_q[0x14U] = (0x6c0U 
						  | (0xfffff80fU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x14U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x14U] 
	    = ((0xfffff80fU & vlTOPp->rename_stage__DOT__fl_spec_q[0x14U]) 
	       | (0x7f0U & vlTOPp->rename_stage__DOT__fl_spec_n[0x14U]));
	vlTOPp->rename_stage__DOT__fl_q[0x14U] = ((0xfffff80fU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x14U]) 
						  | (0x7f0U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x14U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x14U] 
	    = (0x36800U | (0xfffc07ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x14U]));
	vlTOPp->rename_stage__DOT__fl_q[0x14U] = (0x36800U 
						  | (0xfffc07ffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x14U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x14U] 
	    = ((0xfffc07ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x14U]) 
	       | (0x3f800U & vlTOPp->rename_stage__DOT__fl_spec_n[0x14U]));
	vlTOPp->rename_stage__DOT__fl_q[0x14U] = ((0xfffc07ffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x14U]) 
						  | (0x3f800U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x14U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x14U] 
	    = (0x1b80000U | (0xfe03ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x14U]));
	vlTOPp->rename_stage__DOT__fl_q[0x14U] = (0x1b80000U 
						  | (0xfe03ffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x14U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x14U] 
	    = ((0xfe03ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x14U]) 
	       | (0x1fc0000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x14U]));
	vlTOPp->rename_stage__DOT__fl_q[0x14U] = ((0xfe03ffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x14U]) 
						  | (0x1fc0000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x14U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x14U] 
	    = (0xde000000U | (0x1ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x14U]));
	vlTOPp->rename_stage__DOT__fl_q[0x14U] = (0xde000000U 
						  | (0x1ffffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x14U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x14U] 
	    = ((0x1ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x14U]) 
	       | (0xfe000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x14U]));
	vlTOPp->rename_stage__DOT__fl_q[0x14U] = ((0x1ffffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x14U]) 
						  | (0xfe000000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x14U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x15U] 
	    = (0x70U | (0xffffff80U & vlTOPp->rename_stage__DOT__fl_spec_q[0x15U]));
	vlTOPp->rename_stage__DOT__fl_q[0x15U] = (0x70U 
						  | (0xffffff80U 
						     & vlTOPp->rename_stage__DOT__fl_q[0x15U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x15U] 
	    = ((0xffffff80U & vlTOPp->rename_stage__DOT__fl_spec_q[0x15U]) 
	       | (0x7fU & vlTOPp->rename_stage__DOT__fl_spec_n[0x15U]));
	vlTOPp->rename_stage__DOT__fl_q[0x15U] = ((0xffffff80U 
						   & vlTOPp->rename_stage__DOT__fl_q[0x15U]) 
						  | (0x7fU 
						     & vlTOPp->rename_stage__DOT__fl_n[0x15U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x15U] 
	    = (0x3880U | (0xffffc07fU & vlTOPp->rename_stage__DOT__fl_spec_q[0x15U]));
	vlTOPp->rename_stage__DOT__fl_q[0x15U] = (0x3880U 
						  | (0xffffc07fU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x15U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x15U] 
	    = ((0xffffc07fU & vlTOPp->rename_stage__DOT__fl_spec_q[0x15U]) 
	       | (0x3f80U & vlTOPp->rename_stage__DOT__fl_spec_n[0x15U]));
	vlTOPp->rename_stage__DOT__fl_q[0x15U] = ((0xffffc07fU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x15U]) 
						  | (0x3f80U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x15U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x15U] 
	    = (0x1c8000U | (0xffe03fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x15U]));
	vlTOPp->rename_stage__DOT__fl_q[0x15U] = (0x1c8000U 
						  | (0xffe03fffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x15U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x15U] 
	    = ((0xffe03fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x15U]) 
	       | (0x1fc000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x15U]));
	vlTOPp->rename_stage__DOT__fl_q[0x15U] = ((0xffe03fffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x15U]) 
						  | (0x1fc000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x15U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x15U] 
	    = (0xe600000U | (0xf01fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x15U]));
	vlTOPp->rename_stage__DOT__fl_q[0x15U] = (0xe600000U 
						  | (0xf01fffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x15U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x15U] 
	    = ((0xf01fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x15U]) 
	       | (0xfe00000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x15U]));
	vlTOPp->rename_stage__DOT__fl_q[0x15U] = ((0xf01fffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x15U]) 
						  | (0xfe00000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x15U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x15U] 
	    = (0x40000000U | (0xfffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x15U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x16U] 
	    = (7U | (0xfffffff8U & vlTOPp->rename_stage__DOT__fl_spec_q[0x16U]));
	vlTOPp->rename_stage__DOT__fl_q[0x15U] = (0x40000000U 
						  | (0xfffffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x15U]));
	vlTOPp->rename_stage__DOT__fl_q[0x16U] = (7U 
						  | (0xfffffff8U 
						     & vlTOPp->rename_stage__DOT__fl_q[0x16U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x15U] 
	    = ((0xfffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x15U]) 
	       | (0xf0000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x15U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x16U] 
	    = ((0xfffffff8U & vlTOPp->rename_stage__DOT__fl_spec_q[0x16U]) 
	       | (7U & vlTOPp->rename_stage__DOT__fl_spec_n[0x16U]));
	vlTOPp->rename_stage__DOT__fl_q[0x15U] = ((0xfffffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x15U]) 
						  | (0xf0000000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x15U]));
	vlTOPp->rename_stage__DOT__fl_q[0x16U] = ((0xfffffff8U 
						   & vlTOPp->rename_stage__DOT__fl_q[0x16U]) 
						  | (7U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x16U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x16U] 
	    = (0x3a8U | (0xfffffc07U & vlTOPp->rename_stage__DOT__fl_spec_q[0x16U]));
	vlTOPp->rename_stage__DOT__fl_q[0x16U] = (0x3a8U 
						  | (0xfffffc07U 
						     & vlTOPp->rename_stage__DOT__fl_q[0x16U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x16U] 
	    = ((0xfffffc07U & vlTOPp->rename_stage__DOT__fl_spec_q[0x16U]) 
	       | (0x3f8U & vlTOPp->rename_stage__DOT__fl_spec_n[0x16U]));
	vlTOPp->rename_stage__DOT__fl_q[0x16U] = ((0xfffffc07U 
						   & vlTOPp->rename_stage__DOT__fl_q[0x16U]) 
						  | (0x3f8U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x16U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x16U] 
	    = (0x1d800U | (0xfffe03ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x16U]));
	vlTOPp->rename_stage__DOT__fl_q[0x16U] = (0x1d800U 
						  | (0xfffe03ffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x16U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x16U] 
	    = ((0xfffe03ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x16U]) 
	       | (0x1fc00U & vlTOPp->rename_stage__DOT__fl_spec_n[0x16U]));
	vlTOPp->rename_stage__DOT__fl_q[0x16U] = ((0xfffe03ffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x16U]) 
						  | (0x1fc00U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x16U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x16U] 
	    = (0xee0000U | (0xff01ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x16U]));
	vlTOPp->rename_stage__DOT__fl_q[0x16U] = (0xee0000U 
						  | (0xff01ffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x16U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x16U] 
	    = ((0xff01ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x16U]) 
	       | (0xfe0000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x16U]));
	vlTOPp->rename_stage__DOT__fl_q[0x16U] = ((0xff01ffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x16U]) 
						  | (0xfe0000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x16U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x16U] 
	    = (0x78000000U | (0x80ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x16U]));
	vlTOPp->rename_stage__DOT__fl_q[0x16U] = (0x78000000U 
						  | (0x80ffffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x16U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x16U] 
	    = ((0x80ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x16U]) 
	       | (0x7f000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x16U]));
	vlTOPp->rename_stage__DOT__fl_q[0x16U] = ((0x80ffffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x16U]) 
						  | (0x7f000000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x16U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x16U] 
	    = (0x80000000U | (0x7fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x16U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x17U] 
	    = (0x3cU | (0xffffffc0U & vlTOPp->rename_stage__DOT__fl_spec_q[0x17U]));
	vlTOPp->rename_stage__DOT__fl_q[0x16U] = (0x80000000U 
						  | (0x7fffffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x16U]));
	vlTOPp->rename_stage__DOT__fl_q[0x17U] = (0x3cU 
						  | (0xffffffc0U 
						     & vlTOPp->rename_stage__DOT__fl_q[0x17U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x16U] 
	    = ((0x7fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x16U]) 
	       | (0x80000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x16U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x17U] 
	    = ((0xffffffc0U & vlTOPp->rename_stage__DOT__fl_spec_q[0x17U]) 
	       | (0x3fU & vlTOPp->rename_stage__DOT__fl_spec_n[0x17U]));
	vlTOPp->rename_stage__DOT__fl_q[0x16U] = ((0x7fffffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x16U]) 
						  | (0x80000000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x16U]));
	vlTOPp->rename_stage__DOT__fl_q[0x17U] = ((0xffffffc0U 
						   & vlTOPp->rename_stage__DOT__fl_q[0x17U]) 
						  | (0x3fU 
						     & vlTOPp->rename_stage__DOT__fl_n[0x17U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x17U] 
	    = (0x1e80U | (0xffffe03fU & vlTOPp->rename_stage__DOT__fl_spec_q[0x17U]));
	vlTOPp->rename_stage__DOT__fl_q[0x17U] = (0x1e80U 
						  | (0xffffe03fU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x17U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x17U] 
	    = ((0xffffe03fU & vlTOPp->rename_stage__DOT__fl_spec_q[0x17U]) 
	       | (0x1fc0U & vlTOPp->rename_stage__DOT__fl_spec_n[0x17U]));
	vlTOPp->rename_stage__DOT__fl_q[0x17U] = ((0xffffe03fU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x17U]) 
						  | (0x1fc0U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x17U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x17U] 
	    = (0xf6000U | (0xfff01fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x17U]));
	vlTOPp->rename_stage__DOT__fl_q[0x17U] = (0xf6000U 
						  | (0xfff01fffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x17U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x17U] 
	    = ((0xfff01fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x17U]) 
	       | (0xfe000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x17U]));
	vlTOPp->rename_stage__DOT__fl_q[0x17U] = ((0xfff01fffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x17U]) 
						  | (0xfe000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x17U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x17U] 
	    = (0x7c00000U | (0xf80fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x17U]));
	vlTOPp->rename_stage__DOT__fl_q[0x17U] = (0x7c00000U 
						  | (0xf80fffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x17U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x17U] 
	    = ((0xf80fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x17U]) 
	       | (0x7f00000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x17U]));
	vlTOPp->rename_stage__DOT__fl_q[0x17U] = ((0xf80fffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x17U]) 
						  | (0x7f00000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x17U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x17U] 
	    = (0xe8000000U | (0x7ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x17U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x18U] 
	    = (3U | (0xfffffffcU & vlTOPp->rename_stage__DOT__fl_spec_q[0x18U]));
	vlTOPp->rename_stage__DOT__fl_q[0x17U] = (0xe8000000U 
						  | (0x7ffffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x17U]));
	vlTOPp->rename_stage__DOT__fl_q[0x18U] = (3U 
						  | (0xfffffffcU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x18U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x17U] 
	    = ((0x7ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x17U]) 
	       | (0xf8000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x17U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x18U] 
	    = ((0xfffffffcU & vlTOPp->rename_stage__DOT__fl_spec_q[0x18U]) 
	       | (3U & vlTOPp->rename_stage__DOT__fl_spec_n[0x18U]));
	vlTOPp->rename_stage__DOT__fl_q[0x17U] = ((0x7ffffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x17U]) 
						  | (0xf8000000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x17U]));
	vlTOPp->rename_stage__DOT__fl_q[0x18U] = ((0xfffffffcU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x18U]) 
						  | (3U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x18U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x18U] 
	    = (0x1f8U | (0xfffffe03U & vlTOPp->rename_stage__DOT__fl_spec_q[0x18U]));
	vlTOPp->rename_stage__DOT__fl_q[0x18U] = (0x1f8U 
						  | (0xfffffe03U 
						     & vlTOPp->rename_stage__DOT__fl_q[0x18U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x18U] 
	    = ((0xfffffe03U & vlTOPp->rename_stage__DOT__fl_spec_q[0x18U]) 
	       | (0x1fcU & vlTOPp->rename_stage__DOT__fl_spec_n[0x18U]));
	vlTOPp->rename_stage__DOT__fl_q[0x18U] = ((0xfffffe03U 
						   & vlTOPp->rename_stage__DOT__fl_q[0x18U]) 
						  | (0x1fcU 
						     & vlTOPp->rename_stage__DOT__fl_n[0x18U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x18U] 
	    = (0xfe00U | vlTOPp->rename_stage__DOT__fl_spec_q[0x18U]);
	vlTOPp->rename_stage__DOT__fl_q[0x18U] = (0xfe00U 
						  | vlTOPp->rename_stage__DOT__fl_q[0x18U]);
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x18U] 
	    = ((0xffff01ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x18U]) 
	       | (0xfe00U & vlTOPp->rename_stage__DOT__fl_spec_n[0x18U]));
	vlTOPp->rename_stage__DOT__fl_q[0x18U] = ((0xffff01ffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x18U]) 
						  | (0xfe00U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x18U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x18U] 
	    = (0xff80ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x18U]);
	vlTOPp->rename_stage__DOT__fl_q[0x18U] = (0xff80ffffU 
						  & vlTOPp->rename_stage__DOT__fl_q[0x18U]);
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x18U] 
	    = ((0xff80ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x18U]) 
	       | (0x7f0000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x18U]));
	vlTOPp->rename_stage__DOT__fl_q[0x18U] = ((0xff80ffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x18U]) 
						  | (0x7f0000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x18U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x18U] 
	    = (0x800000U | (0xc07fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x18U]));
	vlTOPp->rename_stage__DOT__fl_q[0x18U] = (0x800000U 
						  | (0xc07fffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x18U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x18U] 
	    = ((0xc07fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x18U]) 
	       | (0x3f800000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x18U]));
	vlTOPp->rename_stage__DOT__fl_q[0x18U] = ((0xc07fffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x18U]) 
						  | (0x3f800000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x18U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x18U] 
	    = (0x80000000U | (0x3fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x18U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x19U] 
	    = (0xffffffe0U & vlTOPp->rename_stage__DOT__fl_spec_q[0x19U]);
	vlTOPp->rename_stage__DOT__fl_q[0x18U] = (0x80000000U 
						  | (0x3fffffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x18U]));
	vlTOPp->rename_stage__DOT__fl_q[0x19U] = (0xffffffe0U 
						  & vlTOPp->rename_stage__DOT__fl_q[0x19U]);
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x18U] 
	    = ((0x3fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x18U]) 
	       | (0xc0000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x18U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x19U] 
	    = ((0xffffffe0U & vlTOPp->rename_stage__DOT__fl_spec_q[0x19U]) 
	       | (0x1fU & vlTOPp->rename_stage__DOT__fl_spec_n[0x19U]));
	vlTOPp->rename_stage__DOT__fl_q[0x18U] = ((0x3fffffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x18U]) 
						  | (0xc0000000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x18U]));
	vlTOPp->rename_stage__DOT__fl_q[0x19U] = ((0xffffffe0U 
						   & vlTOPp->rename_stage__DOT__fl_q[0x19U]) 
						  | (0x1fU 
						     & vlTOPp->rename_stage__DOT__fl_n[0x19U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x19U] 
	    = (0x60U | (0xfffff01fU & vlTOPp->rename_stage__DOT__fl_spec_q[0x19U]));
	vlTOPp->rename_stage__DOT__fl_q[0x19U] = (0x60U 
						  | (0xfffff01fU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x19U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x19U] 
	    = ((0xfffff01fU & vlTOPp->rename_stage__DOT__fl_spec_q[0x19U]) 
	       | (0xfe0U & vlTOPp->rename_stage__DOT__fl_spec_n[0x19U]));
	vlTOPp->rename_stage__DOT__fl_q[0x19U] = ((0xfffff01fU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x19U]) 
						  | (0xfe0U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x19U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x19U] 
	    = (0x4000U | (0xfff80fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x19U]));
	vlTOPp->rename_stage__DOT__fl_q[0x19U] = (0x4000U 
						  | (0xfff80fffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x19U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x19U] 
	    = ((0xfff80fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x19U]) 
	       | (0x7f000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x19U]));
	vlTOPp->rename_stage__DOT__fl_q[0x19U] = ((0xfff80fffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x19U]) 
						  | (0x7f000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x19U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x19U] 
	    = (0x280000U | (0xfc07ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x19U]));
	vlTOPp->rename_stage__DOT__fl_q[0x19U] = (0x280000U 
						  | (0xfc07ffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x19U]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x19U] 
	    = ((0xfc07ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x19U]) 
	       | (0x3f80000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x19U]));
	vlTOPp->rename_stage__DOT__fl_q[0x19U] = ((0xfc07ffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x19U]) 
						  | (0x3f80000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x19U]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x19U] 
	    = (0x18000000U | (0x3ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x19U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU] 
	    = (0xfffffffeU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU]);
	vlTOPp->rename_stage__DOT__fl_q[0x19U] = (0x18000000U 
						  | (0x3ffffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x19U]));
	vlTOPp->rename_stage__DOT__fl_q[0x1aU] = (0xfffffffeU 
						  & vlTOPp->rename_stage__DOT__fl_q[0x1aU]);
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x19U] 
	    = ((0x3ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x19U]) 
	       | (0xfc000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x19U]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU] 
	    = ((0xfffffffeU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU]) 
	       | (1U & vlTOPp->rename_stage__DOT__fl_spec_n[0x1aU]));
	vlTOPp->rename_stage__DOT__fl_q[0x19U] = ((0x3ffffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x19U]) 
						  | (0xfc000000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x19U]));
	vlTOPp->rename_stage__DOT__fl_q[0x1aU] = ((0xfffffffeU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x1aU]) 
						  | (1U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x1aU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU] 
	    = (0xeU | (0xffffff01U & vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1aU] = (0xeU 
						  | (0xffffff01U 
						     & vlTOPp->rename_stage__DOT__fl_q[0x1aU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU] 
	    = ((0xffffff01U & vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU]) 
	       | (0xfeU & vlTOPp->rename_stage__DOT__fl_spec_n[0x1aU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1aU] = ((0xffffff01U 
						   & vlTOPp->rename_stage__DOT__fl_q[0x1aU]) 
						  | (0xfeU 
						     & vlTOPp->rename_stage__DOT__fl_n[0x1aU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU] 
	    = (0x800U | (0xffff80ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1aU] = (0x800U 
						  | (0xffff80ffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x1aU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU] 
	    = ((0xffff80ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU]) 
	       | (0x7f00U & vlTOPp->rename_stage__DOT__fl_spec_n[0x1aU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1aU] = ((0xffff80ffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x1aU]) 
						  | (0x7f00U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x1aU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU] 
	    = (0x48000U | (0xffc07fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1aU] = (0x48000U 
						  | (0xffc07fffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x1aU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU] 
	    = ((0xffc07fffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU]) 
	       | (0x3f8000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x1aU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1aU] = ((0xffc07fffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x1aU]) 
						  | (0x3f8000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x1aU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU] 
	    = (0x2800000U | (0xe03fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1aU] = (0x2800000U 
						  | (0xe03fffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x1aU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU] 
	    = ((0xe03fffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU]) 
	       | (0x1fc00000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x1aU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1aU] = ((0xe03fffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x1aU]) 
						  | (0x1fc00000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x1aU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU] 
	    = (0x60000000U | (0x1fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU] 
	    = (1U | (0xfffffff0U & vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1aU] = (0x60000000U 
						  | (0x1fffffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x1aU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1bU] = (1U 
						  | (0xfffffff0U 
						     & vlTOPp->rename_stage__DOT__fl_q[0x1bU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU] 
	    = ((0x1fffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU]) 
	       | (0xe0000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x1aU]));
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU] 
	    = ((0xfffffff0U & vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU]) 
	       | (0xfU & vlTOPp->rename_stage__DOT__fl_spec_n[0x1bU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1aU] = ((0x1fffffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x1aU]) 
						  | (0xe0000000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x1aU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1bU] = ((0xfffffff0U 
						   & vlTOPp->rename_stage__DOT__fl_q[0x1bU]) 
						  | (0xfU 
						     & vlTOPp->rename_stage__DOT__fl_n[0x1bU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU] 
	    = (0xc0U | (0xfffff80fU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1bU] = (0xc0U 
						  | (0xfffff80fU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x1bU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU] 
	    = ((0xfffff80fU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU]) 
	       | (0x7f0U & vlTOPp->rename_stage__DOT__fl_spec_n[0x1bU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1bU] = ((0xfffff80fU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x1bU]) 
						  | (0x7f0U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x1bU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU] 
	    = (0x6800U | (0xfffc07ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1bU] = (0x6800U 
						  | (0xfffc07ffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x1bU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU] 
	    = ((0xfffc07ffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU]) 
	       | (0x3f800U & vlTOPp->rename_stage__DOT__fl_spec_n[0x1bU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1bU] = ((0xfffc07ffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x1bU]) 
						  | (0x3f800U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x1bU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU] 
	    = (0x380000U | (0xfe03ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1bU] = (0x380000U 
						  | (0xfe03ffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x1bU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU] 
	    = ((0xfe03ffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU]) 
	       | (0x1fc0000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x1bU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1bU] = ((0xfe03ffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x1bU]) 
						  | (0x1fc0000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x1bU]));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:199
    if (vlTOPp->reset_i) {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU] 
	    = (0x1e000000U | (0x1ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1bU] = (0x1e000000U 
						  | (0x1ffffffU 
						     & vlTOPp->rename_stage__DOT__fl_q[0x1bU]));
    } else {
	vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU] 
	    = ((0x1ffffffU & vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU]) 
	       | (0xfe000000U & vlTOPp->rename_stage__DOT__fl_spec_n[0x1bU]));
	vlTOPp->rename_stage__DOT__fl_q[0x1bU] = ((0x1ffffffU 
						   & vlTOPp->rename_stage__DOT__fl_q[0x1bU]) 
						  | (0xfe000000U 
						     & vlTOPp->rename_stage__DOT__fl_n[0x1bU]));
    }
    vlTOPp->renamed_o[0U] = vlTOPp->rename_stage__DOT__renamed_r[0U];
    vlTOPp->renamed_o[1U] = vlTOPp->rename_stage__DOT__renamed_r[1U];
    vlTOPp->renamed_o[2U] = vlTOPp->rename_stage__DOT__renamed_r[2U];
    vlTOPp->renamed_v_o = vlTOPp->rename_stage__DOT__renamed_v_r;
}

VL_INLINE_OPT void Vrename_stage::_combo__TOP__4(Vrename_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_stage::_combo__TOP__4\n"); );
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rename_decode_ready_o = ((((0U != (IData)(vlTOPp->rename_stage__DOT__fl_spec_num)) 
				       & (~ (IData)(vlTOPp->rename_stage__DOT__roll_back))) 
				      & (IData)(vlTOPp->issue_rename_ready_i)) 
				     & (IData)(vlTOPp->rob_ready_i));
    vlTOPp->rename_stage__DOT__rename_rob = ((VL_ULL(0xffffffffffff80f) 
					      & vlTOPp->rename_stage__DOT__rename_rob) 
					     | ((QData)((IData)(
								(0x7fU 
								 & ((0x6fU 
								     >= 
								     (0x7fU 
								      & ((IData)(7U) 
									 * 
									 (0xfU 
									  & (IData)(
										(vlTOPp->decoded_i 
										>> 0x35U))))))
								     ? 
								    (((0U 
								       == 
								       (0x1fU 
									& ((IData)(7U) 
									   * 
									   (0xfU 
									    & (IData)(
										(vlTOPp->decoded_i 
										>> 0x35U))))))
								       ? 0U
								       : 
								      (vlTOPp->rename_stage__DOT__lut_spec_q[
								       ((IData)(1U) 
									+ 
									(3U 
									 & (((IData)(7U) 
									     * 
									     (0xfU 
									      & (IData)(
										(vlTOPp->decoded_i 
										>> 0x35U)))) 
									    >> 5U)))] 
								       << 
								       ((IData)(0x20U) 
									- 
									(0x1fU 
									 & ((IData)(7U) 
									    * 
									    (0xfU 
									     & (IData)(
										(vlTOPp->decoded_i 
										>> 0x35U)))))))) 
								     | (vlTOPp->rename_stage__DOT__lut_spec_q[
									(3U 
									 & (((IData)(7U) 
									     * 
									     (0xfU 
									      & (IData)(
										(vlTOPp->decoded_i 
										>> 0x35U)))) 
									    >> 5U))] 
									>> 
									(0x1fU 
									 & ((IData)(7U) 
									    * 
									    (0xfU 
									     & (IData)(
										(vlTOPp->decoded_i 
										>> 0x35U)))))))
								     : 0U)))) 
						<< 4U));
    vlTOPp->rename_stage__DOT__renamed[0U] = ((0xfffff80fU 
					       & vlTOPp->rename_stage__DOT__renamed[0U]) 
					      | (0x7f0U 
						 & (((0x6fU 
						      >= 
						      (0x7fU 
						       & ((IData)(7U) 
							  * 
							  (0xfU 
							   & (IData)(
								     (vlTOPp->decoded_i 
								      >> 0x35U))))))
						      ? 
						     (((0U 
							== 
							(0x1fU 
							 & ((IData)(7U) 
							    * 
							    (0xfU 
							     & (IData)(
								       (vlTOPp->decoded_i 
									>> 0x35U))))))
						        ? 0U
						        : 
						       (vlTOPp->rename_stage__DOT__lut_spec_q[
							((IData)(1U) 
							 + 
							 (3U 
							  & (((IData)(7U) 
							      * 
							      (0xfU 
							       & (IData)(
									 (vlTOPp->decoded_i 
									  >> 0x35U)))) 
							     >> 5U)))] 
							<< 
							((IData)(0x20U) 
							 - 
							 (0x1fU 
							  & ((IData)(7U) 
							     * 
							     (0xfU 
							      & (IData)(
									(vlTOPp->decoded_i 
									 >> 0x35U)))))))) 
						      | (vlTOPp->rename_stage__DOT__lut_spec_q[
							 (3U 
							  & (((IData)(7U) 
							      * 
							      (0xfU 
							       & (IData)(
									 (vlTOPp->decoded_i 
									  >> 0x35U)))) 
							     >> 5U))] 
							 >> 
							 (0x1fU 
							  & ((IData)(7U) 
							     * 
							     (0xfU 
							      & (IData)(
									(vlTOPp->decoded_i 
									 >> 0x35U)))))))
						      : 0U) 
						    << 4U)));
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:152
    vlTOPp->rename_stage__DOT__lut_n[0U] = vlTOPp->rename_stage__DOT__lut_q[0U];
    vlTOPp->rename_stage__DOT__lut_n[1U] = vlTOPp->rename_stage__DOT__lut_q[1U];
    vlTOPp->rename_stage__DOT__lut_n[2U] = vlTOPp->rename_stage__DOT__lut_q[2U];
    vlTOPp->rename_stage__DOT__lut_n[3U] = vlTOPp->rename_stage__DOT__lut_q[3U];
    vlTOPp->rename_stage__DOT__fl_read_pt_n = vlTOPp->rename_stage__DOT__fl_read_pt;
    vlTOPp->rename_stage__DOT__fl_write_pt_n = vlTOPp->rename_stage__DOT__fl_write_pt;
    vlTOPp->rename_stage__DOT__fl_n[0U] = vlTOPp->rename_stage__DOT__fl_q[0U];
    vlTOPp->rename_stage__DOT__fl_n[1U] = vlTOPp->rename_stage__DOT__fl_q[1U];
    vlTOPp->rename_stage__DOT__fl_n[2U] = vlTOPp->rename_stage__DOT__fl_q[2U];
    vlTOPp->rename_stage__DOT__fl_n[3U] = vlTOPp->rename_stage__DOT__fl_q[3U];
    vlTOPp->rename_stage__DOT__fl_n[4U] = vlTOPp->rename_stage__DOT__fl_q[4U];
    vlTOPp->rename_stage__DOT__fl_n[5U] = vlTOPp->rename_stage__DOT__fl_q[5U];
    vlTOPp->rename_stage__DOT__fl_n[6U] = vlTOPp->rename_stage__DOT__fl_q[6U];
    vlTOPp->rename_stage__DOT__fl_n[7U] = vlTOPp->rename_stage__DOT__fl_q[7U];
    vlTOPp->rename_stage__DOT__fl_n[8U] = vlTOPp->rename_stage__DOT__fl_q[8U];
    vlTOPp->rename_stage__DOT__fl_n[9U] = vlTOPp->rename_stage__DOT__fl_q[9U];
    vlTOPp->rename_stage__DOT__fl_n[0xaU] = vlTOPp->rename_stage__DOT__fl_q[0xaU];
    vlTOPp->rename_stage__DOT__fl_n[0xbU] = vlTOPp->rename_stage__DOT__fl_q[0xbU];
    vlTOPp->rename_stage__DOT__fl_n[0xcU] = vlTOPp->rename_stage__DOT__fl_q[0xcU];
    vlTOPp->rename_stage__DOT__fl_n[0xdU] = vlTOPp->rename_stage__DOT__fl_q[0xdU];
    vlTOPp->rename_stage__DOT__fl_n[0xeU] = vlTOPp->rename_stage__DOT__fl_q[0xeU];
    vlTOPp->rename_stage__DOT__fl_n[0xfU] = vlTOPp->rename_stage__DOT__fl_q[0xfU];
    vlTOPp->rename_stage__DOT__fl_n[0x10U] = vlTOPp->rename_stage__DOT__fl_q[0x10U];
    vlTOPp->rename_stage__DOT__fl_n[0x11U] = vlTOPp->rename_stage__DOT__fl_q[0x11U];
    vlTOPp->rename_stage__DOT__fl_n[0x12U] = vlTOPp->rename_stage__DOT__fl_q[0x12U];
    vlTOPp->rename_stage__DOT__fl_n[0x13U] = vlTOPp->rename_stage__DOT__fl_q[0x13U];
    vlTOPp->rename_stage__DOT__fl_n[0x14U] = vlTOPp->rename_stage__DOT__fl_q[0x14U];
    vlTOPp->rename_stage__DOT__fl_n[0x15U] = vlTOPp->rename_stage__DOT__fl_q[0x15U];
    vlTOPp->rename_stage__DOT__fl_n[0x16U] = vlTOPp->rename_stage__DOT__fl_q[0x16U];
    vlTOPp->rename_stage__DOT__fl_n[0x17U] = vlTOPp->rename_stage__DOT__fl_q[0x17U];
    vlTOPp->rename_stage__DOT__fl_n[0x18U] = vlTOPp->rename_stage__DOT__fl_q[0x18U];
    vlTOPp->rename_stage__DOT__fl_n[0x19U] = vlTOPp->rename_stage__DOT__fl_q[0x19U];
    vlTOPp->rename_stage__DOT__fl_n[0x1aU] = vlTOPp->rename_stage__DOT__fl_q[0x1aU];
    vlTOPp->rename_stage__DOT__fl_n[0x1bU] = vlTOPp->rename_stage__DOT__fl_q[0x1bU];
    if ((((IData)(vlTOPp->commit_v_i) & ((IData)(vlTOPp->commit_rename_i) 
					 >> 0xbU)) 
	 & (~ (IData)(vlTOPp->rename_stage__DOT__roll_back)))) {
	vlTOPp->rename_stage__DOT__fl_write_pt_n = 
	    (0x7fU & ((IData)(1U) + (IData)(vlTOPp->rename_stage__DOT__fl_write_pt_n)));
	vlTOPp->rename_stage__DOT__fl_read_pt_n = (0x7fU 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->rename_stage__DOT__fl_read_pt_n)));
	vlTOPp->rename_stage__DOT____Vlvbound3 = (0x7fU 
						  & (IData)(vlTOPp->commit_rename_i));
	if ((0x37fU >= (0x3ffU & ((IData)(7U) * (IData)(vlTOPp->rename_stage__DOT__fl_write_pt))))) {
	    VL_ASSIGNSEL_WIII(7,(0x3ffU & ((IData)(7U) 
					   * (IData)(vlTOPp->rename_stage__DOT__fl_write_pt))), vlTOPp->rename_stage__DOT__fl_n, vlTOPp->rename_stage__DOT____Vlvbound3);
	}
	vlTOPp->rename_stage__DOT____Vlvbound4 = (0x7fU 
						  & ((0x37fU 
						      >= 
						      (0x3ffU 
						       & ((IData)(7U) 
							  * (IData)(vlTOPp->rename_stage__DOT__fl_read_pt))))
						      ? 
						     (((0U 
							== 
							(0x1fU 
							 & ((IData)(7U) 
							    * (IData)(vlTOPp->rename_stage__DOT__fl_read_pt))))
						        ? 0U
						        : 
						       (vlTOPp->rename_stage__DOT__fl_q[
							((IData)(1U) 
							 + 
							 (0x1fU 
							  & (((IData)(7U) 
							      * (IData)(vlTOPp->rename_stage__DOT__fl_read_pt)) 
							     >> 5U)))] 
							<< 
							((IData)(0x20U) 
							 - 
							 (0x1fU 
							  & ((IData)(7U) 
							     * (IData)(vlTOPp->rename_stage__DOT__fl_read_pt)))))) 
						      | (vlTOPp->rename_stage__DOT__fl_q[
							 (0x1fU 
							  & (((IData)(7U) 
							      * (IData)(vlTOPp->rename_stage__DOT__fl_read_pt)) 
							     >> 5U))] 
							 >> 
							 (0x1fU 
							  & ((IData)(7U) 
							     * (IData)(vlTOPp->rename_stage__DOT__fl_read_pt)))))
						      : 0U));
	if ((0x6fU >= (0x7fU & ((IData)(7U) * (0xfU 
					       & ((IData)(vlTOPp->commit_rename_i) 
						  >> 7U)))))) {
	    VL_ASSIGNSEL_WIII(7,(0x7fU & ((IData)(7U) 
					  * (0xfU & 
					     ((IData)(vlTOPp->commit_rename_i) 
					      >> 7U)))), vlTOPp->rename_stage__DOT__lut_n, vlTOPp->rename_stage__DOT____Vlvbound4);
	}
    }
    vlTOPp->rename_rob_v_o = ((IData)(vlTOPp->rename_decode_ready_o) 
			      & (IData)(vlTOPp->decoded_v_i));
    vlTOPp->rename_rob_o = vlTOPp->rename_stage__DOT__rename_rob;
    vlTOPp->rename_stage__DOT__renamed_v = ((IData)(vlTOPp->issue_rename_ready_i)
					     ? (IData)(vlTOPp->rename_rob_v_o)
					     : (IData)(vlTOPp->rename_stage__DOT__renamed_v_r));
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:99
    vlTOPp->rename_stage__DOT__lut_spec_n[0U] = vlTOPp->rename_stage__DOT__lut_spec_q[0U];
    vlTOPp->rename_stage__DOT__lut_spec_n[1U] = vlTOPp->rename_stage__DOT__lut_spec_q[1U];
    vlTOPp->rename_stage__DOT__lut_spec_n[2U] = vlTOPp->rename_stage__DOT__lut_spec_q[2U];
    vlTOPp->rename_stage__DOT__lut_spec_n[3U] = vlTOPp->rename_stage__DOT__lut_spec_q[3U];
    vlTOPp->rename_stage__DOT__fl_spec_read_pt_n = vlTOPp->rename_stage__DOT__fl_spec_read_pt;
    vlTOPp->rename_stage__DOT__fl_spec_write_pt_n = vlTOPp->rename_stage__DOT__fl_spec_write_pt;
    vlTOPp->rename_stage__DOT__fl_spec_num_n = vlTOPp->rename_stage__DOT__fl_spec_num;
    vlTOPp->rename_stage__DOT__fl_spec_n[0U] = vlTOPp->rename_stage__DOT__fl_spec_q[0U];
    vlTOPp->rename_stage__DOT__fl_spec_n[1U] = vlTOPp->rename_stage__DOT__fl_spec_q[1U];
    vlTOPp->rename_stage__DOT__fl_spec_n[2U] = vlTOPp->rename_stage__DOT__fl_spec_q[2U];
    vlTOPp->rename_stage__DOT__fl_spec_n[3U] = vlTOPp->rename_stage__DOT__fl_spec_q[3U];
    vlTOPp->rename_stage__DOT__fl_spec_n[4U] = vlTOPp->rename_stage__DOT__fl_spec_q[4U];
    vlTOPp->rename_stage__DOT__fl_spec_n[5U] = vlTOPp->rename_stage__DOT__fl_spec_q[5U];
    vlTOPp->rename_stage__DOT__fl_spec_n[6U] = vlTOPp->rename_stage__DOT__fl_spec_q[6U];
    vlTOPp->rename_stage__DOT__fl_spec_n[7U] = vlTOPp->rename_stage__DOT__fl_spec_q[7U];
    vlTOPp->rename_stage__DOT__fl_spec_n[8U] = vlTOPp->rename_stage__DOT__fl_spec_q[8U];
    vlTOPp->rename_stage__DOT__fl_spec_n[9U] = vlTOPp->rename_stage__DOT__fl_spec_q[9U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0xaU] = vlTOPp->rename_stage__DOT__fl_spec_q[0xaU];
    vlTOPp->rename_stage__DOT__fl_spec_n[0xbU] = vlTOPp->rename_stage__DOT__fl_spec_q[0xbU];
    vlTOPp->rename_stage__DOT__fl_spec_n[0xcU] = vlTOPp->rename_stage__DOT__fl_spec_q[0xcU];
    vlTOPp->rename_stage__DOT__fl_spec_n[0xdU] = vlTOPp->rename_stage__DOT__fl_spec_q[0xdU];
    vlTOPp->rename_stage__DOT__fl_spec_n[0xeU] = vlTOPp->rename_stage__DOT__fl_spec_q[0xeU];
    vlTOPp->rename_stage__DOT__fl_spec_n[0xfU] = vlTOPp->rename_stage__DOT__fl_spec_q[0xfU];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x10U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x10U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x11U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x11U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x12U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x12U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x13U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x13U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x14U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x14U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x15U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x15U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x16U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x16U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x17U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x17U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x18U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x18U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x19U] = vlTOPp->rename_stage__DOT__fl_spec_q[0x19U];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x1aU] = vlTOPp->rename_stage__DOT__fl_spec_q[0x1aU];
    vlTOPp->rename_stage__DOT__fl_spec_n[0x1bU] = vlTOPp->rename_stage__DOT__fl_spec_q[0x1bU];
    vlTOPp->rename_stage__DOT__renamed[1U] = ((0xf0000fffU 
					       & vlTOPp->rename_stage__DOT__renamed[1U]) 
					      | (0xffff000U 
						 & ((IData)(
							    (vlTOPp->decoded_i 
							     >> 0x21U)) 
						    << 0xcU)));
    vlTOPp->rename_stage__DOT__renamed[1U] = ((0xfffffffU 
					       & vlTOPp->rename_stage__DOT__renamed[1U]) 
					      | (0xf0000000U 
						 & ((IData)(
							    (vlTOPp->decoded_i 
							     >> 0x31U)) 
						    << 0x1cU)));
    vlTOPp->rename_stage__DOT__renamed[2U] = (0x3f8U 
					      & vlTOPp->rename_stage__DOT__renamed[2U]);
    vlTOPp->rename_stage__DOT__renamed[2U] = ((7U & 
					       vlTOPp->rename_stage__DOT__renamed[2U]) 
					      | (0x78U 
						 & ((IData)(
							    (vlTOPp->decoded_i 
							     >> 0x35U)) 
						    << 3U)));
    if (vlTOPp->rename_stage__DOT__renamed_v) {
	vlTOPp->rename_stage__DOT__renamed[1U] = ((0xfffffffU 
						   & vlTOPp->rename_stage__DOT__renamed[1U]) 
						  | (0xf0000000U 
						     & (((0x6fU 
							  >= 
							  (0x7fU 
							   & ((IData)(7U) 
							      * 
							      (0xfU 
							       & (IData)(
									 (vlTOPp->decoded_i 
									  >> 0x31U))))))
							  ? 
							 (((0U 
							    == 
							    (0x1fU 
							     & ((IData)(7U) 
								* 
								(0xfU 
								 & (IData)(
									   (vlTOPp->decoded_i 
									    >> 0x31U))))))
							    ? 0U
							    : 
							   (vlTOPp->rename_stage__DOT__lut_spec_q[
							    ((IData)(1U) 
							     + 
							     (3U 
							      & (((IData)(7U) 
								  * 
								  (0xfU 
								   & (IData)(
									     (vlTOPp->decoded_i 
									      >> 0x31U)))) 
								 >> 5U)))] 
							    << 
							    ((IData)(0x20U) 
							     - 
							     (0x1fU 
							      & ((IData)(7U) 
								 * 
								 (0xfU 
								  & (IData)(
									    (vlTOPp->decoded_i 
									     >> 0x31U)))))))) 
							  | (vlTOPp->rename_stage__DOT__lut_spec_q[
							     (3U 
							      & (((IData)(7U) 
								  * 
								  (0xfU 
								   & (IData)(
									     (vlTOPp->decoded_i 
									      >> 0x31U)))) 
								 >> 5U))] 
							     >> 
							     (0x1fU 
							      & ((IData)(7U) 
								 * 
								 (0xfU 
								  & (IData)(
									    (vlTOPp->decoded_i 
									     >> 0x31U)))))))
							  : 0U) 
							<< 0x1cU)));
	vlTOPp->rename_stage__DOT__renamed[2U] = ((0x3f8U 
						   & vlTOPp->rename_stage__DOT__renamed[2U]) 
						  | (7U 
						     & (((0x6fU 
							  >= 
							  (0x7fU 
							   & ((IData)(7U) 
							      * 
							      (0xfU 
							       & (IData)(
									 (vlTOPp->decoded_i 
									  >> 0x31U))))))
							  ? 
							 (((0U 
							    == 
							    (0x1fU 
							     & ((IData)(7U) 
								* 
								(0xfU 
								 & (IData)(
									   (vlTOPp->decoded_i 
									    >> 0x31U))))))
							    ? 0U
							    : 
							   (vlTOPp->rename_stage__DOT__lut_spec_q[
							    ((IData)(1U) 
							     + 
							     (3U 
							      & (((IData)(7U) 
								  * 
								  (0xfU 
								   & (IData)(
									     (vlTOPp->decoded_i 
									      >> 0x31U)))) 
								 >> 5U)))] 
							    << 
							    ((IData)(0x20U) 
							     - 
							     (0x1fU 
							      & ((IData)(7U) 
								 * 
								 (0xfU 
								  & (IData)(
									    (vlTOPp->decoded_i 
									     >> 0x31U)))))))) 
							  | (vlTOPp->rename_stage__DOT__lut_spec_q[
							     (3U 
							      & (((IData)(7U) 
								  * 
								  (0xfU 
								   & (IData)(
									     (vlTOPp->decoded_i 
									      >> 0x31U)))) 
								 >> 5U))] 
							     >> 
							     (0x1fU 
							      & ((IData)(7U) 
								 * 
								 (0xfU 
								  & (IData)(
									    (vlTOPp->decoded_i 
									     >> 0x31U)))))))
							  : 0U) 
							>> 4U)));
	if ((1U & (~ (IData)(vlTOPp->decoded_i)))) {
	    vlTOPp->rename_stage__DOT__renamed[1U] 
		= ((0xf0000fffU & vlTOPp->rename_stage__DOT__renamed[1U]) 
		   | (0x7f000U & (((0x6fU >= (0x7fU 
					      & ((IData)(7U) 
						 * 
						 (0xfU 
						  & (IData)(
							    (vlTOPp->decoded_i 
							     >> 0x21U))))))
				    ? (((0U == (0x1fU 
						& ((IData)(7U) 
						   * 
						   (0xfU 
						    & (IData)(
							      (vlTOPp->decoded_i 
							       >> 0x21U))))))
					 ? 0U : (vlTOPp->rename_stage__DOT__lut_spec_q[
						 ((IData)(1U) 
						  + 
						  (3U 
						   & (((IData)(7U) 
						       * 
						       (0xfU 
							& (IData)(
								  (vlTOPp->decoded_i 
								   >> 0x21U)))) 
						      >> 5U)))] 
						 << 
						 ((IData)(0x20U) 
						  - 
						  (0x1fU 
						   & ((IData)(7U) 
						      * 
						      (0xfU 
						       & (IData)(
								 (vlTOPp->decoded_i 
								  >> 0x21U)))))))) 
				       | (vlTOPp->rename_stage__DOT__lut_spec_q[
					  (3U & (((IData)(7U) 
						  * 
						  (0xfU 
						   & (IData)(
							     (vlTOPp->decoded_i 
							      >> 0x21U)))) 
						 >> 5U))] 
					  >> (0x1fU 
					      & ((IData)(7U) 
						 * 
						 (0xfU 
						  & (IData)(
							    (vlTOPp->decoded_i 
							     >> 0x21U)))))))
				    : 0U) << 0xcU)));
	}
	if ((1U & (IData)((vlTOPp->decoded_i >> 1U)))) {
	    vlTOPp->rename_stage__DOT____Vlvbound1 
		= (0x7fU & ((0x37fU >= (0x3ffU & ((IData)(7U) 
						  * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt))))
			     ? (((0U == (0x1fU & ((IData)(7U) 
						  * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt))))
				  ? 0U : (vlTOPp->rename_stage__DOT__fl_spec_q[
					  ((IData)(1U) 
					   + (0x1fU 
					      & (((IData)(7U) 
						  * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt)) 
						 >> 5U)))] 
					  << ((IData)(0x20U) 
					      - (0x1fU 
						 & ((IData)(7U) 
						    * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt)))))) 
				| (vlTOPp->rename_stage__DOT__fl_spec_q[
				   (0x1fU & (((IData)(7U) 
					      * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt)) 
					     >> 5U))] 
				   >> (0x1fU & ((IData)(7U) 
						* (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt)))))
			     : 0U));
	    vlTOPp->rename_stage__DOT__fl_spec_read_pt_n 
		= (0x7fU & ((IData)(1U) + (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt_n)));
	    vlTOPp->rename_stage__DOT__fl_spec_num_n 
		= (0xffU & ((IData)(vlTOPp->rename_stage__DOT__fl_spec_num_n) 
			    - (IData)(1U)));
	    vlTOPp->rename_stage__DOT__renamed[2U] 
		= ((7U & vlTOPp->rename_stage__DOT__renamed[2U]) 
		   | (0x3f8U & (((0x37fU >= (0x3ffU 
					     & ((IData)(7U) 
						* (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt))))
				  ? (((0U == (0x1fU 
					      & ((IData)(7U) 
						 * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt))))
				       ? 0U : (vlTOPp->rename_stage__DOT__fl_spec_q[
					       ((IData)(1U) 
						+ (0x1fU 
						   & (((IData)(7U) 
						       * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt)) 
						      >> 5U)))] 
					       << ((IData)(0x20U) 
						   - 
						   (0x1fU 
						    & ((IData)(7U) 
						       * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt)))))) 
				     | (vlTOPp->rename_stage__DOT__fl_spec_q[
					(0x1fU & (((IData)(7U) 
						   * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt)) 
						  >> 5U))] 
					>> (0x1fU & 
					    ((IData)(7U) 
					     * (IData)(vlTOPp->rename_stage__DOT__fl_spec_read_pt)))))
				  : 0U) << 3U)));
	    if ((0x6fU >= (0x7fU & ((IData)(7U) * (0xfU 
						   & (IData)(
							     (vlTOPp->decoded_i 
							      >> 0x35U))))))) {
		VL_ASSIGNSEL_WIII(7,(0x7fU & ((IData)(7U) 
					      * (0xfU 
						 & (IData)(
							   (vlTOPp->decoded_i 
							    >> 0x35U))))), vlTOPp->rename_stage__DOT__lut_spec_n, vlTOPp->rename_stage__DOT____Vlvbound1);
	    }
	}
    }
    if (((IData)(vlTOPp->commit_v_i) & ((IData)(vlTOPp->commit_rename_i) 
					>> 0xbU))) {
	vlTOPp->rename_stage__DOT____Vlvbound2 = (0x7fU 
						  & (IData)(vlTOPp->commit_rename_i));
	vlTOPp->rename_stage__DOT__fl_spec_write_pt_n 
	    = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->rename_stage__DOT__fl_spec_write_pt_n)));
	vlTOPp->rename_stage__DOT__fl_spec_num_n = 
	    (0xffU & ((IData)(1U) + (IData)(vlTOPp->rename_stage__DOT__fl_spec_num_n)));
	if ((0x37fU >= (0x3ffU & ((IData)(7U) * (IData)(vlTOPp->rename_stage__DOT__fl_spec_write_pt))))) {
	    VL_ASSIGNSEL_WIII(7,(0x3ffU & ((IData)(7U) 
					   * (IData)(vlTOPp->rename_stage__DOT__fl_spec_write_pt))), vlTOPp->rename_stage__DOT__fl_spec_n, vlTOPp->rename_stage__DOT____Vlvbound2);
	}
    }
    if (vlTOPp->rename_stage__DOT__roll_back) {
	vlTOPp->rename_stage__DOT__lut_spec_n[0U] = 
	    vlTOPp->rename_stage__DOT__lut_q[0U];
	vlTOPp->rename_stage__DOT__lut_spec_n[1U] = 
	    vlTOPp->rename_stage__DOT__lut_q[1U];
	vlTOPp->rename_stage__DOT__lut_spec_n[2U] = 
	    vlTOPp->rename_stage__DOT__lut_q[2U];
	vlTOPp->rename_stage__DOT__lut_spec_n[3U] = 
	    vlTOPp->rename_stage__DOT__lut_q[3U];
	vlTOPp->rename_stage__DOT__fl_spec_read_pt_n 
	    = vlTOPp->rename_stage__DOT__fl_read_pt;
	vlTOPp->rename_stage__DOT__fl_spec_write_pt_n 
	    = vlTOPp->rename_stage__DOT__fl_write_pt;
	vlTOPp->rename_stage__DOT__fl_spec_num_n = 0x70U;
	vlTOPp->rename_stage__DOT__fl_spec_n[0U] = 
	    vlTOPp->rename_stage__DOT__fl_q[0U];
	vlTOPp->rename_stage__DOT__fl_spec_n[1U] = 
	    vlTOPp->rename_stage__DOT__fl_q[1U];
	vlTOPp->rename_stage__DOT__fl_spec_n[2U] = 
	    vlTOPp->rename_stage__DOT__fl_q[2U];
	vlTOPp->rename_stage__DOT__fl_spec_n[3U] = 
	    vlTOPp->rename_stage__DOT__fl_q[3U];
	vlTOPp->rename_stage__DOT__fl_spec_n[4U] = 
	    vlTOPp->rename_stage__DOT__fl_q[4U];
	vlTOPp->rename_stage__DOT__fl_spec_n[5U] = 
	    vlTOPp->rename_stage__DOT__fl_q[5U];
	vlTOPp->rename_stage__DOT__fl_spec_n[6U] = 
	    vlTOPp->rename_stage__DOT__fl_q[6U];
	vlTOPp->rename_stage__DOT__fl_spec_n[7U] = 
	    vlTOPp->rename_stage__DOT__fl_q[7U];
	vlTOPp->rename_stage__DOT__fl_spec_n[8U] = 
	    vlTOPp->rename_stage__DOT__fl_q[8U];
	vlTOPp->rename_stage__DOT__fl_spec_n[9U] = 
	    vlTOPp->rename_stage__DOT__fl_q[9U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0xaU] 
	    = vlTOPp->rename_stage__DOT__fl_q[0xaU];
	vlTOPp->rename_stage__DOT__fl_spec_n[0xbU] 
	    = vlTOPp->rename_stage__DOT__fl_q[0xbU];
	vlTOPp->rename_stage__DOT__fl_spec_n[0xcU] 
	    = vlTOPp->rename_stage__DOT__fl_q[0xcU];
	vlTOPp->rename_stage__DOT__fl_spec_n[0xdU] 
	    = vlTOPp->rename_stage__DOT__fl_q[0xdU];
	vlTOPp->rename_stage__DOT__fl_spec_n[0xeU] 
	    = vlTOPp->rename_stage__DOT__fl_q[0xeU];
	vlTOPp->rename_stage__DOT__fl_spec_n[0xfU] 
	    = vlTOPp->rename_stage__DOT__fl_q[0xfU];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x10U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x10U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x11U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x11U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x12U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x12U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x13U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x13U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x14U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x14U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x15U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x15U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x16U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x16U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x17U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x17U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x18U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x18U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x19U] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x19U];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x1aU] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x1aU];
	vlTOPp->rename_stage__DOT__fl_spec_n[0x1bU] 
	    = vlTOPp->rename_stage__DOT__fl_q[0x1bU];
    }
    vlTOPp->rename_stage__DOT__renamed_n[0U] = ((IData)(vlTOPp->issue_rename_ready_i)
						 ? 
						vlTOPp->rename_stage__DOT__renamed[0U]
						 : 
						vlTOPp->rename_stage__DOT__renamed_r[0U]);
    vlTOPp->rename_stage__DOT__renamed_n[1U] = ((IData)(vlTOPp->issue_rename_ready_i)
						 ? 
						vlTOPp->rename_stage__DOT__renamed[1U]
						 : 
						vlTOPp->rename_stage__DOT__renamed_r[1U]);
    vlTOPp->rename_stage__DOT__renamed_n[2U] = ((IData)(vlTOPp->issue_rename_ready_i)
						 ? 
						vlTOPp->rename_stage__DOT__renamed[2U]
						 : 
						vlTOPp->rename_stage__DOT__renamed_r[2U]);
}

void Vrename_stage::_eval(Vrename_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_stage::_eval\n"); );
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

void Vrename_stage::_eval_initial(Vrename_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_stage::_eval_initial\n"); );
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vrename_stage::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_stage::final\n"); );
    // Variables
    Vrename_stage__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vrename_stage::_eval_settle(Vrename_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_stage::_eval_settle\n"); );
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vrename_stage::_change_request(Vrename_stage__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_stage::_change_request\n"); );
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vrename_stage::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_stage::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
	Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((reset_i & 0xfeU))) {
	Verilated::overWidthError("reset_i");}
    if (VL_UNLIKELY((decoded_i & VL_ULL(0)))) {
	Verilated::overWidthError("decoded_i");}
    if (VL_UNLIKELY((decoded_v_i & 0xfeU))) {
	Verilated::overWidthError("decoded_v_i");}
    if (VL_UNLIKELY((issue_rename_ready_i & 0xfeU))) {
	Verilated::overWidthError("issue_rename_ready_i");}
    if (VL_UNLIKELY((commit_v_i & 0xfeU))) {
	Verilated::overWidthError("commit_v_i");}
    if (VL_UNLIKELY((commit_rename_i & 0xf000U))) {
	Verilated::overWidthError("commit_rename_i");}
    if (VL_UNLIKELY((mispredict_i & 0xfeU))) {
	Verilated::overWidthError("mispredict_i");}
    if (VL_UNLIKELY((rob_ready_i & 0xfeU))) {
	Verilated::overWidthError("rob_ready_i");}
}
#endif // VL_DEBUG

void Vrename_stage::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_stage::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    reset_i = VL_RAND_RESET_I(1);
    decoded_i = VL_RAND_RESET_Q(57);
    decoded_v_i = VL_RAND_RESET_I(1);
    rename_decode_ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74,renamed_o);
    renamed_v_o = VL_RAND_RESET_I(1);
    issue_rename_ready_i = VL_RAND_RESET_I(1);
    commit_v_i = VL_RAND_RESET_I(1);
    commit_rename_i = VL_RAND_RESET_I(12);
    mispredict_i = VL_RAND_RESET_I(1);
    rob_ready_i = VL_RAND_RESET_I(1);
    rename_rob_o = VL_RAND_RESET_Q(60);
    rename_rob_v_o = VL_RAND_RESET_I(1);
    VL_ZERO_RESET_W(74,rename_stage__DOT__renamed);
    VL_ZERO_RESET_W(74,rename_stage__DOT__renamed_r);
    VL_ZERO_RESET_W(74,rename_stage__DOT__renamed_n);
    rename_stage__DOT__rename_rob = 0;
    VL_RAND_RESET_W(112,rename_stage__DOT__lut_spec_n);
    VL_RAND_RESET_W(112,rename_stage__DOT__lut_spec_q);
    VL_RAND_RESET_W(896,rename_stage__DOT__fl_spec_n);
    VL_RAND_RESET_W(896,rename_stage__DOT__fl_spec_q);
    VL_RAND_RESET_W(112,rename_stage__DOT__lut_n);
    VL_RAND_RESET_W(112,rename_stage__DOT__lut_q);
    VL_RAND_RESET_W(896,rename_stage__DOT__fl_n);
    VL_RAND_RESET_W(896,rename_stage__DOT__fl_q);
    rename_stage__DOT__fl_read_pt = VL_RAND_RESET_I(7);
    rename_stage__DOT__fl_write_pt = VL_RAND_RESET_I(7);
    rename_stage__DOT__fl_spec_read_pt = VL_RAND_RESET_I(7);
    rename_stage__DOT__fl_spec_write_pt = VL_RAND_RESET_I(7);
    rename_stage__DOT__fl_read_pt_n = VL_RAND_RESET_I(7);
    rename_stage__DOT__fl_write_pt_n = VL_RAND_RESET_I(7);
    rename_stage__DOT__fl_spec_read_pt_n = VL_RAND_RESET_I(7);
    rename_stage__DOT__fl_spec_write_pt_n = VL_RAND_RESET_I(7);
    rename_stage__DOT__fl_spec_num = VL_RAND_RESET_I(8);
    rename_stage__DOT__fl_spec_num_n = VL_RAND_RESET_I(8);
    rename_stage__DOT__roll_back = VL_RAND_RESET_I(1);
    rename_stage__DOT__renamed_v = VL_RAND_RESET_I(1);
    rename_stage__DOT__renamed_v_r = VL_RAND_RESET_I(1);
    rename_stage__DOT____Vlvbound1 = VL_RAND_RESET_I(7);
    rename_stage__DOT____Vlvbound2 = VL_RAND_RESET_I(7);
    rename_stage__DOT____Vlvbound3 = VL_RAND_RESET_I(7);
    rename_stage__DOT____Vlvbound4 = VL_RAND_RESET_I(7);
    __Vclklast__TOP__clk_i = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
