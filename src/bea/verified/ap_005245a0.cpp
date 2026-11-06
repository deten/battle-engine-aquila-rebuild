// auto-ported from 005245a0_FUN_005245a0.c (FUN_005245a0, 51 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_005245a0(undefined4 * in_ECX)
{
  *in_ECX = ((void*)0x005e4a44);
  in_ECX[0x8b8] = 0;
  in_ECX[0x8bb] = 0;
  in_ECX[0x801] = 0x1000;
  in_ECX[0x802] = 0;
  in_ECX[0x8b6] = 0;
  in_ECX[0x8ba] = 0;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 6 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x005245a0, ap_005245a0));
