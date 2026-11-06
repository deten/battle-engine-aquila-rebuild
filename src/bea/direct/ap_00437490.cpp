// auto-ported from 00437490_FUN_00437490.c (FUN_00437490, 1971 bytes) by tools/autoport.py
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

static undefined4 * BEA_CDECL ap_00437490(undefined4 param_1)
{
  undefined4 *puVar1;
  
  switch(param_1) {
  case 1:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xb9));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da570);
      puVar1[1] = 1;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 2:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xbb));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da548);
      puVar1[1] = 2;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 3:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xba));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da55c);
      puVar1[1] = 3;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 4:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xbc));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da534);
      puVar1[1] = 4;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 5:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xbd));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da520);
      puVar1[1] = 5;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 6:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xbe));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da50c);
      puVar1[1] = 6;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 7:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xbf));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da4f8);
      puVar1[1] = 7;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 8:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xc0));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da4e4);
      puVar1[1] = 8;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 9:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xc2));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da4bc);
      puVar1[1] = 9;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 10:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xc3));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da4a8);
      puVar1[1] = 10;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0xb:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xc5));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da480);
      puVar1[1] = 0xb;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0xc:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xd0));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da3a4);
      puVar1[1] = 0xc;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0xd:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xc6));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da46c);
      puVar1[1] = 0xd;
      return puVar1;
    }
    break;
  case 0xe:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(199));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da458);
      puVar1[1] = 0xe;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0xf:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xc4));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da494);
      puVar1[1] = 0xf;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x10:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(200));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da444);
      puVar1[1] = 0x10;
      return puVar1;
    }
    break;
  case 0x11:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xc9));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da430);
      puVar1[1] = 0x11;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x12:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xca));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da41c);
      puVar1[1] = 0x12;
      return puVar1;
    }
    break;
  case 0x13:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xcb));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da408);
      puVar1[1] = 0x13;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x14:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xcc));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da3f4);
      puVar1[1] = 0x14;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x15:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xcd));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da3e0);
      puVar1[1] = 0x15;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x16:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xdb));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da2c8);
      puVar1[1] = 0x16;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x17:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xce));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da3cc);
      puVar1[1] = 0x17;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x18:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xcf));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da3b8);
      puVar1[1] = 0x18;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x19:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xd1));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da390);
      puVar1[1] = 0x19;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1a:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xd2));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da37c);
      puVar1[1] = 0x1a;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1b:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xd4));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da354);
      puVar1[1] = 0x1b;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1c:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xd5));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da340);
      puVar1[1] = 0x1c;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1d:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xd6));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da32c);
      puVar1[1] = 0x1d;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1e:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xd7));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da318);
      puVar1[1] = 0x1e;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1f:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xd8));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da304);
      puVar1[1] = 0x1f;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x20:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xd3));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da368);
      puVar1[1] = 0x20;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x21:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xc1));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da4d0);
      puVar1[1] = 0x21;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x22:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xd9));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da2f0);
      puVar1[1] = 0x22;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x23:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xda));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da2dc);
      puVar1[1] = 0x23;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x24:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xdc));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da2b4);
      puVar1[1] = 0x24;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x25:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xdd));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da2a0);
      puVar1[1] = 0x25;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x26:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xde));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da28c);
      puVar1[1] = 0x26;
      puVar1[2] = 0;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00437490, ap_00437490));
