// auto-ported from 00552470_vslot3.c (CShadows::vslot3, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CShadows;

static undefined4 BEA_THISCALL ap_00552470(CShadows * this_)
{
  int *piVar1;
  
  piVar1 = *(int **)(this_ + 0x6c0);
  if (piVar1 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
    *(undefined4 *)(this_ + 0x6c0) = 0;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00552470, ap_00552470));
