// auto-ported from 0047e2d0_vslot4.c (CGuide::vslot4, 63 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CGuide;

static void BEA_THISCALL ap_0047e2d0(CGuide * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5)
{
  if ((param_5 != 0) || (*(int *)(*(int *)(*(int *)(this_ + 0x18) + 0x13c) + 0x20) != 2)) {
    *(undefined4 *)(this_ + 0x1c) = 1;
    *(undefined4 *)(this_ + 8) = param_1;
    *(undefined4 *)(this_ + 0xc) = param_2;
    *(undefined4 *)(this_ + 0x10) = param_3;
    *(undefined4 *)(this_ + 0x14) = param_4;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047e2d0, ap_0047e2d0));
