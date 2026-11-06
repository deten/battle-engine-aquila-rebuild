// auto-ported from 004b0cd0_FUN_004b0cd0.c (FUN_004b0cd0, 33 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_004b0cd0(int in_ECX)
{
  int iVar1;

  iVar1 = *(int *)(in_ECX + 0x8c);
  if ((iVar1 != 1) && (iVar1 != 3)) {
    if (iVar1 == 6) {
      return *(int *)(in_ECX + 0x124);
    }
    in_ECX = 0;
  }
  return in_ECX;
}

// @autoport-registration (verified: 3347685 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004b0cd0, ap_004b0cd0));
