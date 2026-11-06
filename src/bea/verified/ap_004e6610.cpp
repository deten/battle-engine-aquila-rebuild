// auto-ported from 004e6610_FUN_004e6610.c (FUN_004e6610, 35 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)   // the game clock (seconds); was int: the compare converted its bits (fingerprint fild, 2026-10-20)

static undefined4 BEA_THISCALL ap_004e6610(int in_ECX)
{
  if ((DAT_00672fd0 < *(float *)(in_ECX + 0x88)) && (*(int *)(in_ECX + 0x7c) == 0)) {
    return 1;
  }
  return 0;
}

// @autoport-registration (verified: 15788 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004e6610, ap_004e6610));
