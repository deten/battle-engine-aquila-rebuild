// auto-ported from 0047e340_vslot6.c (CGuide::vslot6, 40 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CGuide;

static uint32_t BEA_THISCALL ap_0047e340(CGuide * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  *(undefined4 *)(this_ + 0x1c) = 3;
  *(undefined4 *)(this_ + 8) = param_1;
  *(undefined4 *)(this_ + 0xc) = param_2;
  *(undefined4 *)(this_ + 0x10) = param_3;
  *(undefined4 *)(this_ + 0x14) = param_4;
  return param_3;
  return param_3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047e340, ap_0047e340));
