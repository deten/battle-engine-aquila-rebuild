// auto-ported from 00444580_FUN_00444580.c (FUN_00444580, 39 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_00444580(void * this_, undefined4 param_1)
{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this_ + 8)) {
    do {
      iVar1 = *(int *)(*(int *)((int)this_ + 4) + iVar2 * 4);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0xc) = param_1;
      }
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 8))));
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00444580, ap_00444580));
