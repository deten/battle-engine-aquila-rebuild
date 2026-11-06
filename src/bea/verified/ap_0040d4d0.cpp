// auto-ported from 0040d4d0_FUN_0040d4d0.c (FUN_0040d4d0, 89 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_0040d4d0(void * this_)
{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this_ + 0x4ac) != 0) {
    *(undefined4 *)((int)this_ + 0x5dc) = 0;
    *(undefined4 *)((int)this_ + 0x4ac) = 0;
    return;
  }
  iVar1 = *(int *)((int)this_ + 0x4b0);
  if ((*(float *)(iVar1 + 0x2c) <= *(float *)((int)this_ + 0xfc)) && (0.0f < *(float *)(iVar1 + 0xa0))
     ) {
    uVar2 = *(undefined4 *)(iVar1 + 0xa0);
    *(undefined4 *)((int)this_ + 0x4ac) = 1;
    *(undefined4 *)((int)this_ + 0x5dc) = uVar2;
  }
  return;
}

// @autoport-registration (verified: 641 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0040d4d0, ap_0040d4d0));
