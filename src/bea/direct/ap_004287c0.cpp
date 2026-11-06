// auto-ported from 004287c0_vslot27.c (CComponent::vslot27, 64 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CComponent;

static undefined4 * BEA_THISCALL ap_004287c0(CComponent * this_, undefined4 *param_1)
{
  if (*(int **)(this_ + 0x26c) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)(this_ + 0x26c), 0x6c, param_1);
    return param_1;
  }
  *param_1 = *(undefined4 *)(this_ + 0x7c);
  param_1[1] = *(undefined4 *)(this_ + 0x80);
  param_1[2] = *(undefined4 *)(this_ + 0x84);
  param_1[3] = *(undefined4 *)(this_ + 0x88);
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004287c0, ap_004287c0));
