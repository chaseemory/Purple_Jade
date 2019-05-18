// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrotate_left.h for the primary calling header

#ifndef _Vrotate_left___024unit_H_
#define _Vrotate_left___024unit_H_

#include "verilated.h"

class Vrotate_left__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vrotate_left___024unit) {
  public:
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vrotate_left__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrotate_left___024unit);  ///< Copying not allowed
  public:
    Vrotate_left___024unit(const char* name="TOP");
    ~Vrotate_left___024unit();
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vrotate_left__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
