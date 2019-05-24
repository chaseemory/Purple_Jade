// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vissue_table.h for the primary calling header

#include "Vissue_table_bsg_encode_one_hot__W7.h" // For This
#include "Vissue_table__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vissue_table_bsg_encode_one_hot__W7) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vissue_table_bsg_encode_one_hot__W7::__Vconfigure(Vissue_table__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vissue_table_bsg_encode_one_hot__W7::~Vissue_table_bsg_encode_one_hot__W7() {
}

//--------------------
// Internal Methods

void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__0__KET____DOT__src_1_encoder__1(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__0__KET____DOT__src_1_encoder__1\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__0__KET____DOT__src_1_encoder__65(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__0__KET____DOT__src_1_encoder__65\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & vlTOPp->issue_table__DOT__src1_tag_match[0U]));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & vlTOPp->issue_table__DOT__src1_tag_match[0U]));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
		    >> 2U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
		    >> 2U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
		    >> 4U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
		    >> 4U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
		    >> 6U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__0__KET____DOT__src_2_encoder__97(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__0__KET____DOT__src_2_encoder__97\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & vlTOPp->issue_table__DOT__src2_tag_match[0U]));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & vlTOPp->issue_table__DOT__src2_tag_match[0U]));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
		    >> 2U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
		    >> 2U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
		    >> 4U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
		    >> 4U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
		    >> 6U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__1__KET____DOT__src_1_encoder__66(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__1__KET____DOT__src_1_encoder__66\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[1U] 
		     << 0x19U) | (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
				  >> 7U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfe000000U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				    << 0x19U)) | (0x1fffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						     >> 7U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3f800000U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				    << 0x17U)) | (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						  >> 9U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3f800000U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				    << 0x17U)) | (0x7ffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						     >> 9U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfe00000U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				   << 0x15U)) | (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						 >> 0xbU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfe00000U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				   << 0x15U)) | (0x1ffffeU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						    >> 0xbU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3f80000U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				   << 0x13U)) | (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						 >> 0xdU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__1__KET____DOT__src_2_encoder__98(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__1__KET____DOT__src_2_encoder__98\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[1U] 
		     << 0x19U) | (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
				  >> 7U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfe000000U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				    << 0x19U)) | (0x1fffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						     >> 7U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3f800000U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				    << 0x17U)) | (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						  >> 9U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3f800000U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				    << 0x17U)) | (0x7ffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						     >> 9U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfe00000U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				   << 0x15U)) | (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						 >> 0xbU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfe00000U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				   << 0x15U)) | (0x1ffffeU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						    >> 0xbU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3f80000U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				   << 0x13U)) | (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						 >> 0xdU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__2__KET____DOT__src_1_encoder__67(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__2__KET____DOT__src_1_encoder__67\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[1U] 
		     << 0x12U) | (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
				  >> 0xeU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffc0000U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				    << 0x12U)) | (0x3fffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						     >> 0xeU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fff0000U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				    << 0x10U)) | (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						  >> 0x10U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fff0000U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				    << 0x10U)) | (0xfffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						     >> 0x10U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfffc000U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				   << 0xeU)) | (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						>> 0x12U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffc000U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				   << 0xeU)) | (0x3ffeU 
						& (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						   >> 0x12U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fff000U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				   << 0xcU)) | (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						>> 0x14U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__2__KET____DOT__src_2_encoder__99(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__2__KET____DOT__src_2_encoder__99\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[1U] 
		     << 0x12U) | (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
				  >> 0xeU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffc0000U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				    << 0x12U)) | (0x3fffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						     >> 0xeU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fff0000U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				    << 0x10U)) | (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						  >> 0x10U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fff0000U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				    << 0x10U)) | (0xfffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						     >> 0x10U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfffc000U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				   << 0xeU)) | (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						>> 0x12U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffc000U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				   << 0xeU)) | (0x3ffeU 
						& (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						   >> 0x12U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fff000U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				   << 0xcU)) | (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						>> 0x14U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__3__KET____DOT__src_1_encoder__68(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__3__KET____DOT__src_1_encoder__68\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[1U] 
		     << 0xbU) | (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
				 >> 0x15U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffff800U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				    << 0xbU)) | (0x7feU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						    >> 0x15U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffffe00U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				    << 9U)) | (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
					       >> 0x17U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ffffe00U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				    << 9U)) | (0x1feU 
					       & (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						  >> 0x17U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfffff80U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				   << 7U)) | (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
					      >> 0x19U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffff80U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				   << 7U)) | (0x7eU 
					      & (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						 >> 0x19U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffffe0U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				   << 5U)) | (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
					      >> 0x1bU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__3__KET____DOT__src_2_encoder__100(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__3__KET____DOT__src_2_encoder__100\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[1U] 
		     << 0xbU) | (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
				 >> 0x15U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffff800U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				    << 0xbU)) | (0x7feU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						    >> 0x15U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffffe00U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				    << 9U)) | (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
					       >> 0x17U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ffffe00U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				    << 9U)) | (0x1feU 
					       & (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						  >> 0x17U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfffff80U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				   << 7U)) | (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
					      >> 0x19U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffff80U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				   << 7U)) | (0x7eU 
					      & (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						 >> 0x19U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffffe0U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				   << 5U)) | (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
					      >> 0x1bU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__4__KET____DOT__src_1_encoder__69(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__4__KET____DOT__src_1_encoder__69\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[1U] 
		     << 4U) | (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
			       >> 0x1cU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffffff0U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				    << 4U)) | (0xeU 
					       & (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						  >> 0x1cU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffffffcU & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				    << 2U)) | (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
					       >> 0x1eU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ffffffcU & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				    << 2U)) | (2U & 
					       (vlTOPp->issue_table__DOT__src1_tag_match[0U] 
						>> 0x1eU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & vlTOPp->issue_table__DOT__src1_tag_match[1U]));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & vlTOPp->issue_table__DOT__src1_tag_match[1U]));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
		    >> 2U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__4__KET____DOT__src_2_encoder__101(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__4__KET____DOT__src_2_encoder__101\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[1U] 
		     << 4U) | (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
			       >> 0x1cU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffffff0U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				    << 4U)) | (0xeU 
					       & (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						  >> 0x1cU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffffffcU & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				    << 2U)) | (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
					       >> 0x1eU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ffffffcU & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				    << 2U)) | (2U & 
					       (vlTOPp->issue_table__DOT__src2_tag_match[0U] 
						>> 0x1eU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & vlTOPp->issue_table__DOT__src2_tag_match[1U]));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & vlTOPp->issue_table__DOT__src2_tag_match[1U]));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
		    >> 2U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__5__KET____DOT__src_1_encoder__70(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__5__KET____DOT__src_1_encoder__70\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[2U] 
		     << 0x1dU) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				  >> 3U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xe0000000U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				    << 0x1dU)) | (0x1ffffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						     >> 3U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x38000000U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				    << 0x1bU)) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						  >> 5U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x38000000U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				    << 0x1bU)) | (0x7fffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						     >> 5U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xe000000U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				   << 0x19U)) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						 >> 7U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xe000000U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				   << 0x19U)) | (0x1fffffeU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						    >> 7U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3800000U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				   << 0x17U)) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						 >> 9U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__5__KET____DOT__src_2_encoder__102(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__5__KET____DOT__src_2_encoder__102\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[2U] 
		     << 0x1dU) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				  >> 3U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xe0000000U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				    << 0x1dU)) | (0x1ffffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						     >> 3U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x38000000U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				    << 0x1bU)) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						  >> 5U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x38000000U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				    << 0x1bU)) | (0x7fffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						     >> 5U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xe000000U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				   << 0x19U)) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						 >> 7U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xe000000U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				   << 0x19U)) | (0x1fffffeU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						    >> 7U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3800000U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				   << 0x17U)) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						 >> 9U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__6__KET____DOT__src_1_encoder__71(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__6__KET____DOT__src_1_encoder__71\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[2U] 
		     << 0x16U) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				  >> 0xaU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffc00000U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				    << 0x16U)) | (0x3ffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						     >> 0xaU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ff00000U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				    << 0x14U)) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						  >> 0xcU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ff00000U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				    << 0x14U)) | (0xffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						     >> 0xcU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xffc0000U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				   << 0x12U)) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						 >> 0xeU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffc0000U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				   << 0x12U)) | (0x3fffeU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						    >> 0xeU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ff0000U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				   << 0x10U)) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						 >> 0x10U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__6__KET____DOT__src_2_encoder__103(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__6__KET____DOT__src_2_encoder__103\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[2U] 
		     << 0x16U) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				  >> 0xaU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffc00000U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				    << 0x16U)) | (0x3ffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						     >> 0xaU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ff00000U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				    << 0x14U)) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						  >> 0xcU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ff00000U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				    << 0x14U)) | (0xffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						     >> 0xcU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xffc0000U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				   << 0x12U)) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						 >> 0xeU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffc0000U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				   << 0x12U)) | (0x3fffeU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						    >> 0xeU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ff0000U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				   << 0x10U)) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						 >> 0x10U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__7__KET____DOT__src_1_encoder__72(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__7__KET____DOT__src_1_encoder__72\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[2U] 
		     << 0xfU) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
				 >> 0x11U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffff8000U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				    << 0xfU)) | (0x7ffeU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						    >> 0x11U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffe000U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				    << 0xdU)) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						 >> 0x13U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fffe000U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				    << 0xdU)) | (0x1ffeU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						    >> 0x13U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xffff800U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				   << 0xbU)) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						>> 0x15U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffff800U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				   << 0xbU)) | (0x7feU 
						& (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						   >> 0x15U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffe00U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				   << 9U)) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
					      >> 0x17U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__7__KET____DOT__src_2_encoder__104(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__7__KET____DOT__src_2_encoder__104\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[2U] 
		     << 0xfU) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
				 >> 0x11U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffff8000U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				    << 0xfU)) | (0x7ffeU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						    >> 0x11U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffe000U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				    << 0xdU)) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						 >> 0x13U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fffe000U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				    << 0xdU)) | (0x1ffeU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						    >> 0x13U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xffff800U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				   << 0xbU)) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						>> 0x15U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffff800U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				   << 0xbU)) | (0x7feU 
						& (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						   >> 0x15U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffe00U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				   << 9U)) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
					      >> 0x17U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__8__KET____DOT__src_1_encoder__73(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__8__KET____DOT__src_1_encoder__73\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[2U] 
		     << 8U) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
			       >> 0x18U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffffff00U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				    << 8U)) | (0xfeU 
					       & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						  >> 0x18U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffffc0U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				    << 6U)) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
					       >> 0x1aU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fffffc0U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				    << 6U)) | (0x3eU 
					       & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						  >> 0x1aU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xffffff0U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				   << 4U)) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
					      >> 0x1cU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffffff0U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				   << 4U)) | (0xeU 
					      & (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
						 >> 0x1cU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffffcU & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				   << 2U)) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
					      >> 0x1eU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__8__KET____DOT__src_2_encoder__105(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__8__KET____DOT__src_2_encoder__105\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[2U] 
		     << 8U) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
			       >> 0x18U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffffff00U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				    << 8U)) | (0xfeU 
					       & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						  >> 0x18U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffffc0U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				    << 6U)) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
					       >> 0x1aU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fffffc0U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				    << 6U)) | (0x3eU 
					       & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						  >> 0x1aU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xffffff0U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				   << 4U)) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
					      >> 0x1cU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffffff0U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				   << 4U)) | (0xeU 
					      & (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
						 >> 0x1cU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffffcU & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				   << 2U)) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
					      >> 0x1eU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__9__KET____DOT__src_1_encoder__74(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__9__KET____DOT__src_1_encoder__74\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[2U] 
		     << 1U) | (vlTOPp->issue_table__DOT__src1_tag_match[1U] 
			       >> 0x1fU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
		    << 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
		    >> 3U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
		    >> 3U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
		    >> 5U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__9__KET____DOT__src_2_encoder__106(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__9__KET____DOT__src_2_encoder__106\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[2U] 
		     << 1U) | (vlTOPp->issue_table__DOT__src2_tag_match[1U] 
			       >> 0x1fU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
		    << 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
		    >> 3U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
		    >> 3U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
		    >> 5U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__10__KET____DOT__src_1_encoder__75(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__10__KET____DOT__src_1_encoder__75\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[3U] 
		     << 0x1aU) | (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				  >> 6U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfc000000U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				    << 0x1aU)) | (0x3fffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						     >> 6U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3f000000U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				    << 0x18U)) | (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						  >> 8U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3f000000U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				    << 0x18U)) | (0xfffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						     >> 8U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfc00000U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				   << 0x16U)) | (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						 >> 0xaU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfc00000U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				   << 0x16U)) | (0x3ffffeU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						    >> 0xaU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3f00000U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				   << 0x14U)) | (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						 >> 0xcU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__10__KET____DOT__src_2_encoder__107(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__10__KET____DOT__src_2_encoder__107\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[3U] 
		     << 0x1aU) | (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				  >> 6U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfc000000U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				    << 0x1aU)) | (0x3fffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						     >> 6U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3f000000U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				    << 0x18U)) | (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						  >> 8U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3f000000U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				    << 0x18U)) | (0xfffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						     >> 8U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfc00000U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				   << 0x16U)) | (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						 >> 0xaU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfc00000U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				   << 0x16U)) | (0x3ffffeU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						    >> 0xaU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3f00000U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				   << 0x14U)) | (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						 >> 0xcU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__11__KET____DOT__src_1_encoder__76(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__11__KET____DOT__src_1_encoder__76\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[3U] 
		     << 0x13U) | (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				  >> 0xdU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfff80000U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				    << 0x13U)) | (0x7fffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						     >> 0xdU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffe0000U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				    << 0x11U)) | (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						  >> 0xfU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ffe0000U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				    << 0x11U)) | (0x1fffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						     >> 0xfU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfff8000U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				   << 0xfU)) | (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						>> 0x11U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfff8000U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				   << 0xfU)) | (0x7ffeU 
						& (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						   >> 0x11U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffe000U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				   << 0xdU)) | (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						>> 0x13U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__11__KET____DOT__src_2_encoder__108(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__11__KET____DOT__src_2_encoder__108\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[3U] 
		     << 0x13U) | (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				  >> 0xdU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfff80000U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				    << 0x13U)) | (0x7fffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						     >> 0xdU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffe0000U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				    << 0x11U)) | (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						  >> 0xfU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ffe0000U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				    << 0x11U)) | (0x1fffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						     >> 0xfU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfff8000U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				   << 0xfU)) | (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						>> 0x11U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfff8000U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				   << 0xfU)) | (0x7ffeU 
						& (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						   >> 0x11U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffe000U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				   << 0xdU)) | (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						>> 0x13U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__12__KET____DOT__src_1_encoder__77(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__12__KET____DOT__src_1_encoder__77\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[3U] 
		     << 0xcU) | (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
				 >> 0x14U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffff000U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				    << 0xcU)) | (0xffeU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						    >> 0x14U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffffc00U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				    << 0xaU)) | (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						 >> 0x16U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ffffc00U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				    << 0xaU)) | (0x3feU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						    >> 0x16U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfffff00U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				   << 8U)) | (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
					      >> 0x18U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffff00U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				   << 8U)) | (0xfeU 
					      & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						 >> 0x18U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffffc0U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				   << 6U)) | (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
					      >> 0x1aU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__12__KET____DOT__src_2_encoder__109(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__12__KET____DOT__src_2_encoder__109\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[3U] 
		     << 0xcU) | (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
				 >> 0x14U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffff000U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				    << 0xcU)) | (0xffeU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						    >> 0x14U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffffc00U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				    << 0xaU)) | (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						 >> 0x16U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ffffc00U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				    << 0xaU)) | (0x3feU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						    >> 0x16U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfffff00U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				   << 8U)) | (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
					      >> 0x18U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffff00U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				   << 8U)) | (0xfeU 
					      & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						 >> 0x18U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffffc0U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				   << 6U)) | (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
					      >> 0x1aU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__13__KET____DOT__src_1_encoder__78(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__13__KET____DOT__src_1_encoder__78\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[3U] 
		     << 5U) | (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
			       >> 0x1bU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffffffe0U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				    << 5U)) | (0x1eU 
					       & (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						  >> 0x1bU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffffff8U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				    << 3U)) | (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
					       >> 0x1dU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ffffff8U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				    << 3U)) | (6U & 
					       (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
						>> 0x1dU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xffffffeU & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				   << 1U)) | (vlTOPp->issue_table__DOT__src1_tag_match[2U] 
					      >> 0x1fU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
		    << 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__13__KET____DOT__src_2_encoder__110(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__13__KET____DOT__src_2_encoder__110\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[3U] 
		     << 5U) | (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
			       >> 0x1bU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffffffe0U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				    << 5U)) | (0x1eU 
					       & (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						  >> 0x1bU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffffff8U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				    << 3U)) | (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
					       >> 0x1dU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ffffff8U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				    << 3U)) | (6U & 
					       (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
						>> 0x1dU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xffffffeU & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				   << 1U)) | (vlTOPp->issue_table__DOT__src2_tag_match[2U] 
					      >> 0x1fU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
		    << 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__14__KET____DOT__src_1_encoder__79(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__14__KET____DOT__src_1_encoder__79\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[4U] 
		     << 0x1eU) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				  >> 2U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xc0000000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				    << 0x1eU)) | (0x3ffffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						     >> 2U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x30000000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				    << 0x1cU)) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						  >> 4U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x30000000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				    << 0x1cU)) | (0xffffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						     >> 4U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xc000000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				   << 0x1aU)) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						 >> 6U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xc000000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				   << 0x1aU)) | (0x3fffffeU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						    >> 6U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3000000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				   << 0x18U)) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						 >> 8U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__14__KET____DOT__src_2_encoder__111(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__14__KET____DOT__src_2_encoder__111\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[4U] 
		     << 0x1eU) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				  >> 2U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xc0000000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				    << 0x1eU)) | (0x3ffffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						     >> 2U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x30000000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				    << 0x1cU)) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						  >> 4U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x30000000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				    << 0x1cU)) | (0xffffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						     >> 4U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xc000000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				   << 0x1aU)) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						 >> 6U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xc000000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				   << 0x1aU)) | (0x3fffffeU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						    >> 6U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3000000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				   << 0x18U)) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						 >> 8U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__15__KET____DOT__src_1_encoder__80(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__15__KET____DOT__src_1_encoder__80\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[4U] 
		     << 0x17U) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				  >> 9U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xff800000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				    << 0x17U)) | (0x7ffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						     >> 9U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fe00000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				    << 0x15U)) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						  >> 0xbU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fe00000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				    << 0x15U)) | (0x1ffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						     >> 0xbU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xff80000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				   << 0x13U)) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						 >> 0xdU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xff80000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				   << 0x13U)) | (0x7fffeU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						    >> 0xdU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fe0000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				   << 0x11U)) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						 >> 0xfU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__15__KET____DOT__src_2_encoder__112(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__15__KET____DOT__src_2_encoder__112\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[4U] 
		     << 0x17U) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				  >> 9U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xff800000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				    << 0x17U)) | (0x7ffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						     >> 9U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fe00000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				    << 0x15U)) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						  >> 0xbU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fe00000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				    << 0x15U)) | (0x1ffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						     >> 0xbU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xff80000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				   << 0x13U)) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						 >> 0xdU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xff80000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				   << 0x13U)) | (0x7fffeU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						    >> 0xdU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fe0000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				   << 0x11U)) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						 >> 0xfU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__16__KET____DOT__src_1_encoder__81(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__16__KET____DOT__src_1_encoder__81\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[4U] 
		     << 0x10U) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
				  >> 0x10U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffff0000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				    << 0x10U)) | (0xfffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						     >> 0x10U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffc000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				    << 0xeU)) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						 >> 0x12U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fffc000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				    << 0xeU)) | (0x3ffeU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						    >> 0x12U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xffff000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				   << 0xcU)) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						>> 0x14U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffff000U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				   << 0xcU)) | (0xffeU 
						& (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						   >> 0x14U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffc00U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				   << 0xaU)) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						>> 0x16U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__16__KET____DOT__src_2_encoder__113(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__16__KET____DOT__src_2_encoder__113\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[4U] 
		     << 0x10U) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
				  >> 0x10U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffff0000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				    << 0x10U)) | (0xfffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						     >> 0x10U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffc000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				    << 0xeU)) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						 >> 0x12U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fffc000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				    << 0xeU)) | (0x3ffeU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						    >> 0x12U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xffff000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				   << 0xcU)) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						>> 0x14U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffff000U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				   << 0xcU)) | (0xffeU 
						& (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						   >> 0x14U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffc00U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				   << 0xaU)) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						>> 0x16U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__17__KET____DOT__src_1_encoder__82(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__17__KET____DOT__src_1_encoder__82\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[4U] 
		     << 9U) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
			       >> 0x17U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffffe00U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				    << 9U)) | (0x1feU 
					       & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						  >> 0x17U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffff80U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				    << 7U)) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
					       >> 0x19U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fffff80U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				    << 7U)) | (0x7eU 
					       & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						  >> 0x19U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfffffe0U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				   << 5U)) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
					      >> 0x1bU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffffe0U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				   << 5U)) | (0x1eU 
					      & (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						 >> 0x1bU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffff8U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				   << 3U)) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
					      >> 0x1dU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__17__KET____DOT__src_2_encoder__114(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__17__KET____DOT__src_2_encoder__114\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[4U] 
		     << 9U) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
			       >> 0x17U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffffe00U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				    << 9U)) | (0x1feU 
					       & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						  >> 0x17U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffff80U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				    << 7U)) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
					       >> 0x19U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fffff80U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				    << 7U)) | (0x7eU 
					       & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						  >> 0x19U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfffffe0U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				   << 5U)) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
					      >> 0x1bU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffffe0U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				   << 5U)) | (0x1eU 
					      & (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						 >> 0x1bU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffff8U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				   << 3U)) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
					      >> 0x1dU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__18__KET____DOT__src_1_encoder__83(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__18__KET____DOT__src_1_encoder__83\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[4U] 
		     << 2U) | (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
			       >> 0x1eU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffffffcU & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				    << 2U)) | (2U & 
					       (vlTOPp->issue_table__DOT__src1_tag_match[3U] 
						>> 0x1eU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & vlTOPp->issue_table__DOT__src1_tag_match[4U]));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & vlTOPp->issue_table__DOT__src1_tag_match[4U]));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
		    >> 2U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
		    >> 2U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
		    >> 4U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__18__KET____DOT__src_2_encoder__115(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__18__KET____DOT__src_2_encoder__115\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[4U] 
		     << 2U) | (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
			       >> 0x1eU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffffffcU & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				    << 2U)) | (2U & 
					       (vlTOPp->issue_table__DOT__src2_tag_match[3U] 
						>> 0x1eU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & vlTOPp->issue_table__DOT__src2_tag_match[4U]));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & vlTOPp->issue_table__DOT__src2_tag_match[4U]));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
		    >> 2U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
		    >> 2U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
		    >> 4U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__19__KET____DOT__src_1_encoder__84(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__19__KET____DOT__src_1_encoder__84\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[5U] 
		     << 0x1bU) | (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				  >> 5U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xf8000000U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				    << 0x1bU)) | (0x7fffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						     >> 5U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3e000000U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				    << 0x19U)) | (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						  >> 7U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3e000000U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				    << 0x19U)) | (0x1fffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						     >> 7U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xf800000U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				   << 0x17U)) | (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						 >> 9U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xf800000U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				   << 0x17U)) | (0x7ffffeU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						    >> 9U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3e00000U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				   << 0x15U)) | (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						 >> 0xbU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__19__KET____DOT__src_2_encoder__116(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__19__KET____DOT__src_2_encoder__116\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[5U] 
		     << 0x1bU) | (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				  >> 5U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xf8000000U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				    << 0x1bU)) | (0x7fffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						     >> 5U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3e000000U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				    << 0x19U)) | (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						  >> 7U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3e000000U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				    << 0x19U)) | (0x1fffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						     >> 7U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xf800000U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				   << 0x17U)) | (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						 >> 9U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xf800000U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				   << 0x17U)) | (0x7ffffeU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						    >> 9U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3e00000U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				   << 0x15U)) | (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						 >> 0xbU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__20__KET____DOT__src_1_encoder__85(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__20__KET____DOT__src_1_encoder__85\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[5U] 
		     << 0x14U) | (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				  >> 0xcU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfff00000U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				    << 0x14U)) | (0xffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						     >> 0xcU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffc0000U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				    << 0x12U)) | (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						  >> 0xeU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ffc0000U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				    << 0x12U)) | (0x3fffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						     >> 0xeU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfff0000U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				   << 0x10U)) | (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						 >> 0x10U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfff0000U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				   << 0x10U)) | (0xfffeU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						    >> 0x10U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffc000U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				   << 0xeU)) | (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						>> 0x12U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__20__KET____DOT__src_2_encoder__117(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__20__KET____DOT__src_2_encoder__117\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[5U] 
		     << 0x14U) | (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				  >> 0xcU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfff00000U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				    << 0x14U)) | (0xffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						     >> 0xcU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffc0000U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				    << 0x12U)) | (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						  >> 0xeU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ffc0000U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				    << 0x12U)) | (0x3fffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						     >> 0xeU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfff0000U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				   << 0x10U)) | (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						 >> 0x10U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfff0000U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				   << 0x10U)) | (0xfffeU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						    >> 0x10U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffc000U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				   << 0xeU)) | (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						>> 0x12U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__21__KET____DOT__src_1_encoder__86(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__21__KET____DOT__src_1_encoder__86\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[5U] 
		     << 0xdU) | (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
				 >> 0x13U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffffe000U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				    << 0xdU)) | (0x1ffeU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						    >> 0x13U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffff800U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				    << 0xbU)) | (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						 >> 0x15U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ffff800U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				    << 0xbU)) | (0x7feU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						    >> 0x15U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xffffe00U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				   << 9U)) | (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
					      >> 0x17U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffffe00U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				   << 9U)) | (0x1feU 
					      & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						 >> 0x17U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffff80U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				   << 7U)) | (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
					      >> 0x19U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__21__KET____DOT__src_2_encoder__118(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__21__KET____DOT__src_2_encoder__118\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[5U] 
		     << 0xdU) | (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
				 >> 0x13U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffffe000U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				    << 0xdU)) | (0x1ffeU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						    >> 0x13U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffff800U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				    << 0xbU)) | (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						 >> 0x15U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ffff800U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				    << 0xbU)) | (0x7feU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						    >> 0x15U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xffffe00U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				   << 9U)) | (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
					      >> 0x17U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffffe00U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				   << 9U)) | (0x1feU 
					      & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						 >> 0x17U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffff80U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				   << 7U)) | (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
					      >> 0x19U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__22__KET____DOT__src_1_encoder__87(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__22__KET____DOT__src_1_encoder__87\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[5U] 
		     << 6U) | (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
			       >> 0x1aU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffffffc0U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				    << 6U)) | (0x3eU 
					       & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						  >> 0x1aU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffffff0U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				    << 4U)) | (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
					       >> 0x1cU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ffffff0U & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				    << 4U)) | (0xeU 
					       & (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
						  >> 0x1cU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xffffffcU & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				   << 2U)) | (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
					      >> 0x1eU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffffffcU & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				   << 2U)) | (2U & 
					      (vlTOPp->issue_table__DOT__src1_tag_match[4U] 
					       >> 0x1eU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & vlTOPp->issue_table__DOT__src1_tag_match[5U]));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__22__KET____DOT__src_2_encoder__119(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__22__KET____DOT__src_2_encoder__119\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[5U] 
		     << 6U) | (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
			       >> 0x1aU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffffffc0U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				    << 6U)) | (0x3eU 
					       & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						  >> 0x1aU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffffff0U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				    << 4U)) | (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
					       >> 0x1cU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3ffffff0U & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				    << 4U)) | (0xeU 
					       & (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
						  >> 0x1cU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xffffffcU & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				   << 2U)) | (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
					      >> 0x1eU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xffffffcU & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				   << 2U)) | (2U & 
					      (vlTOPp->issue_table__DOT__src2_tag_match[4U] 
					       >> 0x1eU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & vlTOPp->issue_table__DOT__src2_tag_match[5U]));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__23__KET____DOT__src_1_encoder__88(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__23__KET____DOT__src_1_encoder__88\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		     << 0x1fU) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				  >> 1U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x80000000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				    << 0x1fU)) | (0x7ffffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						     >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x20000000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				    << 0x1dU)) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						  >> 3U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x20000000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				    << 0x1dU)) | (0x1ffffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						     >> 3U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x8000000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				   << 0x1bU)) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						 >> 5U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x8000000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				   << 0x1bU)) | (0x7fffffeU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						    >> 5U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x2000000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				   << 0x19U)) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						 >> 7U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__23__KET____DOT__src_2_encoder__120(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__23__KET____DOT__src_2_encoder__120\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		     << 0x1fU) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				  >> 1U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x80000000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				    << 0x1fU)) | (0x7ffffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						     >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x20000000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				    << 0x1dU)) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						  >> 3U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x20000000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				    << 0x1dU)) | (0x1ffffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						     >> 3U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x8000000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				   << 0x1bU)) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						 >> 5U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x8000000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				   << 0x1bU)) | (0x7fffffeU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						    >> 5U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x2000000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				   << 0x19U)) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						 >> 7U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__24__KET____DOT__src_1_encoder__89(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__24__KET____DOT__src_1_encoder__89\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		     << 0x18U) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				  >> 8U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xff000000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				    << 0x18U)) | (0xfffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						     >> 8U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fc00000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				    << 0x16U)) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						  >> 0xaU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fc00000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				    << 0x16U)) | (0x3ffffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						     >> 0xaU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xff00000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				   << 0x14U)) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						 >> 0xcU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xff00000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				   << 0x14U)) | (0xffffeU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						    >> 0xcU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fc0000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				   << 0x12U)) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						 >> 0xeU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__24__KET____DOT__src_2_encoder__121(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__24__KET____DOT__src_2_encoder__121\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		     << 0x18U) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				  >> 8U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xff000000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				    << 0x18U)) | (0xfffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						     >> 8U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fc00000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				    << 0x16U)) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						  >> 0xaU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fc00000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				    << 0x16U)) | (0x3ffffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						     >> 0xaU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xff00000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				   << 0x14U)) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						 >> 0xcU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xff00000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				   << 0x14U)) | (0xffffeU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						    >> 0xcU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fc0000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				   << 0x12U)) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						 >> 0xeU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__25__KET____DOT__src_1_encoder__90(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__25__KET____DOT__src_1_encoder__90\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		     << 0x11U) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				  >> 0xfU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffe0000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				    << 0x11U)) | (0x1fffeU 
						  & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						     >> 0xfU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fff8000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				    << 0xfU)) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						 >> 0x11U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fff8000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				    << 0xfU)) | (0x7ffeU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						    >> 0x11U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfffe000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				   << 0xdU)) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						>> 0x13U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffe000U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				   << 0xdU)) | (0x1ffeU 
						& (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						   >> 0x13U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fff800U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				   << 0xbU)) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						>> 0x15U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__25__KET____DOT__src_2_encoder__122(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__25__KET____DOT__src_2_encoder__122\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		     << 0x11U) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				  >> 0xfU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffe0000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				    << 0x11U)) | (0x1fffeU 
						  & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						     >> 0xfU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fff8000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				    << 0xfU)) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						 >> 0x11U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fff8000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				    << 0xfU)) | (0x7ffeU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						    >> 0x11U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfffe000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				   << 0xdU)) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						>> 0x13U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffe000U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				   << 0xdU)) | (0x1ffeU 
						& (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						   >> 0x13U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fff800U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				   << 0xbU)) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						>> 0x15U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__26__KET____DOT__src_1_encoder__91(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__26__KET____DOT__src_1_encoder__91\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		     << 0xaU) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
				 >> 0x16U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffffc00U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				    << 0xaU)) | (0x3feU 
						 & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						    >> 0x16U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffff00U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				    << 8U)) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
					       >> 0x18U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fffff00U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				    << 8U)) | (0xfeU 
					       & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						  >> 0x18U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfffffc0U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				   << 6U)) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
					      >> 0x1aU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffffc0U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				   << 6U)) | (0x3eU 
					      & (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						 >> 0x1aU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffff0U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				   << 4U)) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
					      >> 0x1cU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__26__KET____DOT__src_2_encoder__123(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__26__KET____DOT__src_2_encoder__123\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		     << 0xaU) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
				 >> 0x16U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffffc00U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				    << 0xaU)) | (0x3feU 
						 & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						    >> 0x16U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffff00U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				    << 8U)) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
					       >> 0x18U))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0x3fffff00U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				    << 8U)) | (0xfeU 
					       & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						  >> 0x18U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0xfffffc0U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				   << 6U)) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
					      >> 0x1aU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffffc0U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				   << 6U)) | (0x3eU 
					      & (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						 >> 0x1aU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3fffff0U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				   << 4U)) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
					      >> 0x1cU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__27__KET____DOT__src_1_encoder__92(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__27__KET____DOT__src_1_encoder__92\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		     << 3U) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
			       >> 0x1dU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffffff8U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				    << 3U)) | (6U & 
					       (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
						>> 0x1dU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffffffeU & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
				    << 1U)) | (vlTOPp->issue_table__DOT__src1_tag_match[5U] 
					       >> 0x1fU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    << 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 3U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__27__KET____DOT__src_2_encoder__124(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__27__KET____DOT__src_2_encoder__124\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		     << 3U) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
			       >> 0x1dU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & ((0xfffffff8U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				    << 3U)) | (6U & 
					       (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
						>> 0x1dU)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & ((0x3ffffffeU & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
				    << 1U)) | (vlTOPp->issue_table__DOT__src2_tag_match[5U] 
					       >> 0x1fU))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    << 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 3U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__28__KET____DOT__src_1_encoder__93(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__28__KET____DOT__src_1_encoder__93\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 4U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 4U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 6U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 6U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 8U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 8U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0xaU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__28__KET____DOT__src_2_encoder__125(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__28__KET____DOT__src_2_encoder__125\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 4U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 4U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 6U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 6U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 8U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 8U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0xaU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__29__KET____DOT__src_1_encoder__94(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__29__KET____DOT__src_1_encoder__94\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0xbU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0xbU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0xdU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0xdU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0xfU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0xfU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0x11U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__29__KET____DOT__src_2_encoder__126(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__29__KET____DOT__src_2_encoder__126\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0xbU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0xbU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0xdU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0xdU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0xfU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0xfU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0x11U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__30__KET____DOT__src_1_encoder__95(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__30__KET____DOT__src_1_encoder__95\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0x12U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0x12U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0x14U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0x14U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0x16U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0x16U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0x18U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__30__KET____DOT__src_2_encoder__127(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__30__KET____DOT__src_2_encoder__127\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0x12U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0x12U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0x14U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0x14U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0x16U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0x16U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0x18U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__31__KET____DOT__src_1_encoder__96(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__31__KET____DOT__src_1_encoder__96\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0x19U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0x19U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0x1bU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0x1bU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0x1dU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0x1dU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src1_tag_match[6U] 
		    >> 0x1fU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

VL_INLINE_OPT void Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__31__KET____DOT__src_2_encoder__128(Vissue_table__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_settle__TOP__issue_table__DOT__src_tag_match_encode__BRA__31__KET____DOT__src_2_encoder__128\n"); );
    Vissue_table* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0x19U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0x19U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0x1bU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0x1bU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0x1dU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (2U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0x1dU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (1U & (vlTOPp->issue_table__DOT__src2_tag_match[6U] 
		    >> 0x1fU)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= (1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs) 
		    >> 1U)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | (2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((0xcU & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)) 
	      | (1U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
		       | ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs) 
			  >> 1U)))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((2U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | (0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs)));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs 
	= ((3U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs)) 
	   | ((8U & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs) 
		     << 2U)) | (4U & (((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
				       << 2U) | (0xfffffffcU 
						 & ((IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs) 
						    << 1U))))));
    this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs 
	= ((1U & (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs)) 
	   | ((IData)((0U != (IData)(this->__PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs))) 
	      << 1U));
}

void Vissue_table_bsg_encode_one_hot__W7::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vissue_table_bsg_encode_one_hot__W7::_ctor_var_reset\n"); );
    // Body
    i = VL_RAND_RESET_I(7);
    addr_o = VL_RAND_RESET_I(3);
    v_o = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__addrs = VL_RAND_RESET_I(4);
    __PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__vs = VL_RAND_RESET_I(2);
    __PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs = VL_RAND_RESET_I(2);
    __PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs = VL_RAND_RESET_I(2);
    __PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs = VL_RAND_RESET_I(2);
    __PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs = VL_RAND_RESET_I(2);
    __PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs = VL_RAND_RESET_I(2);
    __PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs = VL_RAND_RESET_I(2);
    __PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs = VL_RAND_RESET_I(2);
    __PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs = VL_RAND_RESET_I(2);
    __PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__addrs = VL_RAND_RESET_I(2);
    __PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__left__DOT__genblk1__DOT__aligned__DOT__vs = VL_RAND_RESET_I(2);
    __PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__addrs = VL_RAND_RESET_I(2);
    __PVT__genblk1__DOT__unaligned__DOT__align__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__right__DOT__genblk1__DOT__aligned__DOT__vs = VL_RAND_RESET_I(2);
}
