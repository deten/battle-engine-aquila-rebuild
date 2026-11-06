// auto-ported from 004c7d90_FUN_004c7d90.c (FUN_004c7d90, 25 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static void * BEA_THISCALL ap_004c7d90(void * this_, undefined4 *param_1)
{
  *(undefined4 *)this_ = *param_1;
  *(undefined4 *)((int)this_ + 4) = param_1[1];
  *(undefined4 *)((int)this_ + 8) = param_1[2];
  return this_;
  return this_;
}

// @autoport-registration (verified: 1966968 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004c7d90, ap_004c7d90));
