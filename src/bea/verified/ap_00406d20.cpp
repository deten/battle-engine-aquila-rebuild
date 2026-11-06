// auto-ported from 00406d20_FUN_00406d20.c (FUN_00406d20, 15 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00406d20(int * in_ECX)
{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)*in_ECX;
  in_ECX[2] = (int)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    return *puVar1;
  }
  return 0;
}

// @autoport-registration (verified: 291281 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00406d20, ap_00406d20));
