// auto-ported from 004aa5a0_FUN_004aa5a0.c (FUN_004aa5a0, 57 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004aa5a0(int in_ECX, int param_1)
{
  int iVar1;

  iVar1 = *(int *)(in_ECX + 0x1c);
  if (iVar1 <= param_1) {
    do {
      in_ECX = *(int *)(in_ECX + 8);
      if (in_ECX == 0) {
        return 0;
      }
      param_1 = param_1 - iVar1;
      iVar1 = *(int *)(in_ECX + 0x1c);
    } while (iVar1 <= param_1);
  }
  return *(undefined4 *)(param_1 * 0x150 + 0x40 + *(int *)(in_ECX + 0x20));
}

// @autoport-registration (verified: 296 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004aa5a0, ap_004aa5a0));
