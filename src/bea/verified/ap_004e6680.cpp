// auto-ported from 004e6680_FUN_004e6680.c (FUN_004e6680, 67 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004e6680(int in_ECX, int param_1)
{
  int iVar1;

  if (param_1 == 0) {
    if ((*(int *)(in_ECX + 0x7c) != 1) && (*(int *)(in_ECX + 0x7c) != 6)) {
      return 0;
    }
  }
  else {
    if (param_1 == 1) {
      if (*(int *)(in_ECX + 0x7c) == 0) {
        return 1;
      }
      iVar1 = *(int *)(in_ECX + 0x7c) + -6;
    }
    else {
      if (param_1 != 6) {
        return 0;
      }
      iVar1 = *(int *)(in_ECX + 0x7c);
      if (iVar1 == 1) {
        return 1;
      }
    }
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}

// @autoport-registration (verified: 3848 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004e6680, ap_004e6680));
