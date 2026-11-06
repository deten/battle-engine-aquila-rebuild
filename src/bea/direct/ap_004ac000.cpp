// auto-ported from 004ac000_FUN_004ac000.c (FUN_004ac000, 218 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00704bf8 GLOBAL_AT(int, 0x00704bf8)
#define DAT_00704b28 GLOBAL_AT(int, 0x00704b28)
#define DAT_00704bfc GLOBAL_AT(int, 0x00704bfc)
#define DAT_00704b68 GLOBAL_AT(int, 0x00704b68)
#define DAT_00704c00 GLOBAL_AT(int, 0x00704c00)
#define DAT_00704b38 GLOBAL_AT(int, 0x00704b38)
#define DAT_00704c04 GLOBAL_AT(int, 0x00704c04)
#define DAT_00704c08 GLOBAL_AT(int, 0x00704c08)
#define DAT_00704af8 GLOBAL_AT(int, 0x00704af8)
#define _DAT_00704c0c GLOBAL_AT(int, 0x00704c0c)
#define _DAT_00704c10 GLOBAL_AT(int, 0x00704c10)
#define DAT_00704b18 GLOBAL_AT(int, 0x00704b18)
#define _DAT_00704c14 GLOBAL_AT(int, 0x00704c14)
#define DAT_00704b48 GLOBAL_AT(int, 0x00704b48)
#define _DAT_00704c18 GLOBAL_AT(int, 0x00704c18)
#define DAT_00704b58 GLOBAL_AT(int, 0x00704b58)
#define _DAT_00704c1c GLOBAL_AT(int, 0x00704c1c)
#define _DAT_00704c20 GLOBAL_AT(int, 0x00704c20)
#define _DAT_00704c24 GLOBAL_AT(int, 0x00704c24)
#define DAT_00704b08 GLOBAL_AT(int, 0x00704b08)
#define _DAT_00704c28 GLOBAL_AT(int, 0x00704c28)
#define _DAT_00704c2c GLOBAL_AT(int, 0x00704c2c)
#define _DAT_00704c30 GLOBAL_AT(int, 0x00704c30)
#define _DAT_00704c34 GLOBAL_AT(int, 0x00704c34)
#define _DAT_00704c38 GLOBAL_AT(int, 0x00704c38)
#define _DAT_00704c3c GLOBAL_AT(int, 0x00704c3c)
#define _DAT_00704c40 GLOBAL_AT(int, 0x00704c40)
#define _DAT_00704c44 GLOBAL_AT(int, 0x00704c44)
#define _DAT_00704c48 GLOBAL_AT(int, 0x00704c48)
#define _DAT_00704c4c GLOBAL_AT(int, 0x00704c4c)
#define _DAT_00704c50 GLOBAL_AT(int, 0x00704c50)
#define _DAT_00704c54 GLOBAL_AT(int, 0x00704c54)
#define DAT_00704cc8 GLOBAL_AT(int, 0x00704cc8)

static void BEA_CDECL ap_004ac000(void)
{
  DAT_00704bf8 = &DAT_00704b28;
  DAT_00704bfc = &DAT_00704b68;
  DAT_00704c00 = &DAT_00704b38;
  DAT_00704c04 = &DAT_00704b38;
  DAT_00704c08 = &DAT_00704af8;
  _DAT_00704c0c = &DAT_00704b28;
  _DAT_00704c10 = &DAT_00704b18;
  _DAT_00704c14 = &DAT_00704b48;
  _DAT_00704c18 = &DAT_00704b58;
  _DAT_00704c1c = &DAT_00704b48;
  _DAT_00704c20 = &DAT_00704b18;
  _DAT_00704c24 = &DAT_00704b08;
  _DAT_00704c28 = &DAT_00704b58;
  _DAT_00704c2c = &DAT_00704b68;
  _DAT_00704c30 = &DAT_00704b28;
  _DAT_00704c34 = &DAT_00704b28;
  _DAT_00704c38 = &DAT_00704b18;
  _DAT_00704c3c = &DAT_00704b58;
  _DAT_00704c40 = &DAT_00704b48;
  _DAT_00704c44 = &DAT_00704af8;
  _DAT_00704c48 = &DAT_00704b38;
  _DAT_00704c4c = &DAT_00704af8;
  _DAT_00704c50 = &DAT_00704b48;
  _DAT_00704c54 = &DAT_00704b08;
  DAT_00704cc8 = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ac000, ap_004ac000));
