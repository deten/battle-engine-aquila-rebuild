// auto-ported from 004f7bd0_vslot3.c (CUMTexture::vslot3, 27 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CUMTexture;

static undefined4 BEA_THISCALL ap_004f7bd0(CUMTexture * this_)
{
  int *piVar1;
  
  piVar1 = *(int **)(this_ + 8);
  if (piVar1 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
    *(undefined4 *)(this_ + 8) = 0;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f7bd0, ap_004f7bd0));
