// auto-ported from 00541770_FUN_00541770.c (FUN_00541770, 14 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00541770(int in_ECX)
{
  if (*(undefined4 **)(in_ECX + 8) == (undefined4 *)0x0) {
    return *(undefined4 *)(in_ECX + 0x20);
  }
  return **(undefined4 **)(in_ECX + 8);
}

// @autoport-registration (verified: 1927 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00541770, ap_00541770));
