// auto-ported from 0042d300_FUN_0042d300.c (FUN_0042d300, 13 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined1 * BEA_THISCALL ap_0042d300(undefined1 * in_ECX)
{
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0xffffffff;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 12 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0042d300, ap_0042d300));
