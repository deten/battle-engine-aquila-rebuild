// auto-ported from 00434300_FUN_00434300.c (FUN_00434300, 728 bytes) by tools/autoport.py
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

static undefined4 * BEA_CDECL ap_00434300(undefined4 param_1)
{
  undefined4 *puVar1;
  
  switch(param_1) {
  case 1:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10c), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x74));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9f6c);
      puVar1[1] = 1;
      *(undefined1 *)(puVar1 + 2) = 0;
      puVar1[0x42] = 0;
      return puVar1;
    }
    break;
  case 2:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x75));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9f58);
      puVar1[1] = 2;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 3:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x76));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9f44);
      puVar1[1] = 3;
      puVar1[2] = 0xffffffff;
      return puVar1;
    }
    break;
  case 4:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x77));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9f30);
      puVar1[1] = 4;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 5:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x78));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9f1c);
      puVar1[1] = 5;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 6:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x7c));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9ecc);
      puVar1[1] = 6;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 7:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x79));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9f08);
      puVar1[1] = 7;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 8:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x7a));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9ef4);
      puVar1[1] = 8;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 9:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x7b));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9ee0);
      puVar1[1] = 9;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 10:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x7d));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9eb8);
      puVar1[1] = 10;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0xb:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x7e));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9ea4);
      puVar1[1] = 0xb;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0xc:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x7f));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9e90);
      puVar1[1] = 0xc;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0xd:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x80));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9e7c);
      puVar1[1] = 0xd;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0xe:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x81));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9e68);
      puVar1[1] = 0xe;
      puVar1[2] = 0;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00434300, ap_00434300));
