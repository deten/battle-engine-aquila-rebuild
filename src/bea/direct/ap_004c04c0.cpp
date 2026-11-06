// auto-ported from 004c04c0_vslot23.c (CParticleDescriptor::vslot23, 66 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CParticleDescriptor;

static void BEA_THISCALL ap_004c04c0(CParticleDescriptor * this_, undefined4 param_1)
{
  int iVar1;
  
  for (iVar1 = *(int *)(this_ + 0x54); BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = *(int *)(iVar1 + 4)) {
    if ((((char)param_1 == '\0') || (0.0f <= *(float *)(iVar1 + 0x60))) ||
       (*(int *)(iVar1 + 0x60) == -0x40000000)) {
      bea_vcall<uint32_t>(this_, 0x2c, iVar1);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c04c0, ap_004c04c0));
