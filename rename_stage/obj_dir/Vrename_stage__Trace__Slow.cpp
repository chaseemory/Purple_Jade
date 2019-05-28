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
	vcdp->declBit  (c+148,"clk_i",-1);
	vcdp->declBit  (c+149,"reset_i",-1);
	vcdp->declQuad (c+150,"decoded_i",-1,56,0);
	vcdp->declBit  (c+152,"decoded_v_i",-1);
	vcdp->declBit  (c+153,"rename_decode_ready_o",-1);
	vcdp->declArray(c+154,"renamed_o",-1,73,0);
	vcdp->declBit  (c+157,"renamed_v_o",-1);
	vcdp->declBit  (c+158,"issue_rename_ready_i",-1);
	vcdp->declBit  (c+159,"commit_v_i",-1);
	vcdp->declBus  (c+160,"commit_rename_i",-1,11,0);
	vcdp->declBit  (c+161,"mispredict_i",-1);
	vcdp->declBit  (c+162,"rob_ready_i",-1);
	vcdp->declBus  (c+163,"rob_num_i",-1,5,0);
	vcdp->declBus  (c+164,"sb_num_i",-1,3,0);
	vcdp->declQuad (c+165,"rename_rob_o",-1,60,0);
	vcdp->declBit  (c+167,"rename_rob_v_o",-1);
	vcdp->declBit  (c+168,"rename_sb_v_o",-1);
	vcdp->declBit  (c+169,"sb_st_clear_valid_i",-1);
	vcdp->declBus  (c+170,"sb_st_clear_entry_i",-1,3,0);
	vcdp->declBit  (c+148,"rename_stage clk_i",-1);
	vcdp->declBit  (c+149,"rename_stage reset_i",-1);
	vcdp->declQuad (c+150,"rename_stage decoded_i",-1,56,0);
	vcdp->declBit  (c+152,"rename_stage decoded_v_i",-1);
	vcdp->declBit  (c+153,"rename_stage rename_decode_ready_o",-1);
	vcdp->declArray(c+154,"rename_stage renamed_o",-1,73,0);
	vcdp->declBit  (c+157,"rename_stage renamed_v_o",-1);
	vcdp->declBit  (c+158,"rename_stage issue_rename_ready_i",-1);
	vcdp->declBit  (c+159,"rename_stage commit_v_i",-1);
	vcdp->declBus  (c+160,"rename_stage commit_rename_i",-1,11,0);
	vcdp->declBit  (c+161,"rename_stage mispredict_i",-1);
	vcdp->declBit  (c+162,"rename_stage rob_ready_i",-1);
	vcdp->declBus  (c+163,"rename_stage rob_num_i",-1,5,0);
	vcdp->declBus  (c+164,"rename_stage sb_num_i",-1,3,0);
	vcdp->declQuad (c+165,"rename_stage rename_rob_o",-1,60,0);
	vcdp->declBit  (c+167,"rename_stage rename_rob_v_o",-1);
	vcdp->declBit  (c+168,"rename_stage rename_sb_v_o",-1);
	vcdp->declBit  (c+169,"rename_stage sb_st_clear_valid_i",-1);
	vcdp->declBus  (c+170,"rename_stage sb_st_clear_entry_i",-1,3,0);
	vcdp->declQuad (c+150,"rename_stage decoded",-1,56,0);
	vcdp->declArray(c+1,"rename_stage renamed",-1,73,0);
	vcdp->declBus  (c+160,"rename_stage commit_entry",-1,11,0);
	vcdp->declQuad (c+4,"rename_stage rename_rob",-1,60,0);
	vcdp->declArray(c+6,"rename_stage lut_spec_n",-1,111,0);
	vcdp->declArray(c+77,"rename_stage lut_spec_q",-1,111,0);
	vcdp->declArray(c+10,"rename_stage fl_spec_n",-1,895,0);
	vcdp->declArray(c+81,"rename_stage fl_spec_q",-1,895,0);
	vcdp->declArray(c+38,"rename_stage lut_n",-1,111,0);
	vcdp->declArray(c+109,"rename_stage lut_q",-1,111,0);
	vcdp->declArray(c+42,"rename_stage fl_n",-1,895,0);
	vcdp->declArray(c+113,"rename_stage fl_q",-1,895,0);
	vcdp->declBus  (c+141,"rename_stage fl_read_pt",-1,6,0);
	vcdp->declBus  (c+142,"rename_stage fl_write_pt",-1,6,0);
	vcdp->declBus  (c+143,"rename_stage fl_spec_read_pt",-1,6,0);
	vcdp->declBus  (c+144,"rename_stage fl_spec_write_pt",-1,6,0);
	vcdp->declBus  (c+70,"rename_stage fl_read_pt_n",-1,6,0);
	vcdp->declBus  (c+71,"rename_stage fl_write_pt_n",-1,6,0);
	vcdp->declBus  (c+72,"rename_stage fl_spec_read_pt_n",-1,6,0);
	vcdp->declBus  (c+73,"rename_stage fl_spec_write_pt_n",-1,6,0);
	vcdp->declBus  (c+145,"rename_stage fl_spec_num",-1,7,0);
	vcdp->declBus  (c+74,"rename_stage fl_spec_num_n",-1,7,0);
	vcdp->declBus  (c+172,"rename_stage REG_PAD_WIDTH",-1,31,0);
	vcdp->declBus  (c+173,"rename_stage PHYREG_TO_WORD_PAD_WIDTH",-1,31,0);
	vcdp->declBit  (c+75,"rename_stage roll_back",-1);
	vcdp->declBus  (c+146,"rename_stage sb_num_q",-1,3,0);
	vcdp->declBus  (c+171,"rename_stage sb_num_n",-1,3,0);
	vcdp->declBit  (c+147,"rename_stage prev_store_cleared",-1);
	vcdp->declBit  (c+76,"rename_stage prev_store_cleared_n",-1);
	// Tracing: rename_stage i // Ignored: Verilator trace_off at /Users/yongqinwang/Purple_Jade/rename_stage/rename_stage.sv:209
	// Tracing: rename_stage j // Ignored: Verilator trace_off at /Users/yongqinwang/Purple_Jade/rename_stage/rename_stage.sv:230
	vcdp->declBus  (c+174,"$unit I_ROM_DEPTH_P",-1,31,0);
	vcdp->declBus  (c+175,"$unit WORD_SIZE_P",-1,31,0);
	vcdp->declBus  (c+176,"$unit NUM_FLAGS",-1,31,0);
	vcdp->declBus  (c+175,"$unit NUM_ARCH_REG",-1,31,0);
	vcdp->declBus  (c+177,"$unit NUM_ARCH_DEST_REG",-1,31,0);
	vcdp->declBus  (c+177,"$unit NUM_ARCH_SRC1_REG",-1,31,0);
	vcdp->declBus  (c+178,"$unit BRANCH_CC_NUM",-1,31,0);
	vcdp->declBus  (c+179,"$unit NUM_FU",-1,31,0);
	vcdp->declBus  (c+172,"$unit WIDTH_FU",-1,31,0);
	vcdp->declBus  (c+177,"$unit INSTRUCTION_OP_NUM",-1,31,0);
	vcdp->declBus  (c+172,"$unit WIDTH_OP",-1,31,0);
	vcdp->declBus  (c+172,"$unit c",-1,31,0);
	vcdp->declBus  (c+180,"$unit n",-1,31,0);
	vcdp->declBus  (c+181,"$unit z",-1,31,0);
	vcdp->declBus  (c+182,"$unit v",-1,31,0);
	vcdp->declBus  (c+183,"$unit DECODED_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus  (c+184,"$unit NUM_PHYS_REG",-1,31,0);
	vcdp->declBus  (c+185,"$unit ROB_ENTRY",-1,31,0);
	vcdp->declBus  (c+175,"$unit SB_ENTRY",-1,31,0);
	vcdp->declBus  (c+186,"$unit RENAMED_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus  (c+187,"$unit ISSUE_ENTRY",-1,31,0);
	vcdp->declBus  (c+188,"$unit ROB_WIDTH",-1,31,0);
	vcdp->declBus  (c+189,"$unit STORE_BUFFER_WIDTH",-1,31,0);
	vcdp->declBus  (c+188,"$unit RENAME_ROB_ENTRY_WIDTH",-1,31,0);
	vcdp->declBus  (c+190,"$unit ROB_WB_WIDTH",-1,31,0);
	vcdp->declBus  (c+191,"$unit REG_WB_WIDTH",-1,31,0);
	vcdp->declBus  (c+192,"$unit LSU_ROB_WB_WIDTH",-1,31,0);
	vcdp->declBus  (c+193,"$unit CDB_SB_WIDTH",-1,31,0);
	vcdp->declBus  (c+194,"$unit CDB_WIDTH",-1,31,0);
	vcdp->declBus  (c+195,"$unit COMMIT_RENAME_WIDTH",-1,31,0);
    }
}

void Vrename_stage::traceFullThis__1(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullArray(c+1,(vlTOPp->rename_stage__DOT__renamed),74);
	vcdp->fullQuad (c+4,(vlTOPp->rename_stage__DOT__rename_rob),61);
	vcdp->fullArray(c+6,(vlTOPp->rename_stage__DOT__lut_spec_n),112);
	vcdp->fullArray(c+10,(vlTOPp->rename_stage__DOT__fl_spec_n),896);
	vcdp->fullArray(c+38,(vlTOPp->rename_stage__DOT__lut_n),112);
	vcdp->fullArray(c+42,(vlTOPp->rename_stage__DOT__fl_n),896);
	vcdp->fullBus  (c+70,(vlTOPp->rename_stage__DOT__fl_read_pt_n),7);
	vcdp->fullBus  (c+71,(vlTOPp->rename_stage__DOT__fl_write_pt_n),7);
	vcdp->fullBus  (c+72,(vlTOPp->rename_stage__DOT__fl_spec_read_pt_n),7);
	vcdp->fullBus  (c+73,(vlTOPp->rename_stage__DOT__fl_spec_write_pt_n),7);
	vcdp->fullBus  (c+74,(vlTOPp->rename_stage__DOT__fl_spec_num_n),8);
	vcdp->fullBit  (c+75,(vlTOPp->rename_stage__DOT__roll_back));
	vcdp->fullBit  (c+76,(vlTOPp->rename_stage__DOT__prev_store_cleared_n));
	vcdp->fullArray(c+77,(vlTOPp->rename_stage__DOT__lut_spec_q),112);
	vcdp->fullArray(c+81,(vlTOPp->rename_stage__DOT__fl_spec_q),896);
	vcdp->fullArray(c+109,(vlTOPp->rename_stage__DOT__lut_q),112);
	vcdp->fullArray(c+113,(vlTOPp->rename_stage__DOT__fl_q),896);
	vcdp->fullBus  (c+141,(vlTOPp->rename_stage__DOT__fl_read_pt),7);
	vcdp->fullBus  (c+142,(vlTOPp->rename_stage__DOT__fl_write_pt),7);
	vcdp->fullBus  (c+143,(vlTOPp->rename_stage__DOT__fl_spec_read_pt),7);
	vcdp->fullBus  (c+144,(vlTOPp->rename_stage__DOT__fl_spec_write_pt),7);
	vcdp->fullBus  (c+145,(vlTOPp->rename_stage__DOT__fl_spec_num),8);
	vcdp->fullBus  (c+146,(vlTOPp->rename_stage__DOT__sb_num_q),4);
	vcdp->fullBit  (c+147,(vlTOPp->rename_stage__DOT__prev_store_cleared));
	vcdp->fullBit  (c+148,(vlTOPp->clk_i));
	vcdp->fullBit  (c+149,(vlTOPp->reset_i));
	vcdp->fullQuad (c+150,(vlTOPp->decoded_i),57);
	vcdp->fullBit  (c+152,(vlTOPp->decoded_v_i));
	vcdp->fullBit  (c+153,(vlTOPp->rename_decode_ready_o));
	vcdp->fullArray(c+154,(vlTOPp->renamed_o),74);
	vcdp->fullBit  (c+157,(vlTOPp->renamed_v_o));
	vcdp->fullBit  (c+158,(vlTOPp->issue_rename_ready_i));
	vcdp->fullBit  (c+159,(vlTOPp->commit_v_i));
	vcdp->fullBus  (c+160,(vlTOPp->commit_rename_i),12);
	vcdp->fullBit  (c+161,(vlTOPp->mispredict_i));
	vcdp->fullBit  (c+162,(vlTOPp->rob_ready_i));
	vcdp->fullBus  (c+163,(vlTOPp->rob_num_i),6);
	vcdp->fullBus  (c+164,(vlTOPp->sb_num_i),4);
	vcdp->fullQuad (c+165,(vlTOPp->rename_rob_o),61);
	vcdp->fullBit  (c+167,(vlTOPp->rename_rob_v_o));
	vcdp->fullBit  (c+168,(vlTOPp->rename_sb_v_o));
	vcdp->fullBit  (c+169,(vlTOPp->sb_st_clear_valid_i));
	vcdp->fullBus  (c+170,(vlTOPp->sb_st_clear_entry_i),4);
	vcdp->fullBus  (c+171,(((IData)(vlTOPp->rename_sb_v_o)
				 ? (IData)(vlTOPp->sb_num_i)
				 : (IData)(vlTOPp->rename_stage__DOT__sb_num_q))),4);
	vcdp->fullBus  (c+172,(3U),32);
	vcdp->fullBus  (c+173,(9U),32);
	vcdp->fullBus  (c+174,(0x10000U),32);
	vcdp->fullBus  (c+175,(0x10U),32);
	vcdp->fullBus  (c+176,(4U),32);
	vcdp->fullBus  (c+177,(8U),32);
	vcdp->fullBus  (c+178,(0xfU),32);
	vcdp->fullBus  (c+179,(7U),32);
	vcdp->fullBus  (c+180,(2U),32);
	vcdp->fullBus  (c+181,(1U),32);
	vcdp->fullBus  (c+182,(0U),32);
	vcdp->fullBus  (c+183,(0x39U),32);
	vcdp->fullBus  (c+184,(0x80U),32);
	vcdp->fullBus  (c+185,(0x40U),32);
	vcdp->fullBus  (c+186,(0x4aU),32);
	vcdp->fullBus  (c+187,(0x20U),32);
	vcdp->fullBus  (c+188,(0x3dU),32);
	vcdp->fullBus  (c+189,(0x21U),32);
	vcdp->fullBus  (c+190,(0x22U),32);
	vcdp->fullBus  (c+191,(0x1dU),32);
	vcdp->fullBus  (c+192,(0x17U),32);
	vcdp->fullBus  (c+193,(0x24U),32);
	vcdp->fullBus  (c+194,(0x1cU),32);
	vcdp->fullBus  (c+195,(0xcU),32);
    }
}
