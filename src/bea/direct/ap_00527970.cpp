// auto-ported from 00527970_vslot3.c (CReconnectInterface::vslot3, 17 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CReconnectInterface;

static void BEA_THISCALL ap_00527970(CReconnectInterface * this_, undefined4 param_1, int param_2, undefined4 param_3)
{
  if (param_2 == 0x38) {
    *(undefined4 *)(this_ + 8) = 3;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00527970, ap_00527970));
