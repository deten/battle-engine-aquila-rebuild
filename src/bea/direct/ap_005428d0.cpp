// auto-ported from 005428d0_FUN_005428d0.c (FUN_005428d0, 178 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00650848 GLOBAL_AT(undefined4, 0x00650848)
#define DAT_00650888 GLOBAL_AT(undefined4, 0x00650888)
#define _DAT_0067a680 GLOBAL_AT(int, 0x0067a680)
#define _DAT_00650884 GLOBAL_AT(int, 0x00650884)
#define DAT_0067a678 GLOBAL_AT(int, 0x0067a678)
#define DAT_0067a67c GLOBAL_AT(int, 0x0067a67c)
#define _DAT_00650870 GLOBAL_AT(int, 0x00650870)
#define _DAT_0065085c GLOBAL_AT(int, 0x0065085c)
#define _DAT_006508c4 GLOBAL_AT(int, 0x006508c4)
#define _DAT_006508b0 GLOBAL_AT(int, 0x006508b0)
#define _DAT_0065089c GLOBAL_AT(int, 0x0065089c)
#define DAT_008aa8b4 GLOBAL_AT(int, 0x008aa8b4)
#define DAT_008aa8b8 GLOBAL_AT(int, 0x008aa8b8)
#define DAT_008aa8bc GLOBAL_AT(int, 0x008aa8bc)
#define _DAT_008aa8c0 GLOBAL_AT(int, 0x008aa8c0)
#define _DAT_008aa8c4 GLOBAL_AT(int, 0x008aa8c4)
#define DAT_0063c108 GLOBAL_AT(char, 0x0063c108)
#define _DAT_008aa8c8 GLOBAL_AT(int, 0x008aa8c8)

static undefined4 BEA_CDECL ap_005428d0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00650848;
  for (iVar1 = 0x10; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00650888;
  for (iVar1 = 0x10; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_0067a680 = 0;
  _DAT_00650884 = 0x3f800000;
  DAT_0067a678 = 0;
  DAT_0067a67c = 0;
  _DAT_00650870 = 0x3f800000;
  _DAT_0065085c = 0x3f800000;
  DAT_00650848 = 0x3f800000;
  _DAT_006508c4 = 0x3f800000;
  _DAT_006508b0 = 0x3f800000;
  _DAT_0065089c = 0x3f800000;
  DAT_00650888 = 0x3f800000;
  DAT_008aa8b4 = 0;
  DAT_008aa8b8 = 0;
  DAT_008aa8bc = 0;
  _DAT_008aa8c0 = 0;
  _DAT_008aa8c4 = 0;
  if (DAT_0063c108 == '\0') {
    _DAT_008aa8c8 = 0;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005428d0, ap_005428d0));
