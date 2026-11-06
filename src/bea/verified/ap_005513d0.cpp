// auto-ported from 005513d0_FUN_005513d0.c (FUN_005513d0, 20 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static uint32_t BEA_THISCALL ap_005513d0(void * this_, undefined4 param_1)
{
  *(undefined1 *)((int)this_ + 0xe2d) = 1;
  *(undefined4 *)((int)this_ + 0x2f0) = param_1;
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 1290 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x005513d0, ap_005513d0));
