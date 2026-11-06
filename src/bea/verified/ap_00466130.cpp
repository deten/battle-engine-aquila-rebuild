// auto-ported from 00466130_FUN_00466130.c (FUN_00466130, 9 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_00466130(void * this_)
{
  *(undefined ***)this_ = ((void*)0x005dbb1c);
  return this_;
  return this_;
}

// @autoport-registration (verified: 18 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00466130, ap_00466130));
