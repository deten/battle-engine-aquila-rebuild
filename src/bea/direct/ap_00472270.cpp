// auto-ported from 00472270_FUN_00472270.c (FUN_00472270, 761 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00679e18 GLOBAL_AT(short, 0x00679e18)
#define _DAT_00679e18 GLOBAL_AT(short, 0x00679e18)
#define _DAT_00679e1a GLOBAL_AT(short, 0x00679e1a)
#define _DAT_00679e1c GLOBAL_AT(short, 0x00679e1c)
#define _DAT_00679e1e GLOBAL_AT(short, 0x00679e1e)
#define _DAT_00679e20 GLOBAL_AT(short, 0x00679e20)
#define _DAT_00679e22 GLOBAL_AT(short, 0x00679e22)
#define _DAT_00679e24 GLOBAL_AT(short, 0x00679e24)
#define _DAT_00679e26 GLOBAL_AT(short, 0x00679e26)
#define _DAT_00679e28 GLOBAL_AT(short, 0x00679e28)
#define _DAT_00679e2a GLOBAL_AT(short, 0x00679e2a)
#define _DAT_00679e2c GLOBAL_AT(short, 0x00679e2c)
#define _DAT_00679e2e GLOBAL_AT(short, 0x00679e2e)
#define _DAT_00679e30 GLOBAL_AT(short, 0x00679e30)
#define _DAT_00679e32 GLOBAL_AT(short, 0x00679e32)
#define _DAT_00679e34 GLOBAL_AT(short, 0x00679e34)
#define _DAT_00679e36 GLOBAL_AT(short, 0x00679e36)
#define _DAT_00679e38 GLOBAL_AT(short, 0x00679e38)
#define _DAT_00679e3a GLOBAL_AT(short, 0x00679e3a)
#define _DAT_00679e3c GLOBAL_AT(short, 0x00679e3c)
#define _DAT_00679e3e GLOBAL_AT(short, 0x00679e3e)
#define _DAT_00679e40 GLOBAL_AT(short, 0x00679e40)
#define _DAT_00679e42 GLOBAL_AT(short, 0x00679e42)
#define _DAT_00679e44 GLOBAL_AT(short, 0x00679e44)
#define _DAT_00679e46 GLOBAL_AT(short, 0x00679e46)
#define _DAT_00679e48 GLOBAL_AT(short, 0x00679e48)
#define _DAT_00679e4a GLOBAL_AT(short, 0x00679e4a)
#define _DAT_00679e4c GLOBAL_AT(short, 0x00679e4c)
#define _DAT_00679e4e GLOBAL_AT(short, 0x00679e4e)
#define _DAT_00679e50 GLOBAL_AT(short, 0x00679e50)
#define _DAT_00679e52 GLOBAL_AT(short, 0x00679e52)
#define _DAT_00679e54 GLOBAL_AT(short, 0x00679e54)
#define _DAT_00679e56 GLOBAL_AT(short, 0x00679e56)
#define _DAT_00679e58 GLOBAL_AT(short, 0x00679e58)
#define _DAT_00679e5a GLOBAL_AT(short, 0x00679e5a)
#define _DAT_00679e5c GLOBAL_AT(short, 0x00679e5c)
#define _DAT_00679e5e GLOBAL_AT(short, 0x00679e5e)
#define _DAT_00679e60 GLOBAL_AT(short, 0x00679e60)
#define _DAT_00679e62 GLOBAL_AT(short, 0x00679e62)
#define _DAT_00679e64 GLOBAL_AT(short, 0x00679e64)
#define _DAT_00679e66 GLOBAL_AT(short, 0x00679e66)
#define _DAT_00679e68 GLOBAL_AT(short, 0x00679e68)
#define _DAT_00679e6a GLOBAL_AT(short, 0x00679e6a)
#define _DAT_00679e6c GLOBAL_AT(short, 0x00679e6c)
#define _DAT_00679e6e GLOBAL_AT(short, 0x00679e6e)
#define _DAT_00679e70 GLOBAL_AT(short, 0x00679e70)
#define _DAT_00679e72 GLOBAL_AT(short, 0x00679e72)
#define _DAT_00679e74 GLOBAL_AT(short, 0x00679e74)
#define _DAT_00679e76 GLOBAL_AT(short, 0x00679e76)
#define _DAT_00679e78 GLOBAL_AT(short, 0x00679e78)
#define _DAT_00679e7a GLOBAL_AT(short, 0x00679e7a)

static undefined * BEA_CDECL ap_00472270(ushort *param_1, ushort *param_2)
{
  _DAT_00679e18 = *param_1 ^ *param_2;
  _DAT_00679e1a = param_1[1] ^ param_2[1];
  _DAT_00679e1c = param_1[2] ^ param_2[2];
  _DAT_00679e1e = param_1[3] ^ param_2[3];
  _DAT_00679e20 = param_1[4] ^ param_2[4];
  _DAT_00679e22 = param_1[5] ^ param_2[5];
  _DAT_00679e24 = param_1[6] ^ param_2[6];
  _DAT_00679e26 = param_1[7] ^ param_2[7];
  _DAT_00679e28 = param_1[8] ^ param_2[8];
  _DAT_00679e2a = param_1[9] ^ param_2[9];
  _DAT_00679e2c = param_1[10] ^ param_2[10];
  _DAT_00679e2e = param_1[0xb] ^ param_2[0xb];
  _DAT_00679e30 = param_1[0xc] ^ param_2[0xc];
  _DAT_00679e32 = param_1[0xd] ^ param_2[0xd];
  _DAT_00679e34 = param_1[0xe] ^ param_2[0xe];
  _DAT_00679e36 = param_1[0xf] ^ param_2[0xf];
  _DAT_00679e38 = param_1[0x10] ^ param_2[0x10];
  _DAT_00679e3a = param_1[0x11] ^ param_2[0x11];
  _DAT_00679e3c = param_1[0x12] ^ param_2[0x12];
  _DAT_00679e3e = param_1[0x13] ^ param_2[0x13];
  _DAT_00679e40 = param_1[0x14] ^ param_2[0x14];
  _DAT_00679e42 = param_1[0x15] ^ param_2[0x15];
  _DAT_00679e44 = param_1[0x16] ^ param_2[0x16];
  _DAT_00679e46 = param_1[0x17] ^ param_2[0x17];
  _DAT_00679e48 = param_1[0x18] ^ param_2[0x18];
  _DAT_00679e4a = param_1[0x19] ^ param_2[0x19];
  _DAT_00679e4c = param_1[0x1a] ^ param_2[0x1a];
  _DAT_00679e4e = param_1[0x1b] ^ param_2[0x1b];
  _DAT_00679e50 = param_1[0x1c] ^ param_2[0x1c];
  _DAT_00679e52 = param_1[0x1d] ^ param_2[0x1d];
  _DAT_00679e54 = param_1[0x1e] ^ param_2[0x1e];
  _DAT_00679e56 = param_1[0x1f] ^ param_2[0x1f];
  _DAT_00679e58 = param_1[0x20] ^ param_2[0x20];
  _DAT_00679e5a = param_1[0x21] ^ param_2[0x21];
  _DAT_00679e5c = param_1[0x22] ^ param_2[0x22];
  _DAT_00679e5e = param_1[0x23] ^ param_2[0x23];
  _DAT_00679e60 = param_1[0x24] ^ param_2[0x24];
  _DAT_00679e62 = param_1[0x25] ^ param_2[0x25];
  _DAT_00679e64 = param_1[0x26] ^ param_2[0x26];
  _DAT_00679e66 = param_1[0x27] ^ param_2[0x27];
  _DAT_00679e68 = param_1[0x28] ^ param_2[0x28];
  _DAT_00679e6a = param_1[0x29] ^ param_2[0x29];
  _DAT_00679e6c = param_1[0x2a] ^ param_2[0x2a];
  _DAT_00679e6e = param_1[0x2b] ^ param_2[0x2b];
  _DAT_00679e70 = param_1[0x2c] ^ param_2[0x2c];
  _DAT_00679e72 = param_1[0x2d] ^ param_2[0x2d];
  _DAT_00679e74 = param_1[0x2e] ^ param_2[0x2e];
  _DAT_00679e76 = param_1[0x2f] ^ param_2[0x2f];
  _DAT_00679e78 = param_1[0x30] ^ param_2[0x30];
  _DAT_00679e7a = param_1[0x31] ^ param_2[0x31];
  return (undefined *)(&DAT_00679e18);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00472270, ap_00472270));
