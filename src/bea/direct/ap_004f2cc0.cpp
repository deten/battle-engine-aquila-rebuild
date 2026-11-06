// auto-ported from 004f2cc0_vslot8.c (CTGALoader::vslot8, 24 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CTGALoader;

static undefined4 BEA_THISCALL ap_004f2cc0(CTGALoader * this_)
{
  if ((*(int **)(this_ + 0x118) != (int *)0x0) && (**(int **)(this_ + 0x118) != 0)) {
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f2cc0, ap_004f2cc0));
