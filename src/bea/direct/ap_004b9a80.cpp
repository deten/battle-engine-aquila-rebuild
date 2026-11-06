// auto-ported from 004b9a80_FUN_004b9a80.c (FUN_004b9a80, 1042 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x5a0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008a9d84 GLOBAL_AT(int, 0x008a9d84)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define s__02d__02d__02d_0063095c ((char*)0x0063095c)
#define s_FATAL_ERROR__mnessage_log_not_en_0063096c ((char*)0x0063096c)
#define PTR_BYTE_00606060 GLOBAL_AT(void*, 0x00606060)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_004659a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004659a0_t> FUN_004659a0 = {(FUN_004659a0_t)0x004659a0};
typedef uint32_t (BEA_CDECL* FUN_00482090_t)(void);
static const bea_guard<FUN_00482090_t> FUN_00482090 = {(FUN_00482090_t)0x00482090};
typedef uint32_t (BEA_THISCALL* FUN_004b6f70_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b6f70_t> FUN_004b6f70 = {(FUN_004b6f70_t)0x004b6f70};
typedef int (BEA_THISCALL* FUN_004b7ab0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b7ab0_t> FUN_004b7ab0 = {(FUN_004b7ab0_t)0x004b7ab0};
typedef undefined4 (BEA_THISCALL* FUN_004b82a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b82a0_t> FUN_004b82a0 = {(FUN_004b82a0_t)0x004b82a0};
typedef uint32_t (BEA_THISCALL* FUN_004b9010_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b9010_t> FUN_004b9010 = {(FUN_004b9010_t)0x004b9010};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static undefined4 BEA_THISCALL ap_004b9a80(void * this_, void *param_1, float param_2, float param_3, float param_4, int param_5)
{
  float fVar1;
  int v0;
  int v1;
  short *psVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  undefined **ppuVar10;
  int iVar11;
  short *psVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;

  alignas(16) uint8_t bea_frame_[0x5a0] = {};   // the original stack frame (emulate_frame)
  int &local_5a0 = *reinterpret_cast<int *>(bea_frame_ + 0x5a0 - 0x5a0);
  int &local_59c = *reinterpret_cast<int *>(bea_frame_ + 0x5a0 - 0x59c);
  undefined4 &local_594 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x5a0 - 0x594);
  int &local_58c = *reinterpret_cast<int *>(bea_frame_ + 0x5a0 - 0x58c);
  undefined1 (&local_57c)[20] = *reinterpret_cast<undefined1 (*)[20]>(bea_frame_ + 0x5a0 - 0x57c);
  short (&local_568)[690] = *reinterpret_cast<short (*)[690]>(bea_frame_ + 0x5a0 - 0x568);
  iVar6 = *(int *)((int)DAT_008a9d84 + 0x1b8) + 9;
  local_58c = (int)(longlong)ROUND(param_4 * 255.0f);
  iVar11 = local_58c;
  if (0x55 < iVar6) {
    FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__mnessage_log_not_en_0063096c);
  }
  FUN_004b6f70(bea_arg(param_1), bea_arg(local_568), bea_arg(iVar6), bea_arg(8));
  iVar5 = 0;
  psVar2 = local_568;
  iVar6 = 8;
  do {
    if (*psVar2 != 0) {
      iVar5 = iVar5 + 1;
    }
    psVar2 = psVar2 + 0x56;
    iVar6 = iVar6 + -1;
  } while (BEA_LOOP_GUARD((iVar6 != 0)));
  fVar1 = (float)iVar5 * 16.0f + 10.0f;
  if (fVar1 < 74.0f) {
    fVar1 = 74.0f;
  }
  if (param_5 == 0) {
    local_58c = (int)(longlong)ROUND(fVar1);
    local_594 = (undefined4)(longlong)ROUND(param_3);
    uVar3 = local_594;
    local_594 = (undefined4)(longlong)ROUND(param_2);
    FUN_004b9010(bea_arg(this_), bea_arg(local_594), bea_arg(uVar3), bea_arg(0x1b8), bea_arg(local_58c), bea_arg(param_4));
    fVar9 = param_2 + 5.0f;
    iVar6 = iVar11 * 0x1000000 + 0xffffff;
    fVar1 = param_3 + 5.0f;
    FUN_00513bc0(bea_arg(0x13), bea_arg(1));
    FUN_00513bc0(bea_arg(0x14), bea_arg(2));
    FUN_00513bc0(bea_arg(0x17), bea_arg(8));
    FUN_00513bc0(bea_arg(0xf), bea_arg(1));
    FUN_00513bc0(bea_arg(0xe), bea_arg(1));
    FUN_00513bc0(bea_arg(7), bea_arg(1));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    FUN_00555be0(bea_arg(fVar9), bea_arg(fVar1), bea_arg(0x3b03126f), bea_arg(*(undefined4 *)((int)this_ + 0x14)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(iVar6), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    FUN_00482090();
    FUN_00513bc0(bea_arg(7), bea_arg(1));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    pvVar4 = DAT_008a9d84;
    uVar3 = FUN_004b7ab0(bea_arg(DAT_008a9d84), bea_arg(*(undefined4 *)((int)param_1 + 0x18)));
    uVar3 = FUN_004b82a0(bea_arg(pvVar4), bea_arg(uVar3));
    FUN_00555be0(bea_arg(fVar9 + 8.0f), bea_arg(fVar1 + 8.0f), bea_arg(0x3b449ba6), bea_arg(uVar3), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(iVar6), bea_arg(0x3ec00000), bea_arg(0x3ec00000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    FUN_00555be0(bea_arg(fVar9), bea_arg(fVar1), bea_arg(0x3a83126f), bea_arg(*(undefined4 *)((int)this_ + 0x10)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(iVar6), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    fVar7 = (float10)FUN_0055dfe7((double)(*(float *)((int)param_1 + 0x24) * 0.00027777778f));
    local_59c = (int)(longlong)ROUND(fVar7);
    v0 = local_59c;
    fVar7 = (float10)FUN_0055dfe7((double)((*(float *)((int)param_1 + 0x24) -
                                           (float)local_59c * 3600.0f) * 0.016666668f));
    local_59c = (int)(longlong)ROUND(fVar7);
    v1 = local_59c;
    local_59c = (int)(longlong)ROUND(*(float *)((int)param_1 + 0x24));
    FUN_0055de9b(local_57c,s__02d__02d__02d_0063095c,v0,v1,local_59c % 0x3c);
    uVar15 = 0x3f800000;
    uVar16 = 0x3f800000;
    uVar14 = 0x3b03126f;
    uVar13 = 8;
    uVar3 = FUN_004f7bf0(bea_arg(local_57c));
    fVar9 = param_3 + 30.0f;
    ppuVar10 = &PTR_BYTE_00606060 + iVar11 * 0x400000;
    fVar8 = param_2 + 75.0f;
    pvVar4 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    FUN_004659a0(bea_arg(pvVar4), bea_arg(fVar8), bea_arg(fVar9), bea_arg(ppuVar10), bea_arg(uVar3), bea_arg(uVar13), bea_arg(uVar14), bea_arg(uVar16), bea_arg(uVar15));
    if (iVar5 < 4) {
      fVar1 = (fVar1 + 24.0f) - (float)(iVar5 * 8 + -8);
    }
    if (iVar5 < 1) {
      return local_58c;
    }
    local_5a0 = 0;
    psVar2 = local_568;
    do {
      fVar7 = (float10)FUN_0055dfe7((double)fVar1);
      fVar1 = (float)fVar7;
      uVar16 = 0x3f800000;
      uVar14 = 0x3f800000;
      uVar13 = 0;
      uVar3 = 0;
      fVar9 = (float)local_5a0 + fVar1;
      fVar8 = param_2 + 145.0f;
      iVar11 = iVar6;
      psVar12 = psVar2;
      pvVar4 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
      FUN_004659a0(bea_arg(pvVar4), bea_arg(fVar8), bea_arg(fVar9), bea_arg(iVar11), bea_arg(psVar12), bea_arg(uVar3), bea_arg(uVar13), bea_arg(uVar14), bea_arg(uVar16));
      psVar2 = psVar2 + 0x56;
      local_5a0 = local_5a0 + 0x10;
      iVar5 = iVar5 + -1;
    } while (BEA_LOOP_GUARD((iVar5 != 0)));
    return local_58c;
  }
  local_58c = (int)(longlong)ROUND(fVar1);
  return local_58c;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b9a80, ap_004b9a80));
