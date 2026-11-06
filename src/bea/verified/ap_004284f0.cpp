// auto-ported from 004284f0_vslot92.c (CComponent::vslot92, 11 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_THISCALL ap_004284f0(int in_ECX)
{
  float10 fVar1;
  
  fVar1 = (float10)fpatan((float10)*(float *)(in_ECX + 0x40),(float10)*(float *)(in_ECX + 0x50));
  return -fVar1;
}

// @autoport-registration (verified: 6254 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004284f0, ap_004284f0));
