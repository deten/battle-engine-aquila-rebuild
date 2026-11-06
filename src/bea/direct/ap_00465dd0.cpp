// auto-ported from 00465dd0_FUN_00465dd0.c (FUN_00465dd0, 51 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00679af4 GLOBAL_AT(int, 0x00679af4)

static uint32_t BEA_THISCALL ap_00465dd0(void * this_, undefined4 param_1)
{
  uint uVar1;
  
  if (*(char *)((int)this_ + 0x15c) != '\0') {
    return true;
  }
  uVar1 = bea_vcall<uint32_t>(this_, 0x0, param_1);
  return uVar1 != (DAT_00679af4 & 0xff);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00465dd0, ap_00465dd0));
