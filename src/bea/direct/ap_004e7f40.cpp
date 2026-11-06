// auto-ported from 004e7f40_FUN_004e7f40.c (FUN_004e7f40, 205 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_004e7f40(void * this_)
{
  float fVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar5 = *(undefined4 **)((int)this_ + 0xa4);
  iVar6 = 0;
  if (puVar5 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)*puVar5;
  }
  if (piVar4 != (int *)0x0) {
    fVar3 = 0.0f;
    fVar1 = 0.0f;
    do {
      iVar2 = *piVar4;
      if (iVar2 != 0) {
        fVar3 = fVar3 + *(float *)(iVar2 + 0x1c);
        fVar1 = fVar1 + *(float *)(iVar2 + 0x20);
        iVar6 = iVar6 + 1;
      }
      puVar5 = (undefined4 *)puVar5[1];
      if (puVar5 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)*puVar5;
      }
    } while (BEA_LOOP_GUARD((piVar4 != (int *)0x0)));
    if ((iVar6 != 0) &&
       (fVar3 = *(float *)((int)this_ + 0x1c) - fVar3 / (float)iVar6,
       fVar1 = *(float *)((int)this_ + 0x20) - fVar1 / (float)iVar6,
       SQRT(fVar3 * fVar3 + fVar1 * fVar1) < *(float *)((int)this_ + 0x10c) * 20.0f)) {
      return 1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e7f40, ap_004e7f40));
