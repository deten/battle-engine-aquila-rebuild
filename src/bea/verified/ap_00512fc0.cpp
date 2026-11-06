// auto-ported from 00512fc0_FUN_00512fc0.c (FUN_00512fc0, 44 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00512fc0(void * this_)
{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)((int)this_ + 0x331e4);
  do {
    puVar1[-0x100] = 0;
    *puVar1 = 0;
    puVar1[0x100] = 0;
    puVar1 = puVar1 + 1;
  } while (BEA_LOOP_GUARD((puVar1 + (-0x331e4 - (int)this_) < (undefined1 *)0x100)));
  return;
}

// @autoport-registration (verified: 6875 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00512fc0, ap_00512fc0));
