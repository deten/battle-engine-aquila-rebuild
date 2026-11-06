// auto-ported from 005115b0_FUN_005115b0.c (FUN_005115b0, 355 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00633b64 GLOBAL_AT(int, 0x00633b64)
#define DAT_00633b5c GLOBAL_AT(int, 0x00633b5c)
#define DAT_00633b54 GLOBAL_AT(int, 0x00633b54)
#define DAT_00633b4c GLOBAL_AT(int, 0x00633b4c)
#define DAT_00633b44 GLOBAL_AT(int, 0x00633b44)
#define DAT_00633b3c GLOBAL_AT(int, 0x00633b3c)
#define DAT_00633b34 GLOBAL_AT(int, 0x00633b34)
#define DAT_00633b2c GLOBAL_AT(int, 0x00633b2c)
#define DAT_00633b24 GLOBAL_AT(int, 0x00633b24)
#define s_SpawnerA_00633c64 ((char*)0x00633c64)
#define s_SpawnerD_00633c40 ((char*)0x00633c40)
#define s_SpawnerE_00633c34 ((char*)0x00633c34)
#define s_SpawnerB_00633c58 ((char*)0x00633c58)
#define s_SpawnerC_00633c4c ((char*)0x00633c4c)
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static int BEA_CDECL ap_005115b0(undefined4 param_1)
{
  int iVar1;
  
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(&DAT_00633b64));
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(&DAT_00633b5c));
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(&DAT_00633b54));
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(&DAT_00633b4c));
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(&DAT_00633b44));
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(&DAT_00633b3c));
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(&DAT_00633b34));
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(&DAT_00633b2c));
  if (iVar1 == 0) {
    return 8;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(&DAT_00633b24));
  if (iVar1 == 0) {
    return 9;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(s_SpawnerA_00633c64));
  if (iVar1 == 0) {
    return 10;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(s_SpawnerB_00633c58));
  if (iVar1 == 0) {
    return 0xb;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(s_SpawnerC_00633c4c));
  if (iVar1 == 0) {
    return 0xc;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(s_SpawnerD_00633c40));
  if (iVar1 == 0) {
    return 0xd;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(s_SpawnerE_00633c34));
  return (-(uint)(iVar1 != 0) & 0xfffffff2) + 0xe;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005115b0, ap_005115b0));
