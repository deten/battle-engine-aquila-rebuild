// auto-ported from 004a5970_FUN_004a5970.c (FUN_004a5970, 497 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x440: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s_data_Meshes__0062fadc ((char*)0x0062fadc)
#define s_Loading_mesh__s_0062faec ((char*)0x0062faec)
#define s_Warning___Loading_mesh__s_manual_0062fafc ((char*)0x0062fafc)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_THISCALL* FUN_0042b500_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042b500_t> FUN_0042b500 = {(FUN_0042b500_t)0x0042b500};
typedef undefined4 (BEA_THISCALL* FUN_0042b800_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b800_t> FUN_0042b800 = {(FUN_0042b800_t)0x0042b800};
typedef undefined4 (BEA_THISCALL* FUN_004a5b70_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a5b70_t> FUN_004a5b70 = {(FUN_004a5b70_t)0x004a5b70};
typedef void* (BEA_THISCALL* FUN_00547d70_t)(uint32_t);
static const bea_guard<FUN_00547d70_t> FUN_00547d70 = {(FUN_00547d70_t)0x00547d70};
typedef uint32_t (BEA_THISCALL* FUN_00547d90_t)(uint32_t);
static const bea_guard<FUN_00547d90_t> FUN_00547d90 = {(FUN_00547d90_t)0x00547d90};
typedef undefined4 (BEA_THISCALL* FUN_00547ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00547ec0_t> FUN_00547ec0 = {(FUN_00547ec0_t)0x00547ec0};
typedef undefined4 (BEA_THISCALL* FUN_00548c00_t)(uint32_t);
static const bea_guard<FUN_00548c00_t> FUN_00548c00 = {(FUN_00548c00_t)0x00548c00};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static undefined4 BEA_THISCALL ap_004a5970(void * this_, char *param_1, undefined4 param_2)
{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;

  alignas(16) uint8_t bea_frame_[0x440] = {};   // the original stack frame (emulate_frame)
  char (&local_440)[4] = *reinterpret_cast<char (*)[4]>(bea_frame_ + 0x440 - 0x440);
  char (&local_43c)[4] = *reinterpret_cast<char (*)[4]>(bea_frame_ + 0x440 - 0x43c);
  char (&local_438)[4] = *reinterpret_cast<char (*)[4]>(bea_frame_ + 0x440 - 0x438);
  char &local_434 = *reinterpret_cast<char *>(bea_frame_ + 0x440 - 0x434);
  undefined4 &local_433 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x440 - 0x433);
  undefined1 (&local_340)[308] = *reinterpret_cast<undefined1 (*)[308]>(bea_frame_ + 0x440 - 0x340);
  undefined1 (&local_20c)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x440 - 0x20c);
  undefined1 (&local_10c)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x440 - 0x10c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x440 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x440 - 0x4);
  pcVar7 = (char *)0x0;
  FUN_0055de9b(local_10c,s_Warning___Loading_mesh__s_manual_0062fafc,param_1);
  CRenderThing__vslot3(local_10c);
  FUN_0055de9b(local_20c,s_Loading_mesh__s_0062faec,param_1);
  FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(local_20c));
  cVar3 = *param_1;
  if (cVar3 != '\0') {
    pcVar1 = param_1;
    do {
      if (cVar3 == '\\') {
        pcVar7 = pcVar1 + (1 - (int)param_1);
      }
      cVar3 = pcVar1[1];
      pcVar1 = pcVar1 + 1;
    } while (BEA_LOOP_GUARD((cVar3 != '\0')));
  }
  local_440[0] = s_data_Meshes__0062fadc[0];
  local_440[1] = s_data_Meshes__0062fadc[1];
  local_440[2] = s_data_Meshes__0062fadc[2];
  local_440[3] = s_data_Meshes__0062fadc[3];
  local_438[0] = s_data_Meshes__0062fadc[8];
  local_438[1] = s_data_Meshes__0062fadc[9];
  local_438[2] = s_data_Meshes__0062fadc[10];
  local_438[3] = s_data_Meshes__0062fadc[0xb];
  local_434 = s_data_Meshes__0062fadc[0xc];
  local_43c[0] = s_data_Meshes__0062fadc[4];
  local_43c[1] = s_data_Meshes__0062fadc[5];
  local_43c[2] = s_data_Meshes__0062fadc[6];
  local_43c[3] = s_data_Meshes__0062fadc[7];
  puVar8 = &local_433;
  for (iVar4 = 0x3c; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  uVar5 = 0xffffffff;
  pcVar1 = pcVar7 + (int)param_1;
  do {
    pcVar10 = pcVar1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar1 + 1;
    cVar3 = *pcVar1;
    pcVar1 = pcVar10;
  } while (BEA_LOOP_GUARD((cVar3 != '\0')));
  uVar5 = ~uVar5;
  iVar4 = -1;
  pcVar1 = local_440;
  do {
    pcVar9 = pcVar1;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar1 + 1;
    cVar3 = *pcVar1;
    pcVar1 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar3 != '\0')));
  pcVar1 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar1;
    pcVar1 = pcVar1 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar1;
    pcVar1 = pcVar1 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar7 = pcVar7 + (int)param_1;
  do {
    pcVar1 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar1 = pcVar7 + 1;
    cVar3 = *pcVar7;
    pcVar7 = pcVar1;
  } while (BEA_LOOP_GUARD((cVar3 != '\0')));
  uVar5 = ~uVar5;
  pcVar7 = pcVar1 + -uVar5;
  pcVar1 = (char *)((int)this_ + 0x24);
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar1 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar1 = pcVar1 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar1 = pcVar1 + 1;
  }
  FUN_00547d70(bea_arg(local_340));
  iVar4 = FUN_00547ec0(bea_arg(local_340), bea_arg(local_440), bea_arg(0x11), bea_arg(1), bea_arg(0));
  if (iVar4 == 0) {
    FUN_0042b800(bea_arg(&DAT_00663498), bea_arg(local_20c), bea_arg(0));
    FUN_00548c00(bea_arg(local_340));
    FUN_00547d90(bea_arg(local_340));
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004a5b70(bea_arg(this_), bea_arg(local_340), bea_arg(param_2));
    FUN_00548c00(bea_arg(local_340));
    FUN_0042b800(bea_arg(&DAT_00663498), bea_arg(local_20c), bea_arg(1));
    FUN_00547d90(bea_arg(local_340));
  }
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a5970, ap_004a5970));
