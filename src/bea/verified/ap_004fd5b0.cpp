// auto-ported from 004fd5b0_FUN_004fd5b0.c (FUN_004fd5b0, 43 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_STDCALL ap_004fd5b0(int param_1)
{
  if ((((param_1 != 0) && ((*(byte *)(param_1 + 0x2c) & 4) == 0)) &&
      (*(int *)(param_1 + 0x244) != 1)) && (*(int *)(param_1 + 0x244) != 2)) {
    return 1;
  }
  return 0;
}

// @autoport-registration (verified: 87256 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004fd5b0, ap_004fd5b0));
