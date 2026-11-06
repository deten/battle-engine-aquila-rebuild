// auto-ported from 004aa680_FUN_004aa680.c (FUN_004aa680, 36 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_004aa680(void * this_, int param_1)
{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this_ + 0x18);
  iVar2 = 0;
  if (0 < *(int *)((int)this_ + 0x14)) {
    do {
      if (*(int *)(iVar1 + 0x10) == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 0x24;
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD(iVar2 < *(int *)((int)this_ + 0x14)));
  }
  return 0;
}

// @autoport-registration (verified: 134 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004aa680, ap_004aa680));
