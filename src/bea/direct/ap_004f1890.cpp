// auto-ported from 004f1890_vslot0.c (CTentacleAI::vslot0, 21 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CTentacleAI;

static void BEA_THISCALL ap_004f1890(CTentacleAI * this_, int param_1)
{
  if (*(short *)(param_1 + 4) == 3000) {
    bea_vcall<uint32_t>(this_, 0x24, param_1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f1890, ap_004f1890));
