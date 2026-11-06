// auto-ported from 004e4430_FUN_004e4430.c (FUN_004e4430, 39 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004e4430(int in_ECX)
{
  int iVar1;

  iVar1 = *(int *)(in_ECX + 0x3d0);
  if ((iVar1 != 0) &&
     ((*(int *)(in_ECX + 0x3d8) < *(int *)(iVar1 + 0xc) || (*(int *)(iVar1 + 0x24) != 0)))) {
    return 0;
  }
  return 1;
}

// @autoport-registration (verified: 241 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004e4430, ap_004e4430));
