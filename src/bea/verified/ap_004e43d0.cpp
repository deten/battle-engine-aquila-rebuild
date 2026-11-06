// auto-ported from 004e43d0_FUN_004e43d0.c (FUN_004e43d0, 78 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static undefined4 BEA_THISCALL ap_004e43d0(int in_ECX)
{
  int iVar1;

  if ((((*(int *)(in_ECX + 0x3f4) != 0) && (*(int *)(in_ECX + 0x3ec) == 0)) &&
      (*(float *)(in_ECX + 0x3e0) < DAT_00672fd0)) &&
     ((iVar1 = *(int *)(in_ECX + 0x3d0), iVar1 != 0 &&
      ((*(int *)(in_ECX + 0x3d8) < *(int *)(iVar1 + 0xc) || (*(int *)(iVar1 + 0x24) != 0)))))) {
    return 1;
  }
  return 0;
}

// @autoport-registration (verified: 2952 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004e43d0, ap_004e43d0));
