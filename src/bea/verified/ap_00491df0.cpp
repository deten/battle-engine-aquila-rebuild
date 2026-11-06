// auto-ported from 00491df0_FUN_00491df0.c (FUN_00491df0, 162 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00491df0(void * this_)
{
  float fVar1;
  byte bVar2;
  int iVar3;
  int local_8;
  
  iVar3 = *(int *)((int)this_ + 0x24) + -1;
  *(int *)((int)this_ + 0x24) = iVar3;
  if (iVar3 < 0) {
    return 0;
  }
  bVar2 = (byte)*(undefined4 *)((int)this_ + iVar3 * 4 + 0x94);
  fVar1 = (float)(1 << (bVar2 & 0x1f)) * 0.5f;
  local_8 = (int)(longlong)
                 ROUND((*(float *)((int)this_ + 0x14) - *(float *)((int)this_ + 0x28)) - fVar1);
  *(int *)((int)this_ + 4) = local_8 >> (bVar2 & 0x1f);
  local_8 = (int)(longlong)
                 ROUND(*(float *)((int)this_ + 0x14) + *(float *)((int)this_ + 0x28) + fVar1);
  *(int *)((int)this_ + 0xc) = local_8 >> (bVar2 & 0x1f);
  local_8 = (int)(longlong)
                 ROUND((*(float *)((int)this_ + 0x18) - *(float *)((int)this_ + 0x28)) - fVar1);
  *(int *)((int)this_ + 8) = local_8 >> (bVar2 & 0x1f);
  local_8 = (int)(longlong)
                 ROUND(fVar1 + *(float *)((int)this_ + 0x28) + *(float *)((int)this_ + 0x18));
  *(int *)((int)this_ + 0x10) = local_8 >> (bVar2 & 0x1f);
  *(undefined2 *)((int)this_ + 0x2c) = *(undefined2 *)((int)this_ + 4);
  *(undefined2 *)((int)this_ + 0x2e) = *(undefined2 *)((int)this_ + 8);
  *(int *)((int)this_ + 0x30) = iVar3;
  return 1;
}

// @autoport-registration (verified: 2450 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00491df0, ap_00491df0));
