#include "Vissue_table.h"
#include "verilated.h"
#include "verilated_vcd_c.h" 

#include <iostream>

static vluint64_t main_time = 0;

#define NUM_PHY_REG 128
#define NUM_ARCH_REG 16

static void tick(Vissue_table* DUT, VerilatedVcdC* tfp, vluint64_t &time) {
    DUT->clk_i = ((DUT->clk_i == 0) ? 1 : 0);
    DUT->eval();
    main_time++;
    tfp->dump(time);
}





int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vissue_table* DUT = new Vissue_table;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    DUT->trace(tfp, 99);
    tfp->open("Vissue_table.vcd");

/*****************************************************************************/
    DUT->clk_i = 0;
    DUT->reset_i = 1;
    DUT->valid_i = 0;

    for(int i = 0; i < 10; i++) {
        tick(DUT, tfp, main_time);
    }



    
    DUT->reset_i = 0;
    DUT->valid_i = 1;

    for(int i = 0; i < 400; i++) {
        tick(DUT, tfp, main_time);
    }
    
/*****************************************************************************/
    tfp->close();
    delete DUT;
    delete tfp;
    exit(0);
}
