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
    renamed_t inst_1;
    inst_1.dest_id = 1;
    inst_1.source_1 = 2;            // 16 
    inst_1.source2_imm = 3;         
    inst_1.pc = pc_count;                  
    inst_1.opcode = 0;    // add              
    inst_1.func_unit = 1; //ALU           
    inst_1.flags = 0x0;               
    inst_1.bcc_op = 0;              
    inst_1.branch_speculation = 0;  
    inst_1.w_v = 1;                 //              7
    inst_1.imm = 0;                 //              6    
    inst_1.rob_dest = 0;            // 8 entries    5:3
    inst_1.is_wfs = 1;              //              2
    inst_1.sb_dest = 0; 
    
    DUT->instruction_i = set_renamed_instruction(&inst_1);
    DUT->valid_i = 1;


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 1);
    assert(DUT->issue_table__DOT__valid_inst == 0b1);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);

    pc_count++;

    renamed_t inst;
    inst.dest_id = 2;
    inst.source_1 = 4;            // 16 
    inst.source2_imm = 5;         
    inst.pc = pc_count;                  
    inst.opcode = 0;    // add              
    inst.func_unit = 2; //LOGICAL           
    inst.flags = 0x0;               
    inst.bcc_op = 0;              
    inst.branch_speculation = 0;  
    inst.w_v = 1;                 //              7
    inst.imm = 0;                 //              6    
    inst.rob_dest = 0;            // 8 entries    5:3
    inst.is_wfs = 1;              //              2
    inst.sb_dest = 0; 

    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 2);
    assert(DUT->issue_table__DOT__valid_inst == 0x3);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);

    pc_count++;

    inst.dest_id = 3;
    inst.source_1 = 6;            // 16 
    inst.source2_imm = 7;         
    inst.pc = pc_count;                  

    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 3);
    assert(DUT->issue_table__DOT__valid_inst == 0x7);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;

    inst.dest_id = 4;
    inst.source_1 = 8;            // 16 
    inst.source2_imm = 9;         
    inst.pc = pc_count;                  

    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 4);
    assert(DUT->issue_table__DOT__valid_inst == 0xF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;

    inst.dest_id = 5;
    inst.source_1 = 9;            // 16 
    inst.source2_imm = 10;         
    inst.pc = pc_count;                  

    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 5);
    assert(DUT->issue_table__DOT__valid_inst == 0x1F);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;

    inst.dest_id = 6;
    inst.source_1 = 10;            // 16 
    inst.source2_imm = 11;         
    inst.pc = pc_count;

    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 6);
    assert(DUT->issue_table__DOT__valid_inst == 0x3F);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;

    inst.dest_id = 7;
    inst.source_1 = 11;            // 16 
    inst.source2_imm = 12;         
    inst.pc = pc_count;                  

    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 7);
    assert(DUT->issue_table__DOT__valid_inst == 0x7F);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;

    inst.dest_id = 8;
    inst.source_1 = 12;            // 16 
    inst.source2_imm = 13;         
    inst.pc = pc_count;                  

    DUT->instruction_i = set_renamed_instruction(&inst);

    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 8);
    assert(DUT->issue_table__DOT__valid_inst == 0xFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;

    inst.dest_id = 8;
    inst.source_1 = 12;            // 16 
    inst.source2_imm = 13;         
    inst.pc = pc_count;                  
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 9);
    assert(DUT->issue_table__DOT__valid_inst == 0x1FF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 10);
    assert(DUT->issue_table__DOT__valid_inst == 0x3FF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 11);
    assert(DUT->issue_table__DOT__valid_inst == 0x7FF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 12);
    assert(DUT->issue_table__DOT__valid_inst == 0xFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 13);
    assert(DUT->issue_table__DOT__valid_inst == 0x1FFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 14);
    assert(DUT->issue_table__DOT__valid_inst == 0x3FFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 15);
    assert(DUT->issue_table__DOT__valid_inst == 0x7FFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 16);
    assert(DUT->issue_table__DOT__valid_inst == 0xFFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 17);
    assert(DUT->issue_table__DOT__valid_inst == 0x1FFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 18);
    assert(DUT->issue_table__DOT__valid_inst == 0x3FFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 19);
    assert(DUT->issue_table__DOT__valid_inst == 0x7FFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 20);
    assert(DUT->issue_table__DOT__valid_inst == 0xFFFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 21);
    assert(DUT->issue_table__DOT__valid_inst == 0x1FFFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 22);
    assert(DUT->issue_table__DOT__valid_inst == 0x3FFFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 23);
    assert(DUT->issue_table__DOT__valid_inst == 0x7FFFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 24);
    assert(DUT->issue_table__DOT__valid_inst == 0xFFFFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 25);
    assert(DUT->issue_table__DOT__valid_inst == 0x1FFFFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 26);
    assert(DUT->issue_table__DOT__valid_inst == 0x3FFFFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 27);
    assert(DUT->issue_table__DOT__valid_inst == 0x7FFFFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 28);
    assert(DUT->issue_table__DOT__valid_inst == 0xFFFFFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 29);
    assert(DUT->issue_table__DOT__valid_inst == 0x1FFFFFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);


    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 30);
    assert(DUT->issue_table__DOT__valid_inst == 0x3FFFFFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);

    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 31);
    assert(DUT->issue_table__DOT__valid_inst == 0x7FFFFFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 1);

    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);


    tick(DUT, tfp, main_time);

    // TESTED FULL ISSUE TABLE BUT NONE READY
    assert(DUT->issue_table__DOT__inst_count == 32);
    assert(DUT->issue_table__DOT__valid_inst == 0xFFFFFFFF);
    assert(DUT->valid_o == 0x00);
    assert(DUT->ready_o == 0);
    assert(DUT->issue_table__DOT__inst_ready == 0);

    // NO MORE INPUTS
    DUT->valid_i = 0;

    //Validate our First Instruction
    DUT->cdb[0] = 0b1001000000000000000000001;
    DUT->cdb[1] = 0b1001100000000000000000001;



    tick(DUT, tfp, main_time);

    assert(DUT->issue_table__DOT__inst_count == 32);
    assert(DUT->issue_table__DOT__valid_inst == 0xFFFFFFFF);
    assert(DUT->ready_o == 0);
    assert(DUT->issue_table__DOT__inst_ready == 1);
    assert(DUT->valid_o == 0b000010);


    //Validate our Second Instruction
    DUT->cdb[0] = 0b1010100000000000000000001;
    DUT->cdb[1] = 0b1010000000000000000000001;

    DUT->eval();


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 31);
    assert(DUT->issue_table__DOT__valid_inst == 0xFFFFFFFE);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 2);
    assert(DUT->valid_o == 0b000100);


    tick(DUT, tfp, main_time);


    assert(DUT->issue_table__DOT__inst_count == 30);
    assert(DUT->issue_table__DOT__valid_inst == 0xFFFFFFFC);
    assert(DUT->ready_o == 1);
    assert(DUT->issue_table__DOT__inst_ready == 0);
    assert(DUT->valid_o == 0b000000);



    tick(DUT, tfp, main_time);

    //ADD ANOTHER INSTRUCTION
    DUT->valid_i = 1;

    pc_count++;
    inst.dest_id = 8;        
    inst.pc = pc_count;
    DUT->instruction_i = set_renamed_instruction(&inst);




    tick(DUT, tfp, main_time);
    tick(DUT, tfp, main_time);

/*****************************************************************************/
    tfp->close();
    delete DUT;
    delete tfp;
    exit(0);
}
