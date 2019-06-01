#include "Vpj_top_arch_state.h"
#include "Vpj_top_rob.h"
#include "Vpj_top_store_buffer.h"
#include "Vpj_top_commit_stage.h"
#include "Vpj_top_fe_top.h"
#include "Vpj_top_be_top.h"
#include "Vpj_top_pj_top.h"
#include "Vpj_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h" 
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>

using namespace std;

static vluint64_t main_time = 0;

static void tick(Vpj_top* DUT, VerilatedVcdC* tfp, vluint64_t &time) {

    DUT->clk_i = 0;
    DUT->eval();

    tfp->dump(time);

    time++;

    DUT->clk_i = 1;
    DUT->eval();

    tfp->dump(time);

    time++;

    DUT->clk_i = 0;
    DUT->eval();
    
    tfp->dump(time);
}


int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vpj_top* DUT = new Vpj_top;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    DUT->trace(tfp, 99);
    tfp->open("Vpj_top.vcd");

/*****************************************************************************/
    DUT->clk_i = 0;
    DUT->reset_i = 1;

    for(int i = 0; i < 10; i++) {
        tick(DUT, tfp, main_time);
    }
    
    DUT->reset_i = 0;

    for(int i = 0; i < 1200; i++) {
        tick(DUT, tfp, main_time);
    }
    
/*****************************************************************************/
    tfp->close();
    delete DUT;
    delete tfp;
    exit(0);
}
