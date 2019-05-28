// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrename_stage.h for the primary calling header

#ifndef _Vrename_stage___024unit_H_
#define _Vrename_stage___024unit_H_

#include "verilated.h"

class Vrename_stage__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vrename_stage___024unit) {
  public:
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vrename_stage__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrename_stage___024unit);  ///< Copying not allowed
  public:
    Vrename_stage___024unit(const char* name="TOP");
    ~Vrename_stage___024unit();
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vrename_stage__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
