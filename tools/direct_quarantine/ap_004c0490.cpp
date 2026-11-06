// auto-ported from 004c0490_vslot22.c (CParticleDescriptor::vslot22, 39 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CParticleDescriptor;

static void BEA_THISCALL ap_004c0490(CParticleDescriptor * this_)
{
  uint uVar1;
  int *piVar2;
  
  if (*(int *)(this_ + 0x54) != 0) {
    piVar2 = *(int **)(this_ + 0x58);
    do {
      uVar1 = bea_vcall<uint32_t>(this_, 0x28, piVar2);
      piVar2[0x19] = piVar2[0x19] | uVar1;
      piVar2 = (int *)*piVar2;
    } while (BEA_LOOP_GUARD((piVar2 != (int *)0x0)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c0490, ap_004c0490));
