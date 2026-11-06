// auto-ported from 004f27e0_FUN_004f27e0.c (FUN_004f27e0, 7 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static void BEA_THISCALL ap_004f27e0(int in_ECX)
{
  *(int *)(in_ECX + 0x9c) = *(int *)(in_ECX + 0x9c) + -1;
  return;
}

// @autoport-registration (verified: 134 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004f27e0, ap_004f27e0));
