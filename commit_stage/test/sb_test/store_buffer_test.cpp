#include "Vstore_buffer.h"
#include "verilated.h"

#include <iostream>

#define ROB_ENTRY 64

using namespace std;

static vluint64_t main_time = 0;

static void tick(Vstore_buffer* top) {
    top->clk_i = ~top->clk_i;
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
    tick(top);
    tick(top);
    delete top; 
    return 0;
}