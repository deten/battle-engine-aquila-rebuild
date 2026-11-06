// auto-ported from 0043c500_FUN_0043c500.c (FUN_0043c500, 1284 bytes) by tools/autoport.py
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

static undefined4 * BEA_CDECL ap_0043c500(undefined4 param_1)
{
  undefined4 *puVar1;
  
  switch(param_1) {
  case 1:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x137));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005daa98);
      puVar1[1] = 1;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 2:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20c), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x139));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005daa70);
      puVar1[1] = 2;
      puVar1[0x82] = 0;
      *(undefined1 *)(puVar1 + 2) = 0;
      *(undefined1 *)(puVar1 + 0x42) = 0;
      return puVar1;
    }
    break;
  case 3:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x134));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005daad4);
      puVar1[1] = 3;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 4:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x13b));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005daa48);
      puVar1[1] = 4;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 6:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x138));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005daa84);
      puVar1[1] = 6;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 7:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x136));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005daaac);
      puVar1[1] = 7;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 8:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x135));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005daac0);
      puVar1[1] = 8;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 9:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x13c));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005daa34);
      puVar1[1] = 9;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 10:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x13d));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005daa20);
      puVar1[1] = 10;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0xb:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x13e));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005daa0c);
      puVar1[1] = 0xb;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0xc:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x13f));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da9f8);
      puVar1[1] = 0xc;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0xd:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x140));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da9e4);
      puVar1[1] = 0xd;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0xe:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x142));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da9bc);
      puVar1[1] = 0xe;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0xf:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x141));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da9d0);
      puVar1[1] = 0xf;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x10:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x143));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da9a8);
      puVar1[1] = 0x10;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x11:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x144));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da994);
      puVar1[1] = 0x11;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x12:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x145));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da980);
      puVar1[1] = 0x12;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x13:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20c), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x13a));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005daa5c);
      puVar1[1] = 0x13;
      puVar1[0x82] = 0;
      *(undefined1 *)(puVar1 + 0x42) = 0;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x14:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x146));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da96c);
      puVar1[1] = 0x14;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x15:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x147));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da958);
      puVar1[1] = 0x15;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x16:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x148));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da944);
      puVar1[1] = 0x16;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x17:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x149));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da930);
      puVar1[1] = 0x17;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x18:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x14a));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da91c);
      puVar1[1] = 0x18;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x19:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x14b));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da908);
      puVar1[1] = 0x19;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043c500, ap_0043c500));
