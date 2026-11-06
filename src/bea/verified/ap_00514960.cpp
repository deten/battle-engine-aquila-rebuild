// auto-ported from 00514960_FUN_00514960.c (FUN_00514960, 61 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_STDCALL ap_00514960(undefined4 param_1, undefined4 *param_2, undefined4 *param_3, undefined4 *param_4, undefined4 *param_5)
{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 1;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0x7fffffff;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0x7fffffff;
  }
  return 0;
}

// @autoport-registration (verified: 97 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00514960, ap_00514960));
