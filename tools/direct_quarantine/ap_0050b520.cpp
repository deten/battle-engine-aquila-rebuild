// auto-ported from 0050b520_FUN_0050b520.c (FUN_0050b520, 597 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile: the 13-byte copy of the "data worlds" path at 0x63d358 into esp+0x10 (0x50b53b-0x50b57d) as memcpy of the three dwords plus the byte
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x320: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0083cb08 GLOBAL_AT(char, 0x0083cb08)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s__sworld_03d_wrd_0063d348 ((char*)0x0063d348)
#define s_Loading_world__d_0063d2c8 ((char*)0x0063d2c8)
#define s_data_worlds__0063d358 ((char*)0x0063d358)
#define s_Loading_base_world_from_resource_0063d31c ((char*)0x0063d31c)
#define s_Loading_base_world__d_0063d304 ((char*)0x0063d304)
#define s_Loading_world_from_resource_file_0063d2dc ((char*)0x0063d2dc)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_THISCALL* FUN_0042b500_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042b500_t> FUN_0042b500 = {(FUN_0042b500_t)0x0042b500};
typedef undefined4 (BEA_THISCALL* FUN_0042b800_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b800_t> FUN_0042b800 = {(FUN_0042b800_t)0x0042b800};
typedef undefined4 (BEA_STDCALL* FUN_0050b9c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0050b9c0_t> FUN_0050b9c0 = {(FUN_0050b9c0_t)0x0050b9c0};
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

static undefined4 BEA_THISCALL ap_0050b520(void * this_, int param_1, int param_2)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;

  alignas(16) uint8_t bea_frame_[0x320] = {};   // the original stack frame (emulate_frame)
  char (&local_318)[4] = *reinterpret_cast<char (*)[4]>(bea_frame_ + 0x320 - 0x318);
  char (&local_314)[4] = *reinterpret_cast<char (*)[4]>(bea_frame_ + 0x320 - 0x314);
  char (&local_310)[4] = *reinterpret_cast<char (*)[4]>(bea_frame_ + 0x320 - 0x310);
  char &local_30c = *reinterpret_cast<char *>(bea_frame_ + 0x320 - 0x30c);
  undefined1 (&local_308)[308] = *reinterpret_cast<undefined1 (*)[308]>(bea_frame_ + 0x320 - 0x308);
  char (&local_1d4)[200] = *reinterpret_cast<char (*)[200]>(bea_frame_ + 0x320 - 0x1d4);
  undefined1 (&local_10c)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x320 - 0x10c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x320 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x320 - 0x4);
  memcpy(local_318, s_data_worlds__0063d358 + 0, 4);
  memcpy(local_314, s_data_worlds__0063d358 + 4, 4);
  memcpy(local_310, s_data_worlds__0063d358 + 8, 4);
  local_30c = s_data_worlds__0063d358[0xc];
  uVar6 = 0;
  FUN_0055de9b(local_1d4,s__sworld_03d_wrd_0063d348,local_318,param_1);
  if (param_2 == 0) {
    if ((*(int *)((int)this_ + 0x26c) == param_1) && (*(int *)((int)this_ + 0x274) != -1)) {
      CRenderThing__vslot3(s_Loading_world_from_resource_file_0063d2dc);
      uVar3 = 0xffffffff;
      pcVar5 = &DAT_0083cb08;
      do {
        pcVar7 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar7;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar3 = ~uVar3;
      pcVar5 = pcVar7 + -uVar3;
      pcVar7 = local_1d4;
      for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      }
      uVar6 = *(undefined4 *)((int)this_ + 0x274);
    }
    else {
      *(undefined4 *)((int)this_ + 0x274) = 0xffffffff;
      *(undefined4 *)((int)this_ + 0x278) = 0xffffffff;
    }
    FUN_0055de9b(local_10c,s_Loading_world__d_0063d2c8,param_1);
    FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(local_10c));
    *(int *)((int)this_ + 0x26c) = param_1;
  }
  else {
    if ((*(int *)((int)this_ + 0x270) == param_1) && (*(int *)((int)this_ + 0x278) != -1)) {
      CRenderThing__vslot3(s_Loading_base_world_from_resource_0063d31c);
      uVar3 = 0xffffffff;
      pcVar5 = &DAT_0083cb08;
      do {
        pcVar7 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar7;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar3 = ~uVar3;
      pcVar5 = pcVar7 + -uVar3;
      pcVar7 = local_1d4;
      for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      }
      uVar6 = *(undefined4 *)((int)this_ + 0x278);
    }
    else {
      *(undefined4 *)((int)this_ + 0x274) = 0xffffffff;
      *(undefined4 *)((int)this_ + 0x278) = 0xffffffff;
    }
    FUN_0055de9b(local_10c,s_Loading_base_world__d_0063d304,param_1);
    FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(local_10c));
    *(int *)((int)this_ + 0x270) = param_1;
  }
  FUN_00547d70(bea_arg(local_308));
  iVar2 = FUN_00547ec0(bea_arg(local_308), bea_arg(local_1d4), bea_arg(0x11), bea_arg(1), bea_arg(uVar6));
  if (iVar2 == 0) {
    FUN_00548c00(bea_arg(local_308));
    FUN_00547d90(bea_arg(local_308));
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0050b9c0(bea_arg(local_308), bea_arg(param_2), bea_arg((uint)(param_2 == 0)));
    FUN_0042b800(bea_arg(&DAT_00663498), bea_arg(local_10c), bea_arg(1));
    FUN_00548c00(bea_arg(local_308));
    FUN_00547d90(bea_arg(local_308));
  }
  return uVar6;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050b520, ap_0050b520));
