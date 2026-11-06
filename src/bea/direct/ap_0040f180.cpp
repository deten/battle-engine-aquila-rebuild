// auto-ported from 0040f180_FUN_0040f180.c (FUN_0040f180, 210 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00660250 GLOBAL_AT(int, 0x00660250)
#define DAT_00660200 GLOBAL_AT(int, 0x00660200)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s_Loading_battle_engine_configurat_006235dc ((char*)0x006235dc)
#define s_C__dev_ONSLAUGHT2_BattleEngineCo_006235a8 ((char*)0x006235a8)
typedef uint32_t (BEA_THISCALL* FUN_0042b500_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042b500_t> FUN_0042b500 = {(FUN_0042b500_t)0x0042b500};
typedef undefined4 (BEA_THISCALL* FUN_0042b800_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b800_t> FUN_0042b800 = {(FUN_0042b800_t)0x0042b800};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_CDECL ap_0040f180(void *param_1)
{
  int iVar1;
  void *this_local;
  int iVar2;
  int iVar3;
  int *piVar4;
  iVar3 = 0;
  DAT_00660250 = 0;
  piVar4 = &DAT_00660200;
  do {
    if (*piVar4 != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*piVar4));
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
  } while (BEA_LOOP_GUARD(((int)piVar4 < 0x660250)));
  FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(s_Loading_battle_engine_configurat_006235dc));
  this_local = param_1;
  FUN_00548570(bea_arg(param_1), bea_arg(&DAT_00660250), bea_arg(4));
  if (0 < DAT_00660250) {
    piVar4 = &DAT_00660200;
    do {
      FUN_00548570(bea_arg(this_local), bea_arg(&param_1), bea_arg(1));
      iVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg((char)param_1 + 1), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineCo_006235a8), bea_arg(0x2c));
      *piVar4 = iVar2;
      iVar2 = 0;
      if ('\0' < (char)param_1) {
        do {
          FUN_00548570(bea_arg(this_local), bea_arg(*piVar4 + iVar2), bea_arg(1));
          iVar2 = iVar2 + 1;
        } while (BEA_LOOP_GUARD((iVar2 < (char)param_1)));
      }
      iVar1 = *piVar4;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      *(undefined1 *)(iVar1 + iVar2) = 0;
    } while (BEA_LOOP_GUARD((iVar3 < DAT_00660250)));
  }
  return FUN_0042b800(bea_arg(&DAT_00663498), bea_arg(s_Loading_battle_engine_configurat_006235dc), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040f180, ap_0040f180));
