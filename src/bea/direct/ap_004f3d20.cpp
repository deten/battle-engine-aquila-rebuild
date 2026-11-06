// auto-ported from 004f3d20_vslot21_t8.c (CThing::vslot21_t8, 15 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CThing;

static undefined4 BEA_THISCALL ap_004f3d20(CThing * this_)
{
  undefined4 uVar1;
  
  if (*(int **)(this_ + 0x28) != (int *)0x0) {
                    
                    
    uVar1 = bea_vcall<uint32_t>(*(int **)(this_ + 0x28), 0x10);
    return uVar1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3d20, ap_004f3d20));
