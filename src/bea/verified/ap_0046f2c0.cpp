// auto-ported from 0046f2c0_FUN_0046f2c0.c (FUN_0046f2c0, 14 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_0046f2c0(int in_ECX, int param_1)
{
  return *(undefined4 *)(in_ECX + 0x2c4 + param_1 * 4);
}

// @autoport-registration (verified: 74374 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0046f2c0, ap_0046f2c0));
