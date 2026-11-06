// auto-ported from 004bb7c0_FUN_004bb7c0.c (FUN_004bb7c0, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define PTR_DAT_00630a04 GLOBAL_AT(void*, 0x00630a04)

static uint32_t BEA_THISCALL ap_004bb7c0(void * this_, undefined4 param_1)
{
  return bea_vcall<uint32_t>(this_, 0x18, param_1,&PTR_DAT_00630a04);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bb7c0, ap_004bb7c0));
