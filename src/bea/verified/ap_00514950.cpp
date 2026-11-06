// auto-ported from 00514950_FUN_00514950.c (FUN_00514950, 15 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_STDCALL ap_00514950(undefined4 *param_1)
{
  *param_1 = 1;
  return 0;
}

// @autoport-registration (verified: 97 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00514950, ap_00514950));
