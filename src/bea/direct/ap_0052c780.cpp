// auto-ported from 0052c780_FUN_0052c780.c (FUN_0052c780, 94 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0082b484 GLOBAL_AT(int, 0x0082b484)

static void BEA_THISCALL ap_0052c780(void * this_)
{
  float fVar1;
  
  if (DAT_0082b484 == 1) {
    fVar1 = 1.7777778f;
  }
  else {
    if (DAT_0082b484 == 2) {
      *(undefined4 *)((int)this_ + 0x32e90) = 0x3f800000;
      return;
    }
    fVar1 = 1.3333334f;
  }
  *(float *)((int)this_ + 0x32e90) =
       ((float)*(uint *)((int)this_ + 0x32e5c) / (float)*(int *)((int)this_ + 0x32e58)) * fVar1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052c780, ap_0052c780));
