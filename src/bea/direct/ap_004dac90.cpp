// auto-ported from 004dac90_FUN_004dac90.c (FUN_004dac90, 852 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Vec3;
#define DAT_008550d0 GLOBAL_AT(int, 0x008550d0)
#define DAT_008551a0 GLOBAL_AT(int, 0x008551a0)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_004dab50_t)(uint32_t);
static const bea_guard<FUN_004dab50_t> FUN_004dab50 = {(FUN_004dab50_t)0x004dab50};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef int (BEA_THISCALL* FUN_004fd3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fd3d0_t> FUN_004fd3d0 = {(FUN_004fd3d0_t)0x004fd3d0};

static void BEA_THISCALL ap_004dac90(void * this_, undefined4 param_1)
{
  int *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float10 fVar9;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x48);
  float &local_44 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x44);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x34);
  float (&local_30)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x50 - 0x30);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x18);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x8);
  if (*(int *)(*(int *)((int)this_ + 0xf0) + 0x48) == 1) {
    this_00 = (int *)((int)this_ + 0xe8);
    if ((*(int *)((int)this_ + 0xe8) == 0) && (*(int *)((int)this_ + 0xec) != 0)) {
      local_48 = -2.0;
      pfVar7 = (float *)((int)this_ + 0x3c);
      pfVar8 = local_30;
      for (iVar6 = 0xc; BEA_LOOP_GUARD((local_44 = local_18, fVar2 = local_20, fVar1 = local_30[2], iVar6 != 0));
          iVar6 = iVar6 + -1) {
        *pfVar8 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar8 = pfVar8 + 1;
      }
      local_20 = local_30[1];
      local_30[1] = fVar2;
      local_30[2] = local_10;
      local_10 = fVar1;
      local_18 = local_c;
      iVar6 = FUN_00406d20(bea_arg(&DAT_008550d0));
      while (BEA_LOOP_GUARD((iVar6 != 0))) {
        uVar4 = *(uint *)(iVar6 + 0x34) & 8;
        if (((uVar4 != 0) && (*(int *)((int)this_ + 0x130) != 0)) || (uVar4 == 0)) {
          fVar1 = *(float *)(iVar6 + 0x1c) - *(float *)((int)this_ + 0x1c);
          fVar3 = *(float *)(iVar6 + 0x20) - *(float *)((int)this_ + 0x20);
          fVar2 = *(float *)(iVar6 + 0x24) - *(float *)((int)this_ + 0x24);
          FUN_00401ec0(bea_arg(&local_40), bea_arg(local_30[0] * fVar1 + local_30[1] * fVar3 + local_30[2] * fVar2), bea_arg(local_20 * fVar1 + local_1c * fVar3 + local_18 * fVar2), bea_arg(fVar3 * local_44 + local_10 * fVar1 + local_8 * fVar2));
          fVar1 = SQRT(local_3c * local_3c + local_38 * local_38 + local_40 * local_40);   // class 19: the asm's order
          if (fVar1 != 0.0f) {
            fVar1 = 1.0f / fVar1;
            local_40 = fVar1 * local_40;
            local_3c = fVar1 * local_3c;
            local_38 = local_38 * fVar1;
          }
          iVar5 = *(int *)((int)this_ + 0xf0);
          if (*(int *)(iVar5 + 0x54) == 0) {
            if (((local_48 < local_3c) &&
                (fVar9 = (float10)fcos((float10)*(float *)(iVar5 + 0x40)), fVar9 < (float10)local_3c
                )) && (iVar5 = FUN_004fd3d0(bea_arg(*(void **)((int)this_ + 0xec)), bea_arg(*(undefined4 *)(iVar6 + 0x138))), iVar5 != 0)) {
              if ((iVar6 != 0) &&
                 ((*(int *)(*(int *)((int)this_ + 0xf0) + 0x48) != 0 ||
                  (*(float *)(*(int *)((int)this_ + 0xf0) + 0x1c) < 0.0f)))) {
                FUN_004dab50(bea_arg(this_));
                FUN_00401000(bea_arg(this_00), bea_arg(iVar6));
                if ((*(byte *)(iVar6 + 0x34) & 8) != 0) {
                  FUN_004e5a80(bea_arg(&DAT_008551a0), bea_arg(this_));
                }
              }
              local_48 = local_3c;
            }
          }
          else if (((local_48 < local_3c) &&
                   (fVar9 = (float10)fcos((float10)*(float *)(iVar5 + 0x40)),
                   (float10)local_3c < fVar9)) &&
                  (iVar5 = FUN_004fd3d0(bea_arg(*(void **)((int)this_ + 0xec)), bea_arg(*(undefined4 *)(iVar6 + 0x138)))
                  , iVar5 != 0)) {
            if ((iVar6 != 0) &&
               ((*(int *)(*(int *)((int)this_ + 0xf0) + 0x48) != 0 ||
                (*(float *)(*(int *)((int)this_ + 0xf0) + 0x1c) < 0.0f)))) {
              FUN_004dab50(bea_arg(this_));
              FUN_00401000(bea_arg(this_00), bea_arg(iVar6));
              if ((*(byte *)(iVar6 + 0x34) & 8) != 0) {
                FUN_004e5a80(bea_arg(&DAT_008551a0), bea_arg(this_));
              }
            }
            local_48 = local_3c;
          }
        }
        iVar6 = FUN_00406d30(bea_arg(&DAT_008550d0));
      }
    }
    iVar6 = *this_00;
    if (iVar6 == 0) {
      local_40 = -1.0f;
      local_3c = -1.0f;
      local_38 = -1.0f;
      *(undefined4 *)((int)this_ + 0x108) = 0xbf800000;
      *(undefined4 *)((int)this_ + 0x10c) = 0xbf800000;
      *(undefined4 *)((int)this_ + 0x110) = 0xbf800000;
    }
    else {
      *(undefined4 *)((int)this_ + 0x108) = *(undefined4 *)(iVar6 + 0x1c);
      *(undefined4 *)((int)this_ + 0x10c) = *(undefined4 *)(iVar6 + 0x20);
      *(undefined4 *)((int)this_ + 0x110) = *(undefined4 *)(iVar6 + 0x24);
      local_34 = *(undefined4 *)(iVar6 + 0x28);
    }
    *(undefined4 *)((int)this_ + 0x114) = local_34;
    uVar4 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar4 = uVar4 & 0x8000ffff;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffff0000) + 1;
    }
    local_44 = (float)(int)uVar4 * 3.8146973e-06f + DAT_00672fd0 + 0.25f;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xfa3), bea_arg(this_), bea_arg(&local_44), bea_arg(0), bea_arg(0), bea_arg(param_1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dac90, ap_004dac90));
