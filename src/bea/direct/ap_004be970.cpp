// auto-ported from 004be970_FUN_004be970.c (FUN_004be970, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint BEA_THISCALL ap_004be970(void * this_, uint param_1, int param_2)
{
  uint uVar1;
  
  uVar1 = param_1 & 0x80000007;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
  }
  return 1 << ((byte)uVar1 & 0x1f) &
         (uint)*(byte *)(((int)param_1 >> 3) * 0x100 + param_2 + (int)this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004be970, ap_004be970));
