// auto-ported from 0046dbd0_FUN_0046dbd0.c (FUN_0046dbd0, 16 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_0046dbd0(void * this_)
{
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined ***)this_ = ((void*)0x005dbbdc);
  return this_;
  return this_;
}

// @autoport-registration (verified: 18 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0046dbd0, ap_0046dbd0));
