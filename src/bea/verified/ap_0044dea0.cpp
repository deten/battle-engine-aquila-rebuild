// auto-ported from 0044dea0_FUN_0044dea0.c (FUN_0044dea0, 29 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_0044dea0(int in_ECX)
{
  if ((*(int *)(in_ECX + 0x1f8c) != 0) && (*(int *)(in_ECX + 0x1f98) != 0)) {
    return 1;
  }
  return 0;
}

// @autoport-registration (verified: 26721 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0044dea0, ap_0044dea0));
