// auto-ported from 004e80b0_vslot80.c (CNormalSquad::vslot80, 76 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CNormalSquad;

static undefined4 BEA_THISCALL ap_004e80b0(CNormalSquad * this_)
{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = *(undefined4 **)(this_ + 0xa4);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*puVar1;
  }
  while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
    if ((int *)*piVar2 != (int *)0x0) {
      bea_vcall<uint32_t>(*piVar2, 0x140);
    }
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e80b0, ap_004e80b0));
