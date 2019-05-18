// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrotate_left__Syms.h"


//======================

void Vrotate_left::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vrotate_left::traceInit, &Vrotate_left::traceFull, &Vrotate_left::traceChg, this);
}
void Vrotate_left::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vrotate_left* t=(Vrotate_left*)userthis;
    Vrotate_left__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vrotate_left::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vrotate_left* t=(Vrotate_left*)userthis;
    Vrotate_left__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vrotate_left::traceInitThis(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vrotate_left::traceFullThis(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vrotate_left::traceInitThis__1(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+49,"clk_i",-1);
	vcdp->declBit  (c+50,"reset_i",-1);
	vcdp->declBit  (c+51,"rob_sb_valid_i",-1);
	vcdp->declBit  (c+52,"rob_mispredict_i",-1);
	vcdp->declBit  (c+53,"issue_sb_v_i",-1);
	vcdp->declBus  (c+54,"sb_issue_entry_num_o",-1,3,0);
	vcdp->declBit  (c+55,"sb_issue_ready_o",-1);
	vcdp->declBit  (c+56,"exe_sb_v_i",-1);
	vcdp->declQuad (c+57,"exe_sb_i",-1,35,0);
	vcdp->declBus  (c+59,"exe_ld_bypass_addr_i",-1,15,0);
	vcdp->declBus  (c+60,"exe_ld_pass_sb_num_i",-1,3,0);
	vcdp->declBit  (c+61,"sb_ld_pass_valid_o",-1);
	vcdp->declBus  (c+62,"sb_ld_pass_value_o",-1,15,0);
	vcdp->declBit  (c+63,"sb_mem_v_o",-1);
	vcdp->declBus  (c+64,"sb_mem_addr_o",-1,15,0);
	vcdp->declBus  (c+65,"sb_mem_data_o",-1,15,0);
	vcdp->declBit  (c+49,"store_buffer clk_i",-1);
	vcdp->declBit  (c+50,"store_buffer reset_i",-1);
	vcdp->declBit  (c+51,"store_buffer rob_sb_valid_i",-1);
	vcdp->declBit  (c+52,"store_buffer rob_mispredict_i",-1);
	vcdp->declBit  (c+53,"store_buffer issue_sb_v_i",-1);
	vcdp->declBus  (c+54,"store_buffer sb_issue_entry_num_o",-1,3,0);
	vcdp->declBit  (c+55,"store_buffer sb_issue_ready_o",-1);
	vcdp->declBit  (c+56,"store_buffer exe_sb_v_i",-1);
	vcdp->declQuad (c+57,"store_buffer exe_sb_i",-1,35,0);
	vcdp->declBus  (c+59,"store_buffer exe_ld_bypass_addr_i",-1,15,0);
	vcdp->declBus  (c+60,"store_buffer exe_ld_pass_sb_num_i",-1,3,0);
	vcdp->declBit  (c+61,"store_buffer sb_ld_pass_valid_o",-1);
	vcdp->declBus  (c+62,"store_buffer sb_ld_pass_value_o",-1,15,0);
	vcdp->declBit  (c+63,"store_buffer sb_mem_v_o",-1);
	vcdp->declBus  (c+64,"store_buffer sb_mem_addr_o",-1,15,0);
	vcdp->declBus  (c+65,"store_buffer sb_mem_data_o",-1,15,0);
	vcdp->declArray(c+4,"store_buffer sb_n",-1,527,0);
	vcdp->declArray(c+29,"store_buffer sb_q",-1,527,0);
	vcdp->declBus  (c+46,"store_buffer sb_alloc_pt",-1,3,0);
	vcdp->declBus  (c+21,"store_buffer sb_alloc_pt_n",-1,3,0);
	vcdp->declBus  (c+47,"store_buffer sb_commit_pt",-1,3,0);
	vcdp->declBus  (c+22,"store_buffer sb_commit_pt_n",-1,3,0);
	vcdp->declBus  (c+48,"store_buffer sb_num",-1,4,0);
	vcdp->declBus  (c+23,"store_buffer sb_num_n",-1,4,0);
	vcdp->declQuad (c+57,"store_buffer cdb",-1,35,0);
	vcdp->declBit  (c+24,"store_buffer address_match",-1);
	vcdp->declBus  (c+1,"store_buffer data_match",-1,15,0);
	vcdp->declBus  (c+25,"store_buffer match_vector",-1,15,0);
	vcdp->declBus  (c+2,"store_buffer trimed_match_vector",-1,15,0);
	vcdp->declBus  (c+26,"store_buffer trimed_sb_num",-1,3,0);
	vcdp->declBus  (c+27,"store_buffer matched_trimed_sb_num",-1,3,0);
	vcdp->declBus  (c+28,"store_buffer matched_sb_num",-1,3,0);
	vcdp->declBus  (c+66,"store_buffer unnamedblk1 i",-1,31,0);
	vcdp->declBus  (c+67,"store_buffer shifter width_p",-1,31,0);
	vcdp->declBus  (c+25,"store_buffer shifter data_i",-1,15,0);
	vcdp->declBus  (c+47,"store_buffer shifter rot_i",-1,3,0);
	vcdp->declBus  (c+2,"store_buffer shifter o",-1,15,0);
	vcdp->declBus  (c+3,"store_buffer shifter temp",-1,31,0);
	vcdp->declBus  (c+68,"$unit I_ROM_DEPTH_P",-1,31,0);
	vcdp->declBus  (c+67,"$unit WORD_SIZE_P",-1,31,0);
	vcdp->declBus  (c+69,"$unit NUM_FLAGS",-1,31,0);
	vcdp->declBus  (c+67,"$unit NUM_ARCH_REG",-1,31,0);
	vcdp->declBus  (c+70,"$unit NUM_ARCH_DEST_REG",-1,31,0);
	vcdp->declBus  (c+70,"$unit NUM_ARCH_SRC1_REG",-1,31,0);
	vcdp->declBus  (c+71,"$unit BRANCH_CC_NUM",-1,31,0);
	vcdp->declBus  (c+72,"$unit NUM_FU",-1,31,0);
	vcdp->declBus  (c+73,"$unit WIDTH_FU",-1,31,0);
	vcdp->declBus  (c+70,"$unit INSTRUCTION_OP_NUM",-1,31,0);
	vcdp->declBus  (c+73,"$unit WIDTH_OP",-1,31,0);
	vcdp->declBus  (c+73,"$unit c",-1,31,0);
	vcdp->declBus  (c+74,"$unit n",-1,31,0);
	vcdp->declBus  (c+75,"$unit z",-1,31,0);
	vcdp->declBus  (c+76,"$unit v",-1,31,0);
	vcdp->declBus  (c+77,"$unit DECODED_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus  (c+78,"$unit NUM_PHYS_REG",-1,31,0);
	vcdp->declBus  (c+79,"$unit RENAMED_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus  (c+80,"$unit ROB_ENTRY",-1,31,0);
	vcdp->declBus  (c+67,"$unit SB_ENTRY",-1,31,0);
	vcdp->declBus  (c+81,"$unit ROB_WIDTH",-1,31,0);
	vcdp->declBus  (c+82,"$unit STORE_BUFFER_WIDTH",-1,31,0);
	vcdp->declBus  (c+81,"$unit RENAME_ROB_ENTRY_WIDTH",-1,31,0);
	vcdp->declBus  (c+83,"$unit ROB_WB_WIDTH",-1,31,0);
	vcdp->declBus  (c+84,"$unit CDB_SB_WIDTH",-1,31,0);
	vcdp->declBus  (c+85,"$unit CDB_WIDTH",-1,31,0);
    }
}

void Vrotate_left::traceFullThis__1(Vrotate_left__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrotate_left* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,((0xffffU & ((0x20fU >= 
					  (0x3ffU & 
					   ((IData)(0x21U) 
					    * (IData)(vlTOPp->store_buffer__DOT__matched_sb_num))))
					  ? (((0U == 
					       (0x1fU 
						& ((IData)(0x21U) 
						   * (IData)(vlTOPp->store_buffer__DOT__matched_sb_num))))
					       ? 0U
					       : (vlTOPp->store_buffer__DOT__sb_q[
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
					  : 0U))),16);
	vcdp->fullBus  (c+2,((0xffffU & (((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
					    << 0x10U) 
					   | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
					  << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt)) 
					 >> 0x10U))),16);
	vcdp->fullBus  (c+3,(((((IData)(vlTOPp->store_buffer__DOT__match_vector) 
				<< 0x10U) | (IData)(vlTOPp->store_buffer__DOT__match_vector)) 
			      << (IData)(vlTOPp->store_buffer__DOT__sb_commit_pt))),32);
	vcdp->fullArray(c+4,(vlTOPp->store_buffer__DOT__sb_n),528);
	vcdp->fullBus  (c+21,(vlTOPp->store_buffer__DOT__sb_alloc_pt_n),4);
	vcdp->fullBus  (c+22,(vlTOPp->store_buffer__DOT__sb_commit_pt_n),4);
	vcdp->fullBus  (c+23,(vlTOPp->store_buffer__DOT__sb_num_n),5);
	vcdp->fullBit  (c+24,(vlTOPp->store_buffer__DOT__address_match));
	vcdp->fullBus  (c+25,(vlTOPp->store_buffer__DOT__match_vector),16);
	vcdp->fullBus  (c+26,(vlTOPp->store_buffer__DOT__trimed_sb_num),4);
	vcdp->fullBus  (c+27,(vlTOPp->store_buffer__DOT__matched_trimed_sb_num),4);
	vcdp->fullBus  (c+28,(vlTOPp->store_buffer__DOT__matched_sb_num),4);
	vcdp->fullArray(c+29,(vlTOPp->store_buffer__DOT__sb_q),528);
	vcdp->fullBus  (c+46,(vlTOPp->store_buffer__DOT__sb_alloc_pt),4);
	vcdp->fullBus  (c+47,(vlTOPp->store_buffer__DOT__sb_commit_pt),4);
	vcdp->fullBus  (c+48,(vlTOPp->store_buffer__DOT__sb_num),5);
	vcdp->fullBit  (c+49,(vlTOPp->clk_i));
	vcdp->fullBit  (c+50,(vlTOPp->reset_i));
	vcdp->fullBit  (c+51,(vlTOPp->rob_sb_valid_i));
	vcdp->fullBit  (c+52,(vlTOPp->rob_mispredict_i));
	vcdp->fullBit  (c+53,(vlTOPp->issue_sb_v_i));
	vcdp->fullBus  (c+54,(vlTOPp->sb_issue_entry_num_o),4);
	vcdp->fullBit  (c+55,(vlTOPp->sb_issue_ready_o));
	vcdp->fullBit  (c+56,(vlTOPp->exe_sb_v_i));
	vcdp->fullQuad (c+57,(vlTOPp->exe_sb_i),36);
	vcdp->fullBus  (c+59,(vlTOPp->exe_ld_bypass_addr_i),16);
	vcdp->fullBus  (c+60,(vlTOPp->exe_ld_pass_sb_num_i),4);
	vcdp->fullBit  (c+61,(vlTOPp->sb_ld_pass_valid_o));
	vcdp->fullBus  (c+62,(vlTOPp->sb_ld_pass_value_o),16);
	vcdp->fullBit  (c+63,(vlTOPp->sb_mem_v_o));
	vcdp->fullBus  (c+64,(vlTOPp->sb_mem_addr_o),16);
	vcdp->fullBus  (c+65,(vlTOPp->sb_mem_data_o),16);
	vcdp->fullBus  (c+66,(0x10U),32);
	vcdp->fullBus  (c+67,(0x10U),32);
	vcdp->fullBus  (c+68,(0x10000U),32);
	vcdp->fullBus  (c+69,(4U),32);
	vcdp->fullBus  (c+70,(8U),32);
	vcdp->fullBus  (c+71,(0xfU),32);
	vcdp->fullBus  (c+72,(7U),32);
	vcdp->fullBus  (c+73,(3U),32);
	vcdp->fullBus  (c+74,(2U),32);
	vcdp->fullBus  (c+75,(1U),32);
	vcdp->fullBus  (c+76,(0U),32);
	vcdp->fullBus  (c+77,(0x39U),32);
	vcdp->fullBus  (c+78,(0x80U),32);
	vcdp->fullBus  (c+79,(0x4aU),32);
	vcdp->fullBus  (c+80,(0x40U),32);
	vcdp->fullBus  (c+81,(0x3dU),32);
	vcdp->fullBus  (c+82,(0x21U),32);
	vcdp->fullBus  (c+83,(0x22U),32);
	vcdp->fullBus  (c+84,(0x24U),32);
	vcdp->fullBus  (c+85,(0x1cU),32);
    }
}
