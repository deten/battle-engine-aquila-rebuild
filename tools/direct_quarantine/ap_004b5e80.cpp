// auto-ported from 004b5e80_FUN_004b5e80.c (FUN_004b5e80, 987 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xa0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char Mat34;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef uint32_t (BEA_CDECL* FUN_004b6350_t)(void *, void *, void *, void *, void *, undefined4, undefined4, ...);
static const bea_guard<FUN_004b6350_t> FUN_004b6350 = {(FUN_004b6350_t)0x004b6350};

static void BEA_CDECL ap_004b5e80(float param_1, float param_2, float param_3, undefined4 param_4, float param_5, float param_6, float param_7, undefined4 param_8, float param_9, float param_10, float param_11, undefined4 param_12, float param_13, float param_14, float param_15, undefined4 param_16, int param_17, int *param_18, int param_19, uint param_20)
{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *this_local;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;

  alignas(16) uint8_t bea_frame_[0xa0] = {};   // the original stack frame (emulate_frame)
  float &fStack_98 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x98);
  float &fStack_94 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x94);
  float &fStack_90 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x90);
  float &fStack_8c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x8c);
  int &iStack_88 = *reinterpret_cast<int *>(bea_frame_ + 0xa0 - 0x88);
  int &iStack_84 = *reinterpret_cast<int *>(bea_frame_ + 0xa0 - 0x84);
  float &fStack_80 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x80);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x7c);
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x78);
  undefined1 (&auStack_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xa0 - 0x70);
  undefined4 (&local_60)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0xa0 - 0x60);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0xa0 - 0x30);
  piVar2 = param_18;
  piVar1 = *(int **)(param_19 + 0xc);
  if (piVar1 != (int *)0x0) {
    pfVar3 = (float *)bea_vcall<uint32_t>(param_18, 0x4, local_60);
    fStack_80 = param_1 * *pfVar3 + param_2 * pfVar3[1] + param_3 * pfVar3[2];
    fStack_7c = param_1 * pfVar3[4] + param_2 * pfVar3[5] + param_3 * pfVar3[6];
    fStack_78 = param_1 * pfVar3[8] + param_2 * pfVar3[9] + param_3 * pfVar3[10];
    pfVar3 = (float *)bea_vcall<uint32_t>(piVar2, 0x0, auStack_70);
    param_1 = fStack_80 + *pfVar3;
    param_2 = fStack_7c + pfVar3[1];
    param_3 = fStack_78 + pfVar3[2];
    param_4 = bea_piece32(fStack_8c);
    fStack_98 = param_1;
    fStack_94 = param_2;
    fStack_90 = param_3;
    pfVar3 = (float *)bea_vcall<uint32_t>(piVar2, 0x4, auStack_30);
    uVar4 = FUN_00401ec0(bea_arg(auStack_70), bea_arg(param_9 * pfVar3[9] + param_13 * pfVar3[10] + param_5 * pfVar3[8]), bea_arg(param_10 * pfVar3[9] + param_14 * pfVar3[10] + param_6 * pfVar3[8]), bea_arg(param_11 * pfVar3[9] + param_15 * pfVar3[10] + param_7 * pfVar3[8]));
    uVar5 = FUN_00401ec0(bea_arg(&fStack_80), bea_arg(param_9 * pfVar3[5] + param_13 * pfVar3[6] + param_5 * pfVar3[4]), bea_arg(param_10 * pfVar3[5] + param_14 * pfVar3[6] + param_6 * pfVar3[4]), bea_arg(param_11 * pfVar3[5] + param_15 * pfVar3[6] + param_7 * pfVar3[4]));
    uVar6 = FUN_00401ec0(bea_arg(&fStack_98), bea_arg(param_9 * pfVar3[1] + param_13 * pfVar3[2] + param_5 * *pfVar3), bea_arg(param_10 * pfVar3[1] + param_14 * pfVar3[2] + param_6 * *pfVar3), bea_arg(param_11 * pfVar3[1] + param_15 * pfVar3[2] + param_7 * *pfVar3));
    FUN_00401f10(bea_arg(local_60), bea_arg(uVar6), bea_arg(uVar5), bea_arg(uVar4));
    puVar7 = local_60;
    puVar11 = (undefined4*)&param_5;
    for (iVar8 = 0xc; ((iVar8 != 0)); iVar8 = iVar8 + -1) {
      *puVar11 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar11 = puVar11 + 1;
    }
    iVar8 = 0;
    if (0 < *(int *)(param_17 + 0x15c)) {
      iStack_88 = 0;
      iStack_84 = 0;
      do {
        if (*(int *)(piVar1[3] + iVar8 * 4) != -1) {
          pfVar3 = (float *)(piVar1[1] + iStack_84);
          fStack_98 = *pfVar3;
          fStack_94 = pfVar3[1];
          fStack_90 = pfVar3[2];
          fStack_8c = pfVar3[3];
          puVar7 = (undefined4*)&param_1;
          puVar11 = (undefined4 *)(*piVar1 + iStack_88);
          puVar12 = local_60;
          for (iVar9 = 0xc; ((iVar9 != 0)); iVar9 = iVar9 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          puVar13 = auStack_70;
          this_local = (void *)FUN_0040d2c0(bea_arg(&param_5), bea_arg(&fStack_80), bea_arg(&fStack_98));
          pfVar3 = (float *)FUN_00401ee0(bea_arg(this_local), bea_arg(puVar13), bea_arg(puVar7));
          fStack_98 = *pfVar3;
          fStack_94 = pfVar3[1];
          fStack_90 = pfVar3[2];
          fStack_8c = pfVar3[3];
          puVar7 = (undefined4 *)FUN_0040d320(bea_arg(&param_5), bea_arg(auStack_30), bea_arg(local_60));
          iVar9 = piVar1[2];
          puVar11 = local_60;
          for (iVar10 = 0xc; ((iVar10 != 0)); iVar10 = iVar10 + -1) {
            *puVar11 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
          }
          FUN_004b6350(&fStack_98,local_60,
                       *(undefined4 *)
                        (*(int *)(param_17 + 0x160) + *(int *)(piVar1[3] + iVar8 * 4) * 4),param_18,
                       param_19,0,*(uint *)(iVar9 + iVar8 * 4) | param_20);
        }
        iStack_88 = iStack_88 + 0x30;
        iVar8 = iVar8 + 1;
        iStack_84 = iStack_84 + 0x10;
      } while (((iVar8 < *(int *)(param_17 + 0x15c))));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b5e80, ap_004b5e80));
