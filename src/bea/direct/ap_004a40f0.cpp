// auto-ported from 004a40f0_vslot11.c (CMenuMenuItem::vslot11, 29 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CMenuMenuItem;

static void BEA_THISCALL ap_004a40f0(CMenuMenuItem * this_)
{
  if (*(int *)(this_ + 0x20) != *(int *)(this_ + 0x1c)) {
    bea_vcall<uint32_t>(this_, 0x38, *(int *)(this_ + 0x20));
    *(undefined4 *)(this_ + 0x1c) = *(undefined4 *)(this_ + 0x20);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a40f0, ap_004a40f0));
