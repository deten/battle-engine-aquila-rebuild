// auto-ported from 005158c0_FUN_005158c0.c (FUN_005158c0, 24 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static uint32_t BEA_CDECL ap_005158c0(void)
{
  int iVar1;
  
  iVar1 = bea_vcall<uint32_t>(DAT_00888a50, 0xa4, DAT_00888a50);
  return -1 < iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005158c0, ap_005158c0));
