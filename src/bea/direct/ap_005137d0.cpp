// auto-ported from 005137d0_FUN_005137d0.c (FUN_005137d0, 42 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_005137d0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  return bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32ea0), 0x6c, *(int **)((int)this_ + 0x32ea0),param_1,param_2,param_3,param_4,param_5,0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005137d0, ap_005137d0));
