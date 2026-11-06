// auto-ported from 004e5e00_vslot54.c (CSquad::vslot54, 71 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CSquad;

static void BEA_THISCALL ap_004e5e00(CSquad * this_, int param_1)
{
  if (param_1 == 3) {
    *(undefined4 *)(this_ + 0x9c) = 1;
    *(undefined4 *)(this_ + 0x8c) = *(undefined4 *)(this_ + 0x1c);
    *(undefined4 *)(this_ + 0x90) = *(undefined4 *)(this_ + 0x20);
    *(undefined4 *)(this_ + 0x94) = *(undefined4 *)(this_ + 0x24);
    *(undefined4 *)(this_ + 0x98) = *(undefined4 *)(this_ + 0x28);
    return;
  }
  if (param_1 == 2) {
    *(undefined4 *)(this_ + 0x9c) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e5e00, ap_004e5e00));
