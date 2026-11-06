// auto-ported from 0044a5f0_FUN_0044a5f0.c (FUN_0044a5f0, 23 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static uint32_t BEA_THISCALL ap_0044a5f0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  *(undefined4 *)this_ = param_1;
  *(undefined4 *)((int)this_ + 4) = param_2;
  *(undefined4 *)((int)this_ + 8) = param_3;
  return param_3;
  return param_3;
}

// @autoport-registration (verified: 686140 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0044a5f0, ap_0044a5f0));
