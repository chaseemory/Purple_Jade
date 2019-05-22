#include "Vfu_lsu.h"
#include "verilated.h"
#include "fu.h"

#include <iostream>

#define ROB_ENTRY 64

using namespace std;

typedef struct
{
  vluint64_t sb_dest;// 4:32
  vluint64_t address;// 16:16 
  vluint64_t result; // 16:0
} sb_wb_t;

void assertSb(vluint64_t res, sb_wb_t a, bool check_res=true) {
    assert((res & 0xffff) == a.result);
    assert(((res >> 16) & 0xffff) == a.address);
    assert(((res >> 32) & 0xf) == a.sb_dest);
}

static vluint64_t main_time = 0;

static void tick(Vfu_lsu* top) {
    top->clk_i = ((top->clk_i == 0) ? 1 : 0);
    top->eval();
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vfu_lsu* top = new Vfu_lsu;
    top->clk_i = 1;
    top->eval();
    tick(top);
    // clock low check reset
    top->reset_i = 1;
    tick(top);
    tick(top);
    tick(top);
    reg_wb_t reg_out;
    rob_wb_t rob_out;
    sb_wb_t sb_out;
    reg_out.valid = 0;
    reg_out.reg = 0;
    reg_out.res = 0;
    reg_out.flag = 0;
    reg_out.w_v = 0;
    rob_out.rob_dest = 0;
    rob_out.valid = 0;
    rob_out.reg = 0;
    rob_out.res = 0;
    rob_out.flag = 0;
    sb_out.result = 0;
    sb_out.address = 0;
    sb_out.sb_dest = 0;
    assertRob((vluint64_t) top->lsu_rob_o, rob_out);
    assertReg((vluint64_t) top->lsu_reg_o, reg_out);
    assertSb((vluint64_t) top->lsu_sb_o, sb_out);
    top->reset_i = 0;
    top->mem_data_i = 9;
    top->sb_ld_bypass_value_i = 8;
    top->operand1_i = 4;
    top->operand2_i = 9;
    top->imm_i = 4;
    top->exe_v_i = 1;
    top->opcode_i = 1;  // load
    tick(top);
    tick(top);
    // test exe_lsu_not_valid
    top->exe_v_i = 0;
    reg_out.w_v = 1;
    reg_out.valid = 1;
    reg_out.res = 9;
    assertRob((vluint64_t) top->lsu_rob_o, rob_out);
    assertReg((vluint64_t) top->lsu_reg_o, reg_out);
    assert(top->lsu_sb_v_o == 0);
    assertSb((vluint64_t) top->lsu_sb_o, sb_out);
    top->eval();
    tick(top);
    tick(top);
    reg_out.w_v = 0;
    reg_out.valid = 0;
    assertReg((vluint64_t) top->lsu_reg_o, reg_out, false);
    top->sb_ld_bypass_valid_i = 1;
    tick(top);
    tick(top);
    // test load without bypass
    top->exe_v_i = 1;
    assert(top->lsu_sb_v_o == 0);
    // reg out invalid
    reg_out.w_v = 0;
    reg_out.valid = 0;
    assertReg((vluint64_t) top->lsu_reg_o, reg_out, false);
    // rob valid
    rob_out.valid = 0x1; rob_out.res = 8;
    assertRob((vluint64_t) top->lsu_rob_o, rob_out);
    tick(top);
    tick(top);
    top->exe_v_i = 0;
    tick(top);
    tick(top);
    tick(top);
    tick(top);
    tick(top);
    tick(top);
    tick(top);
    tick(top);
    tick(top);
    tick(top);
    tick(top);
    tick(top);
    tick(top);
    tick(top);
    top->exe_v_i = 1;
    top->opcode_i = 0;
    tick(top);
    tick(top);
    tick(top);
    tick(top);
    assert(top->lsu_sb_v_o == 0x1);
    delete top; 
    return 0;
}