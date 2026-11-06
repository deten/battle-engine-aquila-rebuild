// auto-ported from 00513a10_FUN_00513a10.c (FUN_00513a10, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00513a10(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
  return bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32ea0), 0x5c, *(int **)((int)this_ + 0x32ea0),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
             0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513a10, ap_00513a10));
