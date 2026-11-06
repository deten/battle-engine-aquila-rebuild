// auto-ported from 00412000_FUN_00412000.c (FUN_00412000, 68 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00412000(void * this_)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)this_;
  iVar3 = 0;
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
        return;
      }
    }
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x60) = 0;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00412000, ap_00412000));
