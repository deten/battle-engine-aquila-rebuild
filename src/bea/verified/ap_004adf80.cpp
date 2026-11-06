// auto-ported from 004adf80_FUN_004adf80.c (FUN_004adf80, 10 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_004adf80(int in_ECX)
{
  *(undefined4 *)(in_ECX + 8) = 0;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 506 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004adf80, ap_004adf80));
