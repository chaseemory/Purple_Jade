// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vstore_buffer__Syms.h"


//======================

void Vstore_buffer::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vstore_buffer::traceInit, &Vstore_buffer::traceFull, &Vstore_buffer::traceChg, this);
}
void Vstore_buffer::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vstore_buffer* t=(Vstore_buffer*)userthis;
    Vstore_buffer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vstore_buffer::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vstore_buffer* t=(Vstore_buffer*)userthis;
    Vstore_buffer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vstore_buffer::traceInitThis(Vstore_buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vstore_buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vstore_buffer::traceFullThis(Vstore_buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vstore_buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vstore_buffer::traceInitThis__1(Vstore_buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vstore_buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+43,"clk_i",-1);
	vcdp->declBit  (c+44,"reset_i",-1);
	vcdp->declBit  (c+45,"rob_sb_valid_i",-1);
	vcdp->declBit  (c+46,"rob_mispredict_i",-1);
	vcdp->declBit  (c+47,"issue_sb_v_i",-1);
	vcdp->declBus  (c+48,"sb_issue_entry_num_o",-1,3,0);
	vcdp->declBit  (c+49,"sb_issue_ready_o",-1);
	vcdp->declBit  (c+50,"exe_sb_v_i",-1);
	vcdp->declQuad (c+51,"exe_sb_i",-1,35,0);
	vcdp->declBus  (c+53,"exe_ld_bypass_addr_i",-1,15,0);
	vcdp->declBit  (c+54,"sb_ld_pass_valid_o",-1);
	vcdp->declBus  (c+55,"sb_ld_pass_value_o",-1,15,0);
	vcdp->declBit  (c+56,"sb_mem_v_o",-1);
	vcdp->declBus  (c+57,"sb_mem_addr_o",-1,15,0);
	vcdp->declBus  (c+58,"sb_mem_data_o",-1,15,0);
	vcdp->declBit  (c+43,"store_buffer clk_i",-1);
	vcdp->declBit  (c+44,"store_buffer reset_i",-1);
	vcdp->declBit  (c+45,"store_buffer rob_sb_valid_i",-1);
	vcdp->declBit  (c+46,"store_buffer rob_mispredict_i",-1);
	vcdp->declBit  (c+47,"store_buffer issue_sb_v_i",-1);
	vcdp->declBus  (c+48,"store_buffer sb_issue_entry_num_o",-1,3,0);
	vcdp->declBit  (c+49,"store_buffer sb_issue_ready_o",-1);
	vcdp->declBit  (c+50,"store_buffer exe_sb_v_i",-1);
	vcdp->declQuad (c+51,"store_buffer exe_sb_i",-1,35,0);
	vcdp->declBus  (c+53,"store_buffer exe_ld_bypass_addr_i",-1,15,0);
	vcdp->declBit  (c+54,"store_buffer sb_ld_pass_valid_o",-1);
	vcdp->declBus  (c+55,"store_buffer sb_ld_pass_value_o",-1,15,0);
	vcdp->declBit  (c+56,"store_buffer sb_mem_v_o",-1);
	vcdp->declBus  (c+57,"store_buffer sb_mem_addr_o",-1,15,0);
	vcdp->declBus  (c+58,"store_buffer sb_mem_data_o",-1,15,0);
	vcdp->declArray(c+1,"store_buffer sb_n",-1,527,0);
	vcdp->declArray(c+23,"store_buffer sb_q",-1,527,0);
	vcdp->declBus  (c+40,"store_buffer sb_alloc_pt",-1,3,0);
	vcdp->declBus  (c+18,"store_buffer sb_alloc_pt_n",-1,3,0);
	vcdp->declBus  (c+41,"store_buffer sb_commit_pt",-1,3,0);
	vcdp->declBus  (c+19,"store_buffer sb_commit_pt_n",-1,3,0);
	vcdp->declBus  (c+42,"store_buffer sb_num",-1,4,0);
	vcdp->declBus  (c+20,"store_buffer sb_num_n",-1,4,0);
	vcdp->declQuad (c+51,"store_buffer cdb",-1,35,0);
	vcdp->declBit  (c+21,"store_buffer address_match",-1);
	vcdp->declBus  (c+22,"store_buffer data_match",-1,15,0);
	vcdp->declBus  (c+59,"store_buffer unnamedblk1 i",-1,31,0);
	vcdp->declBus  (c+60,"$unit I_ROM_DEPTH_P",-1,31,0);
	vcdp->declBus  (c+61,"$unit WORD_SIZE_P",-1,31,0);
	vcdp->declBus  (c+62,"$unit NUM_FLAGS",-1,31,0);
	vcdp->declBus  (c+61,"$unit NUM_ARCH_REG",-1,31,0);
	vcdp->declBus  (c+63,"$unit NUM_ARCH_DEST_REG",-1,31,0);
	vcdp->declBus  (c+63,"$unit NUM_ARCH_SRC1_REG",-1,31,0);
	vcdp->declBus  (c+64,"$unit BRANCH_CC_NUM",-1,31,0);
	vcdp->declBus  (c+65,"$unit NUM_FU",-1,31,0);
	vcdp->declBus  (c+66,"$unit WIDTH_FU",-1,31,0);
	vcdp->declBus  (c+63,"$unit INSTRUCTION_OP_NUM",-1,31,0);
	vcdp->declBus  (c+66,"$unit WIDTH_OP",-1,31,0);
	vcdp->declBus  (c+66,"$unit c",-1,31,0);
	vcdp->declBus  (c+67,"$unit n",-1,31,0);
	vcdp->declBus  (c+68,"$unit z",-1,31,0);
	vcdp->declBus  (c+69,"$unit v",-1,31,0);
	vcdp->declBus  (c+70,"$unit DECODED_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus  (c+71,"$unit NUM_PHYS_REG",-1,31,0);
	vcdp->declBus  (c+72,"$unit RENAMED_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus  (c+73,"$unit ROB_ENTRY",-1,31,0);
	vcdp->declBus  (c+61,"$unit SB_ENTRY",-1,31,0);
	vcdp->declBus  (c+74,"$unit ROB_WIDTH",-1,31,0);
	vcdp->declBus  (c+75,"$unit STORE_BUFFER_WIDTH",-1,31,0);
	vcdp->declBus  (c+74,"$unit RENAME_ROB_ENTRY_WIDTH",-1,31,0);
	vcdp->declBus  (c+76,"$unit ROB_WB_WIDTH",-1,31,0);
	vcdp->declBus  (c+77,"$unit CDB_SB_WIDTH",-1,31,0);
	vcdp->declBus  (c+78,"$unit CDB_WIDTH",-1,31,0);
    }
}

void Vstore_buffer::traceFullThis__1(Vstore_buffer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vstore_buffer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullArray(c+1,(vlTOPp->store_buffer__DOT__sb_n),528);
	vcdp->fullBus  (c+18,(vlTOPp->store_buffer__DOT__sb_alloc_pt_n),4);
	vcdp->fullBus  (c+19,(vlTOPp->store_buffer__DOT__sb_commit_pt_n),4);
	vcdp->fullBus  (c+20,(vlTOPp->store_buffer__DOT__sb_num_n),5);
	vcdp->fullBit  (c+21,(vlTOPp->store_buffer__DOT__address_match));
	vcdp->fullBus  (c+22,(vlTOPp->store_buffer__DOT__data_match),16);
	vcdp->fullArray(c+23,(vlTOPp->store_buffer__DOT__sb_q),528);
	vcdp->fullBus  (c+40,(vlTOPp->store_buffer__DOT__sb_alloc_pt),4);
	vcdp->fullBus  (c+41,(vlTOPp->store_buffer__DOT__sb_commit_pt),4);
	vcdp->fullBus  (c+42,(vlTOPp->store_buffer__DOT__sb_num),5);
	vcdp->fullBit  (c+43,(vlTOPp->clk_i));
	vcdp->fullBit  (c+44,(vlTOPp->reset_i));
	vcdp->fullBit  (c+45,(vlTOPp->rob_sb_valid_i));
	vcdp->fullBit  (c+46,(vlTOPp->rob_mispredict_i));
	vcdp->fullBit  (c+47,(vlTOPp->issue_sb_v_i));
	vcdp->fullBus  (c+48,(vlTOPp->sb_issue_entry_num_o),4);
	vcdp->fullBit  (c+49,(vlTOPp->sb_issue_ready_o));
	vcdp->fullBit  (c+50,(vlTOPp->exe_sb_v_i));
	vcdp->fullQuad (c+51,(vlTOPp->exe_sb_i),36);
	vcdp->fullBus  (c+53,(vlTOPp->exe_ld_bypass_addr_i),16);
	vcdp->fullBit  (c+54,(vlTOPp->sb_ld_pass_valid_o));
	vcdp->fullBus  (c+55,(vlTOPp->sb_ld_pass_value_o),16);
	vcdp->fullBit  (c+56,(vlTOPp->sb_mem_v_o));
	vcdp->fullBus  (c+57,(vlTOPp->sb_mem_addr_o),16);
	vcdp->fullBus  (c+58,(vlTOPp->sb_mem_data_o),16);
	vcdp->fullBus  (c+59,(0x10U),32);
	vcdp->fullBus  (c+60,(0x10000U),32);
	vcdp->fullBus  (c+61,(0x10U),32);
	vcdp->fullBus  (c+62,(4U),32);
	vcdp->fullBus  (c+63,(8U),32);
	vcdp->fullBus  (c+64,(0xfU),32);
	vcdp->fullBus  (c+65,(7U),32);
	vcdp->fullBus  (c+66,(3U),32);
	vcdp->fullBus  (c+67,(2U),32);
	vcdp->fullBus  (c+68,(1U),32);
	vcdp->fullBus  (c+69,(0U),32);
	vcdp->fullBus  (c+70,(0x39U),32);
	vcdp->fullBus  (c+71,(0x80U),32);
	vcdp->fullBus  (c+72,(0x4aU),32);
	vcdp->fullBus  (c+73,(0x40U),32);
	vcdp->fullBus  (c+74,(0x3dU),32);
	vcdp->fullBus  (c+75,(0x21U),32);
	vcdp->fullBus  (c+76,(0x22U),32);
	vcdp->fullBus  (c+77,(0x24U),32);
	vcdp->fullBus  (c+78,(0x1cU),32);
    }
}
