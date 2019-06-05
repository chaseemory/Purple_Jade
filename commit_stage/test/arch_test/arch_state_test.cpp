#include "Varch_state_arch_state.h"
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
    top->rob_phys_mispredict_i = 0;
    top->rob_phys_valid_i = 0;
    tick(top);
    cout << hex << (vluint32_t) top->arch_state->valid[0] << endl;
    cout << hex << (vluint32_t) top->arch_state->valid[1] << endl;
    cout << hex << (vluint32_t) top->arch_state->valid[2] << endl;
    cout << hex << (vluint32_t) top->arch_state->valid[3] << endl;
    cout << hex << (vluint32_t) top->arch_state->valid_n[0] << endl;
    cout << hex << (vluint32_t) top->arch_state->valid_n[1] << endl;
    cout << hex << (vluint32_t) top->arch_state->valid_n[2] << endl;
    cout << hex << (vluint32_t) top->arch_state->valid_n[3] << endl;
    assert(top->arch_state->rs1_valid_o == 1);    
    assert(top->arch_state->rs2_valid_o == 0);    
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
    cout << "flags ";
    cout << (int) top->arch_state->flag_n << " "<< (int) top->arch_state->new_flag  <<  endl;
    assert(top->arch_state->rs1_valid_o == 1);
    assert(top->arch_state->rs1_data_o == 18);
    assert(top->arch_state->rs2_valid_o == 1);
    assert(top->arch_state->rs2_data_o == 19);
    assert(top->arch_state->flag_rob_o == 0x0);
    tick(top);
    assert(top->arch_state->rs1_valid_o == 1);
    assert(top->arch_state->rs1_data_o == 18);
    assert(top->arch_state->rs2_valid_o == 1);
    assert(top->arch_state->rs2_data_o == 19);
    cout << (int) top->flag_rob_o << endl;
    assert(top->flag_rob_o == 9);
    top->rob_flag_i = 0x22;
    tick(top);
    tick(top);
    assert(top->flag_rob_o == 0xb);
    top->exe_w_v_i = 0x0;
    top->rob_phys_valid_i = 1;
    top->rob_phys_reg_cl_i = 19;
    tick(top);
    tick(top);   
    assert(top->arch_state->rs2_valid_o == 0);
    delete top; 
    return 0;
}