// auto-ported from 004a42f0_vslot10.c (CMenuMenuItem::vslot10, 26 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CMenuMenuItem;

static undefined4 BEA_THISCALL ap_004a42f0(CMenuMenuItem * this_)
{
  if ((this_[0x25] != (CMenuMenuItem)0x0) && (*(int *)(this_ + 0x1c) != *(int *)(this_ + 0x20))) {
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a42f0, ap_004a42f0));
