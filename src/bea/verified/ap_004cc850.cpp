// auto-ported from 004cc850_FUN_004cc850.c (FUN_004cc850, 26 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_004cc850(undefined4 * in_ECX)
{
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  *in_ECX = ((void*)0x005ddad4);
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 2673 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004cc850, ap_004cc850));
