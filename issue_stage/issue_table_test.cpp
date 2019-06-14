#include "Vissue_table.h"
#include "verilated.h"
#include "verilated_vcd_c.h" 

#include <iostream>



#define NUM_PHY_REG 128
#define NUM_ARCH_REG 16

using namespace std;

typedef struct {
  uint64_t dest_id;             // 16 entries   62:59
  uint64_t source_1;            // 16 entries   58:55
  uint64_t source2_imm;         // 16           54:39
  uint64_t pc;                  // 16           38:23
  uint64_t opcode;              // 8            22:20
  uint64_t func_unit;           // 6            19:17
  uint64_t flags;               // 4            16:13
  uint64_t bcc_op;              // 15 entries   12:9
  uint64_t branch_speculation;  //              8
  uint64_t w_v;                 //              7
  uint64_t imm;                 //              6    
  uint64_t rob_dest;            // 8 entries    5:3
  uint64_t is_wfs;              //              2
  uint64_t sb_dest;             // 4entries     1:0
} renamed_t;


uint64_t set_renamed_instruction(renamed_t* inst) {
    uint64_t temp;
    temp = (inst->sb_dest & 0x3)
         | ((inst->is_wfs & 0x1) << 2)
         | ((inst->rob_dest & 0x7) << 3)
         | ((inst->imm & 0x1) << 6)
         | ((inst->w_v & 0x1) << 7)
         | ((inst->branch_speculation & 0x1) << 8)
         | ((inst->bcc_op & 0xF) << 9)
         | ((inst->flags & 0xF) << 13)
         | ((inst->func_unit & 0x7) << 17)
         | ((inst->opcode & 0x7) << 20)
         | ((inst->pc & 0xFFFF) << 23)
         | ((inst->source2_imm & 0xFFFF) << 39)
         | ((inst->source_1 & 0xF) << 55)
         | ((inst->dest_id & 0xF) << 59);
    return temp;
    }


static void tick(Vissue_table* DUT, VerilatedVcdC* tfp, vluint64_t &time) {

    

    DUT->clk_i = 0;
    DUT->eval();

    tfp->dump(time);

    time++;

    DUT->clk_i = 1;
    DUT->eval();

    tfp->dump(time);

    time++;

    DUT->clk_i = 0;
    DUT->eval();
    
    tfp->dump(time);
}


static vluint64_t main_time = 0;

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vissue_table* DUT = new Vissue_table;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    DUT->trace(tfp, 99);
    tfp->open("Vissue_table.vcd");

/*****************************************************************************/
    DUT->clk_i = 0;
    DUT->reset_i = 1;
    DUT->valid_i = 0;
    DUT->st_clear_vector_i = 0;
    DUT->cdb[0] = 0b0000000000000000000000000;
    DUT->cdb[1] = 0b0000000000000000000000000;
    DUT->cdb[2] = 0b0000000000000000000000000;
    DUT->cdb[3] = 0b0000000000000000000000000;
    DUT->cdb[4] = 0b0000000000000000000000000;
    DUT->cdb[5] = 0b0000000000000000000000000;
    DUT->cdb[6] = 0b0000000000000000000000000;

    //REG FILE NEVER HAS DATA FOR TEST
    DUT->new_instr_data_1_v = 0;
    DUT->new_instr_data_2_v = 0;

    for(int i = 0; i < 4; i++) {
        tick(DUT, tfp, main_time);
    }

    DUT->reset_i = 0;

    for(int i = 0; i < 1; i++) {
        tick(DUT, tfp, main_time);
    }

    // Test rest state
    assert(DUT->issue_table__DOT__inst_count == 0);
    assert(DUT->valid_o == 0x0000);
    assert(DUT->ready_o == 1);

    for(int i = 0; i < 2; i++) {
        tick(DUT, tfp, main_time);
    }




    uint64_t pc_count = 0;

    // Build first instruction
    renamed_t inst;
    inst.dest_id = 1;
    inst.source_1 = 1;
    inst.source2_imm = 1;
    inst.pc = pc_count;
    inst.opcode = 0;
    inst.func_unit = 2; //LOGICAL           
    inst.flags = 0x0;
    inst.bcc_op = 0;
    inst.branch_speculation = 0;
    inst.w_v = 1;
    inst.imm = 0;
    inst.rob_dest = 0;
    inst.is_wfs = 1;
    inst.sb_dest = 0;
    
    DUT->instruction_i = set_renamed_instruction(&inst);
    DUT->valid_i = 1;


    DUT->eval();

    assert(DUT->issue_table__DOT__new_instr_loc == 0);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 1);
    assert(DUT->issue_table__DOT__valid_inst == 0b1);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);

    pc_count++;

    inst.dest_id = 2;
    inst.source_1 = 2;            // 16 
    inst.source2_imm = 2;         
    inst.pc = pc_count;                                
    inst.rob_dest = 0;
    inst.is_wfs = 1;
    inst.sb_dest = 0; 

    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 2);
    assert(DUT->issue_table__DOT__valid_inst == 0x3);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);

    pc_count++;

    inst.dest_id = 3;
    inst.source_1 = 3;            // 16 
    inst.source2_imm = 3;         
    inst.pc = pc_count;                  

    DUT->instruction_i = set_renamed_instruction(&inst);



    tick(DUT, tfp, main_time);

    
    assert(DUT->issue_table__DOT__inst_count == 3);
    assert(DUT->issue_table__DOT__valid_inst == 0x7);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;

    inst.dest_id = 4;
    inst.source_1 = 4;            // 16 
    inst.source2_imm = 4;         
    inst.pc = pc_count;                  

    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 4);
    assert(DUT->issue_table__DOT__valid_inst == 0xF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;

    inst.dest_id = 5;
    inst.source_1 = 5;            // 16 
    inst.source2_imm = 5;         
    inst.pc = pc_count;                  

    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 5);
    assert(DUT->issue_table__DOT__valid_inst == 0x1F);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;

    inst.dest_id = 6;
    inst.source_1 = 6;            // 16 
    inst.source2_imm = 6;         
    inst.pc = pc_count;

    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 6);
    assert(DUT->issue_table__DOT__valid_inst == 0x3F);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;

    inst.dest_id = 7;
    inst.source_1 = 7;            // 16 
    inst.source2_imm = 7;         
    inst.pc = pc_count;                  

    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 7);
    assert(DUT->issue_table__DOT__valid_inst == 0x7F);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;

    inst.dest_id = 8;
    inst.source_1 = 8;            // 16 
    inst.source2_imm = 8;         
    inst.pc = pc_count;                  


    tick(DUT, tfp, main_time);


    // TESTED FULL ISSUE TABLE BUT NONE READY
    assert(DUT->issue_table__DOT__inst_count == 8);
    assert(DUT->issue_table__DOT__valid_inst == 0xFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 0);
    assert(DUT->issue_table__DOT__inst_ready == 0);


    // NO MORE INPUTS
    DUT->valid_i = 0;



    tick(DUT, tfp, main_time);

    assert(DUT->issue_table__DOT__inst_count == 8);
    assert(DUT->issue_table__DOT__valid_inst == 0xFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 0);
    assert(DUT->issue_table__DOT__inst_ready == 0);

    tick(DUT, tfp, main_time);

    assert(DUT->issue_table__DOT__inst_count == 8);
    assert(DUT->issue_table__DOT__valid_inst == 0xFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 0);
    assert(DUT->issue_table__DOT__inst_ready == 0);

    tick(DUT, tfp, main_time);

    assert(DUT->issue_table__DOT__inst_count == 8);
    assert(DUT->issue_table__DOT__valid_inst == 0xFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 0);
    assert(DUT->issue_table__DOT__inst_ready == 0);

    tick(DUT, tfp, main_time);



    //Validate our First Instruction
    DUT->cdb[0] = 0b1000100000000000000000001;
    DUT->cdb[1] = 0b1000100000000000000000001;



    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 8);
    assert(DUT->issue_table__DOT__valid_inst == 0xFF);
    assert(DUT->ready_o == 0);
    assert(DUT->issue_table__DOT__inst_ready == 1);
    assert(DUT->valid_o == 0b000100);


    //Validate our Second Instruction
    DUT->cdb[0] = 0b1001000000000000000000001;
    DUT->cdb[1] = 0b1001000000000000000000001;


    tick(DUT, tfp, main_time);

    
    //CLEAR CDB
    DUT->cdb[0] = 0;
    DUT->cdb[1] = 0;

    assert(DUT->issue_table__DOT__inst_count == 7);
    assert(DUT->issue_table__DOT__valid_inst == 0xFE);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 2);
    assert(DUT->valid_o == 0b000100);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 6);
    assert(DUT->issue_table__DOT__valid_inst == 0xFC);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 0);
    assert(DUT->valid_o == 0b000000);



    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 6);
    assert(DUT->issue_table__DOT__valid_inst == 0xFC);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 0);
    assert(DUT->valid_o == 0b000000);


    //ADD SB DEPENDENT INSTRUCTION
    DUT->valid_i = 1;

    pc_count++;
    inst.dest_id = 0;        
    inst.pc = pc_count;
    inst.source_1 = 0;
    inst.source2_imm = 0;
    inst.is_wfs = 0;
    inst.sb_dest = 0;

    DUT->instruction_i = set_renamed_instruction(&inst);




    tick(DUT, tfp, main_time);

    DUT->valid_i = 0;

    //Validate our SB Instruction DEPENDENCIES
    DUT->cdb[0] = 0b1000000000000000000000001;


    assert(DUT->issue_table__DOT__inst_count == 7);
    assert(DUT->issue_table__DOT__valid_inst == 0xFD);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 0);
    assert(DUT->valid_o == 0b000000);



    tick(DUT, tfp, main_time);

    // VALIDATE SB DEPENDENCE
    DUT->st_clear_vector_i = 1;

    assert(DUT->issue_table__DOT__inst_count == 7);
    assert(DUT->issue_table__DOT__valid_inst == 0xFD);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 0);
    assert(DUT->valid_o == 0b000000);


    tick(DUT, tfp, main_time);

    DUT->st_clear_vector_i = 0;

    assert(DUT->issue_table__DOT__inst_count == 7);
    assert(DUT->issue_table__DOT__valid_inst == 0xFD);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 1);             // SB INSTR READY
    assert(DUT->valid_o == 0b000100);

    //Validate our 3rd instruction ~~Random~~
    DUT->cdb[0] = 0b1001100000000000000000001;

    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 6);
    assert(DUT->issue_table__DOT__valid_inst == 0xFC);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 4);
    assert(DUT->valid_o == 0b000100);

    //ADD SB DEPENDENT INSTRUCTION FOR FUTURE DO ALL THE THINGS
    DUT->valid_i = 1;

    pc_count++;
    inst.dest_id = 1;
    inst.pc = pc_count;
    inst.source_1 = 0;
    inst.source2_imm = 0;
    inst.is_wfs = 0;
    inst.sb_dest = 0;

    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    DUT->valid_i = 0;

    //Validate our 4th instruction ~~Random~~ SO WE CAN ISSUE IT NEXT CYCLE
    DUT->cdb[0] = 0b1010000000000000000000001;
    

    assert(DUT->issue_table__DOT__inst_count == 6);
    assert(DUT->issue_table__DOT__valid_inst == 0xF9);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 0);
    assert(DUT->valid_o == 0b000000);


    tick(DUT, tfp, main_time);

    /*  This cycle we do all that things at once, accept new instruction, 
        issue instruction, accept data on multiple CDBs and validate a SB instruction
    */


    //Validate our 5th-8th instruction
    DUT->cdb[0] = 0b1010100000000000000000001;
    DUT->cdb[1] = 0b1011000000000000000000001;
    DUT->cdb[2] = 0b1011100000000000000000001;
    DUT->cdb[3] = 0b1100000000000000000000001;
    //Validate our SB instruction
    DUT->cdb[4] = 0b1000000000000000000000001;
    //VALIDATE SB ENTRY
    DUT->st_clear_vector_i = 1;

    


    assert(DUT->issue_table__DOT__inst_count == 6);
    assert(DUT->issue_table__DOT__valid_inst == 0xF9);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 0b00001000);
    assert(DUT->valid_o == 0b000100);


    tick(DUT, tfp, main_time);


    DUT->st_clear_vector_i = 0;

    assert(DUT->issue_table__DOT__inst_count == 5);
    assert(DUT->issue_table__DOT__valid_inst == 0xF1);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 0xF1);
    assert(DUT->valid_o == 0b000100);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 4);
    assert(DUT->issue_table__DOT__valid_inst == 0xE1);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 0xE1);
    assert(DUT->valid_o == 0b000100);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 3);
    assert(DUT->issue_table__DOT__valid_inst == 0xC1);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 0xC1);
    assert(DUT->valid_o == 0b000100);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 2);
    assert(DUT->issue_table__DOT__valid_inst == 0x81);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 0x81);
    assert(DUT->valid_o == 0b000100);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 1);
    assert(DUT->issue_table__DOT__valid_inst == 0x01);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 0x01);
    assert(DUT->valid_o == 0b000100);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 0);
    assert(DUT->issue_table__DOT__valid_inst == 0x00);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 0x00);
    assert(DUT->valid_o == 0b000000);


    tick(DUT, tfp, main_time);
    tick(DUT, tfp, main_time);

/*****************************************************************************/

    printf("\n\n\nYOU DID IT DUMMY\n\n\n");


    tfp->close();
    delete DUT;
    delete tfp;
    exit(0);
}