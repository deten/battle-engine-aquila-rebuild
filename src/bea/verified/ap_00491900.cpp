// auto-ported from 00491900_FUN_00491900.c (FUN_00491900, 16 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_00491900(undefined4 * in_ECX)
{
  *in_ECX = 0;
  in_ECX[1] = 0;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 14434 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00491900, ap_00491900));
