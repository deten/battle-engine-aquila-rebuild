// auto-ported from 00444300_FUN_00444300.c (FUN_00444300, 34 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float10 BEA_THISCALL ap_00444300(void * this_, int param_1)
{
  int iVar1;
  
  if ((param_1 != -1) && (iVar1 = *(int *)(*(int *)((int)this_ + 4) + param_1 * 4), iVar1 != 0)) {
    return (float10)*(float *)(iVar1 + 0x18);
  }
  return (float10)0.0f;
}

// @autoport-registration (verified: 532 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00444300, ap_00444300));
