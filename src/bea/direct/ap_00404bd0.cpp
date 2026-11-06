// auto-ported from 00404bd0_FUN_00404bd0.c (FUN_00404bd0, 27 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_006601a8 GLOBAL_AT(int, 0x006601a8)

static void BEA_CDECL ap_00404bd0(void)
{
  int *piVar1;
  
  for (piVar1 = DAT_006601a8; BEA_LOOP_GUARD((piVar1 != (int *)0x0)); piVar1 = (int *)piVar1[1]) {
    bea_vcall<uint32_t>(piVar1, 0x8);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00404bd0, ap_00404bd0));
