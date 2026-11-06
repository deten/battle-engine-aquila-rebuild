// auto-ported from 0042eb90_FUN_0042eb90.c (FUN_0042eb90, 556 bytes) by tools/autoport.py
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

static undefined4 * BEA_CDECL ap_0042eb90(undefined4 param_1)
{
  undefined4 *puVar1;
  
  switch(param_1) {
  case 1:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x110), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x11));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = 0;
      *puVar1 = ((void*)0x005d9878);
      puVar1[1] = 1;
      *(undefined1 *)(puVar1 + 3) = 0;
      puVar1[0x43] = 0;
      return puVar1;
    }
    break;
  case 2:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x110), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x13));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = 0;
      *puVar1 = ((void*)0x005d9850);
      puVar1[1] = 2;
      puVar1[0x43] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      return puVar1;
    }
    break;
  case 3:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x110), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x12));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = 0;
      *puVar1 = ((void*)0x005d9864);
      puVar1[1] = 3;
      puVar1[0x43] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      return puVar1;
    }
    break;
  case 4:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x110), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x14));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = 0;
      *puVar1 = ((void*)0x005d983c);
      puVar1[1] = 4;
      puVar1[0x43] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      return puVar1;
    }
    break;
  case 5:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x110), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x15));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = 0;
      *puVar1 = ((void*)0x005d9828);
      puVar1[1] = 5;
      puVar1[0x43] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      return puVar1;
    }
    break;
  case 6:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x110), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x16));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = 0;
      *puVar1 = ((void*)0x005d9814);
      puVar1[1] = 6;
      puVar1[0x43] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      return puVar1;
    }
    break;
  case 7:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x110), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x17));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = 0;
      *puVar1 = ((void*)0x005d9800);
      puVar1[1] = 7;
      puVar1[0x43] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      return puVar1;
    }
    break;
  case 8:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x110), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x18));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = 0;
      *puVar1 = ((void*)0x005d97ec);
      puVar1[1] = 8;
      puVar1[0x43] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      return puVar1;
    }
    break;
  case 9:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x110), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x19));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = 0;
      *puVar1 = ((void*)0x005d97d8);
      puVar1[1] = 9;
      puVar1[0x43] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042eb90, ap_0042eb90));
