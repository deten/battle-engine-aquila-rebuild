// auto-ported from 00435010_FUN_00435010.c (FUN_00435010, 1932 bytes) by tools/autoport.py
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

static undefined4 * BEA_CDECL ap_00435010(undefined4 param_1)
{
  undefined4 *puVar1;
  
  switch(param_1) {
  case 1:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x8c));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da250);
      puVar1[1] = 1;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 2:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x91));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da1ec);
      puVar1[1] = 2;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 3:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x90));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da200);
      puVar1[1] = 3;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 4:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x8d));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da23c);
      puVar1[1] = 4;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 5:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x8e));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da228);
      puVar1[1] = 5;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 6:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x92));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da1d8);
      puVar1[1] = 6;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 8:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x93));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da1c4);
      puVar1[1] = 8;
      puVar1[2] = 0;
      puVar1[3] = 0;
      return puVar1;
    }
    break;
  case 9:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x95));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da19c);
      puVar1[1] = 9;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 10:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x96));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da188);
      puVar1[1] = 10;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0xb:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x97));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da174);
      puVar1[1] = 0xb;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0xc:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x98));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da160);
      puVar1[1] = 0xc;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0xd:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x9a));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da138);
      puVar1[1] = 0xd;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0xe:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x9b));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da124);
      puVar1[1] = 0xe;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0xf:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x9d));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da0fc);
      puVar1[1] = 0xf;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x10:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x9e));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da0e8);
      puVar1[1] = 0x10;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x11:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x9f));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da0d4);
      puVar1[1] = 0x11;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x12:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x9c));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da110);
      puVar1[1] = 0x12;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x13:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xa0));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da0c0);
      puVar1[1] = 0x13;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x14:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xa1));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da0ac);
      puVar1[1] = 0x14;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x15:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xa2));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da098);
      puVar1[1] = 0x15;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x16:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xa4));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da070);
      puVar1[1] = 0x16;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x17:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xa3));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da084);
      puVar1[1] = 0x17;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x18:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xa6));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da048);
      puVar1[1] = 0x18;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x19:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xa9));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da00c);
      puVar1[1] = 0x19;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x1a:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xaa));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9ff8);
      puVar1[1] = 0x1a;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1b:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xab));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9fe4);
      puVar1[1] = 0x1b;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1c:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x8f));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da214);
      puVar1[1] = 0x1c;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1d:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xac));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9fd0);
      puVar1[1] = 0x1d;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1e:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x99));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da14c);
      puVar1[1] = 0x1e;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x1f:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x94));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da1b0);
      puVar1[1] = 0x1f;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      return puVar1;
    }
    break;
  case 0x20:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xad));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9fbc);
      puVar1[1] = 0x20;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x21:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x8b));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da264);
      puVar1[1] = 0x21;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x22:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xa7));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da034);
      puVar1[1] = 0x22;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x23:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xa5));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da05c);
      puVar1[1] = 0x23;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x24:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xa8));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da020);
      puVar1[1] = 0x24;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 0x25:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xae));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9fa8);
      puVar1[1] = 0x25;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 0x26:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0xaf));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005d9f94);
      puVar1[1] = 0x26;
      puVar1[2] = 0;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00435010, ap_00435010));
