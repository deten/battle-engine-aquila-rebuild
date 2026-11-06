// auto-ported from 00556460_FUN_00556460.c (FUN_00556460, 16 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_00556460(void * this_)
{
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)this_ = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 4) = 0;
  return this_;
  return this_;
}

// @autoport-registration (verified: 18 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00556460, ap_00556460));
