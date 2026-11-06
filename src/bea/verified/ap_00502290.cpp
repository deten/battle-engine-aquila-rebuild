// auto-ported from 00502290_FUN_00502290.c (FUN_00502290, 4 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static void BEA_THISCALL ap_00502290(int in_ECX)
{
  *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + -1;
  return;
}

// @autoport-registration (verified: 3521 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00502290, ap_00502290));
