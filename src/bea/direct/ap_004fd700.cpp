// auto-ported from 004fd700_vslot23.c (CUnit::vslot23, 88 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CUnit;

static undefined4 BEA_THISCALL ap_004fd700(CUnit * this_)
{
  undefined4 *puVar1;
  int *piVar2;
  
  if (*(int *)(this_ + 0x214) != 0) {
    *(undefined4 *)(this_ + 0x214) = 0;
    if (*(int **)(this_ + 0x148) != (int *)0x0) {
      bea_vcall<uint32_t>(*(int **)(this_ + 0x148), 0x5c);
    }
    puVar1 = *(undefined4 **)(this_ + 0x19c);
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
    while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
      if ((int *)*piVar2 != (int *)0x0) {
        bea_vcall<uint32_t>(*piVar2, 0x5c);
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
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fd700, ap_004fd700));
