// auto-ported from 004a4dd0_FUN_004a4dd0.c (FUN_004a4dd0, 64 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004a4dd0(void * this_, int param_1, undefined4 param_2)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)this_ + 8);
  *(int **)((int)this_ + 0x10) = piVar1;
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  while (BEA_LOOP_GUARD((iVar2 != 0))) {
    if (*(int *)(iVar2 + 8) == param_1) {
      *(undefined4 *)(iVar2 + 0x10) = param_2;
    }
    piVar1 = *(int **)(*(int *)((int)this_ + 0x10) + 4);
    *(int **)((int)this_ + 0x10) = piVar1;
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a4dd0, ap_004a4dd0));
