// auto-ported from 005113f0_FUN_005113f0.c (FUN_005113f0, 77 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008553f0 GLOBAL_AT(undefined4*, 0x008553f0)

static void BEA_THISCALL ap_005113f0(int this_, int param_1)
{
  int *piVar1;
  int iVar2;

  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)*DAT_008553f0;
  DAT_008553f0[2] = (int)piVar1;
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  while (BEA_LOOP_GUARD((iVar2 != 0))) {
    if (iVar3 == param_1) goto LAB_00511435;
    iVar3 = iVar3 + 1;
    piVar1 = *(int **)(DAT_008553f0[2] + 4);
    DAT_008553f0[2] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
  }
  iVar2 = 0;
LAB_00511435:
  *(int *)(this_ + 0x18) = iVar2;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005113f0, ap_005113f0));
