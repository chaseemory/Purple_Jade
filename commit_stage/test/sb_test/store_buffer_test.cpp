#include "Vrotate_left.h"
#include "verilated.h"

#include <iostream>

#define SB_ENTRY 16

using namespace std;

static vluint64_t main_time = 0;

static void tick(Vrotate_left* top) {
    top->clk_i = ((top->clk_i == 0) ? 1 : 0);
    top->eval();
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vrotate_left* top = new Vrotate_left;
    top->clk_i = 1;
    top->eval();
    tick(top);
    top->reset_i = 1;
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
    delete top; 
    return 0;
}