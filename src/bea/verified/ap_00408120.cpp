// auto-ported from 00408120_FUN_00408120.c (FUN_00408120, 43 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static undefined4 BEA_THISCALL ap_00408120(int in_ECX)
{
  if ((*(int *)(in_ECX + 0x260) == 2) && (DAT_00672fd0 - *(float *)(in_ECX + 0xcc) < 0.5f)) {
    return 1;
  }
  return 0;
}

// @autoport-registration (verified: 3711 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00408120, ap_00408120));
