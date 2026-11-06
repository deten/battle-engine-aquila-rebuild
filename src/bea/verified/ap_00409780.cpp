// auto-ported from 00409780_FUN_00409780.c (FUN_00409780, 17 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00409780(int * in_ECX)
{
  undefined4 *puVar1;

  puVar1 = *(undefined4 **)(*in_ECX + 4);
  *in_ECX = (int)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    return *puVar1;
  }
  return 0;
}

// @autoport-registration (verified: 41907 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00409780, ap_00409780));
