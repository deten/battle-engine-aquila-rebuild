// auto-ported from 00510800_FUN_00510800.c (FUN_00510800, 642 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x190: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_006602a0 GLOBAL_AT(undefined4*, 0x006602a0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define _DAT_006602a8 GLOBAL_AT(int, 0x006602a8)
#define s_data_battle_engine_configuration_0063da58 ((char*)0x0063da58)
#define s_C__dev_ONSLAUGHT2_BattleEngineDa_0063da80 ((char*)0x0063da80)
#define s_data_default_physics_dat_0063daac ((char*)0x0063daac)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void * (BEA_THISCALL* FUN_0040f520_t)(uint32_t);
static const bea_guard<FUN_0040f520_t> FUN_0040f520 = {(FUN_0040f520_t)0x0040f520};
typedef uint32_t (BEA_THISCALL* FUN_0040f590_t)(uint32_t);
static const bea_guard<FUN_0040f590_t> FUN_0040f590 = {(FUN_0040f590_t)0x0040f590};
typedef uint32_t (BEA_THISCALL* FUN_0040f890_t)(uint32_t);
static const bea_guard<FUN_0040f890_t> FUN_0040f890 = {(FUN_0040f890_t)0x0040f890};
typedef uint32_t (BEA_THISCALL* FUN_0040f980_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040f980_t> FUN_0040f980 = {(FUN_0040f980_t)0x0040f980};
typedef uint32_t (BEA_STDCALL* FUN_0042c750_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042c750_t> FUN_0042c750 = {(FUN_0042c750_t)0x0042c750};
typedef uint32_t (BEA_CDECL* FUN_0042e8f0_t)(void);
static const bea_guard<FUN_0042e8f0_t> FUN_0042e8f0 = {(FUN_0042e8f0_t)0x0042e8f0};
typedef undefined4 (BEA_CDECL* FUN_0042e950_t)(uint32_t);
static const bea_guard<FUN_0042e950_t> FUN_0042e950 = {(FUN_0042e950_t)0x0042e950};
typedef uint32_t (BEA_CDECL* FUN_0042ea60_t)(void);
static const bea_guard<FUN_0042ea60_t> FUN_0042ea60 = {(FUN_0042ea60_t)0x0042ea60};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_CDECL* FUN_005102a0_t)(void);
static const bea_guard<FUN_005102a0_t> FUN_005102a0 = {(FUN_005102a0_t)0x005102a0};
typedef uint32_t (BEA_CDECL* FUN_00510a90_t)(void);
static const bea_guard<FUN_00510a90_t> FUN_00510a90 = {(FUN_00510a90_t)0x00510a90};
typedef void* (BEA_THISCALL* FUN_00547d70_t)(uint32_t);
static const bea_guard<FUN_00547d70_t> FUN_00547d70 = {(FUN_00547d70_t)0x00547d70};
typedef uint32_t (BEA_THISCALL* FUN_00547d90_t)(uint32_t);
static const bea_guard<FUN_00547d90_t> FUN_00547d90 = {(FUN_00547d90_t)0x00547d90};
typedef undefined4 (BEA_THISCALL* FUN_00547ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00547ec0_t> FUN_00547ec0 = {(FUN_00547ec0_t)0x00547ec0};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef undefined4 (BEA_THISCALL* FUN_00548c00_t)(uint32_t);
static const bea_guard<FUN_00548c00_t> FUN_00548c00 = {(FUN_00548c00_t)0x00548c00};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_CDECL ap_00510800(void)
{
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  alignas(16) uint8_t bea_frame_[0x190] = {};   // the original stack frame (emulate_frame)
  void * &local_18c = *reinterpret_cast<void * *>(bea_frame_ + 0x190 - 0x18c);
  void * &local_188 = *reinterpret_cast<void * *>(bea_frame_ + 0x190 - 0x188);
  char (&local_184)[28] = *reinterpret_cast<char (*)[28]>(bea_frame_ + 0x190 - 0x184);
  undefined4 (&local_168)[10] = *reinterpret_cast<undefined4 (*)[10]>(bea_frame_ + 0x190 - 0x168);
  undefined1 (&local_140)[308] = *reinterpret_cast<undefined1 (*)[308]>(bea_frame_ + 0x190 - 0x140);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x190 - 0x8);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x190 - 0x4);
  local_4 = 0xffffffff;
  FUN_00510a90();
  FUN_005102a0();
  pcVar3 = s_data_default_physics_dat_0063daac;
  pcVar4 = local_184;
  for (iVar2 = 6; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar3;
  FUN_00547d70(bea_arg(local_140));
  local_4 = 0;
  iVar2 = FUN_00547ec0(bea_arg(local_140), bea_arg(local_184), bea_arg(0x11), bea_arg(1), bea_arg(0));
  if (iVar2 != 0) {
    FUN_0042e950(bea_arg(local_140));
    FUN_0042ea60();
    FUN_0042e8f0();
    FUN_00548c00(bea_arg(local_140));
  }
  pvVar1 = (void *)FUN_00406d20(bea_arg(&DAT_006602a0));
  while (BEA_LOOP_GUARD((pvVar1 != (void *)0x0))) {
    FUN_004e5bd0(bea_arg(&DAT_006602a0), bea_arg(pvVar1));
    FUN_0040f890(bea_arg(pvVar1));
    local_18c = pvVar1;
    if (pvVar1 != (void *)0x0) {
      (*(uint8_t*)((char*)&local_4 + 0)) = 1;
      FUN_004e5c60(bea_arg((void *)((int)pvVar1 + 0x50)));
      local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
      FUN_004e5c60(bea_arg((void *)((int)pvVar1 + 0x40)));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    }
    pvVar1 = (void *)FUN_00406d20(bea_arg(&DAT_006602a0));
  }
  local_18c = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xac), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_0063da80), bea_arg(0x107));
  (*(uint8_t*)((char*)&local_4 + 0)) = 2;
  if (local_18c == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_0040f520(bea_arg(local_18c));
  }
  local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
  FUN_0040f590(bea_arg(pvVar1));
  FUN_004e5a80(bea_arg(&DAT_006602a0), bea_arg(pvVar1));
  pcVar3 = s_data_battle_engine_configuration_0063da58;
  puVar5 = local_168;
  for (iVar2 = 9; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)pcVar3;
  iVar2 = FUN_00547ec0(bea_arg(local_140), bea_arg(local_168), bea_arg(0x11), bea_arg(1), bea_arg(0));
  if (iVar2 == 0) {
    FUN_0042c750(bea_arg(local_168), bea_arg(0xffffffff));
  }
  else {
    while (BEA_LOOP_GUARD(((_DAT_006602a8 = DAT_006602a0, DAT_006602a0 != (undefined4 *)0x0 &&
           (pvVar1 = (void *)*DAT_006602a0, pvVar1 != (void *)0x0))))) {
      FUN_004e5bd0(bea_arg(&DAT_006602a0), bea_arg(pvVar1));
      FUN_0040f890(bea_arg(pvVar1));
      (*(uint8_t*)((char*)&local_4 + 0)) = 3;
      local_188 = pvVar1;
      FUN_004e5c60(bea_arg((void *)((int)pvVar1 + 0x50)));
      local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
      FUN_004e5c60(bea_arg((void *)((int)pvVar1 + 0x40)));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    }
    FUN_00548570(bea_arg(local_140), bea_arg(&local_18c), bea_arg(4));
    iVar2 = 0;
    if (0 < (int)local_18c) {
      do {
        local_188 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xac), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_0063da80), bea_arg(0x136));
        (*(uint8_t*)((char*)&local_4 + 0)) = 4;
        if (local_188 == (void *)0x0) {
          pvVar1 = (void *)0x0;
        }
        else {
          pvVar1 = (void *)FUN_0040f520(bea_arg(local_188));
        }
        local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
        FUN_0040f590(bea_arg(pvVar1));
        FUN_0040f980(bea_arg(pvVar1), bea_arg(local_140));
        FUN_004e5a80(bea_arg(&DAT_006602a0), bea_arg(pvVar1));
        iVar2 = iVar2 + 1;
      } while (BEA_LOOP_GUARD((iVar2 < (int)local_18c)));
    }
    FUN_00548c00(bea_arg(local_140));
  }
  local_4 = 0xffffffff;
  return FUN_00547d90(bea_arg(local_140));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00510800, ap_00510800));
