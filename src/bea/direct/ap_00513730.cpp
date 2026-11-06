// auto-ported from 00513730_FUN_00513730.c (FUN_00513730, 41 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define _DAT_008a9acc GLOBAL_AT(int, 0x008a9acc)
#define _DAT_008a956c GLOBAL_AT(int, 0x008a956c)

static int BEA_CDECL ap_00513730(void)
{
  int iVar1;
  
  iVar1 = DAT_008a9ac0;
  _DAT_008a9acc = 1;
  if (DAT_008a9ac0 < 4) {
    DAT_008a9ac0 = 9;
  }
  _DAT_008a956c = 0xffffffff;
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513730, ap_00513730));
