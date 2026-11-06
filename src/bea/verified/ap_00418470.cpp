// auto-ported from 00418470_FUN_00418470.c (FUN_00418470, 13 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_00418470(void * this_)
{
  *(undefined4 *)this_ = 0;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  return this_;
  return this_;
}

// @autoport-registration (verified: 17 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00418470, ap_00418470));
