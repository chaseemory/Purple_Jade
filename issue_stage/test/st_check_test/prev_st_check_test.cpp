#include "Varch_state.h"
#include "verilated.h"

#include <iostream>

#define ROB_ENTRY 64

using namespace std;

static vluint64_t main_time = 0;

static void tick(Varch_state* top) {
    top->clk_i = ((top->clk_i == 0) ? 1 : 0);
    top->eval();
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Varch_state* top = new Varch_state;
    top->clk_i = 1;
    top->eval();
    tick(top);
    top->reset_i = 1;
    top->issue_read_rs1_i = 7;
    top->issue_read_rs2_i = 18;
    tick(top);
    assert(top->rs1_valid_o == 1);    
    assert(top->rs2_valid_o == 0);    
    // test bypassing
    top->reset_i = 0;
    top->exe_w_v_i = 0x5;
    top->exe_addr_i = 18 | (19 << 14);
    top->exe_data_i[0] = 18;
    top->exe_data_i[1] = 19;
    top->issue_read_rs1_i = 18;
    top->issue_read_rs2_i = 19;
    top->rob_flag_valid_i = 1;
    top->rob_flag_i = 0x9f;
    tick(top);
    assert(top->rs1_valid_o == 1);
    assert(top->rs1_data_o == 18);
    assert(top->rs2_valid_o == 1);
    assert(top->rs2_data_o == 19);
    assert(top->flag_rob_o == 0x0);
    tick(top);
    assert(top->rs1_valid_o == 1);
    assert(top->rs1_data_o == 18);
    assert(top->rs2_valid_o == 1);
    assert(top->rs2_data_o == 19);
    assert(top->flag_rob_o == 0x9);
    top->rob_flag_i = 0x22;
    tick(top);
    tick(top);
    assert(top->flag_rob_o == 0xb);
    top->exe_w_v_i = 0x0;
    top->rob_phys_valid_i = 1;
    top->rob_phys_reg_cl_i = 19;
    tick(top);
    tick(top);   
    assert(top->rs2_valid_o == 0);
    delete top; 
    return 0;
}