// auto-ported from 00409760_FUN_00409760.c (FUN_00409760, 17 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00409760(int * in_ECX)
{
  undefined4 *puVar1;

  puVar1 = *(undefined4 **)in_ECX[1];
  *in_ECX = (int)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    return *puVar1;
  }
  return 0;
}

// @autoport-registration (verified: 40509 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00409760, ap_00409760));
