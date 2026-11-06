// auto-ported from 00405d90_vslot4_t8.c (CUnit::vslot4_t8, 32 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CUnit;

static int BEA_THISCALL ap_00405d90(CUnit * this_)
{
  if (*(int *)(this_ + 0x130) == 0) {
    return -0xff8000;
  }
  return (-(uint)(*(int *)(this_ + 0x130) != 1) & 0xff800080) - 0x800000;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00405d90, ap_00405d90));
