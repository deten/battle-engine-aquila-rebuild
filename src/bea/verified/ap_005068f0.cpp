// auto-ported from 005068f0_FUN_005068f0.c (FUN_005068f0, 58 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_005068f0(void * this_)
{
  int iVar1;
  int *piVar2;
  
  iVar1 = 1;
  piVar2 = (int *)(*(int *)((int)this_ + 0xa4) + 0x10);
  do {
    if (*piVar2 != -1) {
      if (*(float *)((int)this_ + 0x60) < 400.0f) {
        *(float *)((int)this_ + 0x60) =
             *(float *)(*(int *)((int)this_ + 0xa4) + 8) + *(float *)((int)this_ + 0x60);
      }
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (BEA_LOOP_GUARD((iVar1 < 5)));
  return;
}

// @autoport-registration (verified: 30743 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x005068f0, ap_005068f0));
