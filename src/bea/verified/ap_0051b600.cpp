// auto-ported from 0051b600_FUN_0051b600.c (FUN_0051b600, 16 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_0051b600(void * this_)
{
  *(undefined ***)this_ = ((void*)0x005e49b4);
  *(undefined4 *)((int)this_ + 0x10) = 0;
  return this_;
  return this_;
}

// @autoport-registration (verified: 18 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0051b600, ap_0051b600));
