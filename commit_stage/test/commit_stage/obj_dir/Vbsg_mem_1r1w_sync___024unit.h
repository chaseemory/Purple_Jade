// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbsg_mem_1r1w_sync.h for the primary calling header

#ifndef _Vbsg_mem_1r1w_sync___024unit_H_
#define _Vbsg_mem_1r1w_sync___024unit_H_

#include "verilated.h"

class Vbsg_mem_1r1w_sync__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vbsg_mem_1r1w_sync___024unit) {
  public:
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vbsg_mem_1r1w_sync__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vbsg_mem_1r1w_sync___024unit);  ///< Copying not allowed
  public:
    Vbsg_mem_1r1w_sync___024unit(const char* name="TOP");
    ~Vbsg_mem_1r1w_sync___024unit();
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vbsg_mem_1r1w_sync__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
