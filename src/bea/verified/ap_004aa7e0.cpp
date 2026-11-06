// auto-ported from 004aa7e0_FUN_004aa7e0.c (FUN_004aa7e0, 63 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float10 BEA_THISCALL ap_004aa7e0(void * this_, int param_1, int *param_2)
{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this_ + 0x18);
  iVar1 = 0;
  if (0 < *(int *)((int)this_ + 0x14)) {
    do {
      if (*(int *)(iVar2 + 0x10) == param_1) {
        *param_2 = iVar1;
        return (float10)*(float *)(iVar2 + 0x20);
      }
      iVar2 = iVar2 + 0x24;
      iVar1 = iVar1 + 1;
    } while (BEA_LOOP_GUARD(iVar1 < *(int *)((int)this_ + 0x14)));
  }
  *param_2 = -1;
  return (float10)0.0f;
}

// @autoport-registration (verified: 162 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004aa7e0, ap_004aa7e0));
