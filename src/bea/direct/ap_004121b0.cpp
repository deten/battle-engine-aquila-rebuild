// auto-ported from 004121b0_FUN_004121b0.c (FUN_004121b0, 131 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float10 BEA_THISCALL ap_004121b0(void * this_)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  piVar1 = *(int **)this_;
  iVar3 = 0;
  fVar4 = bea_fcast<float10>(0.0f);
  *(int **)((int)this_ + 8) = piVar1;
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (iVar2 != 0) {
    while (BEA_LOOP_GUARD((iVar3 != *(int *)((int)this_ + 0x10)))) {
      iVar3 = iVar3 + 1;
      piVar1 = *(int **)(*(int *)((int)this_ + 8) + 4);
      *(int **)((int)this_ + 8) = piVar1;
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
      if (iVar2 == 0) {
        return fVar4;
      }
    }
    if ((iVar2 != 0) &&
       (iVar3 = *(int *)(*(int *)(iVar2 + 0xa4) + 0x24),
       fVar4 = bea_fcast<float10>(*(float *)(*(int *)((int)this_ + 0x18) + 0x52c + iVar3 * 4)) /
               bea_fcast<float10>(*(float *)(*(int *)(*(int *)((int)this_ + 0x18) + 0x4b0) + 0x88 + iVar3 * 4)),
       bea_fcast<float10>(1.0f) < fVar4)) {
      fVar4 = bea_fcast<float10>(1.0f);
    }
  }
  return fVar4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004121b0, ap_004121b0));
