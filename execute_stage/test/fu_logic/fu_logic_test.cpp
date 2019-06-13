#include "Vfu_logic.h"
#include "verilated.h"
#include "fu.h"

#include <iostream>

#define ROB_ENTRY 64

using namespace std;

static vluint64_t main_time = 0;

static void tick(Vfu_logic* top) {
    top->clk_i = ((top->clk_i == 0) ? 1 : 0);
    top->eval();
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vfu_logic* top = new Vfu_logic;
    top->clk_i = 1;
    top->eval();
    tick(top);
    // clock low check reset
    top->reset_i = 1;
    tick(top);
    tick(top);
    top->reset_i = 0;
    reg_wb_t reg_out;
    rob_wb_t rob_out;
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
    assertRob((vluint64_t) top->logic_rob_o, rob_out);
    assertReg((vluint64_t) top->logic_reg_o, reg_out);
    // test add
    top->exe_v_i = 1;
    top->operand1_i = 0xffff;
    top->operand2_i = 0x2;
    top->opcode_i = 5;
    tick(top);
    tick(top);
    reg_out.w_v = 0x1;
    reg_out.valid = 0x1;
    reg_out.res = 0x3fff;
    assertRob((vluint64_t) top->logic_rob_o, rob_out);
    assertReg((vluint64_t) top->logic_reg_o, reg_out);
    top->exe_v_i = 0;
    top->operand1_i = 0xffff;
    top->operand2_i = 0x2;
    top->opcode_i = 6;
    tick(top);
    tick(top);
    rob_out.valid = 0x1;
    rob_out.res = 0x3fff;
    reg_out.valid = 0;
    reg_out.w_v = 0;
    assertRob((vluint64_t) top->logic_rob_o, rob_out);
    assertReg((vluint64_t) top->logic_reg_o, reg_out, false);
    top->exe_v_i = 1;
    tick(top);
    tick(top);
    // rob is invalid and reg out is valid
    rob_out.valid = 0x0;
    assertRob((vluint64_t) top->logic_rob_o, rob_out, false);
    reg_out.valid = 0x1;
    reg_out.w_v = 0x1;
    reg_out.res = 0xffff;
    assertReg((vluint64_t) top->logic_reg_o, reg_out);
    tick(top);
    tick(top);
    rob_out.valid = 0x1;
    rob_out.res = 0xffff;
    assertRob((vluint64_t) top->logic_rob_o, rob_out);
    delete top; 
    return 0;
}