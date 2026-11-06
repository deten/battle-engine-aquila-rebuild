// auto-ported from 00418eb0_vslot4.c (CThing3rdPersonCamera::vslot4, 27 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_THISCALL ap_00418eb0(int in_ECX)
{
  int iVar1;

  iVar1 = *(int *)(in_ECX + 4);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x34) & 8) != 0)) {
    return (float10)*(float *)(iVar1 + 0x2c8);
  }
  return (float10)1.0f;
}

// @autoport-registration (verified: 2947 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00418eb0, ap_00418eb0));
