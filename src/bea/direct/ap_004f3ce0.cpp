// auto-ported from 004f3ce0_vslot20.c (CThing::vslot20, 44 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CThing;

static uint32_t BEA_THISCALL ap_004f3ce0(CThing * this_, undefined4 *param_1)
{
  *(undefined4 *)(this_ + 0x1c) = *param_1;
  *(undefined4 *)(this_ + 0x20) = param_1[1];
  *(undefined4 *)(this_ + 0x24) = param_1[2];
  *(undefined4 *)(this_ + 0x28) = param_1[3];
  return bea_vcall<uint32_t>(this_, 0x4c, param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3ce0, ap_004f3ce0));
