// auto-ported from 004db880_vslot26.c (CRenderThing::vslot26, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CRenderThing;

static void BEA_THISCALL ap_004db880(CRenderThing * this_, undefined4 param_1, undefined4 param_2)
{
  if (*(int **)(this_ + 0x10) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)(this_ + 0x10), 0x68, param_1,param_2);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004db880, ap_004db880));
