// auto-ported from 004fcf00_vslot64.c (CUnit::vslot64, 145 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CUnit;

static void BEA_THISCALL ap_004fcf00(CUnit * this_)
{
  undefined4 local_4 = 0;
  
  *(undefined4 *)(this_ + 0x14c) = 0;
  *(undefined4 *)(this_ + 0x150) = 0;
  *(undefined4 *)(this_ + 0x154) = 0;
  *(undefined4 *)(this_ + 0x158) = local_4;
  *(undefined4 *)(this_ + 0x120) = *(undefined4 *)(this_ + 0x114);
  *(undefined4 *)(this_ + 0x7c) = 0;
  *(undefined4 *)(this_ + 0x80) = 0;
  *(undefined4 *)(this_ + 0x84) = 0;
  *(undefined4 *)(this_ + 0x88) = local_4;
  if (*(int **)(this_ + 0x208) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)(this_ + 0x208), 0x20);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fcf00, ap_004fcf00));
