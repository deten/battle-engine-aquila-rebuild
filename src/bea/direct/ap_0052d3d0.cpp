// auto-ported from 0052d3d0_FUN_0052d3d0.c (FUN_0052d3d0, 1297 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_FATAL_ERROR__uknown_instruction_i_0064cab8 ((char*)0x0064cab8)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4 ((char*)0x0064c5c4)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_CDECL ap_0052d3d0(undefined4 param_1, void *param_2)
{
  undefined4 *puVar1;
  
  FUN_00548570(bea_arg(param_2), bea_arg(&param_2), bea_arg(4));
  switch(param_1) {
  case 0:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x57));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4d40);
      return puVar1;
    }
    break;
  case 1:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x58));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4d30);
      return puVar1;
    }
    break;
  case 2:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x59));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4d20);
      return puVar1;
    }
    break;
  case 3:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x5a));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4d10);
      return puVar1;
    }
    break;
  case 4:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x5b));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4d00);
      return puVar1;
    }
    break;
  case 5:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x5c));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4cf0);
      return puVar1;
    }
    break;
  case 6:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x5d));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4ce0);
      return puVar1;
    }
    break;
  case 7:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x5e));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4cd0);
      return puVar1;
    }
    break;
  case 8:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x5f));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4cc0);
      return puVar1;
    }
    break;
  case 9:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x60));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4cb0);
      return puVar1;
    }
    break;
  case 10:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x61));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4ca0);
      return puVar1;
    }
    break;
  case 0xb:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x62));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4c90);
      return puVar1;
    }
    break;
  case 0xc:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(99));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4c80);
      return puVar1;
    }
    break;
  case 0xd:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(100));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4c70);
      return puVar1;
    }
    break;
  case 0xe:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x65));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4c60);
      return puVar1;
    }
    break;
  case 0xf:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x66));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4c50);
      return puVar1;
    }
    break;
  case 0x10:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x67));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4c40);
      return puVar1;
    }
    break;
  case 0x11:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x68));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4c30);
      return puVar1;
    }
    break;
  case 0x12:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x69));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4c20);
      return puVar1;
    }
    break;
  case 0x13:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x6a));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4c10);
      return puVar1;
    }
    break;
  case 0x14:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x6b));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4c00);
      return puVar1;
    }
    break;
  case 0x15:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x6c));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4bf0);
      return puVar1;
    }
    break;
  case 0x16:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x6d));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4be0);
      return puVar1;
    }
    break;
  case 0x17:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x6e));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4bd0);
      return puVar1;
    }
    break;
  case 0x18:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x6f));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4bc0);
      return puVar1;
    }
    break;
  case 0x19:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x70));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4bb0);
      return puVar1;
    }
    break;
  case 0x1a:
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1a), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c5c4), bea_arg(0x71));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
      *puVar1 = ((void*)0x005e4ba0);
      return puVar1;
    }
    break;
  default:
    FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__uknown_instruction_i_0064cab8);
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052d3d0, ap_0052d3d0));
