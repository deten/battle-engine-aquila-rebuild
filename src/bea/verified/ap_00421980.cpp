// auto-ported from 00421980_FUN_00421980.c (FUN_00421980, 10 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_00421980(int in_ECX, int param_1)
{
  return in_ECX + param_1 * 4;
}

// @autoport-registration (verified: 76 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00421980, ap_00421980));
