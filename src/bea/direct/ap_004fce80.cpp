// auto-ported from 004fce80_FUN_004fce80.c (FUN_004fce80, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (5 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004fce80(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  if (*(int **)((int)this_ + 0x208) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x208), 0x18, param_1,param_2,param_3,param_4);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fce80, ap_004fce80));
