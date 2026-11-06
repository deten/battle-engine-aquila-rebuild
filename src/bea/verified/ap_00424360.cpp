// auto-ported from 00424360_FUN_00424360.c (FUN_00424360, 92 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int * BEA_THISCALL ap_00424360(int * in_ECX, int param_1, int param_2)
{
  int iVar1;
  int iVar2;

  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (((-1 < param_1) && (param_1 <= param_2)) && (iVar1 = in_ECX[2], param_2 < iVar1)) {
    if (param_2 == iVar1 + -1) {
      in_ECX[2] = param_1;
      return in_ECX;
    }
    iVar2 = *in_ECX;
    puVar4 = (undefined4 *)(iVar2 + param_1 * 4);
    for (puVar3 = (undefined4 *)(iVar2 + 4 + param_2 * 4);
        puVar3 < (undefined4 *)(iVar2 + iVar1 * 4); puVar3 = puVar3 + 1) {
      *puVar4 = *puVar3;
      puVar4 = puVar4 + 1;
    }
    in_ECX[2] = in_ECX[2] + (param_1 - param_2) + -1;
  }
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 49 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00424360, ap_00424360));
