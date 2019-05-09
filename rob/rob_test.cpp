#include "Vrob.h"
#include "verilated.h"

#include <iostream>

static vluint64_t main_time = 0;

static void tick(Vrob* top) {
    top->clk_i = ((top->clk_i == 0) ? 1 : 0);
    top->eval();
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vrob* top = new Vrob;
    top->clk_i = 1;
    top->eval();
    tick(top);
    top->reset_i = 1;
    tick(top);
    tick(top);
    // test reset


    delete top; 
    return 0;
}