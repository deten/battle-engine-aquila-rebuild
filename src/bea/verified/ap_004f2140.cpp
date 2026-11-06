// auto-ported from 004f2140_FUN_004f2140.c (FUN_004f2140, 16 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_004f2140(undefined4 * in_ECX)
{
  in_ECX[1] = 0;
  in_ECX[5] = 0;
  *in_ECX = 0;
  in_ECX[6] = 0;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 15 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004f2140, ap_004f2140));
