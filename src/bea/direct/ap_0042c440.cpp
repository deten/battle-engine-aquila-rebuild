// auto-ported from 0042c440_vslot5.c (CConsoleMenu::vslot5, 22 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CConsoleMenu;

static uint32_t BEA_THISCALL ap_0042c440(CConsoleMenu * this_, int param_1)
{
  *(CConsoleMenu **)(param_1 + 0xc) = this_;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this_ + 4);
  *(int *)(this_ + 4) = param_1;
  *(int *)(this_ + 0x10) = *(int *)(this_ + 0x10) + 1;
  return param_1;
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042c440, ap_0042c440));
