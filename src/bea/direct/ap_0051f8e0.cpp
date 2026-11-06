// auto-ported from 0051f8e0_FUN_0051f8e0.c (FUN_0051f8e0, 28 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089bc30 GLOBAL_AT(undefined4*, 0x0089bc30)

static void BEA_CDECL ap_0051f8e0(void)
{
  if (DAT_0089bc30 != (int *)0x0) {
    bea_vcall<uint32_t>(DAT_0089bc30, 0x4, 1);
    DAT_0089bc30 = (int *)0x0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051f8e0, ap_0051f8e0));
