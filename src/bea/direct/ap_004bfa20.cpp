// auto-ported from 004bfa20_vslot4.c (CThing::vslot4, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00829dd0 GLOBAL_AT(undefined4, 0x00829dd0)

static undefined4 * BEA_STDCALL ap_004bfa20(undefined4 *param_1)
{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00829dd0;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return param_1;
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bfa20, ap_004bfa20));
