// auto-ported from 0052bb40_vslot0.c (CD3DApplication::vslot0, 58 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CD3DApplication;

static undefined4 BEA_THISCALL ap_0052bb40(CD3DApplication * this_)
{
  if (*(int *)(this_ + 0x32e44) != 0) {
    SetWindowLongA(*(HWND *)(this_ + 0x32e94),-0x10,*(LONG *)(this_ + 0x32ff8));
    return 0;
  }
  SetWindowLongA(*(HWND *)(this_ + 0x32e94),-0x10,-0x6ff80000);
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052bb40, ap_0052bb40));
