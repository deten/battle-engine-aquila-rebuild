// auto-ported from 00426920_vslot10.c (CCollisionSeekingThing::vslot10, 138 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CCollisionSeekingThing;

static int BEA_THISCALL ap_00426920(CCollisionSeekingThing * this_, undefined4 *param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short local_10;
  short sStack_e;
  short local_8;
  short sStack_6;
  
  iVar3 = param_1[1];
  if (*(int *)(*(int *)(this_ + 8) + 0x18) == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this_ + 8) + 0xc;
  }
  iVar2 = *(int *)(iVar1 + 0xc);
  sStack_e = (short)((uint)*(undefined4 *)(iVar1 + 8) >> 0x10);
  local_10 = (short)*(undefined4 *)(iVar1 + 8);
  for (; BEA_LOOP_GUARD(iVar3 < iVar2); iVar2 = iVar2 + -1) {
    local_10 = local_10 >> 1;
    sStack_e = sStack_e >> 1;
  }
  sStack_6 = (short)((uint)*param_1 >> 0x10);
  local_8 = (short)*param_1;
  for (; BEA_LOOP_GUARD(iVar2 < iVar3); iVar3 = iVar3 + -1) {
    local_8 = local_8 >> 1;
    sStack_6 = sStack_6 >> 1;
  }
  uVar4 = (int)local_10 - (int)local_8 >> 0x1f;
  iVar1 = ((int)local_10 - (int)local_8 ^ uVar4) - uVar4;
  uVar4 = (int)sStack_e - (int)sStack_6 >> 0x1f;
  iVar3 = ((int)sStack_e - (int)sStack_6 ^ uVar4) - uVar4;
  if (iVar3 < iVar1) {
    iVar3 = iVar1;
  }
  return iVar3;
}

// @autoport-registration (verified: 550837 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00426920, ap_00426920));
