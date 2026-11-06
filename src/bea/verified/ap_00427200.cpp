// auto-ported from 00427200_FUN_00427200.c (FUN_00427200, 13 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_00427200(void * this_)
{
  *(undefined4 *)((int)this_ + 0x3c10) = 0;
  return this_;
  return this_;
}

// @autoport-registration (verified: 17 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00427200, ap_00427200));
