// auto-ported from 00500390_FUN_00500390.c (FUN_00500390, 44 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_00500390(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)((int)this_ + 8);
  if (piVar1 != (int *)0x0) {
    uVar2 = bea_vcall<uint32_t>(piVar1, 0x2c, piVar1,param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0x80004005;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500390, ap_00500390));
