// auto-ported from 00447b60_FUN_00447b60.c (FUN_00447b60, 66 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_00447b60(void * this_)
{
  float fVar1;
  float fVar2;
  
  if ((*(int *)((int)this_ + 0x290) != 0) &&
     (fVar1 = *(float *)((int)this_ + 0x1c) - *(float *)((int)this_ + 0x280),
     fVar2 = *(float *)((int)this_ + 0x20) - *(float *)((int)this_ + 0x284),
     SQRT(fVar1 * fVar1 + fVar2 * fVar2) < 10.0f)) {
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00447b60, ap_00447b60));
