// auto-ported from 00447f50_vslot93.c (CDropship::vslot93, 69 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CDropship;

static uint32_t BEA_THISCALL ap_00447f50(CDropship * this_)
{
  *(undefined4 *)(this_ + 0x294) = 1;
  *(undefined4 *)(this_ + 0x290) = 1;
  *(undefined4 *)(this_ + 0x244) = 0;
  *(undefined4 *)(this_ + 0x280) = *(undefined4 *)(this_ + 0x1c);
  *(undefined4 *)(this_ + 0x284) = *(undefined4 *)(this_ + 0x20);
  *(undefined4 *)(this_ + 0x288) = *(undefined4 *)(this_ + 0x24);
  *(undefined4 *)(this_ + 0x28c) = *(undefined4 *)(this_ + 0x28);
  return bea_vcall<uint32_t>(this_, 0x1d8);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00447f50, ap_00447f50));
