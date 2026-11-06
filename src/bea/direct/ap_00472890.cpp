// auto-ported from 00472890_vslot3.c (CGameCreditControlHandler::vslot3, 17 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CGameCreditControlHandler;

static void BEA_THISCALL ap_00472890(CGameCreditControlHandler * this_, undefined4 param_1, int param_2, undefined4 param_3)
{
  if (param_2 == 7) {
    *(undefined4 *)(this_ + 8) = 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00472890, ap_00472890));
