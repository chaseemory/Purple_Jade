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
	vcdp->declBit  (c+258,"clk_i",-1);
	vcdp->declBit  (c+259,"reset_i",-1);
	vcdp->declArray(c+260,"cdb_i",-1,314,0);
	vcdp->declBit  (c+270,"issue_rob_valid_i",-1);
	vcdp->declQuad (c+271,"issue_rob_entry_i",-1,59,0);
	vcdp->declBus  (c+273,"rob_issue_entry_num_o",-1,5,0);
	vcdp->declBit  (c+274,"rob_issue_ready_o",-1);
	vcdp->declBit  (c+275,"rob_phys_valid_o",-1);
	vcdp->declBus  (c+276,"rob_phys_reg_cl_o",-1,6,0);
	vcdp->declBit  (c+277,"rob_sb_valid_o",-1);
	vcdp->declBit  (c+278,"rob_mispredict_o",-1);
	vcdp->declBus  (c+279,"rob_fe_redirected_pc_o",-1,15,0);
	vcdp->declBit  (c+280,"rob_rename_valid_o",-1);
	vcdp->declBus  (c+281,"rob_rename_entry_o",-1,11,0);
	vcdp->declBit  (c+282,"rob_flag_valid_o",-1);
	vcdp->declBus  (c+283,"rob_flag_o",-1,7,0);
	vcdp->declBus  (c+284,"flag_rob_i",-1,3,0);
	vcdp->declBit  (c+258,"rob clk_i",-1);
	vcdp->declBit  (c+259,"rob reset_i",-1);
	vcdp->declArray(c+260,"rob cdb_i",-1,314,0);
	vcdp->declBit  (c+270,"rob issue_rob_valid_i",-1);
	vcdp->declQuad (c+271,"rob issue_rob_entry_i",-1,59,0);
	vcdp->declBus  (c+273,"rob rob_issue_entry_num_o",-1,5,0);
	vcdp->declBit  (c+274,"rob rob_issue_ready_o",-1);
	vcdp->declBit  (c+275,"rob rob_phys_valid_o",-1);
	vcdp->declBus  (c+276,"rob rob_phys_reg_cl_o",-1,6,0);
	vcdp->declBit  (c+277,"rob rob_sb_valid_o",-1);
	vcdp->declBit  (c+278,"rob rob_mispredict_o",-1);
	vcdp->declBus  (c+279,"rob rob_fe_redirected_pc_o",-1,15,0);
	vcdp->declBit  (c+280,"rob rob_rename_valid_o",-1);
	vcdp->declBus  (c+281,"rob rob_rename_entry_o",-1,11,0);
	vcdp->declBit  (c+282,"rob rob_flag_valid_o",-1);
	vcdp->declBus  (c+283,"rob rob_flag_o",-1,7,0);
	vcdp->declBus  (c+284,"rob flag_rob_i",-1,3,0);
	vcdp->declArray(c+260,"rob cdb",-1,314,0);
	vcdp->declArray(c+133,"rob rob_q",-1,3839,0);
	vcdp->declArray(c+7,"rob rob_n",-1,3839,0);
	vcdp->declBus  (c+253,"rob rob_alloc_pt",-1,5,0);
	vcdp->declBus  (c+127,"rob rob_alloc_pt_n",-1,5,0);
	vcdp->declBus  (c+254,"rob rob_commit_pt",-1,5,0);
	vcdp->declBus  (c+128,"rob rob_commit_pt_n",-1,5,0);
	vcdp->declBus  (c+255,"rob rob_num",-1,6,0);
	vcdp->declBus  (c+129,"rob rob_num_n",-1,6,0);
	vcdp->declQuad (c+1,"rob committing_instr",-1,59,0);
	vcdp->declBit  (c+3,"rob prev_spec_branch_n",-1);
	vcdp->declBit  (c+256,"rob prev_spec_branch",-1);
	vcdp->declBus  (c+5,"rob predicted_pc_n",-1,15,0);
	vcdp->declBus  (c+257,"rob predicted_pc",-1,15,0);
	vcdp->declBus  (c+6,"rob condition_pc",-1,15,0);
	vcdp->declBit  (c+130,"rob condition_taken",-1);
	vcdp->declBit  (c+285,"rob N",-1);
	vcdp->declBit  (c+286,"rob Z",-1);
	vcdp->declBit  (c+287,"rob V",-1);
	vcdp->declBit  (c+288,"rob C",-1);
	vcdp->declBus  (c+4,"rob rename_entry",-1,11,0);
	vcdp->declBus  (c+131,"rob unnamedblk1 i",-1,31,0);
	vcdp->declBus  (c+132,"rob unnamedblk1 unnamedblk2 j",-1,31,0);
	vcdp->declBus  (c+289,"$unit I_ROM_DEPTH_P",-1,31,0);
	vcdp->declBus  (c+290,"$unit WORD_SIZE_P",-1,31,0);
	vcdp->declBus  (c+291,"$unit NUM_FLAGS",-1,31,0);
	vcdp->declBus  (c+290,"$unit NUM_ARCH_REG",-1,31,0);
	vcdp->declBus  (c+292,"$unit NUM_ARCH_DEST_REG",-1,31,0);
	vcdp->declBus  (c+292,"$unit NUM_ARCH_SRC1_REG",-1,31,0);
	vcdp->declBus  (c+293,"$unit BRANCH_CC_NUM",-1,31,0);
	vcdp->declBus  (c+294,"$unit NUM_FU",-1,31,0);
	vcdp->declBus  (c+295,"$unit WIDTH_FU",-1,31,0);
	vcdp->declBus  (c+292,"$unit INSTRUCTION_OP_NUM",-1,31,0);
	vcdp->declBus  (c+295,"$unit WIDTH_OP",-1,31,0);
	vcdp->declBus  (c+295,"$unit c",-1,31,0);
	vcdp->declBus  (c+296,"$unit n",-1,31,0);
	vcdp->declBus  (c+297,"$unit z",-1,31,0);
	vcdp->declBus  (c+298,"$unit v",-1,31,0);
	vcdp->declBus  (c+299,"$unit DECODED_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus  (c+300,"$unit NUM_PHYS_REG",-1,31,0);
	vcdp->declBus  (c+301,"$unit RENAMED_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus  (c+302,"$unit ROB_ENTRY",-1,31,0);
	vcdp->declBus  (c+290,"$unit SB_ENTRY",-1,31,0);
	vcdp->declBus  (c+303,"$unit ROB_WIDTH",-1,31,0);
	vcdp->declBus  (c+304,"$unit STORE_BUFFER_WIDTH",-1,31,0);
	vcdp->declBus  (c+303,"$unit ISSUE_ENTRY_WIDTH",-1,31,0);
	vcdp->declBus  (c+305,"$unit CDB_SB_WIDTH",-1,31,0);
	vcdp->declBus  (c+306,"$unit CDB_WIDTH",-1,31,0);
	vcdp->declBus  (c+307,"$unit COMMIT_RENAME_WIDTH",-1,31,0);
    }
}

void Vrob::traceFullThis__1(Vrob__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullQuad (c+1,(vlTOPp->rob__DOT__committing_instr),60);
	vcdp->fullBit  (c+3,((1U & (IData)((vlTOPp->rob__DOT__committing_instr 
					    >> 0x2aU)))));
	vcdp->fullBus  (c+4,(vlTOPp->rob__DOT__rename_entry),12);
	vcdp->fullBus  (c+5,((0xffffU & ((1U & (IData)(
						       (vlTOPp->rob__DOT__committing_instr 
							>> 0x29U)))
					  ? ((IData)(vlTOPp->rob__DOT__condition_taken)
					      ? (0xffffU 
						 & (IData)(
							   (vlTOPp->rob__DOT__committing_instr 
							    >> 0x15U)))
					      : ((IData)(4U) 
						 + 
						 (0xffffU 
						  & (IData)(
							    (vlTOPp->rob__DOT__committing_instr 
							     >> 0x2cU)))))
					  : (IData)(
						    (vlTOPp->rob__DOT__committing_instr 
						     >> 0x15U))))),16);
	vcdp->fullBus  (c+6,((0xffffU & ((IData)(vlTOPp->rob__DOT__condition_taken)
					  ? (0xffffU 
					     & (IData)(
						       (vlTOPp->rob__DOT__committing_instr 
							>> 0x15U)))
					  : ((IData)(4U) 
					     + (0xffffU 
						& (IData)(
							  (vlTOPp->rob__DOT__committing_instr 
							   >> 0x2cU))))))),16);
	vcdp->fullArray(c+7,(vlTOPp->rob__DOT__rob_n),3840);
	vcdp->fullBus  (c+127,(vlTOPp->rob__DOT__rob_alloc_pt_n),6);
	vcdp->fullBus  (c+128,(vlTOPp->rob__DOT__rob_commit_pt_n),6);
	vcdp->fullBus  (c+129,(vlTOPp->rob__DOT__rob_num_n),7);
	vcdp->fullBit  (c+130,(vlTOPp->rob__DOT__condition_taken));
	vcdp->fullBus  (c+131,(vlTOPp->rob__DOT__unnamedblk1__DOT__i),32);
	vcdp->fullBus  (c+132,(vlTOPp->rob__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
	vcdp->fullArray(c+133,(vlTOPp->rob__DOT__rob_q),3840);
	vcdp->fullBus  (c+253,(vlTOPp->rob__DOT__rob_alloc_pt),6);
	vcdp->fullBus  (c+254,(vlTOPp->rob__DOT__rob_commit_pt),6);
	vcdp->fullBus  (c+255,(vlTOPp->rob__DOT__rob_num),7);
	vcdp->fullBit  (c+256,(vlTOPp->rob__DOT__prev_spec_branch));
	vcdp->fullBus  (c+257,(vlTOPp->rob__DOT__predicted_pc),16);
	vcdp->fullBit  (c+258,(vlTOPp->clk_i));
	vcdp->fullBit  (c+259,(vlTOPp->reset_i));
	vcdp->fullArray(c+260,(vlTOPp->cdb_i),315);
	vcdp->fullBit  (c+270,(vlTOPp->issue_rob_valid_i));
	vcdp->fullQuad (c+271,(vlTOPp->issue_rob_entry_i),60);
	vcdp->fullBus  (c+273,(vlTOPp->rob_issue_entry_num_o),6);
	vcdp->fullBit  (c+274,(vlTOPp->rob_issue_ready_o));
	vcdp->fullBit  (c+275,(vlTOPp->rob_phys_valid_o));
	vcdp->fullBus  (c+276,(vlTOPp->rob_phys_reg_cl_o),7);
	vcdp->fullBit  (c+277,(vlTOPp->rob_sb_valid_o));
	vcdp->fullBit  (c+278,(vlTOPp->rob_mispredict_o));
	vcdp->fullBus  (c+279,(vlTOPp->rob_fe_redirected_pc_o),16);
	vcdp->fullBit  (c+280,(vlTOPp->rob_rename_valid_o));
	vcdp->fullBus  (c+281,(vlTOPp->rob_rename_entry_o),12);
	vcdp->fullBit  (c+282,(vlTOPp->rob_flag_valid_o));
	vcdp->fullBus  (c+283,(vlTOPp->rob_flag_o),8);
	vcdp->fullBus  (c+284,(vlTOPp->flag_rob_i),4);
	vcdp->fullBit  (c+285,((1U & ((IData)(vlTOPp->flag_rob_i) 
				      >> 2U))));
	vcdp->fullBit  (c+286,((1U & ((IData)(vlTOPp->flag_rob_i) 
				      >> 1U))));
	vcdp->fullBit  (c+287,((1U & (IData)(vlTOPp->flag_rob_i))));
	vcdp->fullBit  (c+288,((1U & ((IData)(vlTOPp->flag_rob_i) 
				      >> 3U))));
	vcdp->fullBus  (c+289,(0x10000U),32);
	vcdp->fullBus  (c+290,(0x10U),32);
	vcdp->fullBus  (c+291,(4U),32);
	vcdp->fullBus  (c+292,(8U),32);
	vcdp->fullBus  (c+293,(0xfU),32);
	vcdp->fullBus  (c+294,(7U),32);
	vcdp->fullBus  (c+295,(3U),32);
	vcdp->fullBus  (c+296,(2U),32);
	vcdp->fullBus  (c+297,(1U),32);
	vcdp->fullBus  (c+298,(0U),32);
	vcdp->fullBus  (c+299,(0x39U),32);
	vcdp->fullBus  (c+300,(0x80U),32);
	vcdp->fullBus  (c+301,(0x4aU),32);
	vcdp->fullBus  (c+302,(0x40U),32);
	vcdp->fullBus  (c+303,(0x3cU),32);
	vcdp->fullBus  (c+304,(0x21U),32);
	vcdp->fullBus  (c+305,(0x15U),32);
	vcdp->fullBus  (c+306,(0x2dU),32);
	vcdp->fullBus  (c+307,(0xcU),32);
    }
}
