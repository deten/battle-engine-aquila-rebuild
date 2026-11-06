// auto-ported from 004435c0_vslot6.c (CDestroyableCoreSegment::vslot6, 35 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CDestroyableCoreSegment;

static undefined4 BEA_THISCALL ap_004435c0(CDestroyableCoreSegment * this_)
{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(this_ + 0x4c) != 1) {
    piVar1 = *(int **)(this_ + 0x20);
    if ((piVar1 != (int *)0x0) && (piVar1[0xe] == 0)) {
      uVar2 = bea_vcall<uint32_t>(piVar1, 0x18);
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004435c0, ap_004435c0));
