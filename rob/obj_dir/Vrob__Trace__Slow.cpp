// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrob__Syms.h"


//======================

void Vrob::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vrob::traceInit, &Vrob::traceFull, &Vrob::traceChg, this);
}
void Vrob::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vrob* t=(Vrob*)userthis;
    Vrob__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vrob::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vrob* t=(Vrob*)userthis;
    Vrob__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vrob::traceInitThis(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vrob::traceFullThis(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vrob::traceInitThis__1(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+89,"clk_i",-1);
	vcdp->declBit  (c+90,"reset_i",-1);
	vcdp->declArray(c+91,"cdb_i",-1,279,0);
	vcdp->declBit  (c+100,"issue_rob_valid_i",-1);
	vcdp->declQuad (c+101,"issue_rob_entry_i",-1,32,0);
	vcdp->declBus  (c+103,"rob_num_o",-1,5,0);
	vcdp->declBit  (c+104,"rob_ready_o",-1);
	vcdp->declBit  (c+105,"rob_phys_valid_o",-1);
	vcdp->declBus  (c+106,"rob_phys_reg_cl_o",-1,6,0);
	vcdp->declBit  (c+107,"rob_sb_valid_o",-1);
	vcdp->declBit  (c+108,"sb_rob_ready_o",-1);
	vcdp->declBit  (c+89,"rob clk_i",-1);
	vcdp->declBit  (c+90,"rob reset_i",-1);
	vcdp->declArray(c+91,"rob cdb_i",-1,279,0);
	vcdp->declBit  (c+100,"rob issue_rob_valid_i",-1);
	vcdp->declQuad (c+101,"rob issue_rob_entry_i",-1,32,0);
	vcdp->declBus  (c+103,"rob rob_num_o",-1,5,0);
	vcdp->declBit  (c+104,"rob rob_ready_o",-1);
	vcdp->declBit  (c+105,"rob rob_phys_valid_o",-1);
	vcdp->declBus  (c+106,"rob rob_phys_reg_cl_o",-1,6,0);
	vcdp->declBit  (c+107,"rob rob_sb_valid_o",-1);
	vcdp->declBit  (c+108,"rob sb_rob_ready_o",-1);
	vcdp->declArray(c+1,"rob rob",-1,2751,0);
	vcdp->declArray(c+109,"rob rob_n",-1,2751,0);
	vcdp->declBus  (c+87,"rob rob_alloc_pt",-1,5,0);
	vcdp->declBus  (c+195,"rob rob_alloc_pt_n",-1,5,0);
	vcdp->declBus  (c+88,"rob rob_commit_pt",-1,5,0);
	vcdp->declBus  (c+196,"rob rob_commit_pt_n",-1,5,0);
	vcdp->declBus  (c+197,"$unit I_ROM_DEPTH_P",-1,31,0);
	vcdp->declBus  (c+198,"$unit WORD_SIZE_P",-1,31,0);
	vcdp->declBus  (c+199,"$unit NUM_FLAGS",-1,31,0);
	vcdp->declBus  (c+198,"$unit NUM_ARCH_REG",-1,31,0);
	vcdp->declBus  (c+200,"$unit NUM_ARCH_DEST_REG",-1,31,0);
	vcdp->declBus  (c+200,"$unit NUM_ARCH_SRC1_REG",-1,31,0);
	vcdp->declBus  (c+201,"$unit BRANCH_CC_NUM",-1,31,0);
	vcdp->declBus  (c+202,"$unit NUM_FU",-1,31,0);
	vcdp->declBus  (c+203,"$unit WIDTH_FU",-1,31,0);
	vcdp->declBus  (c+200,"$unit INSTRUCTION_OP_NUM",-1,31,0);
	vcdp->declBus  (c+204,"$unit DECODED_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus  (c+205,"$unit NUM_PHYS_REG",-1,31,0);
	vcdp->declBus  (c+206,"$unit RENAMED_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus  (c+207,"$unit ROB_ENTRY",-1,31,0);
	vcdp->declBus  (c+208,"$unit ROB_WIDTH",-1,31,0);
	vcdp->declBus  (c+209,"$unit ROB_MEM_WIDTH",-1,31,0);
	vcdp->declBus  (c+209,"$unit ISSUE_ENTRY_WIDTH",-1,31,0);
	vcdp->declBus  (c+210,"$unit CDB_WIDTH",-1,31,0);
    }
}

void Vrob::traceFullThis__1(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullArray(c+1,(vlTOPp->rob__DOT__rob),2752);
	vcdp->fullBus  (c+87,(vlTOPp->rob__DOT__rob_alloc_pt),6);
	vcdp->fullBus  (c+88,(vlTOPp->rob__DOT__rob_commit_pt),6);
	vcdp->fullBit  (c+89,(vlTOPp->clk_i));
	vcdp->fullBit  (c+90,(vlTOPp->reset_i));
	vcdp->fullArray(c+91,(vlTOPp->cdb_i),280);
	vcdp->fullBit  (c+100,(vlTOPp->issue_rob_valid_i));
	vcdp->fullQuad (c+101,(vlTOPp->issue_rob_entry_i),33);
	vcdp->fullBus  (c+103,(vlTOPp->rob_num_o),6);
	vcdp->fullBit  (c+104,(vlTOPp->rob_ready_o));
	vcdp->fullBit  (c+105,(vlTOPp->rob_phys_valid_o));
	vcdp->fullBus  (c+106,(vlTOPp->rob_phys_reg_cl_o),7);
	vcdp->fullBit  (c+107,(vlTOPp->rob_sb_valid_o));
	vcdp->fullBit  (c+108,(vlTOPp->sb_rob_ready_o));
	vcdp->fullArray(c+109,(vlTOPp->rob__DOT__rob_n),2752);
	vcdp->fullBus  (c+195,(vlTOPp->rob__DOT__rob_alloc_pt_n),6);
	vcdp->fullBus  (c+196,(vlTOPp->rob__DOT__rob_commit_pt_n),6);
	vcdp->fullBus  (c+197,(0x10000U),32);
	vcdp->fullBus  (c+198,(0x10U),32);
	vcdp->fullBus  (c+199,(4U),32);
	vcdp->fullBus  (c+200,(8U),32);
	vcdp->fullBus  (c+201,(0xfU),32);
	vcdp->fullBus  (c+202,(7U),32);
	vcdp->fullBus  (c+203,(3U),32);
	vcdp->fullBus  (c+204,(0x39U),32);
	vcdp->fullBus  (c+205,(0x80U),32);
	vcdp->fullBus  (c+206,(0x4aU),32);
	vcdp->fullBus  (c+207,(0x40U),32);
	vcdp->fullBus  (c+208,(0x2bU),32);
	vcdp->fullBus  (c+209,(0x21U),32);
	vcdp->fullBus  (c+210,(0x28U),32);
    }
}
