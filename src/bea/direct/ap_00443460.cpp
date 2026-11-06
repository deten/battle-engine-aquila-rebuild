// auto-ported from 00443460_vslot0.c (CDestroyableSegment::vslot0, 20 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CDestroyableSegment;

static void BEA_THISCALL ap_00443460(CDestroyableSegment * this_, int param_1)
{
  if (*(short *)(param_1 + 4) == 3000) {
    bea_vcall<uint32_t>(this_, 0x20);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00443460, ap_00443460));
