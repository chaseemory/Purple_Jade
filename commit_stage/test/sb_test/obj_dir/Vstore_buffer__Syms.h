// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vstore_buffer__Syms_H_
#define _Vstore_buffer__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vstore_buffer.h"
#include "Vstore_buffer___024unit.h"

// SYMS CLASS
class Vstore_buffer__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vstore_buffer*                 TOPp;
    
    // CREATORS
    Vstore_buffer__Syms(Vstore_buffer* topp, const char* namep);
    ~Vstore_buffer__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
