// auto-ported from 00440b70_FUN_00440b70.c (FUN_00440b70, 19 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_00440b70(void * this_)
{
  *(undefined4 *)this_ = 0;
  *(undefined4 *)((int)this_ + 0x1588c) = 0;
  return this_;
  return this_;
}

// @autoport-registration (verified: 18 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00440b70, ap_00440b70));
