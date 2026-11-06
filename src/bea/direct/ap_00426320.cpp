// auto-ported from 00426320_vslot1.c (CSphere::vslot1, 32 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CSphere;

static uint32_t BEA_THISCALL ap_00426320(CSphere * this_, undefined4 param_1, undefined4 param_2, int *param_3, undefined4 param_4)
{
  return bea_vcall<uint32_t>(param_3, 0xc, param_2,param_1,this_,param_4);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00426320, ap_00426320));
