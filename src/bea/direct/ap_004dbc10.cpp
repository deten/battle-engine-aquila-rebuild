// auto-ported from 004dbc10_vslot19.c (CRenderThing::vslot19, 6 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_STDCALL ap_004dbc10(undefined4 param_1)
{
  return 0xffffffff;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dbc10, ap_004dbc10));
