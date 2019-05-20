#include "Vprev_st_check.h"
#include "verilated.h"

#include <iostream>

#define ROB_ENTRY 64

using namespace std;

static vluint64_t main_time = 0;

static void tick(Vprev_st_check* top) {
    top->eval();
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vprev_st_check* top = new Vprev_st_check;
    top->issue_sb_num_vector_i[0] = 2;
    top->issue_sb_num_vector_i[1] = 3;
    top->issue_sb_num_vector_i[2] = 4;
    top->issue_sb_num_vector_i[3] = 5;
    top->issue_sb_num_vector_i[4] = 6;
    top->issue_sb_num_vector_i[5] = 7;
    top->sb_wb_vector_i = 0xd8;
    top->sb_commit_pt_i = 3;
    tick(top);
    assert((top->st_clear_vector_o & 0x1) == 0);
    assert((top->st_clear_vector_o & 0x2) != 0);
    assert((top->st_clear_vector_o & 0x4) != 0);
    assert((top->st_clear_vector_o & 0x8) == 0);
    assert((top->st_clear_vector_o & 0x10) == 0);
    assert((top->st_clear_vector_o & 0x20) == 0);
    delete top; 
    return 0;
}