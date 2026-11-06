// auto-ported from 00492c60_FUN_00492c60.c (FUN_00492c60, 10 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_00492c60(int in_ECX)
{
  *(undefined4 *)(in_ECX + 0xc) = 0xffffffff;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 6372 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00492c60, ap_00492c60));
