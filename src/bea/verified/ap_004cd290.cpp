// auto-ported from 004cd290_FUN_004cd290.c (FUN_004cd290, 58 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_004cd290(undefined4 * in_ECX)
{
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  *in_ECX = ((void*)0x005ddb3c);
  in_ECX[0x17] = 0;
  in_ECX[0x19] = 100;
  in_ECX[0x18] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1d] = 1;
  in_ECX[0x1e] = 0;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 25 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004cd290, ap_004cd290));
