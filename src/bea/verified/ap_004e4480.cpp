// auto-ported from 004e4480_FUN_004e4480.c (FUN_004e4480, 70 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004e4480(int in_ECX, int param_1)
{
  int iVar1;

  if ((((*(int *)(in_ECX + 0x3f4) != 0) && (iVar1 = *(int *)(in_ECX + 0x3d0), iVar1 != 0)) &&
      ((*(int *)(in_ECX + 0x3d8) < *(int *)(iVar1 + 0xc) || (*(int *)(iVar1 + 0x24) != 0)))) &&
     ((*(uint *)(param_1 + 0x34) & *(uint *)(in_ECX + 0x3f0)) != 0)) {
    return 1;
  }
  return 0;
}

// @autoport-registration (verified: 1346 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004e4480, ap_004e4480));
