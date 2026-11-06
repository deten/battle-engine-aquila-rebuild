// auto-ported from 0047a160_vslot100.c (CGillM::vslot100, 78 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CGillM;

static void BEA_THISCALL ap_0047a160(CGillM * this_)
{
  if ((*(int *)(this_ + 0x244) != 1) && (*(int *)(this_ + 0x244) != 2)) {
    bea_vcall<uint32_t>(this_, 0xf4, *(undefined4 *)(this_ + 0x278),*(undefined4 *)(this_ + 0x27c),
               *(undefined4 *)(this_ + 0x280),*(undefined4 *)(this_ + 0x284),0);
    *(undefined4 *)(this_ + 0x244) = 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047a160, ap_0047a160));
