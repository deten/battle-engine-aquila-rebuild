// auto-ported from 004705d0_FUN_004705d0.c (FUN_004705d0, 14 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004705d0(int in_ECX, int param_1)
{
  return *(undefined4 *)(in_ECX + 0x2b4 + param_1 * 4);
}

// @autoport-registration (verified: 1865 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004705d0, ap_004705d0));
