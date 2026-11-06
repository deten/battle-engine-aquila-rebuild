// auto-ported from 004bfa60_FUN_004bfa60.c (FUN_004bfa60, 30 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_004bfa60(void * this_)
{
  *(undefined4 *)this_ = 0;
  *(undefined4 *)((int)this_ + 4) = 0xffffffff;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0xbf800000;
  return this_;
  return this_;
}

// @autoport-registration (verified: 17 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004bfa60, ap_004bfa60));
