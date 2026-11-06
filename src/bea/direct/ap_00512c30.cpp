// auto-ported from 00512c30_vslot7.c (PCLTShell::vslot7, 10 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char PCLTShell;

static undefined4 BEA_THISCALL ap_00512c30(PCLTShell * this_)
{
  this_[0x330c8] = (PCLTShell)0x0;
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00512c30, ap_00512c30));
