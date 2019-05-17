// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstore_buffer.h for the primary calling header

#ifndef _Vstore_buffer___024unit_H_
#define _Vstore_buffer___024unit_H_

#include "verilated.h"

class Vstore_buffer__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vstore_buffer___024unit) {
  public:
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vstore_buffer__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vstore_buffer___024unit);  ///< Copying not allowed
  public:
    Vstore_buffer___024unit(const char* name="TOP");
    ~Vstore_buffer___024unit();
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vstore_buffer__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
