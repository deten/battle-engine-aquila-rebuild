// auto-ported from 00491d20_FUN_00491d20.c (FUN_00491d20, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00491d20(void * this_, int *param_1)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[1];
  iVar3 = *param_1;
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar3;
  }
  if (iVar3 != 0) {
    *(int **)(iVar3 + 4) = piVar2;
  }
  iVar1 = *(int *)(*(int *)((int)this_ + 0x90) + param_1[3] * 4) +
          ((0x40 >> (4U - (char)param_1[3] & 0x1f)) * (int)*(short *)((int)param_1 + 10) +
          (int)(short)param_1[2]) * 8;
  if (param_1 == *(int **)(iVar1 + 4)) {
    *(int *)(iVar1 + 4) = iVar3;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00491d20, ap_00491d20));
