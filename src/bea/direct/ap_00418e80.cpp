// auto-ported from 00418e80_vslot3.c (CThingCamera::vslot3, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CThingCamera;
#define DAT_00660588 GLOBAL_AT(undefined4, 0x00660588)

static undefined4 * BEA_THISCALL ap_00418e80(CThingCamera * this_, undefined4 *param_1)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int **)(this_ + 4) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)(this_ + 4), 0x7c, param_1);
    return param_1;
  }
  puVar2 = &DAT_00660588;
  puVar3 = param_1;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00418e80, ap_00418e80));
