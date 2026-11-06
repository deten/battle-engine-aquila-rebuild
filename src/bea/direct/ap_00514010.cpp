// auto-ported from 00514010_FUN_00514010.c (FUN_00514010, 27 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_STDCALL ap_00514010(int *param_1)
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)*param_1;
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
    *param_1 = 0;
  }
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00514010, ap_00514010));
