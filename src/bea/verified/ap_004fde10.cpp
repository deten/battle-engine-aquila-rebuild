// auto-ported from 004fde10_FUN_004fde10.c (FUN_004fde10, 30 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004fde10(int in_ECX)
{
  int iVar1;

  iVar1 = *(int *)(in_ECX + 0x244);
  if (((iVar1 != 4) && (iVar1 != 3)) && (iVar1 != 5)) {
    return 0;
  }
  return 1;
}

// @autoport-registration (verified: 14883 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004fde10, ap_004fde10));
