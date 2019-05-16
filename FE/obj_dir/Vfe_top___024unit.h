// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfe_top.h for the primary calling header

#ifndef _Vfe_top___024unit_H_
#define _Vfe_top___024unit_H_

#include "verilated.h"

class Vfe_top__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vfe_top___024unit) {
  public:
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vfe_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vfe_top___024unit& operator= (const Vfe_top___024unit&);  ///< Copying not allowed
    Vfe_top___024unit(const Vfe_top___024unit&);  ///< Copying not allowed
  public:
    Vfe_top___024unit(const char* name="TOP");
    ~Vfe_top___024unit();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfe_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
