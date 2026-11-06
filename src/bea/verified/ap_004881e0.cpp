// auto-ported from 004881e0_FUN_004881e0.c (FUN_004881e0, 38 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004881e0(int in_ECX, int param_1)
{
  int iVar1;

  iVar1 = *(int *)(in_ECX + 0x34 + param_1 * 4);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 2) {
      return *(undefined4 *)(in_ECX + 0x4c);
    }
  }
  return 0;
}

// @autoport-registration (verified: 67758 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004881e0, ap_004881e0));
