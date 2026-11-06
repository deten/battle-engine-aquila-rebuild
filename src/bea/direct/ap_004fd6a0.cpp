// auto-ported from 004fd6a0_vslot22.c (CUnit::vslot22, 88 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CUnit;

static int BEA_THISCALL ap_004fd6a0(CUnit * this_)
{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(this_ + 0x214);
  if (iVar3 == 0) {
    *(undefined4 *)(this_ + 0x214) = 1;
    if (*(int **)(this_ + 0x148) != (int *)0x0) {
      bea_vcall<uint32_t>(*(int **)(this_ + 0x148), 0x58);
    }
    puVar1 = *(undefined4 **)(this_ + 0x19c);
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
    while (BEA_LOOP_GUARD((iVar3 = 0, piVar2 != (int *)0x0))) {
      if ((int *)*piVar2 != (int *)0x0) {
        bea_vcall<uint32_t>(*piVar2, 0x58);
      }
      puVar1 = (undefined4 *)puVar1[1];
      if (puVar1 == (undefined4 *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)*puVar1;
      }
    }
  }
  return iVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fd6a0, ap_004fd6a0));
