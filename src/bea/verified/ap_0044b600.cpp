// auto-ported from 0044b600_FUN_0044b600.c (FUN_0044b600, 59 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_0044b600(int in_ECX)
{
  uint uVar1;
  int iVar2;

  uVar1 = *(int *)(in_ECX + 0x14) + 1;
  *(uint *)(in_ECX + 0x14) = uVar1;
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x10);
  iVar2 = *(int *)(in_ECX + 0x10) + 1;
  *(float *)(in_ECX + 8) = (float)uVar1 * 0.05f;
  *(int *)(in_ECX + 0x10) = iVar2 % 200;
  return iVar2 / 200;
}

// @autoport-registration (verified: 2596 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0044b600, ap_0044b600));
