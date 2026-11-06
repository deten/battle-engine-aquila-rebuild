// auto-ported from 004190b0_vslot2.c (CCamera::vslot2, 16 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CCamera;
// @autoport-arity: call arity differs from the asm (0 pushes: asm 1 call(s), port 0)

static undefined4 BEA_THISCALL ap_004190b0(CCamera * this_, undefined4 param_1)
{
  bea_vcall<uint32_t>(this_, 0x0, param_1);
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004190b0, ap_004190b0));
