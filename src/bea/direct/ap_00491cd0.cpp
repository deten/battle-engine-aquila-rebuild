// auto-ported from 00491cd0_FUN_00491cd0.c (FUN_00491cd0, 78 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00491cd0(void * this_, int *param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (0x40 >> (4U - (char)param_1[3] & 0x1f)) * (int)*(short *)((int)param_1 + 10) +
          (int)(short)param_1[2];
  iVar1 = *(int *)(*(int *)((int)this_ + 0x90) + param_1[3] * 4);
  iVar2 = *(int *)(iVar1 + 4 + iVar3 * 8);
  if (iVar2 != 0) {
    *(int **)(iVar2 + 4) = param_1;
  }
  *param_1 = iVar2;
  param_1[1] = 0;
  *(int **)(iVar1 + iVar3 * 8 + 4) = param_1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00491cd0, ap_00491cd0));
