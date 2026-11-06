// auto-ported from 004a5500_FUN_004a5500.c (FUN_004a5500, 368 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0062fa94 GLOBAL_AT(int, 0x0062fa94)
#define DAT_0062fa8c GLOBAL_AT(int, 0x0062fa8c)
#define DAT_0062fa88 GLOBAL_AT(int, 0x0062fa88)
#define DAT_0062fa64 GLOBAL_AT(int, 0x0062fa64)
#define DAT_0062fa48 GLOBAL_AT(int, 0x0062fa48)
#define s_STAND_0062fa80 ((char*)0x0062fa80)
#define s_SHOOT2_0062fa68 ((char*)0x0062fa68)
#define s_SHOOT1_0062fa70 ((char*)0x0062fa70)
#define s_SHOOT_0062fa78 ((char*)0x0062fa78)
#define s_HOVER_0062fa5c ((char*)0x0062fa5c)
#define s_SHOOTWALK_0062fa50 ((char*)0x0062fa50)
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static void BEA_STDCALL ap_004a5500(undefined4 param_1, int param_2)
{
  int iVar1;
  
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(&DAT_0062fa94));
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    return;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(&DAT_0062fa8c));
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x10) = 1;
    return;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(&DAT_0062fa88));
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x10) = 2;
    return;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(s_STAND_0062fa80));
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x10) = 3;
    return;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(s_SHOOT_0062fa78));
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x10) = 4;
    return;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(s_SHOOT1_0062fa70));
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x10) = 5;
    return;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(s_SHOOT2_0062fa68));
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x10) = 6;
    return;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(&DAT_0062fa64));
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x10) = 8;
    return;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(s_HOVER_0062fa5c));
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x10) = 9;
    return;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(s_SHOOTWALK_0062fa50));
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x10) = 7;
    return;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(&DAT_0062fa48));
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x10) = 10;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a5500, ap_004a5500));
