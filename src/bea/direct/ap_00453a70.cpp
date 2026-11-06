// auto-ported from 00453a70_vslot6.c (CMenuItem::vslot6, 14 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CMenuItem;

static uint32_t BEA_THISCALL ap_00453a70(CMenuItem * this_)
{
  return (-(*(int *)(this_ + 0xc) != 0) & 0x14U) + 0x14;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00453a70, ap_00453a70));
