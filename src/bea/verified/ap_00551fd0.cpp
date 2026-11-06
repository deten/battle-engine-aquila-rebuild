// auto-ported from 00551fd0_FUN_00551fd0.c (FUN_00551fd0, 9 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_00551fd0(undefined4 * in_ECX)
{
  *in_ECX = 0;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 223 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00551fd0, ap_00551fd0));
