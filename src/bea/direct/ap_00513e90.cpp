// auto-ported from 00513e90_FUN_00513e90.c (FUN_00513e90, 40 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00889068 GLOBAL_AT(int, 0x00889068)

static void BEA_THISCALL ap_00513e90(void * this_, int param_1)
{
  if (param_1 != DAT_00889068) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32ea0), 0x164, *(int **)((int)this_ + 0x32ea0),param_1);
    DAT_00889068 = param_1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513e90, ap_00513e90));
