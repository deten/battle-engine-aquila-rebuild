// auto-ported from 00513ca0_FUN_00513ca0.c (FUN_00513ca0, 125 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00889070 GLOBAL_AT(int, 0x00889070)
#define DAT_0088906c GLOBAL_AT(int, 0x0088906c)
#define DAT_00889068 GLOBAL_AT(int, 0x00889068)

static undefined4 BEA_THISCALL ap_00513ca0(void * this_, undefined4 param_1)
{
  undefined4 uVar1;
  
  if (DAT_00889070 != (byte)param_1) {
    DAT_00889070 = (uint)(byte)param_1;
    uVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32ea0), 0x134, *(int **)((int)this_ + 0x32ea0),(byte)param_1);
    DAT_0088906c = 0;
    DAT_00889068 = 0x152;
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32ea0), 0x170, *(int **)((int)this_ + 0x32ea0),0);
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32ea0), 0x164, *(int **)((int)this_ + 0x32ea0),0x152);
    return uVar1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513ca0, ap_00513ca0));
