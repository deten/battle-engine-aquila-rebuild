// auto-ported from 00431bb0_FUN_00431bb0.c (FUN_00431bb0, 3414 bytes) by tools/autoport.py
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

static undefined4 * BEA_CDECL ap_00431bb0(undefined4 param_1)
{
  undefined4 *puVar1;
  
  switch(param_1) {
  case 1:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x24));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9e2c);
      puVar1[1] = 1;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 2:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x25));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9e18);
      puVar1[1] = 2;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 3:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x29));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9dc8);
      puVar1[1] = 3;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 4:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x2a));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9db4);
      puVar1[1] = 4;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 5:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x26));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9e04);
      puVar1[1] = 5;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 6:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x27));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9df0);
      puVar1[1] = 6;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 7:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20c), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x2e));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9d64);
      puVar1[1] = 7;
      puVar1[0x82] = 0;
      *(undefined1 *)(puVar1 + 2) = 0;
      *(undefined1 *)(puVar1 + 0x42) = 0;
      return puVar1;
    }
    break;
  case 8:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x2f));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9d50);
      puVar1[1] = 8;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 9:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x30));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9d3c);
      puVar1[1] = 9;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 10:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x51));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9abc);
      puVar1[1] = 10;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0xb:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x31));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9d28);
      puVar1[1] = 0xb;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0xc:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x55));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9a80);
      puVar1[1] = 0xc;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0xd:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x56));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9a6c);
      puVar1[1] = 0xd;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0xe:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x57));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9a58);
      puVar1[1] = 0xe;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0xf:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x2b));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9da0);
      puVar1[1] = 0xf;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x10:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x2c));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9d8c);
      puVar1[1] = 0x10;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x11:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x2d));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9d78);
      puVar1[1] = 0x11;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x12:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20c), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x32));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9d14);
      puVar1[1] = 0x12;
      puVar1[0x82] = 0;
      *(undefined1 *)(puVar1 + 0x42) = 0;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x13:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x33));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9d00);
      puVar1[1] = 0x13;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x14:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x34));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9cec);
      puVar1[1] = 0x14;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x15:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x35));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9cd8);
      puVar1[1] = 0x15;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x16:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x44));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9bac);
      puVar1[1] = 0x16;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x17:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x36));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9cc4);
      puVar1[1] = 0x17;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x18:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x37));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9cb0);
      puVar1[1] = 0x18;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x19:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x45));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9b98);
      puVar1[1] = 0x19;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1a:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x46));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9b84);
      puVar1[1] = 0x1a;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1b:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10c), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x38));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9c9c);
      puVar1[1] = 0x1b;
      *(undefined1 *)(puVar1 + 3) = 0;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1c:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x39));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9c88);
      puVar1[1] = 0x1c;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1d:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x3a));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9c74);
      puVar1[1] = 0x1d;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1e:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x3b));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9c60);
      puVar1[1] = 0x1e;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1f:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x3c));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9c4c);
      puVar1[1] = 0x1f;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x20:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x3d));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9c38);
      puVar1[1] = 0x20;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x21:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x49));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9b48);
      puVar1[1] = 0x21;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x22:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x40));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9bfc);
      puVar1[1] = 0x22;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x23:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x5f));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d99b8);
      puVar1[1] = 0x23;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x24:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x58));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9a44);
      puVar1[1] = 0x24;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x25:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x59));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9a30);
      puVar1[1] = 0x25;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x26:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x5a));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9a1c);
      puVar1[1] = 0x26;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x27:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x23));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9e40);
      puVar1[1] = 0x27;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x28:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x47));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9b70);
      puVar1[1] = 0x28;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x29:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x48));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9b5c);
      puVar1[1] = 0x29;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x2a:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x41));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9be8);
      puVar1[1] = 0x2a;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x2b:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x62));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9990);
      puVar1[1] = 0x2b;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x2c:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(99));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d997c);
      puVar1[1] = 0x2c;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x2d:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(100));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9968);
      puVar1[1] = 0x2d;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x2e:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x65));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9954);
      puVar1[1] = 0x2e;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x2f:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x28));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9ddc);
      puVar1[1] = 0x2f;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x30:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x66));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9940);
      puVar1[1] = 0x30;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x32:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x42));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9bd4);
      puVar1[1] = 0x32;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x33:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x5b));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9a08);
      puVar1[1] = 0x33;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x34:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x67));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d992c);
      puVar1[1] = 0x34;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x35:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x68));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9918);
      puVar1[1] = 0x35;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x36:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x5c));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d99f4);
      puVar1[1] = 0x36;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x37:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x5e));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d99cc);
      puVar1[1] = 0x37;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x38:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x69));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9904);
      puVar1[1] = 0x38;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x39:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x52));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9aa8);
      puVar1[1] = 0x39;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x3a:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x53));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9a94);
      puVar1[1] = 0x3a;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x3b:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x43));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9bc0);
      puVar1[1] = 0x3b;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x3c:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x3e));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9c24);
      puVar1[1] = 0x3c;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x3d:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x3f));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9c10);
      puVar1[1] = 0x3d;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x3e:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x6a));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d98f0);
      puVar1[1] = 0x3e;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x3f:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x5d));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d99e0);
      puVar1[1] = 0x3f;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x40:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x60));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d99a4);
      puVar1[1] = 0x40;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x41:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x4a));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9b34);
      puVar1[1] = 0x41;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x42:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x4b));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9b20);
      puVar1[1] = 0x42;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x43:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x4c));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9b0c);
      puVar1[1] = 0x43;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x44:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x4d));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9af8);
      puVar1[1] = 0x44;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x45:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x4e));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9ae4);
      puVar1[1] = 0x45;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x46:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x4f));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9ad0);
      puVar1[1] = 0x46;
      puVar1[2] = 0;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00431bb0, ap_00431bb0));
