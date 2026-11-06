// auto-ported from 0043ddc0_FUN_0043ddc0.c (FUN_0043ddc0, 1162 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818 ((char*)0x00625818)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_CDECL ap_0043ddc0(undefined4 param_1)
{
  undefined4 *puVar1;
  
  switch(param_1) {
  case 1:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x161));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dac4c);
      puVar1[1] = 1;
      return puVar1;
    }
    break;
  case 2:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x16b));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dabd4);
      puVar1[1] = 2;
      return puVar1;
    }
    break;
  case 3:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x162));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dac40);
      puVar1[1] = 3;
      return puVar1;
    }
    break;
  case 4:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x163));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dac34);
      puVar1[1] = 4;
      return puVar1;
    }
    break;
  case 5:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x164));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dac28);
      puVar1[1] = 5;
      return puVar1;
    }
    break;
  case 6:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x165));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dac1c);
      puVar1[1] = 6;
      return puVar1;
    }
    break;
  case 7:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x166));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dac10);
      puVar1[1] = 7;
      return puVar1;
    }
    break;
  case 8:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x167));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dac04);
      puVar1[1] = 8;
      return puVar1;
    }
    break;
  case 9:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x168));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dabf8);
      puVar1[1] = 9;
      return puVar1;
    }
    break;
  case 10:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x169));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dabec);
      puVar1[1] = 10;
      return puVar1;
    }
    break;
  case 0xb:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x16a));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dabe0);
      puVar1[1] = 0xb;
      return puVar1;
    }
    break;
  case 0xc:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x16c));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dabc8);
      puVar1[1] = 0xc;
      return puVar1;
    }
    break;
  case 0xd:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x16d));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dabbc);
      puVar1[1] = 0xd;
      return puVar1;
    }
    break;
  case 0xe:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x16e));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dabb0);
      puVar1[1] = 0xe;
      return puVar1;
    }
    break;
  case 0xf:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x16f));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005daba4);
      puVar1[1] = 0xf;
      return puVar1;
    }
    break;
  case 0x10:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x170));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dab98);
      puVar1[1] = 0x10;
      return puVar1;
    }
    break;
  case 0x11:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x171));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dab8c);
      puVar1[1] = 0x11;
      return puVar1;
    }
    break;
  case 0x12:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x172));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dab80);
      puVar1[1] = 0x12;
      return puVar1;
    }
    break;
  case 0x13:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x173));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dab74);
      puVar1[1] = 0x13;
      return puVar1;
    }
    break;
  case 0x14:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x174));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dab68);
      puVar1[1] = 0x14;
      return puVar1;
    }
    break;
  case 0x15:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x175));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dab5c);
      puVar1[1] = 0x15;
      return puVar1;
    }
    break;
  case 0x16:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x177));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dab44);
      puVar1[1] = 0x16;
      return puVar1;
    }
    break;
  case 0x17:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x176));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dab50);
      puVar1[1] = 0x17;
      return puVar1;
    }
    break;
  case 0x18:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x178));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dab38);
      puVar1[1] = 0x18;
      return puVar1;
    }
    break;
  case 0x19:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x179));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dab2c);
      puVar1[1] = 0x19;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043ddc0, ap_0043ddc0));
