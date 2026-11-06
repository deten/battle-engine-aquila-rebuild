// auto-ported from 0043b990_FUN_0043b990.c (FUN_0043b990, 383 bytes) by tools/autoport.py
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

static undefined4 * BEA_CDECL ap_0043b990(undefined4 param_1)
{
  undefined4 *puVar1;
  
  switch(param_1) {
  case 1:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x117));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da87c);
      puVar1[1] = 1;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 2:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x118));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da868);
      puVar1[1] = 2;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 3:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x119));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da854);
      puVar1[1] = 3;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 4:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x11b));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da82c);
      puVar1[1] = 4;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 5:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x108), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x11a));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da840);
      puVar1[1] = 5;
      *(undefined1 *)(puVar1 + 2) = 0;
      return puVar1;
    }
    break;
  case 6:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x11c));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da818);
      puVar1[1] = 6;
      puVar1[2] = 0;
      return puVar1;
    }
    break;
  case 7:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x11d));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005da804);
      puVar1[1] = 7;
      puVar1[2] = 0;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043b990, ap_0043b990));
