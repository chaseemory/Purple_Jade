// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrob.h for the primary calling header

#ifndef _Vrob___024unit_H_
#define _Vrob___024unit_H_

#include "verilated.h"

class Vrob__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vrob___024unit) {
  public:
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vrob__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrob___024unit);  ///< Copying not allowed
  public:
    Vrob___024unit(const char* name="TOP");
    ~Vrob___024unit();
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vrob__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
