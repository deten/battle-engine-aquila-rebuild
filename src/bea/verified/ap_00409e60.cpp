// auto-ported from 00409e60_FUN_00409e60.c (FUN_00409e60, 19 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_STDCALL ap_00409e60(float param_1)
{
  return (float10)1.0f - ((float10)1.0f - (float10)param_1);
}

// @autoport-registration (verified: 5384 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00409e60, ap_00409e60));
