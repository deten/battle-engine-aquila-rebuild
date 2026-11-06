// auto-ported from 00492670_FUN_00492670.c (FUN_00492670, 109 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined2 * BEA_THISCALL ap_00492670(void * this_, undefined2 *param_1, float *param_2, int param_3)
{
  int iVar1;
  byte bVar2;
  int iVar3;
  int local_8;
  
  local_8 = (int)(longlong)ROUND(*param_2);
  bVar2 = (byte)*(undefined4 *)((int)this_ + param_3 * 4 + 0x94);
  iVar3 = local_8 >> (bVar2 & 0x1f);
  local_8 = (int)(longlong)ROUND(param_2[1]);
  local_8 = local_8 >> (bVar2 & 0x1f);
  iVar1 = *(int *)((int)this_ + param_3 * 4 + 0xa8);
  if (iVar1 <= iVar3) {
    iVar3 = iVar1 + -1;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar1 = *(int *)((int)this_ + param_3 * 4 + 0xbc);
  if (iVar1 <= local_8) {
    local_8 = iVar1 + -1;
  }
  if (local_8 < 0) {
    local_8 = 0;
  }
  *(int *)(param_1 + 2) = param_3;
  param_1[1] = (short)local_8;
  *param_1 = (short)iVar3;
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 55513 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00492670, ap_00492670));
