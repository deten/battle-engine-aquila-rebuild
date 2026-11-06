// auto-ported from 00480910_vslot4.c (CHiveBossGuide::vslot4, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CHiveBossGuide;

static uint32_t BEA_THISCALL ap_00480910(CHiveBossGuide * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  *(undefined4 *)(this_ + 8) = param_1;
  *(undefined4 *)(this_ + 0xc) = param_2;
  *(undefined4 *)(this_ + 0x10) = param_3;
  *(undefined4 *)(this_ + 0x14) = param_4;
  return param_3;
  return param_3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00480910, ap_00480910));
