// auto-ported from 00441b10_FUN_00441b10.c (FUN_00441b10, 98 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define _DAT_0066eb80 GLOBAL_AT(int, 0x0066eb80)
#define DAT_0066eb84 GLOBAL_AT(int, 0x0066eb84)
#define _DAT_0066eb88 GLOBAL_AT(int, 0x0066eb88)
#define _DAT_0066eb8c GLOBAL_AT(int, 0x0066eb8c)
#define DAT_0066ff74 GLOBAL_AT(char, 0x0066ff74)
#define DAT_0066ff75 GLOBAL_AT(char, 0x0066ff75)

static void BEA_CDECL ap_00441b10(undefined4 *param_1, undefined4 param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    _DAT_0066eb80 = *param_1;
    DAT_0066eb84 = param_1[1];
    _DAT_0066eb88 = param_1[2];
    _DAT_0066eb8c = param_1[3];
    DAT_0066ff74 = 1;
    DAT_0066ff75 = (undefined1)param_2;
    return;
  }
  DAT_0066eb84 = 0xffffffff;
  _DAT_0066eb80 = 0;
  DAT_0066ff74 = 1;
  DAT_0066ff75 = (undefined1)param_2;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00441b10, ap_00441b10));
