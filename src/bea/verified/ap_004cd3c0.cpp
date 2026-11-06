// auto-ported from 004cd3c0_FUN_004cd3c0.c (FUN_004cd3c0, 379 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_004cd3c0(undefined4 * in_ECX)
{
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  *in_ECX = ((void*)0x005de030);
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 100;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0x3f800000;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0x3f800000;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 2;
  in_ECX[0x26] = 10;
  in_ECX[0x27] = 0x3f000000;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0x3f800000;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0x40a00000;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 10;
  in_ECX[0x2e] = 10;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0x43340000;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0x43b40000;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0x3f800000;
  in_ECX[0x38] = 0;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 134 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004cd3c0, ap_004cd3c0));
