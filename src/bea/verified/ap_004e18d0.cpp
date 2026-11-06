// auto-ported from 004e18d0_FUN_004e18d0.c (FUN_004e18d0, 52 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static uint32_t BEA_THISCALL ap_004e18d0(void * this_, int param_1, undefined4 param_2, float param_3)
{
  undefined4 local_8;
  
  if ((*(char *)((int)this_ + 4) != '\0') && (param_1 != 0)) {
    *(undefined4 *)(param_1 + 0x3c) = param_2;
    local_8 = (undefined4)(longlong)ROUND(param_3 * 20.0f);
    *(undefined4 *)(param_1 + 0x40) = local_8;
  }
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 271 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004e18d0, ap_004e18d0));
