// auto-ported from 004c4dc0_vslot10.c (CPDMesh::vslot10, 1207 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xb0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CPDMesh;
typedef char Mat34;
typedef char Vec3;
#define DAT_009c63fc GLOBAL_AT(int, 0x009c63fc)
#define DAT_009c63f8 GLOBAL_AT(float, 0x009c63f8)
#define DAT_00829e40 GLOBAL_AT(int, 0x00829e40)
#define DAT_00829e44 GLOBAL_AT(int, 0x00829e44)
#define DAT_00829e48 GLOBAL_AT(int, 0x00829e48)
#define DAT_00829e4c GLOBAL_AT(int, 0x00829e4c)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef uint32_t (BEA_THISCALL* FUN_0041ad10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041ad10_t> FUN_0041ad10 = {(FUN_0041ad10_t)0x0041ad10};
typedef uint32_t (BEA_THISCALL* FUN_00490900_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00490900_t> FUN_00490900 = {(FUN_00490900_t)0x00490900};
typedef uint32_t (BEA_STDCALL* FUN_004c0150_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c0150_t> FUN_004c0150 = {(FUN_004c0150_t)0x004c0150};
typedef uint32_t (BEA_THISCALL* FUN_004c5280_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004c5280_t> FUN_004c5280 = {(FUN_004c5280_t)0x004c5280};
typedef undefined4 * (BEA_THISCALL* FUN_004cb5c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb5c0_t> FUN_004cb5c0 = {(FUN_004cb5c0_t)0x004cb5c0};
typedef uint32_t (BEA_THISCALL* FUN_004cb920_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb920_t> FUN_004cb920 = {(FUN_004cb920_t)0x004cb920};
typedef undefined4 (BEA_STDCALL* FUN_004cba30_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cba30_t> FUN_004cba30 = {(FUN_004cba30_t)0x004cba30};

static undefined4 BEA_THISCALL ap_004c4dc0(CPDMesh * this_, int param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *this_00;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  float *pfVar11;
  float10 fVar12;
  float10 fVar13;
  undefined1 *puVar14;

  alignas(16) uint8_t bea_frame_[0xb0] = {};   // the original stack frame (emulate_frame)
  float &local_a4 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0xa4);
  float &local_a0 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0xa0);
  float &local_9c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x9c);
  undefined4 &local_98 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x98);
  float &local_94 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x94);
  float &local_90 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x90);
  float &local_8c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x88);
  float &local_84 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x84);
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x80);
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x7c);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x78);
  float &local_70 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x70);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x6c);
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x68);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x60);
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x58);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x44);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xb0 - 0x40);
  float (&local_30)[12] = *reinterpret_cast<float (*)[12]>(bea_frame_ + 0xb0 - 0x30);
  if ((*(byte *)(param_1 + 0x7c) & 1) == 0) {
    if (DAT_009c63fc != 0) {
      fVar12 = (float10)fcos((float10)*(float *)(param_1 + 200));
      fVar1 = (float)fVar12;
      fVar12 = (float10)fsin((float10)*(float *)(param_1 + 200));
      fVar2 = (float)fVar12;
      fVar12 = (float10)fcos((float10)*(float *)(param_1 + 0xcc));
      fVar3 = (float)fVar12;
      fVar12 = (float10)fsin((float10)*(float *)(param_1 + 0xcc));
      fVar13 = (float10)fcos((float10)*(float *)(param_1 + 0xd0));
      local_58 = (float)fVar13;
      fVar13 = (float10)fsin((float10)*(float *)(param_1 + 0xd0));
      fVar4 = (float)fVar13;
      local_80 = (float)((float10)fVar3 * (float10)fVar1 - fVar13 * fVar12 * (float10)fVar2);
      local_7c = -(local_58 * fVar2);
      local_94 = (float)((float10)fVar4 * (float10)fVar3);
      local_78 = (float)(fVar12 * (float10)fVar1 + (float10)fVar4 * (float10)fVar3 * (float10)fVar2)
      ;
      local_70 = (float)((float10)fVar3 * (float10)fVar2 + fVar13 * fVar12 * (float10)fVar1);
      local_6c = local_58 * fVar1;
      local_68 = (float)(fVar12 * (float10)fVar2 - (float10)local_94 * (float10)fVar1);
      local_60 = (float)-((float10)local_58 * fVar12);
      local_58 = local_58 * fVar3;
      pfVar11 = (float *)(param_1 + 8);
      // class 19: the asm's order (all 9 sums)
      uVar5 = FUN_00401ec0(bea_arg(&local_50), bea_arg(local_60 * *(float *)(param_1 + 0x30) + local_70 * *(float *)(param_1 + 0x2c) +
                           local_80 * *(float *)(param_1 + 0x28)), bea_arg(local_6c * *(float *)(param_1 + 0x2c) + fVar4 * *(float *)(param_1 + 0x30) +
                           local_7c * *(float *)(param_1 + 0x28)), bea_arg(local_58 * *(float *)(param_1 + 0x30) + local_68 * *(float *)(param_1 + 0x2c) +
                           local_78 * *(float *)(param_1 + 0x28)));
      uVar6 = FUN_00401ec0(bea_arg(&local_a4), bea_arg(local_60 * *(float *)(param_1 + 0x20) + local_70 * *(float *)(param_1 + 0x1c) +
                           local_80 * *(float *)(param_1 + 0x18)), bea_arg(local_6c * *(float *)(param_1 + 0x1c) + fVar4 * *(float *)(param_1 + 0x20) +
                           local_7c * *(float *)(param_1 + 0x18)), bea_arg(local_58 * *(float *)(param_1 + 0x20) + local_68 * *(float *)(param_1 + 0x1c) +
                           local_78 * *(float *)(param_1 + 0x18)));
      uVar7 = FUN_00401ec0(bea_arg(local_40), bea_arg(local_60 * *(float *)(param_1 + 0x10) + local_70 * *(float *)(param_1 + 0xc) +
                           local_80 * *pfVar11), bea_arg(local_6c * *(float *)(param_1 + 0xc) + fVar4 * *(float *)(param_1 + 0x10) +
                           local_7c * *pfVar11), bea_arg(local_58 * *(float *)(param_1 + 0x10) + local_68 * *(float *)(param_1 + 0xc) +
                           local_78 * *pfVar11));
      FUN_00401f10(bea_arg(local_30), bea_arg(uVar7), bea_arg(uVar6), bea_arg(uVar5));
      pfVar8 = local_30;
      for (iVar10 = 0xc; BEA_LOOP_GUARD((iVar10 != 0)); iVar10 = iVar10 + -1) {
        *pfVar11 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar11 = pfVar11 + 1;
      }
    }
    if (*(int *)(this_ + 0x60) != 0) {
      *(float *)(param_1 + 0x50) = DAT_009c63f8 * 0.003f + *(float *)(param_1 + 0x50);
    }
  }
  if ((*(int *)(this_ + 0x68) != 0) && ((*(byte *)(param_1 + 0x7c) & 1) == 0)) {
    pfVar11 = (float *)(param_1 + 0x38);
    local_a4 = *pfVar11;
    local_a0 = *(float *)(param_1 + 0x3c);
    local_9c = *(float *)(param_1 + 0x40);
    local_98 = *(undefined4 *)(param_1 + 0x44);
    iVar10 = *(int *)(param_1 + 0x58);
    if (iVar10 != 0) {
      if (*(int *)(iVar10 + 0xa0) != 0) {
        // class 19: the asm's order (3 sums)
        FUN_00401ec0(bea_arg(&local_50), bea_arg(local_9c * *(float *)(iVar10 + 0x18) +
                     local_a0 * *(float *)(iVar10 + 0x14) + local_a4 * *(float *)(iVar10 + 0x10)), bea_arg(local_9c * *(float *)(iVar10 + 0x28) +
                     local_a0 * *(float *)(iVar10 + 0x24) + local_a4 * *(float *)(iVar10 + 0x20)), bea_arg(local_9c * *(float *)(iVar10 + 0x38) +
                     local_a0 * *(float *)(iVar10 + 0x34) + local_a4 * *(float *)(iVar10 + 0x30)));
        local_a4 = local_50;
        local_a0 = local_4c;
        local_9c = local_48;
        local_98 = local_44;
      }
      FUN_0041ad10(bea_arg(&local_a4), bea_arg(*(undefined4 *)(param_1 + 0x58)));
    }
    iVar10 = FUN_004cba30(bea_arg(&local_a4), bea_arg(*(float *)(param_1 + 0x74) * 0.1f), bea_arg(&local_90));
    if (iVar10 != 0) {
      if (*(int *)(param_1 + 0x58) != 0) {
        FUN_00490900(bea_arg(&local_90), bea_arg(*(int *)(param_1 + 0x58)));
        if (*(int *)(*(int *)(param_1 + 0x58) + 0xa0) != 0) {
          pfVar8 = &local_90;
          puVar14 = local_40;
          this_00 = (void *)FUN_004c5280(bea_arg((void *)(*(int *)(param_1 + 0x58) + 0x10)), bea_arg(local_30));
          pfVar8 = (float *)FUN_0040d2c0(bea_arg(this_00), bea_arg(puVar14), bea_arg(pfVar8));
          local_90 = *pfVar8;
          local_8c = pfVar8[1];
          local_88 = pfVar8[2];
          local_84 = pfVar8[3];
        }
      }
      *pfVar11 = local_90;
      *(float *)(param_1 + 0x3c) = local_8c;
      *(float *)(param_1 + 0x40) = local_88;
      *(float *)(param_1 + 0x44) = local_84;
      *(undefined4 *)(param_1 + 0x48) = DAT_00829e40;
      *(undefined4 *)(param_1 + 0x4c) = DAT_00829e44;
      *(undefined4 *)(param_1 + 0x50) = DAT_00829e48;
      uVar5 = DAT_00829e4c;
      *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 1;
      *(undefined4 *)(param_1 + 0x54) = uVar5;
      piVar9 = *(int **)(this_ + 0x78);
      if (piVar9 != (int *)0x0) {
        while(BEA_LOOP_GUARD(( true ))) {
          iVar10 = bea_vcall<uint32_t>(piVar9, 0x4);
          if (iVar10 != 4) break;
          piVar9 = (int *)bea_vcall<uint32_t>(piVar9, 0x40);
          if (piVar9 == (int *)0x0) {
            return 0;
          }
        }
        if (piVar9 != (int *)0x0) {
          if ((*(int *)(param_1 + 0x58) == 0) ||
             ((*(ushort *)(*(int *)(param_1 + 0x58) + 0xb6) | 1) == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
          }
          iVar10 = FUN_004cb5c0(bea_arg(&DAT_009c63e8), bea_arg(piVar9), bea_arg(uVar5));
          if (iVar10 != 0) {
            *(float *)(iVar10 + 0x38) = *pfVar11;
            *(undefined4 *)(iVar10 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
            *(undefined4 *)(iVar10 + 0x40) = *(undefined4 *)(param_1 + 0x40);
            *(undefined4 *)(iVar10 + 0x44) = *(undefined4 *)(param_1 + 0x44);
            FUN_004c0150(bea_arg(iVar10), bea_arg(*(undefined4 *)(param_1 + 0x58)), bea_arg(*(undefined4 *)(this_ + 0x6c)));
            FUN_004cb920(bea_arg(&DAT_009c63e8), bea_arg(iVar10));
            bea_vcall<uint32_t>(*(int **)(iVar10 + 0x5c), 0x3c, iVar10);
          }
        }
      }
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c4dc0, ap_004c4dc0));
