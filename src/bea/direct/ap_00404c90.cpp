// auto-ported from 00404c90_FUN_00404c90.c (FUN_00404c90, 34 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_006601a8 GLOBAL_AT(int, 0x006601a8)

static void BEA_CDECL ap_00404c90(undefined4 param_1)
{
  int *piVar1;
  
  for (piVar1 = DAT_006601a8; BEA_LOOP_GUARD((piVar1 != (int *)0x0)); piVar1 = (int *)piVar1[1]) {
    bea_vcall<uint32_t>(piVar1, 0x14, param_1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00404c90, ap_00404c90));
