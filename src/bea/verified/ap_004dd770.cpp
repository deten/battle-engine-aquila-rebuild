// auto-ported from 004dd770_FUN_004dd770.c (FUN_004dd770, 52 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_006321a0 GLOBAL_AT(float, 0x006321a0)

static undefined4 BEA_CDECL ap_004dd770(void)
{
  undefined4 uVar1;
  
  if (DAT_006321a0 < 15.0f) {
    return 0;
  }
  uVar1 = 2;
  if (DAT_006321a0 <= 40.0f) {
    uVar1 = 1;
  }
  return uVar1;
}

// @autoport-registration (verified: 13409 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004dd770, ap_004dd770));
