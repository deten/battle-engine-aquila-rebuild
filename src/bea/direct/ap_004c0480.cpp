// auto-ported from 004c0480_vslot10.c (CParticleDescriptor::vslot10, 15 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_STDCALL ap_004c0480(int param_1)
{
  *(undefined4 *)(param_1 + 100) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c0480, ap_004c0480));
