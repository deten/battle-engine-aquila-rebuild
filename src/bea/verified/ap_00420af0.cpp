// auto-ported from 00420af0_FUN_00420af0.c (FUN_00420af0, 23 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_00420af0(int in_ECX, int param_1)
{
  if (param_1 < 0) {
    return 0;
  }
  return param_1 * 0x40 + 4 + in_ECX;
}

// @autoport-registration (verified: 172 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00420af0, ap_00420af0));
