// auto-ported from 00404b90_FUN_00404b90.c (FUN_00404b90, 57 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00660198 GLOBAL_AT(int, 0x00660198)
#define DAT_0066019c GLOBAL_AT(int, 0x0066019c)
#define DAT_006601a0 GLOBAL_AT(int, 0x006601a0)
#define DAT_006601a8 GLOBAL_AT(int, 0x006601a8)

static void BEA_CDECL ap_00404b90(void)
{
  int *piVar1;
  
  DAT_00660198 = 0;
  DAT_0066019c = 0;
  DAT_006601a0 = 0;
  for (piVar1 = DAT_006601a8; BEA_LOOP_GUARD((piVar1 != (int *)0x0)); piVar1 = (int *)piVar1[1]) {
    bea_vcall<uint32_t>(piVar1, 0xc);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00404b90, ap_00404b90));
