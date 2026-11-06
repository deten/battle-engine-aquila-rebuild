// auto-ported from 004f37a0_vslot50.c (CThing::vslot50, 28 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CThing;

static undefined4 BEA_THISCALL ap_004f37a0(CThing * this_)
{
  if ((*(ushort *)(this_ + 0x2c) & 4) == 0) {
    *(ushort *)(this_ + 0x2c) = *(ushort *)(this_ + 0x2c) | 4;
    bea_vcall<uint32_t>(this_, 0x38);
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f37a0, ap_004f37a0));
