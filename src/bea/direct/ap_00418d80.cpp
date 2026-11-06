// auto-ported from 00418d80_vslot1.c (CThingCamera::vslot1, 69 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CThingCamera;
#define DAT_0083d9c0 GLOBAL_AT(undefined4, 0x0083d9c0)
#define DAT_00660588 GLOBAL_AT(undefined4, 0x00660588)

static undefined4 * BEA_THISCALL ap_00418d80(CThingCamera * this_, undefined4 *param_1)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(this_ + 4);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(iVar1 + 0x3c);
    if ((*(uint *)(iVar1 + 0x34) & 0x80000000) == 0) {
      puVar2 = &DAT_0083d9c0;
    }
    puVar3 = param_1;
    for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
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
BEA_HOOKS(BEA_HOOK(0x00418d80, ap_00418d80));
