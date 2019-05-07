// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrename_stage__Syms.h"


//======================

void Vrename_stage::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vrename_stage::traceInit, &Vrename_stage::traceFull, &Vrename_stage::traceChg, this);
}
void Vrename_stage::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vrename_stage* t=(Vrename_stage*)userthis;
    Vrename_stage__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vrename_stage::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vrename_stage* t=(Vrename_stage*)userthis;
    Vrename_stage__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vrename_stage::traceInitThis(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vrename_stage::traceFullThis(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vrename_stage::traceInitThis__1(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+143,"clk_i",-1);
	vcdp->declBit  (c+144,"reset_i",-1);
	vcdp->declQuad (c+145,"decoded_i",-1,56,0);
	vcdp->declBit  (c+147,"decoded_v_i",-1);
	vcdp->declBit  (c+148,"rename_decode_ready_o",-1);
	vcdp->declArray(c+149,"renamed_o",-1,73,0);
	vcdp->declBit  (c+152,"renamed_v_o",-1);
	vcdp->declBit  (c+153,"issue_rename_ready_i",-1);
	vcdp->declBit  (c+154,"commit_v_i",-1);
	vcdp->declBus  (c+155,"commit_rename_i",-1,11,0);
	vcdp->declBit  (c+156,"mispredict_i",-1);
	vcdp->declBit  (c+143,"rename_stage clk_i",-1);
	vcdp->declBit  (c+144,"rename_stage reset_i",-1);
	vcdp->declQuad (c+145,"rename_stage decoded_i",-1,56,0);
	vcdp->declBit  (c+147,"rename_stage decoded_v_i",-1);
	vcdp->declBit  (c+148,"rename_stage rename_decode_ready_o",-1);
	vcdp->declArray(c+149,"rename_stage renamed_o",-1,73,0);
	vcdp->declBit  (c+152,"rename_stage renamed_v_o",-1);
	vcdp->declBit  (c+153,"rename_stage issue_rename_ready_i",-1);
	vcdp->declBit  (c+154,"rename_stage commit_v_i",-1);
	vcdp->declBus  (c+155,"rename_stage commit_rename_i",-1,11,0);
	vcdp->declBit  (c+156,"rename_stage mispredict_i",-1);
	vcdp->declQuad (c+145,"rename_stage decoded",-1,56,0);
	vcdp->declArray(c+1,"rename_stage renamed",-1,73,0);
	vcdp->declBus  (c+155,"rename_stage commit_entry",-1,11,0);
	vcdp->declArray(c+4,"rename_stage lut_spec_n",-1,111,0);
	vcdp->declArray(c+74,"rename_stage lut_spec_q",-1,111,0);
	vcdp->declArray(c+8,"rename_stage fl_spec_n",-1,895,0);
	vcdp->declArray(c+78,"rename_stage fl_spec_q",-1,895,0);
	vcdp->declArray(c+36,"rename_stage lut_n",-1,111,0);
	vcdp->declArray(c+106,"rename_stage lut_q",-1,111,0);
	vcdp->declArray(c+40,"rename_stage fl_n",-1,895,0);
	vcdp->declArray(c+110,"rename_stage fl_q",-1,895,0);
	vcdp->declBus  (c+138,"rename_stage fl_read_pt",-1,6,0);
	vcdp->declBus  (c+139,"rename_stage fl_write_pt",-1,6,0);
	vcdp->declBus  (c+140,"rename_stage fl_spec_read_pt",-1,6,0);
	vcdp->declBus  (c+141,"rename_stage fl_spec_write_pt",-1,6,0);
	vcdp->declBus  (c+68,"rename_stage fl_read_pt_n",-1,6,0);
	vcdp->declBus  (c+69,"rename_stage fl_write_pt_n",-1,6,0);
	vcdp->declBus  (c+70,"rename_stage fl_spec_read_pt_n",-1,6,0);
	vcdp->declBus  (c+71,"rename_stage fl_spec_write_pt_n",-1,6,0);
	vcdp->declBus  (c+142,"rename_stage fl_spec_num",-1,7,0);
	vcdp->declBus  (c+72,"rename_stage fl_spec_num_n",-1,7,0);
	vcdp->declBus  (c+157,"rename_stage REG_PAD_WIDTH",-1,31,0);
	vcdp->declBus  (c+158,"rename_stage PHYREG_TO_WORD_PAD_WIDTH",-1,31,0);
	vcdp->declBit  (c+73,"rename_stage roll_back",-1);
	// Tracing: rename_stage i // Ignored: Verilator trace_off at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:164
	// Tracing: rename_stage j // Ignored: Verilator trace_off at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:185
	vcdp->declBus  (c+159,"$unit I_ROM_DEPTH_P",-1,31,0);
	vcdp->declBus  (c+160,"$unit WORD_SIZE_P",-1,31,0);
	vcdp->declBus  (c+161,"$unit NUM_FLAGS",-1,31,0);
	vcdp->declBus  (c+160,"$unit NUM_ARCH_REG",-1,31,0);
	vcdp->declBus  (c+162,"$unit NUM_ARCH_DEST_REG",-1,31,0);
	vcdp->declBus  (c+162,"$unit NUM_ARCH_SRC1_REG",-1,31,0);
	vcdp->declBus  (c+163,"$unit BRANCH_CC_NUM",-1,31,0);
	vcdp->declBus  (c+164,"$unit NUM_FU",-1,31,0);
	vcdp->declBus  (c+157,"$unit WIDTH_FU",-1,31,0);
	vcdp->declBus  (c+162,"$unit INSTRUCTION_OP_NUM",-1,31,0);
	vcdp->declBus  (c+165,"$unit DECODED_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus  (c+166,"$unit NUM_PHYS_REG",-1,31,0);
	vcdp->declBus  (c+167,"$unit RENAMED_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus  (c+168,"$unit ROB_ENTRY",-1,31,0);
	vcdp->declBus  (c+169,"$unit ROB_WIDTH",-1,31,0);
	vcdp->declBus  (c+170,"$unit ROB_MEM_WIDTH",-1,31,0);
	vcdp->declBus  (c+170,"$unit ISSUE_ENTRY_WIDTH",-1,31,0);
	vcdp->declBus  (c+171,"$unit CDB_WIDTH",-1,31,0);
	vcdp->declBus  (c+172,"$unit COMMIT_RENAME_WIDTH",-1,31,0);
    }
}

void Vrename_stage::traceFullThis__1(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullArray(c+1,(vlTOPp->rename_stage__DOT__renamed),74);
	vcdp->fullArray(c+4,(vlTOPp->rename_stage__DOT__lut_spec_n),112);
	vcdp->fullArray(c+8,(vlTOPp->rename_stage__DOT__fl_spec_n),896);
	vcdp->fullArray(c+36,(vlTOPp->rename_stage__DOT__lut_n),112);
	vcdp->fullArray(c+40,(vlTOPp->rename_stage__DOT__fl_n),896);
	vcdp->fullBus  (c+68,(vlTOPp->rename_stage__DOT__fl_read_pt_n),7);
	vcdp->fullBus  (c+69,(vlTOPp->rename_stage__DOT__fl_write_pt_n),7);
	vcdp->fullBus  (c+70,(vlTOPp->rename_stage__DOT__fl_spec_read_pt_n),7);
	vcdp->fullBus  (c+71,(vlTOPp->rename_stage__DOT__fl_spec_write_pt_n),7);
	vcdp->fullBus  (c+72,(vlTOPp->rename_stage__DOT__fl_spec_num_n),8);
	vcdp->fullBit  (c+73,(vlTOPp->rename_stage__DOT__roll_back));
	vcdp->fullArray(c+74,(vlTOPp->rename_stage__DOT__lut_spec_q),112);
	vcdp->fullArray(c+78,(vlTOPp->rename_stage__DOT__fl_spec_q),896);
	vcdp->fullArray(c+106,(vlTOPp->rename_stage__DOT__lut_q),112);
	vcdp->fullArray(c+110,(vlTOPp->rename_stage__DOT__fl_q),896);
	vcdp->fullBus  (c+138,(vlTOPp->rename_stage__DOT__fl_read_pt),7);
	vcdp->fullBus  (c+139,(vlTOPp->rename_stage__DOT__fl_write_pt),7);
	vcdp->fullBus  (c+140,(vlTOPp->rename_stage__DOT__fl_spec_read_pt),7);
	vcdp->fullBus  (c+141,(vlTOPp->rename_stage__DOT__fl_spec_write_pt),7);
	vcdp->fullBus  (c+142,(vlTOPp->rename_stage__DOT__fl_spec_num),8);
	vcdp->fullBit  (c+143,(vlTOPp->clk_i));
	vcdp->fullBit  (c+144,(vlTOPp->reset_i));
	vcdp->fullQuad (c+145,(vlTOPp->decoded_i),57);
	vcdp->fullBit  (c+147,(vlTOPp->decoded_v_i));
	vcdp->fullBit  (c+148,(vlTOPp->rename_decode_ready_o));
	vcdp->fullArray(c+149,(vlTOPp->renamed_o),74);
	vcdp->fullBit  (c+152,(vlTOPp->renamed_v_o));
	vcdp->fullBit  (c+153,(vlTOPp->issue_rename_ready_i));
	vcdp->fullBit  (c+154,(vlTOPp->commit_v_i));
	vcdp->fullBus  (c+155,(vlTOPp->commit_rename_i),12);
	vcdp->fullBit  (c+156,(vlTOPp->mispredict_i));
	vcdp->fullBus  (c+157,(3U),32);
	vcdp->fullBus  (c+158,(9U),32);
	vcdp->fullBus  (c+159,(0x10000U),32);
	vcdp->fullBus  (c+160,(0x10U),32);
	vcdp->fullBus  (c+161,(4U),32);
	vcdp->fullBus  (c+162,(8U),32);
	vcdp->fullBus  (c+163,(0xfU),32);
	vcdp->fullBus  (c+164,(7U),32);
	vcdp->fullBus  (c+165,(0x39U),32);
	vcdp->fullBus  (c+166,(0x80U),32);
	vcdp->fullBus  (c+167,(0x4aU),32);
	vcdp->fullBus  (c+168,(0x40U),32);
	vcdp->fullBus  (c+169,(0x2bU),32);
	vcdp->fullBus  (c+170,(0x21U),32);
	vcdp->fullBus  (c+171,(0x28U),32);
	vcdp->fullBus  (c+172,(0xcU),32);
    }
}
