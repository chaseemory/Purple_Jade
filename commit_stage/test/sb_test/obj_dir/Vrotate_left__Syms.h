// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vrotate_left__Syms_H_
#define _Vrotate_left__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vrotate_left.h"
#include "Vrotate_left___024unit.h"

// SYMS CLASS
class Vrotate_left__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vrotate_left*                  TOPp;
    
    // CREATORS
    Vrotate_left__Syms(Vrotate_left* topp, const char* namep);
    ~Vrotate_left__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
