// auto-ported from 0052ec60_FUN_0052ec60.c (FUN_0052ec60, 719 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_FATAL_ERROR__unknown_data_type_t_0064cc58 ((char*)0x0064cc58)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064cc80 ((char*)0x0064cc80)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_CDECL ap_0052ec60(undefined4 param_1, void *param_2)
{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puStack_8;
  undefined4 local_4;
  switch(param_1) {
  case 1:
    puVar3 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064cc80), bea_arg(0x16));
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = ((void*)0x005e4af8);
      FUN_00548570(bea_arg(param_2), bea_arg(puVar3 + 1), bea_arg(4));
      return puVar3;
    }
    break;
  case 2:
    puVar3 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064cc80), bea_arg(0x17));
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = ((void*)0x005e4ea4);
      FUN_00548570(bea_arg(param_2), bea_arg(puVar3 + 1), bea_arg(4));
      return puVar3;
    }
    break;
  case 3:
    puVar3 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064cc80), bea_arg(0x18));
    pvVar1 = param_2;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = ((void*)0x005e4e4c);
      FUN_00548570(bea_arg(param_2), bea_arg(&param_2), bea_arg(4));
      uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg((int)param_2 + 1), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064cc80), bea_arg(0x5c));
      puVar3[1] = uVar2;
      FUN_00548570(bea_arg(pvVar1), bea_arg(uVar2), bea_arg(param_2));
      *(undefined1 *)(puVar3[1] + (int)param_2) = 0;
      return puVar3;
    }
    break;
  case 4:
    puVar3 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064cc80), bea_arg(0x19));
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = ((void*)0x005e4d50);
      FUN_00548570(bea_arg(param_2), bea_arg(puVar3 + 1), bea_arg(4));
      return puVar3;
    }
    break;
  case 5:
    puVar3 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064cc80), bea_arg(0x1a));
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 0;
      *puVar3 = ((void*)0x005e4df8);
      FUN_00548570(bea_arg(param_2), bea_arg(&param_2), bea_arg(4));
      return puVar3;
    }
    break;
  case 6:
    puVar3 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064cc80), bea_arg(0x1b));
    pvVar1 = param_2;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = ((void*)0x005e4da4);
      FUN_00548570(bea_arg(param_2), bea_arg(puVar3 + 1), bea_arg(4));
      FUN_00548570(bea_arg(pvVar1), bea_arg(puVar3 + 2), bea_arg(4));
      FUN_00548570(bea_arg(pvVar1), bea_arg(puVar3 + 3), bea_arg(4));
      return puVar3;
    }
    break;
  default:
    FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__unknown_data_type_t_0064cc58);
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052ec60, ap_0052ec60));
