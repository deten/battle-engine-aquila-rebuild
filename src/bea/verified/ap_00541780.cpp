// auto-ported from 00541780_FUN_00541780.c (FUN_00541780, 15 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00541780(int in_ECX)
{
  if (*(int *)(in_ECX + 8) == 0) {
    return *(undefined4 *)(in_ECX + 0x24);
  }
  return *(undefined4 *)(*(int *)(in_ECX + 8) + 4);
}

// @autoport-registration (verified: 1927 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00541780, ap_00541780));
