// auto-ported from 00420ab0_FUN_00420ab0.c (FUN_00420ab0, 11 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined1 * BEA_THISCALL ap_00420ab0(undefined1 * in_ECX, undefined1 param_1)
{
  *in_ECX = param_1;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 492 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00420ab0, ap_00420ab0));
