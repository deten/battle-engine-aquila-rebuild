// auto-ported from 0040c5e0_FUN_0040c5e0.c (FUN_0040c5e0, 66 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_0040c5e0(void * this_)
{
  float *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  pfVar1 = (float *)((int)this_ + 0x52c);
  while (BEA_LOOP_GUARD((pfVar1[0xc] != 0.0 ||
         (*(float *)(*(int *)((int)this_ + 0x4b0) + (-0x4a4 - (int)this_) + (int)pfVar1) <= *pfVar1))))
  {
    iVar2 = iVar2 + 1;
    pfVar1 = pfVar1 + 1;
    if (5 < iVar2) {
      return 0;
    }
  }
  return 1;
}

// @autoport-registration (verified: 38 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0040c5e0, ap_0040c5e0));
