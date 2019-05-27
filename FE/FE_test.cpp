#include "Vfe_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h" 

#include <iostream>

static vluint64_t main_time = 0;

#define NUM_PHY_REG 128
#define NUM_ARCH_REG 16

static void tick(Vfe_top* DUT, VerilatedVcdC* tfp, vluint64_t &time) {
    DUT->clk_i = ((DUT->clk_i == 0) ? 1 : 0);
    DUT->eval();
    time++;
    tfp->dump(time);
}




int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vfe_top* DUT = new Vfe_top;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    DUT->trace(tfp, 99);
    tfp->open("Vfe_top.vcd");

/*****************************************************************************/
    DUT->clk_i = 0;
    DUT->reset_i = 1;
    DUT->ready_i = 0;

    for(int i = 0; i < 10; i++) {
        tick(DUT, tfp, main_time);
    }

    
    DUT->reset_i = 0;
    DUT->ready_i = 1;

    for(int i = 0; i < 400; i++) {
        tick(DUT, tfp, main_time);
    }
    
/*****************************************************************************/
    tfp->close();
    delete DUT;
    delete tfp;
    exit(0);
}
