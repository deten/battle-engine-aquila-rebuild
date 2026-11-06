// auto-ported from 004f3cb0_vslot19.c (CThing::vslot19, 46 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CThing;

static void BEA_THISCALL ap_004f3cb0(CThing * this_, undefined4 *param_1)
{
  *(undefined4 *)(this_ + 0x1c) = *param_1;
  *(undefined4 *)(this_ + 0x20) = param_1[1];
  *(undefined4 *)(this_ + 0x24) = param_1[2];
  *(undefined4 *)(this_ + 0x28) = param_1[3];
  if (*(int *)(this_ + 0x30) != 0) {
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3cb0, ap_004f3cb0));
