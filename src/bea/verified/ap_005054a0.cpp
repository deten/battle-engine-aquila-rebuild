// auto-ported from 005054a0_FUN_005054a0.c (FUN_005054a0, 16 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_005054a0(void * this_)
{
  *(undefined ***)this_ = ((void*)0x005dfc4c);
  *(undefined4 *)((int)this_ + 4) = 0;
  return this_;
  return this_;
}

// @autoport-registration (verified: 18 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x005054a0, ap_005054a0));
