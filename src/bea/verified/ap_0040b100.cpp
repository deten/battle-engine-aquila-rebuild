// auto-ported from 0040b100_FUN_0040b100.c (FUN_0040b100, 20 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_0040b100(undefined4 * in_ECX)
{
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *in_ECX = ((void*)0x005d892c);
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 63688 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0040b100, ap_0040b100));
