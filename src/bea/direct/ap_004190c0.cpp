// auto-ported from 004190c0_vslot3.c (CCamera::vslot3, 17 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CCamera;

static undefined4 BEA_THISCALL ap_004190c0(CCamera * this_, undefined4 param_1)
{
  bea_vcall<uint32_t>(this_, 0x4, param_1);
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004190c0, ap_004190c0));
