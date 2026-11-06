// auto-ported from 004098c0_vslot1.c (CLine::vslot1, 32 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CLine;

static uint32_t BEA_THISCALL ap_004098c0(CLine * this_, undefined4 param_1, undefined4 param_2, int *param_3, undefined4 param_4)
{
  return bea_vcall<uint32_t>(param_3, 0x10, param_2,param_1,this_,param_4);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004098c0, ap_004098c0));
