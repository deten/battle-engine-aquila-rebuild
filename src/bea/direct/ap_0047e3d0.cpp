// auto-ported from 0047e3d0_vslot8.c (CGuide::vslot8, 103 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CGuide;

static undefined4 * BEA_THISCALL ap_0047e3d0(CGuide * this_)
{
  int iVar1;
  undefined4 local_4 = 0;
  
  iVar1 = *(int *)(this_ + 0x18);
  *(undefined4 *)(this_ + 0x1c) = 0;
  *(undefined4 *)(this_ + 8) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(this_ + 0xc) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(this_ + 0x10) = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(this_ + 0x14) = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(iVar1 + 0x14c) = 0;
  *(undefined4 *)(iVar1 + 0x150) = 0;
  *(undefined4 *)(iVar1 + 0x154) = 0;
  *(undefined4 *)(iVar1 + 0x158) = local_4;
  return (undefined4 *)(iVar1 + 0x14c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047e3d0, ap_0047e3d0));
