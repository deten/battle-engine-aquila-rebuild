// auto-ported from 004f6b80_FUN_004f6b80.c (FUN_004f6b80, 1092 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0xa0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Vec3;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_00840ce8 GLOBAL_AT(int, 0x00840ce8)
#define DAT_00840cec GLOBAL_AT(int, 0x00840cec)
#define DAT_00840cf0 GLOBAL_AT(int, 0x00840cf0)
#define DAT_00840cf4 GLOBAL_AT(int, 0x00840cf4)
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define s_Tree_Ground_Hit_Effect_00633aa0 ((char*)0x00633aa0)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_004097a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004097a0_t> FUN_004097a0 = {(FUN_004097a0_t)0x004097a0};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef uint32_t (BEA_THISCALL* FUN_0044b2d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b2d0_t> FUN_0044b2d0 = {(FUN_0044b2d0_t)0x0044b2d0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef int (BEA_THISCALL* FUN_00490a40_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00490a40_t> FUN_00490a40 = {(FUN_00490a40_t)0x00490a40};
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef int (BEA_THISCALL* FUN_004cd7a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cd7a0_t> FUN_004cd7a0 = {(FUN_004cd7a0_t)0x004cd7a0};

static void BEA_THISCALL ap_004f6b80(void * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;

  alignas(16) uint8_t bea_frame_[0xa0] = {};   // the original stack frame (emulate_frame)
  float (&local_94)[2] = *reinterpret_cast<float (*)[2]>(bea_frame_ + 0xa0 - 0x94);
  void * &local_8c = *reinterpret_cast<void * *>(bea_frame_ + 0xa0 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x88);
  undefined4 &local_84 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x84);
  float (&local_80)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0xa0 - 0x80);
  float &local_70 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x70);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x6c);
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x68);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x60);
  float &local_5c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x5c);
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x58);
  undefined ** &local_50 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0xa0 - 0x50);
  undefined1 (&local_4c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xa0 - 0x4c);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x38);
  float &local_34 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x34);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x28);
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x24);
  undefined1 (&local_1c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xa0 - 0x1c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0xa0 - 0x8);
  uint &local_4 = *reinterpret_cast<uint *>(bea_frame_ + 0xa0 - 0x4);
  local_4 = 0xffffffff;
  iVar10 = *(int *)((int)this_ + 0x48);
  if (iVar10 != 0) {
    puVar12 = (undefined4 *)(iVar10 + 0x5c);
    puVar16 = (undefined4 *)(iVar10 + 0x8c);
    for (iVar13 = 0xc; ((iVar13 != 0)); iVar13 = iVar13 + -1) {
      *puVar16 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    }
    pfVar14 = *(float **)((int)this_ + 0x48);
    if (0.0f < pfVar14[2]) {
      pfVar15 = (float *)((int)this_ + 0x1c);
      fVar7 = *pfVar15;
      uVar11 = *(undefined4 *)((int)this_ + 0x20);
      local_88 = *(float *)((int)this_ + 0x24) - 0.2f;
      local_84 = *(undefined4 *)((int)this_ + 0x28);
      fVar8 = -*pfVar14;
      fVar1 = pfVar14[0x21];
      fVar2 = pfVar14[0x1d];
      fVar3 = pfVar14[0x19];
      fVar4 = *pfVar15;
      fVar5 = *(float *)((int)this_ + 0x20);
      fVar6 = *(float *)((int)this_ + 0x24);
      FUN_00401ec0(bea_arg(local_4c), bea_arg(0), bea_arg(0), bea_arg(0));
      local_34 = local_88;
      local_30 = local_84;
      local_50 = ((void*)0x005d8bfc);
      local_4 = 0;
      local_3c = fVar7;
      local_38 = uVar11;
      local_2c = fVar8 * fVar3 + fVar4;
      local_28 = fVar8 * fVar2 + fVar5;
      local_24 = fVar8 * fVar1 + fVar6 + 0.5f;
      iVar10 = FUN_00490a40(bea_arg(&DAT_006fadc8), bea_arg(&local_50), bea_arg(local_1c), bea_arg(0));
      if (iVar10 != 0) {
        if ((0.05f < (*(float **)((int)this_ + 0x48))[2]) && (3.0f < **(float **)((int)this_ + 0x48))) {
          local_8c = (void *)0x0;
          FUN_004cb040(bea_arg(local_94 + 1));
          local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
          uVar11 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(s_Tree_Ground_Hit_Effect_00633aa0));
          FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(uVar11), bea_arg(local_94 + 1), bea_arg(DAT_00840ce8), bea_arg(DAT_00840cec), bea_arg(DAT_00840cf0), bea_arg(DAT_00840cf4), bea_arg(0), bea_arg(0));
          if (local_8c != (void *)0x0) {
            FUN_004097a0(bea_arg(local_8c), bea_arg(pfVar15));
          }
          fVar19 = bea_fcast<float10>(fpatan(bea_fcast<float10>(*(float *)(*(int *)((int)this_ + 0x48) + 0xc)),
                                   bea_fcast<float10>(*(float *)(*(int *)((int)this_ + 0x48) + 0x10))));
          FUN_004062d0(bea_arg(local_80), bea_arg(bea_fcast<float>(-fVar19)), bea_arg(0), bea_arg(0));
          if (local_8c != (void *)0x0) {
            pfVar14 = local_80;
            pfVar15 = (float *)((int)local_8c + 0x10);
            for (iVar13 = 0xc; ((iVar13 != 0)); iVar13 = iVar13 + -1) {
              *pfVar15 = *pfVar14;
              pfVar14 = pfVar14 + 1;
              pfVar15 = pfVar15 + 1;
            }
            *(undefined4 *)((int)local_8c + 0xa0) = 1;
          }
          local_4 = local_4 & 0xffffff00;
          FUN_004cb050(bea_arg(local_94 + 1));
        }
        iVar13 = *(int *)((int)this_ + 0x48);
        *(float *)(iVar13 + 4) = *(float *)(iVar13 + 4) - *(float *)(iVar13 + 8) * 0.5f;
        *(float *)(*(int *)((int)this_ + 0x48) + 8) =
             *(float *)(*(int *)((int)this_ + 0x48) + 8) * -0.2f;
      }
      pfVar14 = *(float **)((int)this_ + 0x48);
      if ((0.01 <= ABS(pfVar14[2])) || (iVar10 == 0)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      local_4 = 0xffffffff;
      if (!bVar9) {
        pfVar14[0x2f] = bea_fcast<float>(DAT_00672fd0);
        local_94[1] = 5.0;
        FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(local_94 + 1), bea_arg(0x7d2), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
        return;
      }
    }
    local_4 = 0xffffffff;
    pfVar14[1] = pfVar14[2] + pfVar14[1];
    *(float *)(*(int *)((int)this_ + 0x48) + 8) = *(float *)(*(int *)((int)this_ + 0x48) + 8) + 0.005f;
    iVar10 = *(int *)((int)this_ + 0x48);
    fVar19 = bea_fcast<float10>(fsin(bea_fcast<float10>(*(float *)(iVar10 + 4))));
    fVar2 = *(float *)(iVar10 + 0x1c);
    fVar3 = *(float *)(iVar10 + 0x20);
    fVar4 = *(float *)(iVar10 + 0x24);
    fVar1 = bea_fcast<float>(fVar19);
    fVar19 = bea_fcast<float10>(fcos(bea_fcast<float10>(*(float *)(iVar10 + 4))));
    fVar19 = bea_fcast<float10>(1.0f) - fVar19;
    local_94[0] = fVar4 * fVar3;
    local_80[0] = bea_fcast<float>((bea_fcast<float10>(1.0f) -
                         (bea_fcast<float10>(fVar4) * bea_fcast<float10>(fVar4) + bea_fcast<float10>(fVar3) * bea_fcast<float10>(fVar3)) *
                         fVar19));
    fVar17 = bea_fcast<float10>(fVar3) * bea_fcast<float10>(fVar2) * fVar19;
    local_80[1] = bea_fcast<float>((fVar17 + bea_fcast<float10>((fVar4 * fVar1))));
    fVar18 = bea_fcast<float10>((fVar4 * fVar2)) * fVar19;
    local_80[2] = bea_fcast<float>((fVar18 - bea_fcast<float10>((fVar3 * fVar1))));
    local_70 = bea_fcast<float>((fVar17 - bea_fcast<float10>((fVar4 * fVar1))));
    local_6c = bea_fcast<float>((bea_fcast<float10>(1.0f) -
                      (bea_fcast<float10>(fVar4) * bea_fcast<float10>(fVar4) + bea_fcast<float10>(fVar2) * bea_fcast<float10>(fVar2)) * fVar19));
    local_68 = bea_fcast<float>((bea_fcast<float10>(local_94[0]) * fVar19 + bea_fcast<float10>((fVar2 * fVar1))));
    local_60 = bea_fcast<float>(fVar18) + fVar3 * fVar1;
    local_5c = bea_fcast<float>((bea_fcast<float10>(local_94[0]) * fVar19 - bea_fcast<float10>((fVar2 * fVar1))));
    local_58 = bea_fcast<float>((bea_fcast<float10>(1.0f) -
                      (bea_fcast<float10>(fVar3) * bea_fcast<float10>(fVar3) + bea_fcast<float10>(fVar2) * bea_fcast<float10>(fVar2)) * fVar19));
    puVar12 = (undefined4 *)FUN_0040d320(bea_arg(local_80), bea_arg(&local_50), bea_arg(iVar10 + 0x2c));
    puVar16 = (undefined4 *)(*(int *)((int)this_ + 0x48) + 0x5c);
    for (iVar10 = 0xc; ((iVar10 != 0)); iVar10 = iVar10 + -1) {
      *puVar16 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    }
    local_94[0] = -1.0f;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(local_94), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f6b80, ap_004f6b80));
