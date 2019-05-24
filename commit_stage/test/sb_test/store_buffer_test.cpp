#include "Vstore_buffer.h"
#include "verilated.h"

#include <iostream>

#define SB_ENTRY 16

using namespace std;

static vluint64_t main_time = 0;

vluint64_t set_wb(vluint64_t sb_dest, vluint64_t addr, vluint64_t result) {
    vluint64_t res = ((sb_dest & 0xf) << 32)
                   | ((addr & 0xffff) << 16)
                   | (result & 0xffff);
    return res;
}

static void tick(Vstore_buffer* top) {
    top->clk_i = ((top->clk_i == 0) ? 1 : 0);
    top->eval();
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vstore_buffer* top = new Vstore_buffer;
    top->clk_i = 1;
    top->eval();
    tick(top);
    top->reset_i = 1;
    top->rob_sb_valid_i = 0;
    tick(top);
    tick(top);
    // test reset
    assert(top->store_buffer__DOT__sb_num == SB_ENTRY);
    top->reset_i = 0;
    top->issue_sb_v_i = 1;
    tick(top);
    for (int i = 0; i < 16; i++) {
        assert(top->sb_issue_ready_o == 1);
        assert(top->sb_issue_entry_num_o == i);
        assert(top->store_buffer__DOT__sb_num == (SB_ENTRY - i));
        tick(top);
        tick(top);
    }
    assert(top->sb_issue_ready_o == 0);
    top->issue_sb_v_i = 0;
    top->exe_sb_v_i = 1;
    for (vluint64_t i = 0; i < SB_ENTRY; i++) {
        top->exe_sb_i = set_wb(i, 8, i);
        tick(top);
        tick(top);
        assert(top->sb_issue_ready_o == 0);
    }
    top->exe_sb_v_i = 0;
    top->exe_ld_bypass_addr_i = 8;
    top->exe_ld_pass_sb_num_i = 5;
    top->rob_sb_valid_i = 1;
    tick(top);
    assert(top->sb_ld_pass_valid_o == 1);
    assert(top->sb_ld_pass_value_o == 5);
    tick(top);
    tick(top);
    assert(top->sb_ld_pass_valid_o == 1);
    assert(top->sb_ld_pass_value_o == 5);
    tick(top);
    tick(top);
    tick(top);
    tick(top);
    assert(top->sb_issue_ready_o == 1);
    top->issue_sb_v_i = 1;
    tick(top);
    tick(top);
    tick(top);
    tick(top);
    tick(top);
    top->issue_sb_v_i = 0;
    top->rob_sb_valid_i = 0;
    assert(top->sb_issue_entry_num_o == 2);
    top->exe_sb_v_i = 1;
    top->exe_sb_i = set_wb(0, 8, 81);
    top->exe_ld_pass_sb_num_i = 0;
    tick(top);
    tick(top);
    assert(top->sb_ld_pass_valid_o == 1);
    assert(top->sb_ld_pass_value_o == 81);
    delete top; 
    return 0;
}