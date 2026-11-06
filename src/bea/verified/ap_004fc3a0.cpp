// auto-ported from 004fc3a0_FUN_004fc3a0.c (FUN_004fc3a0, 29 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static void BEA_THISCALL ap_004fc3a0(int in_ECX, float param_1)
{
  *(undefined4 *)(in_ECX + 0x168) = 3;
  *(float *)(in_ECX + 0x16c) = DAT_00672fd0 + param_1;
  return;
}

// @autoport-registration (verified: 120 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004fc3a0, ap_004fc3a0));
