#include "Vfu_mult.h"
#include "verilated.h"
#include "fu.h"

#include <iostream>

#define ROB_ENTRY 64

using namespace std;

static vluint64_t main_time = 0;

static void tick(Vfu_mult* top) {
    top->clk_i = ((top->clk_i == 0) ? 1 : 0);
    top->eval();
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vfu_mult* top = new Vfu_mult;
    top->clk_i = 1;
    top->eval();
    tick(top);
    // clock low check reset
    top->reset_i = 1;
    tick(top);
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
    assertRob((vluint64_t) top->mult_rob_o, rob_out);
    assertReg((vluint64_t) top->mult_reg_o, reg_out);
    top->exe_v_i = 1;
    top->operand1_i = 8;
    top->operand2_i = 9;
    tick(top);
    tick(top);
    top->exe_v_i = 0;
    assertRob((vluint64_t) top->mult_rob_o, rob_out);
    assertReg((vluint64_t) top->mult_reg_o, reg_out);
    tick(top);
    tick(top);
    assertRob((vluint64_t) top->mult_rob_o, rob_out);
    reg_out.valid = 1;
    reg_out.w_v = 1;
    reg_out.res = 72;
    assertReg((vluint64_t) top->mult_reg_o, reg_out);
    top->exe_v_i = 1;
    top->operand1_i = 9;
    top->operand2_i = 9;
    tick(top);
    tick(top);
    reg_out.valid = 0;
    reg_out.w_v = 0;
    assertReg((vluint64_t) top->mult_reg_o, reg_out, false);
    rob_out.valid = 1; rob_out.res = 72;
    assertRob((vluint64_t) top->mult_rob_o, rob_out);
    // misprediction come in
    top->mispredict_i = 1;
    tick(top);
    tick(top);
    reg_out.valid = 0; reg_out.w_v = 0; reg_out.res = 81;
    assertReg((vluint64_t) top->mult_reg_o, reg_out);
    delete top; 
    return 0;
}