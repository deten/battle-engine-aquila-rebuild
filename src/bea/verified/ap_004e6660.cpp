// auto-ported from 004e6660_FUN_004e6660.c (FUN_004e6660, 21 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static void BEA_THISCALL ap_004e6660(int in_ECX, uint32_t unused_0)
{
  *(float *)(in_ECX + 0x88) = DAT_00672fd0 + 5.0f;
  return;
}

// @autoport-registration (verified: 5 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004e6660, ap_004e6660));
