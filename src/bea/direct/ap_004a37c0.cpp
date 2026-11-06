// auto-ported from 004a37c0_vslot4.c (CScaleMenuItem::vslot4, 843 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CScaleMenuItem;
typedef char iStack_14;
typedef char lStack_8;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
typedef uint32_t (BEA_THISCALL* FUN_004659a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004659a0_t> FUN_004659a0 = {(FUN_004659a0_t)0x004659a0};
typedef uint (BEA_CDECL* FUN_00469400_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00469400_t> FUN_00469400 = {(FUN_00469400_t)0x00469400};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))

static void BEA_THISCALL ap_004a37c0(CScaleMenuItem * this_, float param_1, float param_2, int param_3)
{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  int &iStack_14 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x14);
  int (&aiStack_10)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x20 - 0x10);
  longlong &lStack_8 = *reinterpret_cast<longlong *>(bea_frame_ + 0x20 - 0x8);
  uVar3 = bea_vcall<uint32_t>(this_, 0x8);
  uVar6 = *(undefined4 *)(this_ + 0x14);
  if (param_3 == 0) {
    *(undefined4 *)(this_ + 0x24) = *(undefined4 *)(this_ + 0x28);
    bea_vcall<uint32_t>(this_, 0x38);
  }
  else {
    uVar6 = 0xffffcc00;
  }
  if (*(int *)(this_ + 0x1c) == 0) {
    bea_vcall<uint32_t>(this_, 0x34);
  }
  if (*(int *)(this_ + 0x10) == 0) {
    uVar6 = 0xff505050;
  }
  piVar13 = aiStack_10;
  uVar10 = uVar3;
  pvVar4 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  FUN_00540680(bea_arg(pvVar4), bea_arg(uVar10), bea_arg(piVar13));
  uVar14 = 0x3f800000;
  uVar12 = 0x3f800000;
  uVar11 = 0;
  uVar10 = 0;
  fVar8 = (param_1 - (float)(aiStack_10[0] / 2)) - 53.0f;
  fVar1 = (float)aiStack_10[0] + fVar8 + 2.0f;
  fVar9 = param_2;
  pvVar4 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  FUN_004659a0(bea_arg(pvVar4), bea_arg(fVar8), bea_arg(fVar9), bea_arg(uVar6), bea_arg(uVar3), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar14));
  FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  fVar8 = param_2 + 8.0f;
  FUN_00555be0(bea_arg(fVar1 + 5.0f), bea_arg(fVar8), bea_arg(0x3b449ba6), bea_arg(*(undefined4 *)(this_ + 0x1c)), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0x40490fdb), bea_arg(0xffffffff), bea_arg(0x3e99999a), bea_arg(0x3e99999a), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  FUN_00555be0(bea_arg(fVar1 + 99.0f), bea_arg(fVar8), bea_arg(0x3b449ba6), bea_arg(*(undefined4 *)(this_ + 0x1c)), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0xffffffff), bea_arg(0x3e99999a), bea_arg(0x3e99999a), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  iStack_14 = 0;
  if (0 < *(int *)(this_ + 0x2c)) {
    do {
      iVar5 = -0xafafb0;
      if (iStack_14 < *(int *)(this_ + 0x24)) {
        if (*(int *)(this_ + 0x28) <= iStack_14) {
          if (*(int *)(this_ + 0x24) <= iStack_14) goto LAB_004a396b;
          goto LAB_004a3974;
        }
        iVar5 = -0xff6000;
      }
      else {
LAB_004a396b:
        if (iStack_14 < *(int *)(this_ + 0x28)) {
LAB_004a3974:
          fVar7 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
          fVar7 = _CIfmod((float10)2.0f,fVar7);
          fVar7 = (float10)fsin(fVar7 * (float10)3.1415927f);
          fVar7 = (fVar7 + (float10)1.0f) * (float10)0.5f;
          (*(uint32_t*)((char*)&lStack_8 + 0)) =
               (int)(longlong)
                    ROUND(fVar7 * (float10)255.0f + ((float10)1.0f - fVar7) * (float10)255.0f);
          iVar5 = (int)lStack_8 * 0x10000;
          (*(uint32_t*)((char*)&lStack_8 + 0)) =
               (int)(longlong)ROUND(fVar7 * (float10)80.0f + ((float10)1.0f - fVar7) * (float10)160.0f)
          ;
          iVar5 = iVar5 + (int)lStack_8;
          lStack_8 = (longlong)ROUND(fVar7 * (float10)-80.0f);
          iVar5 = iVar5 * 0x100 + (int)lStack_8 * -0x10001;
        }
      }
      FUN_00555be0(bea_arg(((float)iStack_14 * 80.0f) / (float)*(int *)(this_ + 0x2c) + fVar1 + 13.0f), bea_arg(fVar8), bea_arg(0x3b449ba6), bea_arg(*(undefined4 *)(this_ + 0x20)), bea_arg(8), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(iVar5), bea_arg((80.0f / (float)*(int *)(this_ + 0x2c) - 1.0f) * 0.0625f), bea_arg(0x3f333333), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
      iStack_14 = iStack_14 + 1;
    } while (BEA_LOOP_GUARD((iStack_14 < *(int *)(this_ + 0x2c))));
  }
  if (param_3 != 0) {
    cVar2 = FUN_00469400(bea_arg(fVar1), bea_arg(param_2), bea_arg(fVar1 + 40.0f), bea_arg(param_2 + 16.0f));
    if (cVar2 != '\0') {
      bea_vcall<uint32_t>(this_, 0x4, 0,0x36,0x3f800000);
      return;
    }
    cVar2 = FUN_00469400(bea_arg(fVar1 + 60.0f), bea_arg(param_2), bea_arg(fVar1 + 120.0f), bea_arg(param_2 + 16.0f));
    if (cVar2 != '\0') {
      bea_vcall<uint32_t>(this_, 0x4, 0,0x37,0x3f800000);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a37c0, ap_004a37c0));
