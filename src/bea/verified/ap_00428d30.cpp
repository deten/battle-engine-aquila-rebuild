// auto-ported from 00428d30_vslot90.c (CComponent::vslot90, 32 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CComponent;

static undefined4 * BEA_THISCALL ap_00428d30(CComponent * this_, undefined4 *param_1)
{
  *param_1 = *(undefined4 *)(this_ + 0x1c);
  param_1[1] = *(undefined4 *)(this_ + 0x20);
  param_1[2] = *(undefined4 *)(this_ + 0x24);
  param_1[3] = *(undefined4 *)(this_ + 0x28);
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 460 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00428d30, ap_00428d30));
