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
	vcdp->declBit  (c+150,"clk_i",-1);
	vcdp->declBit  (c+151,"reset_i",-1);
	vcdp->declQuad (c+152,"decoded_i",-1,56,0);
	vcdp->declBit  (c+154,"decoded_v_i",-1);
	vcdp->declBit  (c+155,"rename_decode_ready_o",-1);
	vcdp->declArray(c+156,"renamed_o",-1,73,0);
	vcdp->declBit  (c+159,"renamed_v_o",-1);
	vcdp->declBit  (c+160,"issue_rename_ready_i",-1);
	vcdp->declBit  (c+161,"commit_v_i",-1);
	vcdp->declBus  (c+162,"commit_rename_i",-1,11,0);
	vcdp->declBit  (c+163,"mispredict_i",-1);
	vcdp->declBit  (c+164,"rob_ready_i",-1);
	vcdp->declQuad (c+165,"rename_rob_o",-1,59,0);
	vcdp->declBit  (c+167,"rename_rob_v_o",-1);
	vcdp->declBit  (c+150,"rename_stage clk_i",-1);
	vcdp->declBit  (c+151,"rename_stage reset_i",-1);
	vcdp->declQuad (c+152,"rename_stage decoded_i",-1,56,0);
	vcdp->declBit  (c+154,"rename_stage decoded_v_i",-1);
	vcdp->declBit  (c+155,"rename_stage rename_decode_ready_o",-1);
	vcdp->declArray(c+156,"rename_stage renamed_o",-1,73,0);
	vcdp->declBit  (c+159,"rename_stage renamed_v_o",-1);
	vcdp->declBit  (c+160,"rename_stage issue_rename_ready_i",-1);
	vcdp->declBit  (c+161,"rename_stage commit_v_i",-1);
	vcdp->declBus  (c+162,"rename_stage commit_rename_i",-1,11,0);
	vcdp->declBit  (c+163,"rename_stage mispredict_i",-1);
	vcdp->declBit  (c+164,"rename_stage rob_ready_i",-1);
	vcdp->declQuad (c+165,"rename_stage rename_rob_o",-1,59,0);
	vcdp->declBit  (c+167,"rename_stage rename_rob_v_o",-1);
	vcdp->declQuad (c+152,"rename_stage decoded",-1,56,0);
	vcdp->declArray(c+1,"rename_stage renamed",-1,73,0);
	vcdp->declArray(c+77,"rename_stage renamed_r",-1,73,0);
	vcdp->declArray(c+168,"rename_stage renamed_n",-1,73,0);
	vcdp->declBus  (c+162,"rename_stage commit_entry",-1,11,0);
	vcdp->declQuad (c+4,"rename_stage rename_rob",-1,59,0);
	vcdp->declArray(c+6,"rename_stage lut_spec_n",-1,111,0);
	vcdp->declArray(c+80,"rename_stage lut_spec_q",-1,111,0);
	vcdp->declArray(c+10,"rename_stage fl_spec_n",-1,895,0);
	vcdp->declArray(c+84,"rename_stage fl_spec_q",-1,895,0);
	vcdp->declArray(c+38,"rename_stage lut_n",-1,111,0);
	vcdp->declArray(c+112,"rename_stage lut_q",-1,111,0);
	vcdp->declArray(c+42,"rename_stage fl_n",-1,895,0);
	vcdp->declArray(c+116,"rename_stage fl_q",-1,895,0);
	vcdp->declBus  (c+144,"rename_stage fl_read_pt",-1,6,0);
	vcdp->declBus  (c+145,"rename_stage fl_write_pt",-1,6,0);
	vcdp->declBus  (c+146,"rename_stage fl_spec_read_pt",-1,6,0);
	vcdp->declBus  (c+147,"rename_stage fl_spec_write_pt",-1,6,0);
	vcdp->declBus  (c+70,"rename_stage fl_read_pt_n",-1,6,0);
	vcdp->declBus  (c+71,"rename_stage fl_write_pt_n",-1,6,0);
	vcdp->declBus  (c+72,"rename_stage fl_spec_read_pt_n",-1,6,0);
	vcdp->declBus  (c+73,"rename_stage fl_spec_write_pt_n",-1,6,0);
	vcdp->declBus  (c+148,"rename_stage fl_spec_num",-1,7,0);
	vcdp->declBus  (c+74,"rename_stage fl_spec_num_n",-1,7,0);
	vcdp->declBus  (c+171,"rename_stage REG_PAD_WIDTH",-1,31,0);
	vcdp->declBus  (c+172,"rename_stage PHYREG_TO_WORD_PAD_WIDTH",-1,31,0);
	vcdp->declBit  (c+75,"rename_stage roll_back",-1);
	vcdp->declBit  (c+76,"rename_stage renamed_v",-1);
	vcdp->declBit  (c+149,"rename_stage renamed_v_r",-1);
	// Tracing: rename_stage i // Ignored: Verilator trace_off at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:196
	// Tracing: rename_stage j // Ignored: Verilator trace_off at /Users/yongqinwang/Purple_Jade/rename/rename_stage.sv:217
	vcdp->declBus  (c+173,"$unit I_ROM_DEPTH_P",-1,31,0);
	vcdp->declBus  (c+174,"$unit WORD_SIZE_P",-1,31,0);
	vcdp->declBus  (c+175,"$unit NUM_FLAGS",-1,31,0);
	vcdp->declBus  (c+174,"$unit NUM_ARCH_REG",-1,31,0);
	vcdp->declBus  (c+176,"$unit NUM_ARCH_DEST_REG",-1,31,0);
	vcdp->declBus  (c+176,"$unit NUM_ARCH_SRC1_REG",-1,31,0);
	vcdp->declBus  (c+177,"$unit BRANCH_CC_NUM",-1,31,0);
	vcdp->declBus  (c+178,"$unit NUM_FU",-1,31,0);
	vcdp->declBus  (c+171,"$unit WIDTH_FU",-1,31,0);
	vcdp->declBus  (c+176,"$unit INSTRUCTION_OP_NUM",-1,31,0);
	vcdp->declBus  (c+171,"$unit WIDTH_OP",-1,31,0);
	vcdp->declBus  (c+171,"$unit c",-1,31,0);
	vcdp->declBus  (c+179,"$unit n",-1,31,0);
	vcdp->declBus  (c+180,"$unit z",-1,31,0);
	vcdp->declBus  (c+181,"$unit v",-1,31,0);
	vcdp->declBus  (c+182,"$unit DECODED_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus  (c+183,"$unit NUM_PHYS_REG",-1,31,0);
	vcdp->declBus  (c+184,"$unit RENAMED_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus  (c+185,"$unit ROB_ENTRY",-1,31,0);
	vcdp->declBus  (c+174,"$unit SB_ENTRY",-1,31,0);
	vcdp->declBus  (c+186,"$unit ROB_WIDTH",-1,31,0);
	vcdp->declBus  (c+187,"$unit STORE_BUFFER_WIDTH",-1,31,0);
	vcdp->declBus  (c+186,"$unit RENAME_ROB_ENTRY_WIDTH",-1,31,0);
	vcdp->declBus  (c+188,"$unit CDB_SB_WIDTH",-1,31,0);
	vcdp->declBus  (c+189,"$unit CDB_WIDTH",-1,31,0);
	vcdp->declBus  (c+190,"$unit COMMIT_RENAME_WIDTH",-1,31,0);
    }
}

void Vrename_stage::traceFullThis__1(Vrename_stage__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrename_stage* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    VL_SIGW(__Vtemp15,95,0,3);
    // Body
    {
	vcdp->fullArray(c+1,(vlTOPp->rename_stage__DOT__renamed),74);
	vcdp->fullQuad (c+4,(vlTOPp->rename_stage__DOT__rename_rob),60);
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
	vcdp->fullBit  (c+76,(vlTOPp->rename_stage__DOT__renamed_v));
	vcdp->fullArray(c+77,(vlTOPp->rename_stage__DOT__renamed_r),74);
	vcdp->fullArray(c+80,(vlTOPp->rename_stage__DOT__lut_spec_q),112);
	vcdp->fullArray(c+84,(vlTOPp->rename_stage__DOT__fl_spec_q),896);
	vcdp->fullArray(c+112,(vlTOPp->rename_stage__DOT__lut_q),112);
	vcdp->fullArray(c+116,(vlTOPp->rename_stage__DOT__fl_q),896);
	vcdp->fullBus  (c+144,(vlTOPp->rename_stage__DOT__fl_read_pt),7);
	vcdp->fullBus  (c+145,(vlTOPp->rename_stage__DOT__fl_write_pt),7);
	vcdp->fullBus  (c+146,(vlTOPp->rename_stage__DOT__fl_spec_read_pt),7);
	vcdp->fullBus  (c+147,(vlTOPp->rename_stage__DOT__fl_spec_write_pt),7);
	vcdp->fullBus  (c+148,(vlTOPp->rename_stage__DOT__fl_spec_num),8);
	vcdp->fullBit  (c+149,(vlTOPp->rename_stage__DOT__renamed_v_r));
	vcdp->fullBit  (c+150,(vlTOPp->clk_i));
	vcdp->fullBit  (c+151,(vlTOPp->reset_i));
	vcdp->fullQuad (c+152,(vlTOPp->decoded_i),57);
	vcdp->fullBit  (c+154,(vlTOPp->decoded_v_i));
	vcdp->fullBit  (c+155,(vlTOPp->rename_decode_ready_o));
	vcdp->fullArray(c+156,(vlTOPp->renamed_o),74);
	vcdp->fullBit  (c+159,(vlTOPp->renamed_v_o));
	vcdp->fullBit  (c+160,(vlTOPp->issue_rename_ready_i));
	vcdp->fullBit  (c+161,(vlTOPp->commit_v_i));
	vcdp->fullBus  (c+162,(vlTOPp->commit_rename_i),12);
	vcdp->fullBit  (c+163,(vlTOPp->mispredict_i));
	vcdp->fullBit  (c+164,(vlTOPp->rob_ready_i));
	vcdp->fullQuad (c+165,(vlTOPp->rename_rob_o),60);
	vcdp->fullBit  (c+167,(vlTOPp->rename_rob_v_o));
	__Vtemp15[0U] = ((IData)(vlTOPp->issue_rename_ready_i)
			  ? vlTOPp->rename_stage__DOT__renamed[0U]
			  : vlTOPp->rename_stage__DOT__renamed_r[0U]);
	__Vtemp15[1U] = ((IData)(vlTOPp->issue_rename_ready_i)
			  ? vlTOPp->rename_stage__DOT__renamed[1U]
			  : vlTOPp->rename_stage__DOT__renamed_r[1U]);
	__Vtemp15[2U] = ((IData)(vlTOPp->issue_rename_ready_i)
			  ? vlTOPp->rename_stage__DOT__renamed[2U]
			  : vlTOPp->rename_stage__DOT__renamed_r[2U]);
	vcdp->fullArray(c+168,(__Vtemp15),74);
	vcdp->fullBus  (c+171,(3U),32);
	vcdp->fullBus  (c+172,(9U),32);
	vcdp->fullBus  (c+173,(0x10000U),32);
	vcdp->fullBus  (c+174,(0x10U),32);
	vcdp->fullBus  (c+175,(4U),32);
	vcdp->fullBus  (c+176,(8U),32);
	vcdp->fullBus  (c+177,(0xfU),32);
	vcdp->fullBus  (c+178,(7U),32);
	vcdp->fullBus  (c+179,(2U),32);
	vcdp->fullBus  (c+180,(1U),32);
	vcdp->fullBus  (c+181,(0U),32);
	vcdp->fullBus  (c+182,(0x39U),32);
	vcdp->fullBus  (c+183,(0x80U),32);
	vcdp->fullBus  (c+184,(0x4aU),32);
	vcdp->fullBus  (c+185,(0x40U),32);
	vcdp->fullBus  (c+186,(0x3cU),32);
	vcdp->fullBus  (c+187,(0x21U),32);
	vcdp->fullBus  (c+188,(0x15U),32);
	vcdp->fullBus  (c+189,(0x1cU),32);
	vcdp->fullBus  (c+190,(0xcU),32);
    }
}
