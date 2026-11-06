// auto-ported from 0053f010_FUN_0053f010.c (FUN_0053f010, 34 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_0053f010(void * this_, undefined4 param_1, undefined4 param_2)
{
  if ((char)param_2 != '\0') {
    *(undefined4 *)((int)this_ + 0x4cc) = param_1;
    return param_1;
  }
  *(undefined4 *)((int)this_ + 0x4d0) = param_1;
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 14 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0053f010, ap_0053f010));
