// auto-ported from 004443b0_FUN_004443b0.c (FUN_004443b0, 58 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float10 BEA_THISCALL ap_004443b0(void * this_)
{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this_ + 8);
  bVar1 = true;
  if (0 < iVar3) {
    piVar2 = *(int **)((int)this_ + 4);
    do {
      if ((*piVar2 != 0) && (*(int *)(*piVar2 + 0x1c) == 1)) {
        bVar1 = false;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
    if (!bVar1) {
      return (float10)*(float *)((int)this_ + 0x18);
    }
  }
  return (float10)1.0f;
}

// @autoport-registration (verified: 182346 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004443b0, ap_004443b0));
