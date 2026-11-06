// auto-ported from 005501d0_FUN_005501d0.c (FUN_005501d0, 8 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_005501d0(int in_ECX)
{
  return *(int *)(in_ECX + 0x19c) + 1;
}

// @autoport-registration (verified: 21257 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x005501d0, ap_005501d0));
