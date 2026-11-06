// auto-ported from 004e5840_FUN_004e5840.c (FUN_004e5840, 13 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_004e5840(undefined4 * in_ECX)
{
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 27869 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004e5840, ap_004e5840));
