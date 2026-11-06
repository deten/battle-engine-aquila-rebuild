// auto-ported from 004ac6e0_vslot3.c (CMeshCollisionVolume::vslot3, 2122 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xb0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CMeshCollisionVolume;
typedef char fStack_4c;
typedef char fStack_50;
typedef char fStack_54;
typedef char fStack_9c;
typedef char fStack_a0;
typedef char fStack_a4;
typedef char iStack_90;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
typedef int (BEA_STDCALL* FUN_004ac140_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ac140_t> FUN_004ac140 = {(FUN_004ac140_t)0x004ac140};
typedef undefined4 (BEA_STDCALL* FUN_004ac4a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ac4a0_t> FUN_004ac4a0 = {(FUN_004ac4a0_t)0x004ac4a0};
typedef undefined4 (BEA_STDCALL* FUN_004acf30_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004acf30_t> FUN_004acf30 = {(FUN_004acf30_t)0x004acf30};
typedef uint32_t (BEA_THISCALL* FUN_004ad600_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ad600_t> FUN_004ad600 = {(FUN_004ad600_t)0x004ad600};
typedef void * (BEA_THISCALL* FUN_004b0cd0_t)(uint32_t);
static const bea_guard<FUN_004b0cd0_t> FUN_004b0cd0 = {(FUN_004b0cd0_t)0x004b0cd0};

static int BEA_THISCALL ap_004ac6e0(CMeshCollisionVolume * this_, undefined4 param_1, float *param_2, int param_3, int param_4)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  void *this_00;

  alignas(16) uint8_t bea_frame_[0xb0] = {};   // the original stack frame (emulate_frame)
  float &fStack_a4 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0xa4);
  float &fStack_a0 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0xa0);
  float &fStack_9c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x9c);
  float &fStack_98 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x98);
  int &iStack_94 = *reinterpret_cast<int *>(bea_frame_ + 0xb0 - 0x94);
  int &iStack_90 = *reinterpret_cast<int *>(bea_frame_ + 0xb0 - 0x90);
  int &iStack_8c = *reinterpret_cast<int *>(bea_frame_ + 0xb0 - 0x8c);
  float &fStack_88 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x88);
  float &fStack_84 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x84);
  float &fStack_80 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x80);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x7c);
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x78);
  float &fStack_74 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x74);
  float &fStack_70 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x70);
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x68);
  uint &uStack_64 = *reinterpret_cast<uint *>(bea_frame_ + 0xb0 - 0x64);
  int &local_60 = *reinterpret_cast<int *>(bea_frame_ + 0xb0 - 0x60);
  int * &piStack_5c = *reinterpret_cast<int * *>(bea_frame_ + 0xb0 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x58);
  float &fStack_54 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x54);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x4c);
  int &local_44 = *reinterpret_cast<int *>(bea_frame_ + 0xb0 - 0x44);
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x38);
  undefined4 &uStack_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x34);
  float &fStack_30 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x28);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x18);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x8);
  local_60 = 0;
  local_44 = *(int *)(this_ + 0x18);
  *(undefined4 *)(this_ + 0x18) = 0;
  if ((*(int **)(this_ + 0x14) == (int *)0x0) ||
     (iVar8 = bea_vcall<uint32_t>(*(int **)(this_ + 0x14), 0x24), iVar8 == 0)) {
    return 0;
  }
  *(undefined4 *)(param_4 + 0x80) = 0;
  iVar8 = bea_vcall<uint32_t>(*(int **)(this_ + 0x14), 0x24);
  piStack_5c = (int *)bea_vcall<uint32_t>(*(int **)(*(int *)(this_ + 0x14) + 8), 0x70);
  iStack_94 = 0;
  *(undefined4 *)(param_4 + 0xa8) = 1;
  fStack_88 = param_2[4] - *param_2;
  fStack_84 = param_2[5] - param_2[1];
  fStack_80 = param_2[6] - param_2[2];
  fStack_7c = fStack_6c;
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  fStack_a4 = *param_2;
  fStack_a0 = param_2[1];
  fStack_9c = param_2[2];
  fStack_98 = param_2[3];
  fStack_78 = fStack_88;
  fStack_74 = fStack_84;
  fStack_70 = fStack_80;
  do {
    if (*(int *)(param_4 + 0xa8) != 1) break;
    *(undefined4 *)(param_4 + 0xa8) = 0;
    *(undefined4 *)(param_4 + 200) = 0;
    iStack_90 = 0;
    if (0 < *(int *)(iVar8 + 0x15c)) {
      iStack_8c = 0;
      do {
        this_00 = *(void **)(*(int *)(iVar8 + 0x160) + iStack_90 * 4);
        iVar9 = FUN_004b0cd0(bea_arg(this_00));
        if ((iVar9 != 0) && (iVar9 = FUN_004b0cd0(bea_arg(this_00)), *(int *)(iVar9 + 0x8c) == 1)) {
          uStack_64 = 0;
          if (piStack_5c != (int *)0x0) {
            bea_vcall<uint32_t>(piStack_5c, 0x18, this_00,&uStack_64);
            iVar9 = bea_vcall<uint32_t>(piStack_5c, 0x1c, this_00);
            if ((iVar9 != 0) && (0 < iVar9)) {
              do {
                if (this_00 != (void *)0x0) {
                  this_00 = *(void **)((int)this_00 + 0x9c);
                }
                iVar9 = iVar9 + -1;
              } while (((iVar9 != 0)));
            }
          }
          fVar7 = bea_fcast<float>(DAT_00672fd0);
          if (((uStack_64 & 1) == 0) && (this_00 != (void *)0x0)) {
            fStack_58 = bea_fcast<float>(DAT_00672fd0);
            if ((*(int *)(this_ + 0x24) == 0) ||
               (*(float *)(*(int *)(this_ + 0x24) + 0x70 + iStack_8c) < 0.0f)) {
              FUN_004ad600(bea_arg(this_), bea_arg(iVar8), bea_arg(iStack_90), bea_arg(DAT_00672fd0));
            }
            if ((*(int *)(this_ + 0x20) == 0) &&
               (*(float *)(iStack_8c + 0x70 + *(int *)(this_ + 0x24)) < fStack_58)) {
              FUN_004ad600(bea_arg(this_), bea_arg(iVar8), bea_arg(iStack_90), bea_arg(fVar7));
            }
            fStack_54 = fStack_78 - *(float *)(iStack_8c + 0x60 + *(int *)(this_ + 0x24));
            iVar9 = iStack_8c + *(int *)(this_ + 0x24);
            fStack_50 = fStack_74 - *(float *)(iVar9 + 100);
            fStack_4c = fStack_70 - *(float *)(iVar9 + 0x68);
            fStack_18 = fStack_54 * *(float *)(iVar9 + 0x50) +
                        fStack_50 * *(float *)(iVar9 + 0x54) + fStack_4c * *(float *)(iVar9 + 0x58);
            fStack_1c = fStack_54 * *(float *)(iVar9 + 0x40) +
                        fStack_50 * *(float *)(iVar9 + 0x44) + fStack_4c * *(float *)(iVar9 + 0x48);
            fStack_20 = fStack_54 * *(float *)(iVar9 + 0x30) +
                        fStack_50 * *(float *)(iVar9 + 0x34) + fStack_4c * *(float *)(iVar9 + 0x38);
            fStack_28 = fStack_a4 * *(float *)(iVar9 + 0x50) +
                        fStack_a0 * *(float *)(iVar9 + 0x54) + fStack_9c * *(float *)(iVar9 + 0x58);
            fStack_2c = fStack_a4 * *(float *)(iVar9 + 0x40) +
                        fStack_a0 * *(float *)(iVar9 + 0x44) + fStack_9c * *(float *)(iVar9 + 0x48);
            fStack_30 = fStack_a4 * *(float *)(iVar9 + 0x30) +
                        fStack_a0 * *(float *)(iVar9 + 0x34) + fStack_9c * *(float *)(iVar9 + 0x38);
            uVar10 = FUN_004b0cd0(bea_arg(this_00));
            if (local_44 == 1) {
              iVar9 = FUN_004ac140(bea_arg(this_00), bea_arg(uVar10), bea_arg(&fStack_20), bea_arg(&fStack_30), bea_arg(param_3 + 0x14), bea_arg(param_4));
              if (iVar9 == 1) {
                iStack_94 = 1;
              }
              else {
LAB_004aca40:
                if (iStack_94 == 0) goto LAB_004acada;
              }
            }
            else {
              iVar9 = FUN_004ac4a0(bea_arg(this_00), bea_arg(uVar10), bea_arg(&fStack_20), bea_arg(&fStack_30), bea_arg(param_3 + 0x14), bea_arg(param_4));
              if (iVar9 != 1) goto LAB_004aca40;
              iStack_94 = 1;
            }
            if (*(int *)(param_4 + 0xd0) != 0) {
              return 1;
            }
            if (*(int *)(param_4 + 0xcc) == 0) {
              iStack_94 = 0;
              *(undefined4 *)(param_4 + 0x68 + *(int *)(param_4 + 0x80) * 4) =
                   *(undefined4 *)(*(int *)(param_4 + 0xe4) + 0x88);
              *(undefined4 *)(param_4 + 0xac + *(int *)(param_4 + 0x80) * 4) =
                   *(undefined4 *)(param_4 + 0xc4);
              *(float *)(param_4 + 0x84) = fStack_88;
              *(float *)(param_4 + 0x88) = fStack_84;
              *(float *)(param_4 + 0x8c) = fStack_80;
              iVar9 = *(int *)(param_4 + 0x80) + 1;
              *(float *)(param_4 + 0x90) = fStack_7c;
              *(int *)(param_4 + 0x80) = iVar9;
              if (5 < iVar9) {
                return 1;
              }
            }
          }
        }
LAB_004acada:
        iStack_90 = iStack_90 + 1;
        iStack_8c = iStack_8c + 0x74;
      } while (((iStack_90 < *(int *)(iVar8 + 0x15c))));
    }
    if ((*(int *)(param_4 + 0xa8) == 1) || (*(int *)(param_4 + 200) == 1)) {
      if (*(int *)(param_4 + 0xcc) == 0) {
        return 1;
      }
      *(undefined4 *)(param_4 + 0xa8) = 1;
      *(undefined4 *)(param_4 + 0x68 + *(int *)(param_4 + 0x80) * 4) =
           *(undefined4 *)(*(int *)(param_4 + 0xe4) + 0x88);
      *(undefined4 *)(param_4 + 0xac + *(int *)(param_4 + 0x80) * 4) =
           *(undefined4 *)(param_4 + 0xc4);
      iVar9 = *(int *)(*(int *)(param_4 + 0xe4) + 0x88);
      fStack_68 = bea_fcast<float>(DAT_00672fd0);
      if ((*(int *)(this_ + 0x24) == 0) ||
         (*(float *)(*(int *)(this_ + 0x24) + 0x70 + iVar9 * 0x74) < 0.0f)) {
        FUN_004ad600(bea_arg(this_), bea_arg(iVar8), bea_arg(iVar9), bea_arg(DAT_00672fd0));
      }
      if ((*(int *)(this_ + 0x20) == 0) &&
         (*(float *)(*(int *)(this_ + 0x24) + 0x70 + iVar9 * 0x74) < fStack_68)) {
        FUN_004ad600(bea_arg(this_), bea_arg(iVar8), bea_arg(iVar9), bea_arg(fStack_68));
      }
      iVar6 = *(int *)(this_ + 0x24);
      pfVar1 = (float *)(iVar6 + iVar9 * 0x74);
      fStack_c = pfVar1[5] * *(float *)(param_4 + 0x88) +
                 pfVar1[6] * *(float *)(param_4 + 0x8c) + pfVar1[4] * *(float *)(param_4 + 0x84);
      fStack_8 = pfVar1[9] * *(float *)(param_4 + 0x88) +
                 pfVar1[10] * *(float *)(param_4 + 0x8c) + pfVar1[8] * *(float *)(param_4 + 0x84);
      fStack_40 = *(float *)(param_4 + 0x84) * *pfVar1 +
                  *(float *)(iVar6 + 4 + iVar9 * 0x74) * *(float *)(param_4 + 0x88) +
                  *(float *)(iVar6 + 8 + iVar9 * 0x74) * *(float *)(param_4 + 0x8c) + pfVar1[0x18];
      fStack_3c = fStack_c + pfVar1[0x19];
      fStack_38 = fStack_8 + pfVar1[0x1a];
      *(float *)(param_4 + 0x84) = fStack_40;
      *(float *)(param_4 + 0x88) = fStack_3c;
      *(float *)(param_4 + 0x8c) = fStack_38;
      *(undefined4 *)(param_4 + 0x90) = uStack_34;
      iVar9 = FUN_004acf30(bea_arg(param_4), bea_arg(fStack_78), bea_arg(fStack_74), bea_arg(fStack_70), bea_arg(fStack_6c), bea_arg(fStack_a4), bea_arg(fStack_a0), bea_arg(fStack_9c), bea_arg(fStack_98), bea_arg(*(undefined4 *)(param_3 + 0x14)), bea_arg(&fStack_78), bea_arg(&fStack_a4));
      if (iVar9 == 0) {
        param_2[4] = fStack_88;
        param_2[5] = fStack_84;
        param_2[6] = fStack_80;
        param_2[7] = fStack_7c;
        *param_2 = 0.0f;
        param_2[1] = 0.0f;
        param_2[2] = 0.0f;
        param_2[3] = fVar5;
        param_2[8] = 1.4013e-45;
        return 1;
      }
      if (fVar2 * fStack_a4 + fVar3 * fStack_a0 + fVar4 * fStack_9c < 0.0f) {
        param_2[4] = fStack_88;
        param_2[5] = fStack_84;
        param_2[6] = fStack_80;
        param_2[7] = fStack_7c;
        *param_2 = 0.0f;
        param_2[1] = 0.0f;
        param_2[2] = 0.0f;
        param_2[8] = 1.4013e-45;
        param_2[3] = fVar5;
        return 1;
      }
      *(int *)(param_4 + 0x80) = *(int *)(param_4 + 0x80) + 1;
    }
    local_60 = local_60 + 1;
  } while (((local_60 < 6)));
  if (iStack_94 != 0) {
    if (*(int *)(param_4 + 200) == 1) {
      param_2[4] = fStack_88;
      param_2[5] = fStack_84;
      param_2[6] = fStack_80;
      param_2[7] = fStack_7c;
      param_2[8] = 1.4013e-45;
      return 1;
    }
    param_2[8] = 1.4013e-45;
    param_2[4] = fStack_a4 + fStack_78;
    param_2[5] = fStack_a0 + fStack_74;
    param_2[6] = fStack_9c + fStack_70;
    param_2[7] = fVar5;
    *param_2 = fStack_a4;
    param_2[1] = fStack_a0;
    param_2[2] = fStack_9c;
    param_2[3] = fStack_98;
  }
  return iStack_94;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ac6e0, ap_004ac6e0));
