// auto-ported from 0055a350_FUN_0055a350.c (FUN_0055a350, 9 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_0055a350(void * this_)
{
  *(undefined ***)this_ = ((void*)0x005e59d8);
  return this_;
  return this_;
}

// @autoport-registration (verified: 18 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0055a350, ap_0055a350));
