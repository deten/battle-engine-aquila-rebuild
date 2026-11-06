// auto-ported from 0049bc10_FUN_0049bc10.c (FUN_0049bc10, 37 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_0049bc10(void * this_)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this_ + 0x10);
  uVar2 = *(undefined4 *)((int)this_ + 0x20);
  *(undefined4 *)((int)this_ + 0x10) = *(undefined4 *)((int)this_ + 4);
  *(undefined4 *)((int)this_ + 4) = uVar1;
  *(undefined4 *)((int)this_ + 0x20) = *(undefined4 *)((int)this_ + 8);
  uVar1 = *(undefined4 *)((int)this_ + 0x18);
  *(undefined4 *)((int)this_ + 8) = uVar2;
  *(undefined4 *)((int)this_ + 0x18) = *(undefined4 *)((int)this_ + 0x24);
  *(undefined4 *)((int)this_ + 0x24) = uVar1;
  return;
}

// @autoport-registration (verified: 9321088 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0049bc10, ap_0049bc10));
