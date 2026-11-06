// auto-ported from 004885e0_FUN_004885e0.c (FUN_004885e0, 62 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_004885e0(void * this_, undefined4 param_1)
{
  int *piVar1;
  piVar1 = *(int **)((int)this_ + 8);
  if ((*(uint *)((int)this_ + 0x10) & 0x200) == 0x200) {
    return bea_vcall<uint32_t>(piVar1, 0x2c, piVar1,0,0,param_1,0x2800);
  }
  return bea_vcall<uint32_t>(piVar1, 0x2c, piVar1,0,0,param_1,0x800);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004885e0, ap_004885e0));
