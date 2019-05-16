// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfe_top__Syms.h"


//======================

void Vfe_top::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vfe_top::traceInit, &Vfe_top::traceFull, &Vfe_top::traceChg, this);
}
void Vfe_top::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vfe_top* t=(Vfe_top*)userthis;
    Vfe_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vfe_top::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vfe_top* t=(Vfe_top*)userthis;
    Vfe_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vfe_top::traceInitThis(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfe_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vfe_top::traceFullThis(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfe_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vfe_top::traceInitThis__1(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfe_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+83,"clk_i",-1);
	vcdp->declBit  (c+84,"reset_i",-1);
	vcdp->declBit  (c+85,"ready_i",-1);
	vcdp->declQuad (c+86,"final_decoded_instruction",-1,56,0);
	vcdp->declBit  (c+88,"valid_o",-1);
	vcdp->declBus  (c+91,"fe_top place_holder",-1,31,0);
	vcdp->declBit  (c+83,"fe_top clk_i",-1);
	vcdp->declBit  (c+84,"fe_top reset_i",-1);
	vcdp->declBit  (c+85,"fe_top ready_i",-1);
	vcdp->declQuad (c+86,"fe_top final_decoded_instruction",-1,56,0);
	vcdp->declBit  (c+88,"fe_top valid_o",-1);
	vcdp->declBit  (c+89,"fe_top stall",-1);
	vcdp->declBit  (c+48,"fe_top take_branch",-1);
	vcdp->declBus  (c+1,"fe_top instruction_fetch_r",-1,15,0);
	vcdp->declBus  (c+51,"fe_top program_counter_fetch_r",-1,15,0);
	vcdp->declBus  (c+90,"fe_top program_counter_n",-1,15,0);
	vcdp->declBus  (c+52,"fe_top program_counter_n_p2",-1,15,0);
	vcdp->declBus  (c+35,"fe_top branch_target",-1,15,0);
	vcdp->declBus  (c+53,"fe_top program_counter_decode_r",-1,15,0);
	vcdp->declBus  (c+54,"fe_top instruction_decode_r",-1,15,0);
	vcdp->declBit  (c+48,"fe_top flush_f_d",-1);
	vcdp->declBit  (c+55,"fe_top valid_f_d",-1);
	vcdp->declBus  (c+2,"fe_top dest_src_sel",-1,1,0);
	vcdp->declBus  (c+3,"fe_top src_1_sel",-1,1,0);
	vcdp->declBus  (c+4,"fe_top src_2_imm_sel",-1,2,0);
	vcdp->declBus  (c+5,"fe_top immediates(0)",-1,15,0);
	vcdp->declBus  (c+6,"fe_top immediates(1)",-1,15,0);
	vcdp->declBus  (c+7,"fe_top immediates(2)",-1,15,0);
	vcdp->declBus  (c+8,"fe_top immediates(3)",-1,15,0);
	vcdp->declBus  (c+9,"fe_top immediates(4)",-1,15,0);
	vcdp->declBus  (c+10,"fe_top immediates(5)",-1,15,0);
	vcdp->declBus  (c+11,"fe_top immediates(6)",-1,15,0);
	vcdp->declBus  (c+12,"fe_top immediates(7)",-1,15,0);
	vcdp->declBit  (c+13,"fe_top is_branch_decode",-1);
	vcdp->declBus  (c+14,"fe_top instruction_decoded_decode dest_id",-1,3,0);
	vcdp->declBus  (c+15,"fe_top instruction_decoded_decode source_1",-1,3,0);
	vcdp->declBus  (c+16,"fe_top instruction_decoded_decode source2_imm",-1,15,0);
	vcdp->declBus  (c+17,"fe_top instruction_decoded_decode pc",-1,15,0);
	vcdp->declBus  (c+18,"fe_top instruction_decoded_decode opcode",-1,2,0);
	vcdp->declBus  (c+19,"fe_top instruction_decoded_decode func_unit",-1,2,0);
	vcdp->declBus  (c+20,"fe_top instruction_decoded_decode flags",-1,3,0);
	vcdp->declBus  (c+21,"fe_top instruction_decoded_decode bcc_op",-1,3,0);
	vcdp->declBit  (c+22,"fe_top instruction_decoded_decode branch_speculation",-1);
	vcdp->declBit  (c+23,"fe_top instruction_decoded_decode w_v",-1);
	vcdp->declBit  (c+24,"fe_top instruction_decoded_decode imm",-1);
	vcdp->declBus  (c+25,"fe_top branch_offset_decode",-1,15,0);
	vcdp->declBus  (c+56,"fe_top branch_offset_branch_r",-1,15,0);
	vcdp->declBit  (c+48,"fe_top flush_d_b",-1);
	vcdp->declBit  (c+57,"fe_top valid_d_b",-1);
	vcdp->declBit  (c+58,"fe_top is_branch_branch_r",-1);
	vcdp->declBus  (c+36,"fe_top instruction_decoded_branch dest_id",-1,3,0);
	vcdp->declBus  (c+37,"fe_top instruction_decoded_branch source_1",-1,3,0);
	vcdp->declBus  (c+38,"fe_top instruction_decoded_branch source2_imm",-1,15,0);
	vcdp->declBus  (c+39,"fe_top instruction_decoded_branch pc",-1,15,0);
	vcdp->declBus  (c+40,"fe_top instruction_decoded_branch opcode",-1,2,0);
	vcdp->declBus  (c+41,"fe_top instruction_decoded_branch func_unit",-1,2,0);
	vcdp->declBus  (c+42,"fe_top instruction_decoded_branch flags",-1,3,0);
	vcdp->declBus  (c+43,"fe_top instruction_decoded_branch bcc_op",-1,3,0);
	vcdp->declBit  (c+44,"fe_top instruction_decoded_branch branch_speculation",-1);
	vcdp->declBit  (c+45,"fe_top instruction_decoded_branch w_v",-1);
	vcdp->declBit  (c+46,"fe_top instruction_decoded_branch imm",-1);
	vcdp->declBit  (c+49,"fe_top speculative_branch",-1);
	vcdp->declBus  (c+51,"fe_top next_pc pc_i",-1,15,0);
	vcdp->declBus  (c+52,"fe_top next_pc pc_2_i",-1,15,0);
	vcdp->declBus  (c+35,"fe_top next_pc branch_target_i",-1,15,0);
	vcdp->declBit  (c+84,"fe_top next_pc reset_i",-1);
	vcdp->declBit  (c+48,"fe_top next_pc branch_take",-1);
	vcdp->declBit  (c+89,"fe_top next_pc stall",-1);
	vcdp->declBus  (c+90,"fe_top next_pc pc_next",-1,15,0);
	vcdp->declBit  (c+83,"fe_top pc clk_i",-1);
	vcdp->declBus  (c+90,"fe_top pc pc_i",-1,15,0);
	vcdp->declBus  (c+51,"fe_top pc o",-1,15,0);
	vcdp->declBus  (c+92,"fe_top instruction_mem ADDR_WIDTH_LP",-1,31,0);
	vcdp->declBus  (c+51,"fe_top instruction_mem r_addr_i",-1,15,0);
	vcdp->declBus  (c+1,"fe_top instruction_mem data_o",-1,15,0);
	// Tracing: fe_top instruction_mem mem // Ignored: Wide memory > --trace-max-array ents at /home/chase/ee478/Purple_Jade/FE//i_rom.sv:13
	vcdp->declBus  (c+93,"fe_top fetch_decode_pipe WIDTH_P",-1,31,0);
	vcdp->declBit  (c+83,"fe_top fetch_decode_pipe clk_i",-1);
	vcdp->declBus  (c+26,"fe_top fetch_decode_pipe data_i",-1,31,0);
	vcdp->declBit  (c+50,"fe_top fetch_decode_pipe flush",-1);
	vcdp->declBit  (c+89,"fe_top fetch_decode_pipe stall",-1);
	vcdp->declBit  (c+94,"fe_top fetch_decode_pipe v_i",-1);
	vcdp->declBus  (c+59,"fe_top fetch_decode_pipe data_o",-1,31,0);
	vcdp->declBit  (c+55,"fe_top fetch_decode_pipe v_o",-1);
	vcdp->declBus  (c+54,"fe_top extend_the_things instruction_i",-1,15,0);
	vcdp->declBus  (c+5,"fe_top extend_the_things immediate_o(0)",-1,15,0);
	vcdp->declBus  (c+6,"fe_top extend_the_things immediate_o(1)",-1,15,0);
	vcdp->declBus  (c+7,"fe_top extend_the_things immediate_o(2)",-1,15,0);
	vcdp->declBus  (c+8,"fe_top extend_the_things immediate_o(3)",-1,15,0);
	vcdp->declBus  (c+9,"fe_top extend_the_things immediate_o(4)",-1,15,0);
	vcdp->declBus  (c+10,"fe_top extend_the_things immediate_o(5)",-1,15,0);
	vcdp->declBus  (c+11,"fe_top extend_the_things immediate_o(6)",-1,15,0);
	vcdp->declBus  (c+12,"fe_top extend_the_things immediate_o(7)",-1,15,0);
	vcdp->declBus  (c+60,"fe_top extend_the_things imm_8z_lo",-1,15,0);
	vcdp->declBus  (c+61,"fe_top extend_the_things imm_3z_lo",-1,15,0);
	vcdp->declBus  (c+62,"fe_top extend_the_things imm_7z_lo",-1,15,0);
	vcdp->declBus  (c+63,"fe_top extend_the_things imm_5z_lo",-1,15,0);
	vcdp->declBus  (c+64,"fe_top extend_the_things imm_8s_lo",-1,15,0);
	vcdp->declBus  (c+65,"fe_top extend_the_things imm_11s_lo",-1,15,0);
	vcdp->declBus  (c+66,"fe_top extend_the_things imm_6s_lo",-1,15,0);
	vcdp->declBus  (c+67,"fe_top extend_the_things reg_4z_lo",-1,15,0);
	vcdp->declBus  (c+95,"fe_top extend_the_things imm_8z INPUT_SIZE",-1,31,0);
	vcdp->declBus  (c+68,"fe_top extend_the_things imm_8z i",-1,7,0);
	vcdp->declBus  (c+60,"fe_top extend_the_things imm_8z o",-1,15,0);
	vcdp->declBus  (c+96,"fe_top extend_the_things imm_3z INPUT_SIZE",-1,31,0);
	vcdp->declBus  (c+69,"fe_top extend_the_things imm_3z i",-1,2,0);
	vcdp->declBus  (c+61,"fe_top extend_the_things imm_3z o",-1,15,0);
	vcdp->declBus  (c+97,"fe_top extend_the_things imm_7z INPUT_SIZE",-1,31,0);
	vcdp->declBus  (c+70,"fe_top extend_the_things imm_7z i",-1,6,0);
	vcdp->declBus  (c+62,"fe_top extend_the_things imm_7z o",-1,15,0);
	vcdp->declBus  (c+98,"fe_top extend_the_things imm_5z INPUT_SIZE",-1,31,0);
	vcdp->declBus  (c+71,"fe_top extend_the_things imm_5z i",-1,4,0);
	vcdp->declBus  (c+63,"fe_top extend_the_things imm_5z o",-1,15,0);
	vcdp->declBus  (c+95,"fe_top extend_the_things imm_8s INPUT_SIZE",-1,31,0);
	vcdp->declBus  (c+68,"fe_top extend_the_things imm_8s i",-1,7,0);
	vcdp->declBus  (c+64,"fe_top extend_the_things imm_8s o",-1,15,0);
	vcdp->declBus  (c+99,"fe_top extend_the_things imm_11s INPUT_SIZE",-1,31,0);
	vcdp->declBus  (c+72,"fe_top extend_the_things imm_11s i",-1,10,0);
	vcdp->declBus  (c+65,"fe_top extend_the_things imm_11s o",-1,15,0);
	vcdp->declBus  (c+100,"fe_top extend_the_things imm_6s INPUT_SIZE",-1,31,0);
	vcdp->declBus  (c+73,"fe_top extend_the_things imm_6s i",-1,5,0);
	vcdp->declBus  (c+66,"fe_top extend_the_things imm_6s o",-1,15,0);
	vcdp->declBus  (c+101,"fe_top extend_the_things reg_4z INPUT_SIZE",-1,31,0);
	vcdp->declBus  (c+74,"fe_top extend_the_things reg_4z i",-1,3,0);
	vcdp->declBus  (c+67,"fe_top extend_the_things reg_4z o",-1,15,0);
	vcdp->declBus  (c+102,"fe_top decoder INPUT_WIDTH_P",-1,31,0);
	vcdp->declBus  (c+75,"fe_top decoder addr_i",-1,9,0);
	vcdp->declBus  (c+27,"fe_top decoder o",-1,18,0);
	vcdp->declBus  (c+101,"fe_top dest_src_mux width_p",-1,31,0);
	vcdp->declBus  (c+101,"fe_top dest_src_mux els_p",-1,31,0);
	vcdp->declBus  (c+103,"fe_top dest_src_mux harden_p",-1,31,0);
	vcdp->declBus  (c+103,"fe_top dest_src_mux balanced_p",-1,31,0);
	vcdp->declBus  (c+104,"fe_top dest_src_mux lg_els_lp",-1,31,0);
	vcdp->declBus  (c+76,"fe_top dest_src_mux data_i(0)",-1,3,0);
	vcdp->declBus  (c+77,"fe_top dest_src_mux data_i(1)",-1,3,0);
	vcdp->declBus  (c+105,"fe_top dest_src_mux data_i(2)",-1,3,0);
	vcdp->declBus  (c+106,"fe_top dest_src_mux data_i(3)",-1,3,0);
	vcdp->declBus  (c+2,"fe_top dest_src_mux sel_i",-1,1,0);
	vcdp->declBus  (c+28,"fe_top dest_src_mux data_o",-1,3,0);
	vcdp->declBus  (c+101,"fe_top src_1_mux width_p",-1,31,0);
	vcdp->declBus  (c+101,"fe_top src_1_mux els_p",-1,31,0);
	vcdp->declBus  (c+103,"fe_top src_1_mux harden_p",-1,31,0);
	vcdp->declBus  (c+103,"fe_top src_1_mux balanced_p",-1,31,0);
	vcdp->declBus  (c+104,"fe_top src_1_mux lg_els_lp",-1,31,0);
	vcdp->declBus  (c+78,"fe_top src_1_mux data_i(0)",-1,3,0);
	vcdp->declBus  (c+76,"fe_top src_1_mux data_i(1)",-1,3,0);
	vcdp->declBus  (c+105,"fe_top src_1_mux data_i(2)",-1,3,0);
	vcdp->declBus  (c+107,"fe_top src_1_mux data_i(3)",-1,3,0);
	vcdp->declBus  (c+3,"fe_top src_1_mux sel_i",-1,1,0);
	vcdp->declBus  (c+29,"fe_top src_1_mux data_o",-1,3,0);
	vcdp->declBus  (c+92,"fe_top src_2_imm_mux width_p",-1,31,0);
	vcdp->declBus  (c+95,"fe_top src_2_imm_mux els_p",-1,31,0);
	vcdp->declBus  (c+103,"fe_top src_2_imm_mux harden_p",-1,31,0);
	vcdp->declBus  (c+103,"fe_top src_2_imm_mux balanced_p",-1,31,0);
	vcdp->declBus  (c+96,"fe_top src_2_imm_mux lg_els_lp",-1,31,0);
	vcdp->declBus  (c+5,"fe_top src_2_imm_mux data_i(0)",-1,15,0);
	vcdp->declBus  (c+6,"fe_top src_2_imm_mux data_i(1)",-1,15,0);
	vcdp->declBus  (c+7,"fe_top src_2_imm_mux data_i(2)",-1,15,0);
	vcdp->declBus  (c+8,"fe_top src_2_imm_mux data_i(3)",-1,15,0);
	vcdp->declBus  (c+9,"fe_top src_2_imm_mux data_i(4)",-1,15,0);
	vcdp->declBus  (c+10,"fe_top src_2_imm_mux data_i(5)",-1,15,0);
	vcdp->declBus  (c+11,"fe_top src_2_imm_mux data_i(6)",-1,15,0);
	vcdp->declBus  (c+12,"fe_top src_2_imm_mux data_i(7)",-1,15,0);
	vcdp->declBus  (c+4,"fe_top src_2_imm_mux sel_i",-1,2,0);
	vcdp->declBus  (c+30,"fe_top src_2_imm_mux data_o",-1,15,0);
	vcdp->declBus  (c+92,"fe_top branch_imm width_p",-1,31,0);
	vcdp->declBus  (c+101,"fe_top branch_imm els_p",-1,31,0);
	vcdp->declBus  (c+103,"fe_top branch_imm harden_p",-1,31,0);
	vcdp->declBus  (c+103,"fe_top branch_imm balanced_p",-1,31,0);
	vcdp->declBus  (c+104,"fe_top branch_imm lg_els_lp",-1,31,0);
	vcdp->declBus  (c+9,"fe_top branch_imm data_i(0)",-1,15,0);
	vcdp->declBus  (c+10,"fe_top branch_imm data_i(1)",-1,15,0);
	vcdp->declBus  (c+11,"fe_top branch_imm data_i(2)",-1,15,0);
	vcdp->declBus  (c+12,"fe_top branch_imm data_i(3)",-1,15,0);
	vcdp->declBus  (c+31,"fe_top branch_imm sel_i",-1,1,0);
	vcdp->declBus  (c+25,"fe_top branch_imm data_o",-1,15,0);
	vcdp->declBus  (c+108,"fe_top decode_branch_pipe WIDTH_P",-1,31,0);
	vcdp->declBit  (c+83,"fe_top decode_branch_pipe clk_i",-1);
	vcdp->declArray(c+32,"fe_top decode_branch_pipe data_i",-1,73,0);
	vcdp->declBit  (c+50,"fe_top decode_branch_pipe flush",-1);
	vcdp->declBit  (c+89,"fe_top decode_branch_pipe stall",-1);
	vcdp->declBit  (c+55,"fe_top decode_branch_pipe v_i",-1);
	vcdp->declArray(c+79,"fe_top decode_branch_pipe data_o",-1,73,0);
	vcdp->declBit  (c+57,"fe_top decode_branch_pipe v_o",-1);
	vcdp->declBit  (c+82,"fe_top branch_control sign_bit_i",-1);
	vcdp->declBit  (c+58,"fe_top branch_control is_branch_i",-1);
	vcdp->declBus  (c+47,"fe_top branch_control branch_op_code_i",-1,1,0);
	vcdp->declBit  (c+48,"fe_top branch_control take_branch_o",-1);
	vcdp->declBit  (c+49,"fe_top branch_control speculative_o",-1);
	vcdp->declBus  (c+109,"$unit I_ROM_DEPTH_P",-1,31,0);
	vcdp->declBus  (c+92,"$unit WORD_SIZE_P",-1,31,0);
	vcdp->declBus  (c+101,"$unit NUM_FLAGS",-1,31,0);
	vcdp->declBus  (c+92,"$unit NUM_ARCH_REG",-1,31,0);
	vcdp->declBus  (c+95,"$unit NUM_ARCH_DEST_REG",-1,31,0);
	vcdp->declBus  (c+95,"$unit NUM_ARCH_SRC1_REG",-1,31,0);
	vcdp->declBus  (c+110,"$unit BRANCH_CC_NUM",-1,31,0);
	vcdp->declBus  (c+97,"$unit NUM_FU",-1,31,0);
	vcdp->declBus  (c+96,"$unit WIDTH_FU",-1,31,0);
	vcdp->declBus  (c+95,"$unit INSTRUCTION_OP_NUM",-1,31,0);
	vcdp->declBus  (c+96,"$unit WIDTH_OP",-1,31,0);
	vcdp->declBus  (c+111,"$unit DECODED_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus  (c+112,"$unit NUM_PHYS_REG",-1,31,0);
	vcdp->declBus  (c+108,"$unit RENAMED_INSTRUCTION_WIDTH",-1,31,0);
	vcdp->declBus  (c+113,"$unit ROB_ENTRY",-1,31,0);
	vcdp->declBus  (c+92,"$unit SB_ENTRY",-1,31,0);
	vcdp->declBus  (c+114,"$unit ROB_WIDTH",-1,31,0);
	vcdp->declBus  (c+115,"$unit STORE_BUFFER_WIDTH",-1,31,0);
	vcdp->declBus  (c+114,"$unit ISSUE_ENTRY_WIDTH",-1,31,0);
	vcdp->declBus  (c+116,"$unit CDB_SB_WIDTH",-1,31,0);
	vcdp->declBus  (c+117,"$unit CDB_WIDTH",-1,31,0);
	vcdp->declBus  (c+95,"$unit NUM_EXTENDED",-1,31,0);
	vcdp->declBus  (c+101,"$unit NUM_DEST_SRC",-1,31,0);
	vcdp->declBus  (c+101,"$unit NUM_S1_SRC",-1,31,0);
	vcdp->declBus  (c+95,"$unit NUM_S2_IMM_SRC",-1,31,0);
	vcdp->declBus  (c+104,"$unit WIDTH_DEST",-1,31,0);
	vcdp->declBus  (c+104,"$unit WIDTH_S1",-1,31,0);
	vcdp->declBus  (c+96,"$unit WIDTH_IMM",-1,31,0);
	vcdp->declBus  (c+118,"$unit UCODE_WIDTH_P",-1,31,0);
    }
}

void Vfe_top::traceFullThis__1(Vfe_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfe_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->fe_top__DOT__instruction_mem__DOT__mem
			     [vlTOPp->fe_top__DOT__program_counter_fetch_r]),16);
	vcdp->fullBus  (c+2,((3U & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
				    >> 6U))),2);
	vcdp->fullBus  (c+3,((3U & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
				    >> 4U))),2);
	vcdp->fullBus  (c+4,((7U & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
				    >> 1U))),3);
	vcdp->fullBus  (c+5,((0xffffU & vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[0U])),16);
	vcdp->fullBus  (c+6,((0xffffU & ((vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[1U] 
					  << 0x10U) 
					 | (vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[0U] 
					    >> 0x10U)))),16);
	vcdp->fullBus  (c+7,((0xffffU & vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[1U])),16);
	vcdp->fullBus  (c+8,((0xffffU & ((vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[2U] 
					  << 0x10U) 
					 | (vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[1U] 
					    >> 0x10U)))),16);
	vcdp->fullBus  (c+9,((0xffffU & vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[2U])),16);
	vcdp->fullBus  (c+10,((0xffffU & ((vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[3U] 
					   << 0x10U) 
					  | (vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[2U] 
					     >> 0x10U)))),16);
	vcdp->fullBus  (c+11,((0xffffU & vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[3U])),16);
	vcdp->fullBus  (c+12,((0xffffU & (vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[3U] 
					  >> 0x10U))),16);
	vcdp->fullBit  (c+13,((4U == (7U & (IData)(
						   (vlTOPp->fe_top__DOT__instruction_decoded_decode 
						    >> 0xbU))))));
	vcdp->fullBus  (c+14,((0xfU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					       >> 0x35U)))),4);
	vcdp->fullBus  (c+15,((0xfU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					       >> 0x31U)))),4);
	vcdp->fullBus  (c+16,((0xffffU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
						  >> 0x21U)))),16);
	vcdp->fullBus  (c+17,((0xffffU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
						  >> 0x11U)))),16);
	vcdp->fullBus  (c+18,((7U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					     >> 0xeU)))),3);
	vcdp->fullBus  (c+19,((7U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					     >> 0xbU)))),3);
	vcdp->fullBus  (c+20,((0xfU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					       >> 7U)))),4);
	vcdp->fullBus  (c+21,((0xfU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					       >> 3U)))),4);
	vcdp->fullBit  (c+22,((1U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					     >> 2U)))));
	vcdp->fullBit  (c+23,((1U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					     >> 1U)))));
	vcdp->fullBit  (c+24,((1U & (IData)(vlTOPp->fe_top__DOT__instruction_decoded_decode))));
	vcdp->fullBus  (c+25,((0xffffU & (((0U == (0x1fU 
						   & ((IData)(0x40U) 
						      + 
						      (0x30U 
						       & ((IData)(
								  (vlTOPp->fe_top__DOT__instruction_decoded_decode 
								   >> 0xeU)) 
							  << 4U)))))
					    ? 0U : 
					   (vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[
					    ((IData)(1U) 
					     + (3U 
						& (((IData)(0x40U) 
						    + 
						    (0x30U 
						     & ((IData)(
								(vlTOPp->fe_top__DOT__instruction_decoded_decode 
								 >> 0xeU)) 
							<< 4U))) 
						   >> 5U)))] 
					    << ((IData)(0x20U) 
						- (0x1fU 
						   & ((IData)(0x40U) 
						      + 
						      (0x30U 
						       & ((IData)(
								  (vlTOPp->fe_top__DOT__instruction_decoded_decode 
								   >> 0xeU)) 
							  << 4U))))))) 
					  | (vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[
					     (3U & 
					      (((IData)(0x40U) 
						+ (0x30U 
						   & ((IData)(
							      (vlTOPp->fe_top__DOT__instruction_decoded_decode 
							       >> 0xeU)) 
						      << 4U))) 
					       >> 5U))] 
					     >> (0x1fU 
						 & ((IData)(0x40U) 
						    + 
						    (0x30U 
						     & ((IData)(
								(vlTOPp->fe_top__DOT__instruction_decoded_decode 
								 >> 0xeU)) 
							<< 4U)))))))),16);
	vcdp->fullBus  (c+26,(vlTOPp->fe_top__DOT____Vcellinp__fetch_decode_pipe__data_i),32);
	vcdp->fullBus  (c+27,(vlTOPp->fe_top__DOT____Vcellout__decoder__o),19);
	vcdp->fullBus  (c+28,((0xfU & ((0xed00U | (
						   (0x70U 
						    & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
						       >> 4U)) 
						   | (7U 
						      & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o))) 
				       >> (0xcU & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
						   >> 4U))))),4);
	vcdp->fullBus  (c+29,((0xfU & ((0xcd00U | (
						   (0x70U 
						    & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
						       << 4U)) 
						   | (7U 
						      & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
							 >> 3U)))) 
				       >> (0xcU & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
						   >> 2U))))),4);
	vcdp->fullBus  (c+30,((0xffffU & (((0U == (0x10U 
						   & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
						      << 3U)))
					    ? 0U : 
					   (vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[
					    ((IData)(1U) 
					     + (3U 
						& (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
						   >> 2U)))] 
					    << ((IData)(0x20U) 
						- (0x10U 
						   & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
						      << 3U))))) 
					  | (vlTOPp->fe_top__DOT____Vcellout__extend_the_things__immediate_o[
					     (3U & 
					      (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
					       >> 2U))] 
					     >> (0x10U 
						 & (vlTOPp->fe_top__DOT____Vcellout__decoder__o 
						    << 3U)))))),16);
	vcdp->fullBus  (c+31,((3U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_decode 
					     >> 0xeU)))),2);
	vcdp->fullArray(c+32,(vlTOPp->fe_top__DOT____Vcellinp__decode_branch_pipe__data_i),74);
	vcdp->fullBus  (c+35,((0xffffU & (vlTOPp->fe_top__DOT____Vcellout__decode_branch_pipe__data_o[0U] 
					  + (IData)(
						    (vlTOPp->fe_top__DOT__instruction_decoded_branch 
						     >> 0x11U))))),16);
	vcdp->fullBus  (c+36,((0xfU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					       >> 0x35U)))),4);
	vcdp->fullBus  (c+37,((0xfU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					       >> 0x31U)))),4);
	vcdp->fullBus  (c+38,((0xffffU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
						  >> 0x21U)))),16);
	vcdp->fullBus  (c+39,((0xffffU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
						  >> 0x11U)))),16);
	vcdp->fullBus  (c+40,((7U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					     >> 0xeU)))),3);
	vcdp->fullBus  (c+41,((7U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					     >> 0xbU)))),3);
	vcdp->fullBus  (c+42,((0xfU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					       >> 7U)))),4);
	vcdp->fullBus  (c+43,((0xfU & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					       >> 3U)))),4);
	vcdp->fullBit  (c+44,((1U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					     >> 2U)))));
	vcdp->fullBit  (c+45,((1U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					     >> 1U)))));
	vcdp->fullBit  (c+46,((1U & (IData)(vlTOPp->fe_top__DOT__instruction_decoded_branch))));
	vcdp->fullBus  (c+47,((3U & (IData)((vlTOPp->fe_top__DOT__instruction_decoded_branch 
					     >> 0xeU)))),2);
	vcdp->fullBit  (c+48,(vlTOPp->fe_top__DOT__take_branch));
	vcdp->fullBit  (c+49,(vlTOPp->fe_top__DOT__speculative_branch));
	vcdp->fullBit  (c+50,(vlTOPp->fe_top__DOT____Vcellinp__decode_branch_pipe__flush));
	vcdp->fullBus  (c+51,(vlTOPp->fe_top__DOT__program_counter_fetch_r),16);
	vcdp->fullBus  (c+52,((0xffffU & ((IData)(1U) 
					  + (IData)(vlTOPp->fe_top__DOT__program_counter_fetch_r)))),16);
	vcdp->fullBus  (c+53,((0xffffU & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
					  >> 0x10U))),16);
	vcdp->fullBus  (c+54,((0xffffU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o)),16);
	vcdp->fullBit  (c+55,(vlTOPp->fe_top__DOT__valid_f_d));
	vcdp->fullBus  (c+56,((0xffffU & vlTOPp->fe_top__DOT____Vcellout__decode_branch_pipe__data_o[0U])),16);
	vcdp->fullBit  (c+57,(vlTOPp->fe_top__DOT__valid_d_b));
	vcdp->fullBit  (c+58,((1U & (vlTOPp->fe_top__DOT____Vcellout__decode_branch_pipe__data_o[0U] 
				     >> 0x10U))));
	vcdp->fullBus  (c+59,(vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o),32);
	vcdp->fullBus  (c+60,((0xffU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o)),16);
	vcdp->fullBus  (c+61,((7U & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
				     >> 6U))),16);
	vcdp->fullBus  (c+62,((0x7fU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o)),16);
	vcdp->fullBus  (c+63,((0x1fU & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
					>> 6U))),16);
	vcdp->fullBus  (c+64,(((0xff00U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
								   >> 7U)))) 
					   << 8U)) 
			       | (0xffU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o))),16);
	vcdp->fullBus  (c+65,(((0xf800U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
								   >> 0xaU)))) 
					   << 0xbU)) 
			       | (0x7ffU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o))),16);
	vcdp->fullBus  (c+66,(((0xffc0U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
								   >> 5U)))) 
					   << 6U)) 
			       | (0x3fU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o))),16);
	vcdp->fullBus  (c+67,((0xfU & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
				       >> 3U))),16);
	vcdp->fullBus  (c+68,((0xffU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o)),8);
	vcdp->fullBus  (c+69,((7U & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
				     >> 6U))),3);
	vcdp->fullBus  (c+70,((0x7fU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o)),7);
	vcdp->fullBus  (c+71,((0x1fU & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
					>> 6U))),5);
	vcdp->fullBus  (c+72,((0x7ffU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o)),11);
	vcdp->fullBus  (c+73,((0x3fU & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o)),6);
	vcdp->fullBus  (c+74,((0xfU & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
				       >> 3U))),4);
	vcdp->fullBus  (c+75,((0x3ffU & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
					 >> 6U))),10);
	vcdp->fullBus  (c+76,((7U & vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o)),4);
	vcdp->fullBus  (c+77,((7U & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
				     >> 8U))),4);
	vcdp->fullBus  (c+78,((7U & (vlTOPp->fe_top__DOT____Vcellout__fetch_decode_pipe__data_o 
				     >> 3U))),4);
	vcdp->fullArray(c+79,(vlTOPp->fe_top__DOT____Vcellout__decode_branch_pipe__data_o),74);
	vcdp->fullBit  (c+82,((1U & (vlTOPp->fe_top__DOT____Vcellout__decode_branch_pipe__data_o[0U] 
				     >> 0xfU))));
	vcdp->fullBit  (c+83,(vlTOPp->clk_i));
	vcdp->fullBit  (c+84,(vlTOPp->reset_i));
	vcdp->fullBit  (c+85,(vlTOPp->ready_i));
	vcdp->fullQuad (c+86,(vlTOPp->final_decoded_instruction),57);
	vcdp->fullBit  (c+88,(vlTOPp->valid_o));
	vcdp->fullBit  (c+89,((1U & (~ (IData)(vlTOPp->ready_i)))));
	vcdp->fullBus  (c+90,((0xffffU & ((4U == (4U 
						  & (((IData)(vlTOPp->reset_i) 
						      << 2U) 
						     | ((2U 
							 & ((~ (IData)(vlTOPp->ready_i)) 
							    << 1U)) 
							| (IData)(vlTOPp->fe_top__DOT__take_branch)))))
					   ? 0U : (
						   (2U 
						    == 
						    (6U 
						     & (((IData)(vlTOPp->reset_i) 
							 << 2U) 
							| ((2U 
							    & ((~ (IData)(vlTOPp->ready_i)) 
							       << 1U)) 
							   | (IData)(vlTOPp->fe_top__DOT__take_branch)))))
						    ? (IData)(vlTOPp->fe_top__DOT__program_counter_fetch_r)
						    : 
						   ((1U 
						     == 
						     (((IData)(vlTOPp->reset_i) 
						       << 2U) 
						      | ((2U 
							  & ((~ (IData)(vlTOPp->ready_i)) 
							     << 1U)) 
							 | (IData)(vlTOPp->fe_top__DOT__take_branch))))
						     ? 
						    (vlTOPp->fe_top__DOT____Vcellout__decode_branch_pipe__data_o[0U] 
						     + (IData)(
							       (vlTOPp->fe_top__DOT__instruction_decoded_branch 
								>> 0x11U)))
						     : 
						    ((IData)(1U) 
						     + (IData)(vlTOPp->fe_top__DOT__program_counter_fetch_r))))))),16);
	vcdp->fullBus  (c+91,(0xffffffffU),32);
	vcdp->fullBus  (c+92,(0x10U),32);
	vcdp->fullBus  (c+93,(0x20U),32);
	vcdp->fullBit  (c+94,(1U));
	vcdp->fullBus  (c+95,(8U),32);
	vcdp->fullBus  (c+96,(3U),32);
	vcdp->fullBus  (c+97,(7U),32);
	vcdp->fullBus  (c+98,(5U),32);
	vcdp->fullBus  (c+99,(0xbU),32);
	vcdp->fullBus  (c+100,(6U),32);
	vcdp->fullBus  (c+101,(4U),32);
	vcdp->fullBus  (c+102,(0xaU),32);
	vcdp->fullBus  (c+103,(0U),32);
	vcdp->fullBus  (c+104,(2U),32);
	vcdp->fullBus  (c+105,(0xdU),4);
	vcdp->fullBus  (c+106,(0xeU),4);
	vcdp->fullBus  (c+107,(0xcU),4);
	vcdp->fullBus  (c+108,(0x4aU),32);
	vcdp->fullBus  (c+109,(0x10000U),32);
	vcdp->fullBus  (c+110,(0xfU),32);
	vcdp->fullBus  (c+111,(0x39U),32);
	vcdp->fullBus  (c+112,(0x80U),32);
	vcdp->fullBus  (c+113,(0x40U),32);
	vcdp->fullBus  (c+114,(0x37U),32);
	vcdp->fullBus  (c+115,(0x21U),32);
	vcdp->fullBus  (c+116,(0x15U),32);
	vcdp->fullBus  (c+117,(0x2dU),32);
	vcdp->fullBus  (c+118,(0x13U),32);
    }
}
