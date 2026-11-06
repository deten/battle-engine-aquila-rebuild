// auto-ported from 00440eb0_FUN_00440eb0.c (FUN_00440eb0, 206 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00440eb0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this_ + 0x15884);
  uVar2 = *(ushort *)((int)this_ + iVar4 * 8 + 4);
  uVar3 = *(ushort *)((int)this_ + iVar4 * 8 + 6);
  puVar1 = (ushort *)((int)this_ + iVar4 * 8 + 4);
  if ((uVar2 & 0x8000) == 0) {
    *(ushort *)((int)this_ + (uint)uVar2 * 8 + 6) = uVar3;
  }
  else {
    *(ushort *)((int)this_ + (uVar2 & 0xffff7fff) * 2 + 0x13884) = uVar3;
  }
  *(ushort *)((int)this_ + (uint)uVar3 * 8 + 4) = uVar2;
  uVar2 = *(ushort *)((int)this_ + (short)(ushort)param_1 * 2 + 0x13884);
  puVar1[1] = uVar2;
  if (uVar2 != 0) {
    *(undefined2 *)((int)this_ + (uint)uVar2 * 8 + 4) = *(undefined2 *)((int)this_ + 0x15884);
  }
  *(undefined2 *)((int)this_ + (short)(ushort)param_1 * 2 + 0x13884) =
       *(undefined2 *)((int)this_ + 0x15884);
  *(undefined1 *)(puVar1 + 2) = (undefined1)param_2;
  *(undefined1 *)((int)puVar1 + 5) = (undefined1)param_3;
  *puVar1 = (ushort)param_1 | 0x8000;
  *(undefined1 *)((int)puVar1 + 7) = (undefined1)param_4;
  iVar4 = *(int *)((int)this_ + 0x15884) + 1;
  *(int *)((int)this_ + 0x15884) = iVar4;
  if (iVar4 == 10000) {
    *(undefined4 *)((int)this_ + 0x15884) = *(undefined4 *)((int)this_ + 0x15888);
  }
  return *(uint32_t*)((char*)this_ + 0x15884);
  return *(uint32_t*)((char*)this_ + 0x15884);
}

// @autoport-registration (verified: 5290 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00440eb0, ap_00440eb0));
