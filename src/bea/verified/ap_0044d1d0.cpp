// auto-ported from 0044d1d0_vslot44.c (CFeature::vslot44, 25 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_0044d1d0(int in_ECX)
{
  if (((*(byte *)(in_ECX + 0x2c) & 4) != 0) && (*(int *)(in_ECX + 0xe8) == 0)) {
    return 0;
  }
  return 1;
}

// @autoport-registration (verified: 9112 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0044d1d0, ap_0044d1d0));
