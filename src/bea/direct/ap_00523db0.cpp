// auto-ported from 00523db0_FUN_00523db0.c (FUN_00523db0, 50 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00640054 GLOBAL_AT(char, 0x00640054)
#define DAT_0089bdf8 GLOBAL_AT(int, 0x0089bdf8)
#define DAT_0089be28 GLOBAL_AT(int, 0x0089be28)
#define DAT_0089be10 GLOBAL_AT(int, 0x0089be10)
#define DAT_0089bdfc GLOBAL_AT(int, 0x0089bdfc)
#define DAT_0089be2c GLOBAL_AT(int, 0x0089be2c)
#define DAT_0089be14 GLOBAL_AT(int, 0x0089be14)
#define DAT_0089bdf4 GLOBAL_AT(char, 0x0089bdf4)
#define DAT_0089be48 GLOBAL_AT(int, 0x0089be48)

static undefined4 BEA_CDECL ap_00523db0(undefined4 param_1, undefined4 param_2)
{
  (*(uint8_t*)((char*)&DAT_00640054 + 0)) = 0xff;
  DAT_0089bdf8 = 0;
  DAT_0089be28 = 0;
  DAT_0089be10 = 0;
  DAT_0089bdfc = 0;
  DAT_0089be2c = 0;
  DAT_0089be14 = 0;
  DAT_0089bdf4 = 0;
  DAT_0089be48 = 0;
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00523db0, ap_00523db0));
