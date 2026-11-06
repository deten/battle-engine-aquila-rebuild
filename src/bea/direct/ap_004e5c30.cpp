// auto-ported from 004e5c30_FUN_004e5c30.c (FUN_004e5c30, 46 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_004e5c30(void * this_, int param_1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)this_;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    while (BEA_LOOP_GUARD((iVar2 != 0))) {
      if (iVar2 == param_1) {
        return 1;
      }
      piVar1 = (int *)piVar1[1];
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      iVar2 = *piVar1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e5c30, ap_004e5c30));
