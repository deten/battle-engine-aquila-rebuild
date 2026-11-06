// auto-ported from 0042c420_FUN_0042c420.c (FUN_0042c420, 23 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_0042c420(undefined4 * in_ECX)
{
  *in_ECX = ((void*)0x005d974c);
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  in_ECX[4] = 0;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 9 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0042c420, ap_0042c420));
