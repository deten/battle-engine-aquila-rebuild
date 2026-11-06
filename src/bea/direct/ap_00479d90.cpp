// auto-ported from 00479d90_vslot44.c (CGillM::vslot44, 27 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CGillM;

static uint32_t BEA_THISCALL ap_00479d90(CGillM * this_)
{
  if (*(int *)(this_ + 0x274) == 1) {
    return false;
  }
  return *(int *)(this_ + 0x244) != 2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00479d90, ap_00479d90));
