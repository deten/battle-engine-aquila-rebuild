// auto-ported from 00442b00_vslot6.c (CDestroyableSegment::vslot6, 22 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CDestroyableSegment;

static undefined4 BEA_THISCALL ap_00442b00(CDestroyableSegment * this_)
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(this_ + 0x20);
  if ((piVar1 != (int *)0x0) && (piVar1[0xe] == 0)) {
                    
                    
    uVar2 = bea_vcall<uint32_t>(piVar1, 0x18);
    return uVar2;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00442b00, ap_00442b00));
