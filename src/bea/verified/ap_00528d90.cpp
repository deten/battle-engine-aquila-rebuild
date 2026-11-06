// auto-ported from 00528d90_FUN_00528d90.c (FUN_00528d90, 5 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_00528d90(int in_ECX)
{
  return (int)*(char *)(in_ECX + 0x15);
}

// @autoport-registration (verified: 17 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00528d90, ap_00528d90));
