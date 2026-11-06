// auto-ported from 004f3730_vslot0.c (CThing::vslot0, 39 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CThing;

static void BEA_THISCALL ap_004f3730(CThing * this_, int param_1)
{
  if (*(short *)(param_1 + 4) == 2000) {
    bea_vcall<uint32_t>(this_, 0x8);
  }
  else if (*(short *)(param_1 + 4) == 0x7d2) {
    bea_vcall<uint32_t>(this_, 0xc8);
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3730, ap_004f3730));
