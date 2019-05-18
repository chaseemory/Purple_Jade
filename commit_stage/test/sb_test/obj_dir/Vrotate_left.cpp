// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrotate_left.h for the primary calling header

#include "Vrotate_left.h"      // For This
#include "Vrotate_left__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vrotate_left) {
    Vrotate_left__Syms* __restrict vlSymsp = __VlSymsp = new Vrotate_left__Syms(this, name());
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vrotate_left::__Vconfigure(Vrotate_left__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vrotate_left::~Vrotate_left() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vrotate_left::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrotate_left::eval\n"); );
    Vrotate_left__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vrotate_left::_eval_initial_loop(Vrotate_left__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vrotate_left::_sequent__TOP__1(Vrotate_left__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrotate_left::_sequent__TOP__1\n"); );
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/sb_test/../../store_buffer.sv:140
    if (vlTOPp->reset_i) {
	vlTOPp->store_buffer__DOT__sb_q[0U] = 0U;
	vlTOPp->store_buffer__DOT__sb_q[1U] = 0U;
	vlTOPp->store_buffer__DOT__sb_q[2U] = 0U;
	vlTOPp->store_buffer__DOT__sb_q[3U] = 0U;
	vlTOPp->store_buffer__DOT__sb_q[4U] = 0U;
	vlTOPp->store_buffer__DOT__sb_q[5U] = 0U;
	vlTOPp->store_buffer__DOT__sb_q[6U] = 0U;
	vlTOPp->store_buffer__DOT__sb_q[7U] = 0U;
	vlTOPp->store_buffer__DOT__sb_q[8U] = 0U;
	vlTOPp->store_buffer__DOT__sb_q[9U] = 0U;
	vlTOPp->store_buffer__DOT__sb_q[0xaU] = 0U;
	vlTOPp->store_buffer__DOT__sb_q[0xbU] = 0U;
	vlTOPp->store_buffer__DOT__sb_q[0xcU] = 0U;
	vlTOPp->store_buffer__DOT__sb_q[0xdU] = 0U;
	vlTOPp->store_buffer__DOT__sb_q[0xeU] = 0U;
	vlTOPp->store_buffer__DOT__sb_q[0xfU] = 0U;
	vlTOPp->store_buffer__DOT__sb_q[0x10U] = 0U;
	vlTOPp->store_buffer__DOT__sb_alloc_pt = 0U;
	vlTOPp->store_buffer__DOT__sb_commit_pt = 0U;
	vlTOPp->store_buffer__DOT__sb_num = 0x10U;
    } else {
	vlTOPp->store_buffer__DOT__sb_q[0U] = vlTOPp->store_buffer__DOT__sb_n[0U];
	vlTOPp->store_buffer__DOT__sb_q[1U] = vlTOPp->store_buffer__DOT__sb_n[1U];
	vlTOPp->store_buffer__DOT__sb_q[2U] = vlTOPp->store_buffer__DOT__sb_n[2U];
	vlTOPp->store_buffer__DOT__sb_q[3U] = vlTOPp->store_buffer__DOT__sb_n[3U];
	vlTOPp->store_buffer__DOT__sb_q[4U] = vlTOPp->store_buffer__DOT__sb_n[4U];
	vlTOPp->store_buffer__DOT__sb_q[5U] = vlTOPp->store_buffer__DOT__sb_n[5U];
	vlTOPp->store_buffer__DOT__sb_q[6U] = vlTOPp->store_buffer__DOT__sb_n[6U];
	vlTOPp->store_buffer__DOT__sb_q[7U] = vlTOPp->store_buffer__DOT__sb_n[7U];
	vlTOPp->store_buffer__DOT__sb_q[8U] = vlTOPp->store_buffer__DOT__sb_n[8U];
	vlTOPp->store_buffer__DOT__sb_q[9U] = vlTOPp->store_buffer__DOT__sb_n[9U];
	vlTOPp->store_buffer__DOT__sb_q[0xaU] = vlTOPp->store_buffer__DOT__sb_n[0xaU];
	vlTOPp->store_buffer__DOT__sb_q[0xbU] = vlTOPp->store_buffer__DOT__sb_n[0xbU];
	vlTOPp->store_buffer__DOT__sb_q[0xcU] = vlTOPp->store_buffer__DOT__sb_n[0xcU];
	vlTOPp->store_buffer__DOT__sb_q[0xdU] = vlTOPp->store_buffer__DOT__sb_n[0xdU];
	vlTOPp->store_buffer__DOT__sb_q[0xeU] = vlTOPp->store_buffer__DOT__sb_n[0xeU];
	vlTOPp->store_buffer__DOT__sb_q[0xfU] = vlTOPp->store_buffer__DOT__sb_n[0xfU];
	vlTOPp->store_buffer__DOT__sb_q[0x10U] = vlTOPp->store_buffer__DOT__sb_n[0x10U];
	vlTOPp->store_buffer__DOT__sb_alloc_pt = vlTOPp->store_buffer__DOT__sb_alloc_pt_n;
	vlTOPp->store_buffer__DOT__sb_commit_pt = vlTOPp->store_buffer__DOT__sb_commit_pt_n;
	vlTOPp->store_buffer__DOT__sb_num = vlTOPp->store_buffer__DOT__sb_num_n;
    }
    vlTOPp->sb_issue_entry_num_o = vlTOPp->store_buffer__DOT__sb_alloc_pt;
    vlTOPp->sb_mem_addr_o = (0xffffU & ((0x20fU >= 
					 (0x3ffU & 
					  ((IData)(0x10U) 
					   + ((IData)(0x21U) 
					      * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)))))
					 ? (((0U == 
					      (0x1fU 
					       & ((IData)(0x10U) 
						  + 
						  ((IData)(0x21U) 
						   * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)))))
					      ? 0U : 
					     (vlTOPp->store_buffer__DOT__sb_q[
					      ((IData)(1U) 
					       + (0x1fU 
						  & (((IData)(0x10U) 
						      + 
						      ((IData)(0x21U) 
						       * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))) 
						     >> 5U)))] 
					      << ((IData)(0x20U) 
						  - 
						  (0x1fU 
						   & ((IData)(0x10U) 
						      + 
						      ((IData)(0x21U) 
						       * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))))))) 
					    | (vlTOPp->store_buffer__DOT__sb_q[
					       (0x1fU 
						& (((IData)(0x10U) 
						    + 
						    ((IData)(0x21U) 
						     * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))) 
						   >> 5U))] 
					       >> (0x1fU 
						   & ((IData)(0x10U) 
						      + 
						      ((IData)(0x21U) 
						       * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))))))
					 : 0U));
    vlTOPp->sb_mem_data_o = (0xffffU & ((0x20fU >= 
					 (0x3ffU & 
					  ((IData)(0x21U) 
					   * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))))
					 ? (((0U == 
					      (0x1fU 
					       & ((IData)(0x21U) 
						  * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))))
					      ? 0U : 
					     (vlTOPp->store_buffer__DOT__sb_q[
					      ((IData)(1U) 
					       + (0x1fU 
						  & (((IData)(0x21U) 
						      * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
						     >> 5U)))] 
					      << ((IData)(0x20U) 
						  - 
						  (0x1fU 
						   & ((IData)(0x21U) 
						      * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)))))) 
					    | (vlTOPp->store_buffer__DOT__sb_q[
					       (0x1fU 
						& (((IData)(0x21U) 
						    * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
						   >> 5U))] 
					       >> (0x1fU 
						   & ((IData)(0x21U) 
						      * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)))))
					 : 0U));
}

void Vrotate_left::_settle__TOP__2(Vrotate_left__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrotate_left::_settle__TOP__2\n"); );
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sb_issue_entry_num_o = vlTOPp->store_buffer__DOT__sb_alloc_pt;
    vlTOPp->sb_issue_ready_o = ((0U != (IData)(vlTOPp->store_buffer__DOT__sb_num)) 
				& (~ (IData)(vlTOPp->rob_mispredict_i)));
    vlTOPp->sb_mem_addr_o = (0xffffU & ((0x20fU >= 
					 (0x3ffU & 
					  ((IData)(0x10U) 
					   + ((IData)(0x21U) 
					      * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)))))
					 ? (((0U == 
					      (0x1fU 
					       & ((IData)(0x10U) 
						  + 
						  ((IData)(0x21U) 
						   * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)))))
					      ? 0U : 
					     (vlTOPp->store_buffer__DOT__sb_q[
					      ((IData)(1U) 
					       + (0x1fU 
						  & (((IData)(0x10U) 
						      + 
						      ((IData)(0x21U) 
						       * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))) 
						     >> 5U)))] 
					      << ((IData)(0x20U) 
						  - 
						  (0x1fU 
						   & ((IData)(0x10U) 
						      + 
						      ((IData)(0x21U) 
						       * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))))))) 
					    | (vlTOPp->store_buffer__DOT__sb_q[
					       (0x1fU 
						& (((IData)(0x10U) 
						    + 
						    ((IData)(0x21U) 
						     * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))) 
						   >> 5U))] 
					       >> (0x1fU 
						   & ((IData)(0x10U) 
						      + 
						      ((IData)(0x21U) 
						       * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))))))
					 : 0U));
    vlTOPp->sb_mem_data_o = (0xffffU & ((0x20fU >= 
					 (0x3ffU & 
					  ((IData)(0x21U) 
					   * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))))
					 ? (((0U == 
					      (0x1fU 
					       & ((IData)(0x21U) 
						  * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))))
					      ? 0U : 
					     (vlTOPp->store_buffer__DOT__sb_q[
					      ((IData)(1U) 
					       + (0x1fU 
						  & (((IData)(0x21U) 
						      * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
						     >> 5U)))] 
					      << ((IData)(0x20U) 
						  - 
						  (0x1fU 
						   & ((IData)(0x21U) 
						      * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)))))) 
					    | (vlTOPp->store_buffer__DOT__sb_q[
					       (0x1fU 
						& (((IData)(0x21U) 
						    * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
						   >> 5U))] 
					       >> (0x1fU 
						   & ((IData)(0x21U) 
						      * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)))))
					 : 0U));
    vlTOPp->sb_mem_v_o = ((IData)(vlTOPp->rob_sb_valid_i) 
			  & ((0x20fU >= (0x3ffU & ((IData)(0x20U) 
						   + 
						   ((IData)(0x21U) 
						    * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))))) 
			     & (vlTOPp->store_buffer__DOT__sb_q[
				(0x1fU & (((IData)(0x20U) 
					   + ((IData)(0x21U) 
					      * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))) 
					  >> 5U))] 
				>> (0x1fU & ((IData)(0x20U) 
					     + ((IData)(0x21U) 
						* (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)))))));
    vlTOPp->store_buffer__DOT__trimed_sb_num = (0xfU 
						& ((IData)(vlTOPp->exe_ld_pass_sb_num_i) 
						   - (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)));
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/sb_test/../../store_buffer.sv:110
    vlTOPp->store_buffer__DOT__match_vector = 0U;
    if ((vlTOPp->store_buffer__DOT__sb_q[1U] & ((0xffffU 
						 & ((vlTOPp->store_buffer__DOT__sb_q[1U] 
						     << 0x10U) 
						    | (vlTOPp->store_buffer__DOT__sb_q[0U] 
						       >> 0x10U))) 
						== (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (1U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[2U] >> 1U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[2U] 
			 << 0xfU) | (vlTOPp->store_buffer__DOT__sb_q[1U] 
				     >> 0x11U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (2U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[3U] >> 2U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[3U] 
			 << 0xeU) | (vlTOPp->store_buffer__DOT__sb_q[2U] 
				     >> 0x12U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (4U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[4U] >> 3U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[4U] 
			 << 0xdU) | (vlTOPp->store_buffer__DOT__sb_q[3U] 
				     >> 0x13U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (8U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[5U] >> 4U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[5U] 
			 << 0xcU) | (vlTOPp->store_buffer__DOT__sb_q[4U] 
				     >> 0x14U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x10U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[6U] >> 5U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[6U] 
			 << 0xbU) | (vlTOPp->store_buffer__DOT__sb_q[5U] 
				     >> 0x15U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x20U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[7U] >> 6U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[7U] 
			 << 0xaU) | (vlTOPp->store_buffer__DOT__sb_q[6U] 
				     >> 0x16U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x40U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[8U] >> 7U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[8U] 
			 << 9U) | (vlTOPp->store_buffer__DOT__sb_q[7U] 
				   >> 0x17U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x80U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[9U] >> 8U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[9U] 
			 << 8U) | (vlTOPp->store_buffer__DOT__sb_q[8U] 
				   >> 0x18U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x100U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[0xaU] >> 9U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[0xaU] 
			 << 7U) | (vlTOPp->store_buffer__DOT__sb_q[9U] 
				   >> 0x19U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x200U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[0xbU] >> 0xaU) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[0xbU] 
			 << 6U) | (vlTOPp->store_buffer__DOT__sb_q[0xaU] 
				   >> 0x1aU))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x400U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[0xcU] >> 0xbU) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[0xcU] 
			 << 5U) | (vlTOPp->store_buffer__DOT__sb_q[0xbU] 
				   >> 0x1bU))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x800U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[0xdU] >> 0xcU) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[0xdU] 
			 << 4U) | (vlTOPp->store_buffer__DOT__sb_q[0xcU] 
				   >> 0x1cU))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x1000U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[0xeU] >> 0xdU) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[0xeU] 
			 << 3U) | (vlTOPp->store_buffer__DOT__sb_q[0xdU] 
				   >> 0x1dU))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x2000U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[0xfU] >> 0xeU) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[0xfU] 
			 << 2U) | (vlTOPp->store_buffer__DOT__sb_q[0xeU] 
				   >> 0x1eU))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x4000U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[0x10U] >> 0xfU) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[0x10U] 
			 << 1U) | (vlTOPp->store_buffer__DOT__sb_q[0xfU] 
				   >> 0x1fU))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x8000U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/sb_test/../../store_buffer.sv:62
    vlTOPp->store_buffer__DOT__sb_n[0U] = vlTOPp->store_buffer__DOT__sb_q[0U];
    vlTOPp->store_buffer__DOT__sb_n[1U] = vlTOPp->store_buffer__DOT__sb_q[1U];
    vlTOPp->store_buffer__DOT__sb_n[2U] = vlTOPp->store_buffer__DOT__sb_q[2U];
    vlTOPp->store_buffer__DOT__sb_n[3U] = vlTOPp->store_buffer__DOT__sb_q[3U];
    vlTOPp->store_buffer__DOT__sb_n[4U] = vlTOPp->store_buffer__DOT__sb_q[4U];
    vlTOPp->store_buffer__DOT__sb_n[5U] = vlTOPp->store_buffer__DOT__sb_q[5U];
    vlTOPp->store_buffer__DOT__sb_n[6U] = vlTOPp->store_buffer__DOT__sb_q[6U];
    vlTOPp->store_buffer__DOT__sb_n[7U] = vlTOPp->store_buffer__DOT__sb_q[7U];
    vlTOPp->store_buffer__DOT__sb_n[8U] = vlTOPp->store_buffer__DOT__sb_q[8U];
    vlTOPp->store_buffer__DOT__sb_n[9U] = vlTOPp->store_buffer__DOT__sb_q[9U];
    vlTOPp->store_buffer__DOT__sb_n[0xaU] = vlTOPp->store_buffer__DOT__sb_q[0xaU];
    vlTOPp->store_buffer__DOT__sb_n[0xbU] = vlTOPp->store_buffer__DOT__sb_q[0xbU];
    vlTOPp->store_buffer__DOT__sb_n[0xcU] = vlTOPp->store_buffer__DOT__sb_q[0xcU];
    vlTOPp->store_buffer__DOT__sb_n[0xdU] = vlTOPp->store_buffer__DOT__sb_q[0xdU];
    vlTOPp->store_buffer__DOT__sb_n[0xeU] = vlTOPp->store_buffer__DOT__sb_q[0xeU];
    vlTOPp->store_buffer__DOT__sb_n[0xfU] = vlTOPp->store_buffer__DOT__sb_q[0xfU];
    vlTOPp->store_buffer__DOT__sb_n[0x10U] = vlTOPp->store_buffer__DOT__sb_q[0x10U];
    vlTOPp->store_buffer__DOT__sb_alloc_pt_n = vlTOPp->store_buffer__DOT__sb_alloc_pt;
    vlTOPp->store_buffer__DOT__sb_commit_pt_n = vlTOPp->store_buffer__DOT__sb_commit_pt;
    vlTOPp->store_buffer__DOT__sb_num_n = vlTOPp->store_buffer__DOT__sb_num;
    if (vlTOPp->issue_sb_v_i) {
	vlTOPp->store_buffer__DOT____Vlvbound1 = 0U;
	vlTOPp->store_buffer__DOT__sb_alloc_pt_n = 
	    (0xfU & ((IData)(1U) + (IData)(vlTOPp->store_buffer__DOT__sb_alloc_pt_n)));
	vlTOPp->store_buffer__DOT__sb_num_n = (0x1fU 
					       & ((IData)(vlTOPp->store_buffer__DOT__sb_num_n) 
						  - (IData)(1U)));
	if ((0x20fU >= (0x3ffU & ((IData)(0x20U) + 
				  ((IData)(0x21U) * (IData)(vlTOPp->store_buffer__DOT__sb_alloc_pt)))))) {
	    vlTOPp->store_buffer__DOT__sb_n[(0x1fU 
					     & (((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * (IData)(vlTOPp->store_buffer__DOT__sb_alloc_pt))) 
						>> 5U))] 
		= (((~ ((IData)(1U) << (0x1fU & ((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * (IData)(vlTOPp->store_buffer__DOT__sb_alloc_pt)))))) 
		    & vlTOPp->store_buffer__DOT__sb_n[
		    (0x1fU & (((IData)(0x20U) + ((IData)(0x21U) 
						 * (IData)(vlTOPp->store_buffer__DOT__sb_alloc_pt))) 
			      >> 5U))]) | ((IData)(vlTOPp->store_buffer__DOT____Vlvbound1) 
					   << (0x1fU 
					       & ((IData)(0x20U) 
						  + 
						  ((IData)(0x21U) 
						   * (IData)(vlTOPp->store_buffer__DOT__sb_alloc_pt))))));
	}
    }
    if (vlTOPp->exe_sb_v_i) {
	vlTOPp->store_buffer__DOT____Vlvbound2 = 1U;
	if ((0x20fU >= (0x3ffU & ((IData)(0x20U) + 
				  ((IData)(0x21U) * 
				   (0xfU & (IData)(
						   (vlTOPp->exe_sb_i 
						    >> 0x20U)))))))) {
	    vlTOPp->store_buffer__DOT__sb_n[(0x1fU 
					     & (((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * 
						  (0xfU 
						   & (IData)(
							     (vlTOPp->exe_sb_i 
							      >> 0x20U))))) 
						>> 5U))] 
		= (((~ ((IData)(1U) << (0x1fU & ((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * 
						  (0xfU 
						   & (IData)(
							     (vlTOPp->exe_sb_i 
							      >> 0x20U)))))))) 
		    & vlTOPp->store_buffer__DOT__sb_n[
		    (0x1fU & (((IData)(0x20U) + ((IData)(0x21U) 
						 * 
						 (0xfU 
						  & (IData)(
							    (vlTOPp->exe_sb_i 
							     >> 0x20U))))) 
			      >> 5U))]) | ((IData)(vlTOPp->store_buffer__DOT____Vlvbound2) 
					   << (0x1fU 
					       & ((IData)(0x20U) 
						  + 
						  ((IData)(0x21U) 
						   * 
						   (0xfU 
						    & (IData)(
							      (vlTOPp->exe_sb_i 
							       >> 0x20U))))))));
	}
	vlTOPp->store_buffer__DOT____Vlvbound3 = (0xffffU 
						  & (IData)(
							    (vlTOPp->exe_sb_i 
							     >> 0x10U)));
	if ((0x20fU >= (0x3ffU & ((IData)(0x10U) + 
				  ((IData)(0x21U) * 
				   (0xfU & (IData)(
						   (vlTOPp->exe_sb_i 
						    >> 0x20U)))))))) {
	    VL_ASSIGNSEL_WIII(16,(0x3ffU & ((IData)(0x10U) 
					    + ((IData)(0x21U) 
					       * (0xfU 
						  & (IData)(
							    (vlTOPp->exe_sb_i 
							     >> 0x20U)))))), vlTOPp->store_buffer__DOT__sb_n, vlTOPp->store_buffer__DOT____Vlvbound3);
	}
	vlTOPp->store_buffer__DOT____Vlvbound4 = (0xffffU 
						  & (IData)(vlTOPp->exe_sb_i));
	if ((0x20fU >= (0x3ffU & ((IData)(0x21U) * 
				  (0xfU & (IData)((vlTOPp->exe_sb_i 
						   >> 0x20U))))))) {
	    VL_ASSIGNSEL_WIII(16,(0x3ffU & ((IData)(0x21U) 
					    * (0xfU 
					       & (IData)(
							 (vlTOPp->exe_sb_i 
							  >> 0x20U))))), vlTOPp->store_buffer__DOT__sb_n, vlTOPp->store_buffer__DOT____Vlvbound4);
	}
    }
    if (vlTOPp->sb_mem_v_o) {
	vlTOPp->store_buffer__DOT____Vlvbound5 = 0U;
	vlTOPp->store_buffer__DOT__sb_commit_pt_n = 
	    (0xfU & ((IData)(1U) + (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt_n)));
	vlTOPp->store_buffer__DOT__sb_num_n = (0x1fU 
					       & ((IData)(1U) 
						  + (IData)(vlTOPp->store_buffer__DOT__sb_num_n)));
	if ((0x20fU >= (0x3ffU & ((IData)(0x20U) + 
				  ((IData)(0x21U) * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)))))) {
	    vlTOPp->store_buffer__DOT__sb_n[(0x1fU 
					     & (((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))) 
						>> 5U))] 
		= (((~ ((IData)(1U) << (0x1fU & ((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)))))) 
		    & vlTOPp->store_buffer__DOT__sb_n[
		    (0x1fU & (((IData)(0x20U) + ((IData)(0x21U) 
						 * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))) 
			      >> 5U))]) | ((IData)(vlTOPp->store_buffer__DOT____Vlvbound5) 
					   << (0x1fU 
					       & ((IData)(0x20U) 
						  + 
						  ((IData)(0x21U) 
						   * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))))));
	}
    }
    if (vlTOPp->rob_mispredict_i) {
	vlTOPp->store_buffer__DOT__sb_n[0U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[1U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[2U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[3U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[4U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[5U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[6U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[7U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[8U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[9U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[0xaU] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[0xbU] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[0xcU] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[0xdU] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[0xeU] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[0xfU] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[0x10U] = 0U;
	vlTOPp->store_buffer__DOT__sb_alloc_pt_n = 0U;
	vlTOPp->store_buffer__DOT__sb_commit_pt_n = 0U;
	vlTOPp->store_buffer__DOT__sb_num_n = 0x10U;
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/sb_test/../../store_buffer.sv:110
    vlTOPp->store_buffer__DOT__address_match = 0U;
    vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 0U;
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x10U) & (0U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 0U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x11U) & (1U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 1U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x12U) & (2U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 2U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x13U) & (3U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 3U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x14U) & (4U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 4U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x15U) & (5U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 5U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x16U) & (6U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 6U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x17U) & (7U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 7U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x18U) & (8U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 8U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x19U) & (9U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 9U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x1aU) & (0xaU < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 0xaU;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x1bU) & (0xbU < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 0xbU;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x1cU) & (0xcU < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 0xcU;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x1dU) & (0xdU < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 0xdU;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x1eU) & (0xeU < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 0xeU;
    }
    vlTOPp->sb_ld_pass_valid_o = ((IData)(vlTOPp->store_buffer__DOT__address_match) 
				  & (~ (IData)(vlTOPp->rob_mispredict_i)));
    vlTOPp->store_buffer__DOT__matched_sb_num = (0xfU 
						 & ((IData)(vlTOPp->store_buffer__DOT__matched_trimed_sb_num) 
						    + (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)));
    vlTOPp->sb_ld_pass_value_o = (0xffffU & ((0x20fU 
					      >= (0x3ffU 
						  & ((IData)(0x21U) 
						     * (IData)(vlTOPp->store_buffer__DOT__matched_sb_num))))
					      ? (((0U 
						   == 
						   (0x1fU 
						    & ((IData)(0x21U) 
						       * (IData)(vlTOPp->store_buffer__DOT__matched_sb_num))))
						   ? 0U
						   : 
						  (vlTOPp->store_buffer__DOT__sb_q[
						   ((IData)(1U) 
						    + 
						    (0x1fU 
						     & (((IData)(0x21U) 
							 * (IData)(vlTOPp->store_buffer__DOT__matched_sb_num)) 
							>> 5U)))] 
						   << 
						   ((IData)(0x20U) 
						    - 
						    (0x1fU 
						     & ((IData)(0x21U) 
							* (IData)(vlTOPp->store_buffer__DOT__matched_sb_num)))))) 
						 | (vlTOPp->store_buffer__DOT__sb_q[
						    (0x1fU 
						     & (((IData)(0x21U) 
							 * (IData)(vlTOPp->store_buffer__DOT__matched_sb_num)) 
							>> 5U))] 
						    >> 
						    (0x1fU 
						     & ((IData)(0x21U) 
							* (IData)(vlTOPp->store_buffer__DOT__matched_sb_num)))))
					      : 0U));
}

VL_INLINE_OPT void Vrotate_left::_combo__TOP__3(Vrotate_left__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrotate_left::_combo__TOP__3\n"); );
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sb_issue_ready_o = ((0U != (IData)(vlTOPp->store_buffer__DOT__sb_num)) 
				& (~ (IData)(vlTOPp->rob_mispredict_i)));
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/sb_test/../../store_buffer.sv:110
    vlTOPp->store_buffer__DOT__match_vector = 0U;
    if ((vlTOPp->store_buffer__DOT__sb_q[1U] & ((0xffffU 
						 & ((vlTOPp->store_buffer__DOT__sb_q[1U] 
						     << 0x10U) 
						    | (vlTOPp->store_buffer__DOT__sb_q[0U] 
						       >> 0x10U))) 
						== (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (1U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[2U] >> 1U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[2U] 
			 << 0xfU) | (vlTOPp->store_buffer__DOT__sb_q[1U] 
				     >> 0x11U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (2U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[3U] >> 2U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[3U] 
			 << 0xeU) | (vlTOPp->store_buffer__DOT__sb_q[2U] 
				     >> 0x12U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (4U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[4U] >> 3U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[4U] 
			 << 0xdU) | (vlTOPp->store_buffer__DOT__sb_q[3U] 
				     >> 0x13U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (8U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[5U] >> 4U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[5U] 
			 << 0xcU) | (vlTOPp->store_buffer__DOT__sb_q[4U] 
				     >> 0x14U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x10U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[6U] >> 5U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[6U] 
			 << 0xbU) | (vlTOPp->store_buffer__DOT__sb_q[5U] 
				     >> 0x15U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x20U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[7U] >> 6U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[7U] 
			 << 0xaU) | (vlTOPp->store_buffer__DOT__sb_q[6U] 
				     >> 0x16U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x40U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[8U] >> 7U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[8U] 
			 << 9U) | (vlTOPp->store_buffer__DOT__sb_q[7U] 
				   >> 0x17U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x80U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[9U] >> 8U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[9U] 
			 << 8U) | (vlTOPp->store_buffer__DOT__sb_q[8U] 
				   >> 0x18U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x100U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[0xaU] >> 9U) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[0xaU] 
			 << 7U) | (vlTOPp->store_buffer__DOT__sb_q[9U] 
				   >> 0x19U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x200U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[0xbU] >> 0xaU) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[0xbU] 
			 << 6U) | (vlTOPp->store_buffer__DOT__sb_q[0xaU] 
				   >> 0x1aU))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x400U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[0xcU] >> 0xbU) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[0xcU] 
			 << 5U) | (vlTOPp->store_buffer__DOT__sb_q[0xbU] 
				   >> 0x1bU))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x800U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[0xdU] >> 0xcU) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[0xdU] 
			 << 4U) | (vlTOPp->store_buffer__DOT__sb_q[0xcU] 
				   >> 0x1cU))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x1000U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[0xeU] >> 0xdU) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[0xeU] 
			 << 3U) | (vlTOPp->store_buffer__DOT__sb_q[0xdU] 
				   >> 0x1dU))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x2000U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[0xfU] >> 0xeU) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[0xfU] 
			 << 2U) | (vlTOPp->store_buffer__DOT__sb_q[0xeU] 
				   >> 0x1eU))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x4000U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    if (((vlTOPp->store_buffer__DOT__sb_q[0x10U] >> 0xfU) 
	 & ((0xffffU & ((vlTOPp->store_buffer__DOT__sb_q[0x10U] 
			 << 1U) | (vlTOPp->store_buffer__DOT__sb_q[0xfU] 
				   >> 0x1fU))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->store_buffer__DOT__match_vector = (0x8000U 
						   | (IData)(vlTOPp->store_buffer__DOT__match_vector));
    }
    vlTOPp->sb_mem_v_o = ((IData)(vlTOPp->rob_sb_valid_i) 
			  & ((0x20fU >= (0x3ffU & ((IData)(0x20U) 
						   + 
						   ((IData)(0x21U) 
						    * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))))) 
			     & (vlTOPp->store_buffer__DOT__sb_q[
				(0x1fU & (((IData)(0x20U) 
					   + ((IData)(0x21U) 
					      * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))) 
					  >> 5U))] 
				>> (0x1fU & ((IData)(0x20U) 
					     + ((IData)(0x21U) 
						* (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)))))));
    vlTOPp->store_buffer__DOT__trimed_sb_num = (0xfU 
						& ((IData)(vlTOPp->exe_ld_pass_sb_num_i) 
						   - (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)));
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/sb_test/../../store_buffer.sv:62
    vlTOPp->store_buffer__DOT__sb_n[0U] = vlTOPp->store_buffer__DOT__sb_q[0U];
    vlTOPp->store_buffer__DOT__sb_n[1U] = vlTOPp->store_buffer__DOT__sb_q[1U];
    vlTOPp->store_buffer__DOT__sb_n[2U] = vlTOPp->store_buffer__DOT__sb_q[2U];
    vlTOPp->store_buffer__DOT__sb_n[3U] = vlTOPp->store_buffer__DOT__sb_q[3U];
    vlTOPp->store_buffer__DOT__sb_n[4U] = vlTOPp->store_buffer__DOT__sb_q[4U];
    vlTOPp->store_buffer__DOT__sb_n[5U] = vlTOPp->store_buffer__DOT__sb_q[5U];
    vlTOPp->store_buffer__DOT__sb_n[6U] = vlTOPp->store_buffer__DOT__sb_q[6U];
    vlTOPp->store_buffer__DOT__sb_n[7U] = vlTOPp->store_buffer__DOT__sb_q[7U];
    vlTOPp->store_buffer__DOT__sb_n[8U] = vlTOPp->store_buffer__DOT__sb_q[8U];
    vlTOPp->store_buffer__DOT__sb_n[9U] = vlTOPp->store_buffer__DOT__sb_q[9U];
    vlTOPp->store_buffer__DOT__sb_n[0xaU] = vlTOPp->store_buffer__DOT__sb_q[0xaU];
    vlTOPp->store_buffer__DOT__sb_n[0xbU] = vlTOPp->store_buffer__DOT__sb_q[0xbU];
    vlTOPp->store_buffer__DOT__sb_n[0xcU] = vlTOPp->store_buffer__DOT__sb_q[0xcU];
    vlTOPp->store_buffer__DOT__sb_n[0xdU] = vlTOPp->store_buffer__DOT__sb_q[0xdU];
    vlTOPp->store_buffer__DOT__sb_n[0xeU] = vlTOPp->store_buffer__DOT__sb_q[0xeU];
    vlTOPp->store_buffer__DOT__sb_n[0xfU] = vlTOPp->store_buffer__DOT__sb_q[0xfU];
    vlTOPp->store_buffer__DOT__sb_n[0x10U] = vlTOPp->store_buffer__DOT__sb_q[0x10U];
    vlTOPp->store_buffer__DOT__sb_alloc_pt_n = vlTOPp->store_buffer__DOT__sb_alloc_pt;
    vlTOPp->store_buffer__DOT__sb_commit_pt_n = vlTOPp->store_buffer__DOT__sb_commit_pt;
    vlTOPp->store_buffer__DOT__sb_num_n = vlTOPp->store_buffer__DOT__sb_num;
    if (vlTOPp->issue_sb_v_i) {
	vlTOPp->store_buffer__DOT____Vlvbound1 = 0U;
	vlTOPp->store_buffer__DOT__sb_alloc_pt_n = 
	    (0xfU & ((IData)(1U) + (IData)(vlTOPp->store_buffer__DOT__sb_alloc_pt_n)));
	vlTOPp->store_buffer__DOT__sb_num_n = (0x1fU 
					       & ((IData)(vlTOPp->store_buffer__DOT__sb_num_n) 
						  - (IData)(1U)));
	if ((0x20fU >= (0x3ffU & ((IData)(0x20U) + 
				  ((IData)(0x21U) * (IData)(vlTOPp->store_buffer__DOT__sb_alloc_pt)))))) {
	    vlTOPp->store_buffer__DOT__sb_n[(0x1fU 
					     & (((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * (IData)(vlTOPp->store_buffer__DOT__sb_alloc_pt))) 
						>> 5U))] 
		= (((~ ((IData)(1U) << (0x1fU & ((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * (IData)(vlTOPp->store_buffer__DOT__sb_alloc_pt)))))) 
		    & vlTOPp->store_buffer__DOT__sb_n[
		    (0x1fU & (((IData)(0x20U) + ((IData)(0x21U) 
						 * (IData)(vlTOPp->store_buffer__DOT__sb_alloc_pt))) 
			      >> 5U))]) | ((IData)(vlTOPp->store_buffer__DOT____Vlvbound1) 
					   << (0x1fU 
					       & ((IData)(0x20U) 
						  + 
						  ((IData)(0x21U) 
						   * (IData)(vlTOPp->store_buffer__DOT__sb_alloc_pt))))));
	}
    }
    if (vlTOPp->exe_sb_v_i) {
	vlTOPp->store_buffer__DOT____Vlvbound2 = 1U;
	if ((0x20fU >= (0x3ffU & ((IData)(0x20U) + 
				  ((IData)(0x21U) * 
				   (0xfU & (IData)(
						   (vlTOPp->exe_sb_i 
						    >> 0x20U)))))))) {
	    vlTOPp->store_buffer__DOT__sb_n[(0x1fU 
					     & (((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * 
						  (0xfU 
						   & (IData)(
							     (vlTOPp->exe_sb_i 
							      >> 0x20U))))) 
						>> 5U))] 
		= (((~ ((IData)(1U) << (0x1fU & ((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * 
						  (0xfU 
						   & (IData)(
							     (vlTOPp->exe_sb_i 
							      >> 0x20U)))))))) 
		    & vlTOPp->store_buffer__DOT__sb_n[
		    (0x1fU & (((IData)(0x20U) + ((IData)(0x21U) 
						 * 
						 (0xfU 
						  & (IData)(
							    (vlTOPp->exe_sb_i 
							     >> 0x20U))))) 
			      >> 5U))]) | ((IData)(vlTOPp->store_buffer__DOT____Vlvbound2) 
					   << (0x1fU 
					       & ((IData)(0x20U) 
						  + 
						  ((IData)(0x21U) 
						   * 
						   (0xfU 
						    & (IData)(
							      (vlTOPp->exe_sb_i 
							       >> 0x20U))))))));
	}
	vlTOPp->store_buffer__DOT____Vlvbound3 = (0xffffU 
						  & (IData)(
							    (vlTOPp->exe_sb_i 
							     >> 0x10U)));
	if ((0x20fU >= (0x3ffU & ((IData)(0x10U) + 
				  ((IData)(0x21U) * 
				   (0xfU & (IData)(
						   (vlTOPp->exe_sb_i 
						    >> 0x20U)))))))) {
	    VL_ASSIGNSEL_WIII(16,(0x3ffU & ((IData)(0x10U) 
					    + ((IData)(0x21U) 
					       * (0xfU 
						  & (IData)(
							    (vlTOPp->exe_sb_i 
							     >> 0x20U)))))), vlTOPp->store_buffer__DOT__sb_n, vlTOPp->store_buffer__DOT____Vlvbound3);
	}
	vlTOPp->store_buffer__DOT____Vlvbound4 = (0xffffU 
						  & (IData)(vlTOPp->exe_sb_i));
	if ((0x20fU >= (0x3ffU & ((IData)(0x21U) * 
				  (0xfU & (IData)((vlTOPp->exe_sb_i 
						   >> 0x20U))))))) {
	    VL_ASSIGNSEL_WIII(16,(0x3ffU & ((IData)(0x21U) 
					    * (0xfU 
					       & (IData)(
							 (vlTOPp->exe_sb_i 
							  >> 0x20U))))), vlTOPp->store_buffer__DOT__sb_n, vlTOPp->store_buffer__DOT____Vlvbound4);
	}
    }
    if (vlTOPp->sb_mem_v_o) {
	vlTOPp->store_buffer__DOT____Vlvbound5 = 0U;
	vlTOPp->store_buffer__DOT__sb_commit_pt_n = 
	    (0xfU & ((IData)(1U) + (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt_n)));
	vlTOPp->store_buffer__DOT__sb_num_n = (0x1fU 
					       & ((IData)(1U) 
						  + (IData)(vlTOPp->store_buffer__DOT__sb_num_n)));
	if ((0x20fU >= (0x3ffU & ((IData)(0x20U) + 
				  ((IData)(0x21U) * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)))))) {
	    vlTOPp->store_buffer__DOT__sb_n[(0x1fU 
					     & (((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))) 
						>> 5U))] 
		= (((~ ((IData)(1U) << (0x1fU & ((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)))))) 
		    & vlTOPp->store_buffer__DOT__sb_n[
		    (0x1fU & (((IData)(0x20U) + ((IData)(0x21U) 
						 * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))) 
			      >> 5U))]) | ((IData)(vlTOPp->store_buffer__DOT____Vlvbound5) 
					   << (0x1fU 
					       & ((IData)(0x20U) 
						  + 
						  ((IData)(0x21U) 
						   * (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))))));
	}
    }
    if (vlTOPp->rob_mispredict_i) {
	vlTOPp->store_buffer__DOT__sb_n[0U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[1U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[2U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[3U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[4U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[5U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[6U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[7U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[8U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[9U] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[0xaU] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[0xbU] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[0xcU] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[0xdU] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[0xeU] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[0xfU] = 0U;
	vlTOPp->store_buffer__DOT__sb_n[0x10U] = 0U;
	vlTOPp->store_buffer__DOT__sb_alloc_pt_n = 0U;
	vlTOPp->store_buffer__DOT__sb_commit_pt_n = 0U;
	vlTOPp->store_buffer__DOT__sb_num_n = 0x10U;
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/sb_test/../../store_buffer.sv:110
    vlTOPp->store_buffer__DOT__address_match = 0U;
    vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 0U;
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x10U) & (0U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 0U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x11U) & (1U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 1U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x12U) & (2U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 2U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x13U) & (3U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 3U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x14U) & (4U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 4U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x15U) & (5U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 5U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x16U) & (6U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 6U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x17U) & (7U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 7U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x18U) & (8U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 8U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x19U) & (9U < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 9U;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x1aU) & (0xaU < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 0xaU;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x1bU) & (0xbU < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 0xbU;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x1cU) & (0xcU < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 0xcU;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x1dU) & (0xdU < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 0xdU;
    }
    if (((((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
	   << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
	  >> 0x1eU) & (0xeU < (IData)(vlTOPp->store_buffer__DOT__trimed_sb_num)))) {
	vlTOPp->store_buffer__DOT__address_match = 1U;
	vlTOPp->store_buffer__DOT__matched_trimed_sb_num = 0xeU;
    }
    vlTOPp->sb_ld_pass_valid_o = ((IData)(vlTOPp->store_buffer__DOT__address_match) 
				  & (~ (IData)(vlTOPp->rob_mispredict_i)));
    vlTOPp->store_buffer__DOT__matched_sb_num = (0xfU 
						 & ((IData)(vlTOPp->store_buffer__DOT__matched_trimed_sb_num) 
						    + (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)));
    vlTOPp->sb_ld_pass_value_o = (0xffffU & ((0x20fU 
					      >= (0x3ffU 
						  & ((IData)(0x21U) 
						     * (IData)(vlTOPp->store_buffer__DOT__matched_sb_num))))
					      ? (((0U 
						   == 
						   (0x1fU 
						    & ((IData)(0x21U) 
						       * (IData)(vlTOPp->store_buffer__DOT__matched_sb_num))))
						   ? 0U
						   : 
						  (vlTOPp->store_buffer__DOT__sb_q[
						   ((IData)(1U) 
						    + 
						    (0x1fU 
						     & (((IData)(0x21U) 
							 * (IData)(vlTOPp->store_buffer__DOT__matched_sb_num)) 
							>> 5U)))] 
						   << 
						   ((IData)(0x20U) 
						    - 
						    (0x1fU 
						     & ((IData)(0x21U) 
							* (IData)(vlTOPp->store_buffer__DOT__matched_sb_num)))))) 
						 | (vlTOPp->store_buffer__DOT__sb_q[
						    (0x1fU 
						     & (((IData)(0x21U) 
							 * (IData)(vlTOPp->store_buffer__DOT__matched_sb_num)) 
							>> 5U))] 
						    >> 
						    (0x1fU 
						     & ((IData)(0x21U) 
							* (IData)(vlTOPp->store_buffer__DOT__matched_sb_num)))))
					      : 0U));
}

void Vrotate_left::_eval(Vrotate_left__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrotate_left::_eval\n"); );
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

void Vrotate_left::_eval_initial(Vrotate_left__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrotate_left::_eval_initial\n"); );
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vrotate_left::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrotate_left::final\n"); );
    // Variables
    Vrotate_left__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vrotate_left::_eval_settle(Vrotate_left__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrotate_left::_eval_settle\n"); );
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vrotate_left::_change_request(Vrotate_left__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrotate_left::_change_request\n"); );
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vrotate_left::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrotate_left::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
	Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((reset_i & 0xfeU))) {
	Verilated::overWidthError("reset_i");}
    if (VL_UNLIKELY((rob_sb_valid_i & 0xfeU))) {
	Verilated::overWidthError("rob_sb_valid_i");}
    if (VL_UNLIKELY((rob_mispredict_i & 0xfeU))) {
	Verilated::overWidthError("rob_mispredict_i");}
    if (VL_UNLIKELY((issue_sb_v_i & 0xfeU))) {
	Verilated::overWidthError("issue_sb_v_i");}
    if (VL_UNLIKELY((exe_sb_v_i & 0xfeU))) {
	Verilated::overWidthError("exe_sb_v_i");}
    if (VL_UNLIKELY((exe_sb_i & VL_ULL(0)))) {
	Verilated::overWidthError("exe_sb_i");}
    if (VL_UNLIKELY((exe_ld_pass_sb_num_i & 0xf0U))) {
	Verilated::overWidthError("exe_ld_pass_sb_num_i");}
}
#endif // VL_DEBUG

void Vrotate_left::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrotate_left::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    reset_i = VL_RAND_RESET_I(1);
    rob_sb_valid_i = VL_RAND_RESET_I(1);
    rob_mispredict_i = VL_RAND_RESET_I(1);
    issue_sb_v_i = VL_RAND_RESET_I(1);
    sb_issue_entry_num_o = VL_RAND_RESET_I(4);
    sb_issue_ready_o = VL_RAND_RESET_I(1);
    exe_sb_v_i = VL_RAND_RESET_I(1);
    exe_sb_i = VL_RAND_RESET_Q(36);
    exe_ld_bypass_addr_i = VL_RAND_RESET_I(16);
    exe_ld_pass_sb_num_i = VL_RAND_RESET_I(4);
    sb_ld_pass_valid_o = VL_RAND_RESET_I(1);
    sb_ld_pass_value_o = VL_RAND_RESET_I(16);
    sb_mem_v_o = VL_RAND_RESET_I(1);
    sb_mem_addr_o = VL_RAND_RESET_I(16);
    sb_mem_data_o = VL_RAND_RESET_I(16);
    VL_ZERO_RESET_W(528,store_buffer__DOT__sb_n);
    VL_ZERO_RESET_W(528,store_buffer__DOT__sb_q);
    store_buffer__DOT__sb_alloc_pt = VL_RAND_RESET_I(4);
    store_buffer__DOT__sb_alloc_pt_n = VL_RAND_RESET_I(4);
    store_buffer__DOT__sb_commit_pt = VL_RAND_RESET_I(4);
    store_buffer__DOT__sb_commit_pt_n = VL_RAND_RESET_I(4);
    store_buffer__DOT__sb_num = VL_RAND_RESET_I(5);
    store_buffer__DOT__sb_num_n = VL_RAND_RESET_I(5);
    store_buffer__DOT__address_match = VL_RAND_RESET_I(1);
    store_buffer__DOT__match_vector = VL_RAND_RESET_I(16);
    store_buffer__DOT__trimed_sb_num = VL_RAND_RESET_I(4);
    store_buffer__DOT__matched_trimed_sb_num = VL_RAND_RESET_I(4);
    store_buffer__DOT__matched_sb_num = VL_RAND_RESET_I(4);
    store_buffer__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    store_buffer__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    store_buffer__DOT____Vlvbound3 = VL_RAND_RESET_I(16);
    store_buffer__DOT____Vlvbound4 = VL_RAND_RESET_I(16);
    store_buffer__DOT____Vlvbound5 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk_i = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
