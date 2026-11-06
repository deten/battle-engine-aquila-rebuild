// auto-ported from 004d40d0_FUN_004d40d0.c (FUN_004d40d0, 2502 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char Vec3;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s__C__dev_ONSLAUGHT2_PolyBucket_cp_006316bb ((char*)0x006316bb)
#define s_C__dev_ONSLAUGHT2_array_h_0062d590 ((char*)0x0062d590)
#define s_Warning__Triangle_wasn_t_placed_i_006316e0 ((char*)0x006316e0)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef Vec3* (BEA_THISCALL* FUN_0040d120_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d120_t> FUN_0040d120 = {(FUN_0040d120_t)0x0040d120};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 (BEA_THISCALL* FUN_004d3ce0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004d3ce0_t> FUN_004d3ce0 = {(FUN_004d3ce0_t)0x004d3ce0};
typedef uint32_t (BEA_THISCALL* FUN_004d4aa0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004d4aa0_t> FUN_004d4aa0 = {(FUN_004d4aa0_t)0x004d4aa0};
typedef uint32_t (BEA_THISCALL* FUN_004d4b30_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004d4b30_t> FUN_004d4b30 = {(FUN_004d4b30_t)0x004d4b30};
typedef uint32_t (BEA_THISCALL* FUN_004d4b90_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004d4b90_t> FUN_004d4b90 = {(FUN_004d4b90_t)0x004d4b90};
typedef undefined4 (BEA_THISCALL* FUN_004d4bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d4bc0_t> FUN_004d4bc0 = {(FUN_004d4bc0_t)0x004d4bc0};
typedef int (BEA_THISCALL* FUN_004d61b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d61b0_t> FUN_004d61b0 = {(FUN_004d61b0_t)0x004d61b0};
typedef uint32_t (BEA_THISCALL* FUN_004d6210_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d6210_t> FUN_004d6210 = {(FUN_004d6210_t)0x004d6210};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_005491b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005491b0_t> FUN_005491b0 = {(FUN_005491b0_t)0x005491b0};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static undefined4 BEA_THISCALL ap_004d40d0(void * this_, int param_1)
{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  bool bVar6;
  short sVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  void *this_00;
  int iVar13;
  uint uVar14;
  float *pfVar15;
  int iVar16;
  float10 fVar17;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  int &local_f4 = *reinterpret_cast<int *>(bea_frame_ + 0x100 - 0xf4);
  undefined2 &local_ec = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x100 - 0xec);
  int &local_e4 = *reinterpret_cast<int *>(bea_frame_ + 0x100 - 0xe4);
  int &local_dc = *reinterpret_cast<int *>(bea_frame_ + 0x100 - 0xdc);
  float &local_d8 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xd8);
  float &local_d4 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xd4);
  float (&local_d0)[5] = *reinterpret_cast<float (*)[5]>(bea_frame_ + 0x100 - 0xd0);
  float &local_bc = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xbc);
  float &local_b8 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xb8);
  float &local_b4 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xb4);
  float &local_b0 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xb0);
  float &local_ac = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xac);
  float &local_a8 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xa8);
  float &local_a4 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xa4);
  float &local_a0 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xa0);
  float &local_9c = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x9c);
  float &local_98 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x98);
  int &local_94 = *reinterpret_cast<int *>(bea_frame_ + 0x100 - 0x94);
  longlong &local_90 = *reinterpret_cast<longlong *>(bea_frame_ + 0x100 - 0x90);
  int &local_88 = *reinterpret_cast<int *>(bea_frame_ + 0x100 - 0x88);
  undefined8 &local_84 = *reinterpret_cast<undefined8 *>(bea_frame_ + 0x100 - 0x84);
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x7c);
  undefined4 &local_78 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x100 - 0x78);
  ulonglong &local_74 = *reinterpret_cast<ulonglong *>(bea_frame_ + 0x100 - 0x74);
  undefined2 &local_6c = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x100 - 0x6c);
  undefined2 &local_6a = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x100 - 0x6a);
  undefined2 &local_68 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x100 - 0x68);
  float &local_64 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x64);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x60);
  float &local_5c = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x5c);
  undefined1 (&local_54)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0x100 - 0x54);
  undefined1 (&local_4c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x100 - 0x4c);
  undefined1 (&local_3c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x100 - 0x3c);
  undefined1 (&local_2c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x100 - 0x2c);
  undefined1 (&local_1c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x100 - 0x1c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x100 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x100 - 0x4);
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0xb0) == 0) {
    uVar11 = 0;
  }
  else {
    piVar8 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x46), bea_arg(s__C__dev_ONSLAUGHT2_PolyBucket_cp_006316bb + 1), bea_arg(0x14c));
    local_4 = 0;
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8[1] = 1;
      iVar9 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(6), bea_arg(0x54), bea_arg(s_C__dev_ONSLAUGHT2_array_h_0062d590), bea_arg(0x12));
      local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
      if (iVar9 == 0) {
        *piVar8 = 0;
        piVar8[2] = 0;
      }
      else {
        FUN_004011b0(bea_arg(iVar9), bea_arg(6), bea_arg(1), bea_arg(((void*)0x00402d20)));
        *piVar8 = iVar9;
        piVar8[2] = 0;
      }
    }
    *(int **)((int)this_ + 0x98) = piVar8;
    *(undefined4 *)((int)this_ + 0x78) = *(undefined4 *)(param_1 + 0xb0);
    pfVar15 = *(float **)(param_1 + 0xfc);
    fVar2 = pfVar15[4];
    local_4 = 0xffffffff;
    fVar3 = pfVar15[5];
    *(float *)((int)this_ + 0x40) = *pfVar15;
    *(float *)((int)this_ + 0x44) = pfVar15[1];
    *(float *)((int)this_ + 0x48) = pfVar15[2];
    *(float *)((int)this_ + 0x4c) = pfVar15[3];
    fVar4 = pfVar15[4];
    *(float *)((int)this_ + 0x50) = fVar4 + 1.0f;
    if (fVar4 + 1.0f < pfVar15[5] + 1.0f) {
      *(float *)((int)this_ + 0x50) = pfVar15[5] + 1.0f;
    }
    if (*(float *)((int)this_ + 0x50) < pfVar15[6] + 1.0f) {
      *(float *)((int)this_ + 0x50) = pfVar15[6] + 1.0f;
    }
    *(undefined4 *)((int)this_ + 0x70) = 0x3f800000;
    fVar17 = (float10)FUN_0055dfe7((double)(fVar2 + fVar2));
    local_84 = (longlong)ROUND(fVar17);
    *(int *)((int)this_ + 0x68) = (int)local_84 + 1;
    fVar17 = (float10)FUN_0055dfe7((double)((fVar3 + fVar3) / *(float *)((int)this_ + 0x70)));
    local_84 = (longlong)ROUND(fVar17);
    *(int *)((int)this_ + 0x6c) = (int)local_84 + 1;
    puVar10 = (undefined4 *)
              FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(((int)local_84 + 1) * *(int *)((int)this_ + 0x68) * 4), bea_arg(0x46), bea_arg(s__C__dev_ONSLAUGHT2_PolyBucket_cp_006316bb + 1), bea_arg(0x167));
    *(undefined4 **)((int)this_ + 0x60) = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      uVar11 = 0;
    }
    else {
      for (uVar14 = *(int *)((int)this_ + 0x6c) * *(int *)((int)this_ + 0x68) & 0x3fffffff; BEA_LOOP_GUARD((uVar14 != 0)); uVar14 = uVar14 - 1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      for (iVar9 = 0; BEA_LOOP_GUARD((iVar9 != 0)); iVar9 = iVar9 + -1) {
        *(undefined1 *)puVar10 = 0;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      fVar2 = pfVar15[1];
      fVar3 = pfVar15[5];
      local_84 = CONCAT44(fVar2 - fVar3,*pfVar15 - pfVar15[4]);
      local_7c = pfVar15[2] - pfVar15[6];
      *(float *)((int)this_ + 0x30) = *pfVar15 - pfVar15[4];
      *(float *)((int)this_ + 0x34) = fVar2 - fVar3;
      *(float *)((int)this_ + 0x38) = local_7c;
      *(undefined4 *)((int)this_ + 0x3c) = local_78;
      *(float *)((int)this_ + 0x74) = (pfVar15[6] + pfVar15[6]) * 0.031347964f;
      uVar11 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x78) * 0xc), bea_arg(0x46), bea_arg(s__C__dev_ONSLAUGHT2_PolyBucket_cp_006316bb + 1), bea_arg(0x17b));
      *(undefined4 *)((int)this_ + 100) = uVar11;
      local_94 = 0;
      if (0 < *(int *)(param_1 + 0xb0)) {
        local_dc = 0;
        do {
          piVar8 = (int *)(local_dc + *(int *)(param_1 + 0x80));
          iVar9 = *(int *)(*piVar8 + 0x20);
          iVar16 = *(int *)(piVar8[1] + 0x20);
          if (((iVar9 != iVar16) && (iVar12 = *(int *)(piVar8[2] + 0x20), iVar9 != iVar12)) &&
             (iVar16 != iVar12)) {
            piVar5 = *(int **)(param_1 + 0x84);
            pfVar15 = (float *)(*(int *)(*piVar8 + 0x20) * 0x10 + *piVar5);
            local_d0[0] = *pfVar15;
            local_d0[1] = pfVar15[1];
            local_d0[2] = pfVar15[2];
            local_d0[3] = pfVar15[3];
            pfVar15 = (float *)(*(int *)(piVar8[1] + 0x20) * 0x10 + *piVar5);
            iVar16 = 0;
            local_d0[4] = *pfVar15;
            local_bc = pfVar15[1];
            local_b8 = pfVar15[2];
            local_b4 = pfVar15[3];
            pfVar15 = (float *)(iVar12 * 0x10 + *piVar5);
            local_b0 = *pfVar15;
            local_ac = pfVar15[1];
            local_a8 = pfVar15[2];
            local_a4 = pfVar15[3];
            iVar9 = *(int *)(*(int *)((int)this_ + 0x98) + 8);
            if (0 < iVar9) {
              local_f4 = iVar9 * 6;
              do {
                local_f4 = local_f4 + -6;
                FUN_004d4b30(bea_arg((void *)(**(int **)((int)this_ + 0x98) + local_f4)), bea_arg(local_4c), bea_arg((int)this_ + 0x40));
                iVar12 = FUN_004d4bc0(bea_arg(local_4c), bea_arg(local_d0));
                if (iVar12 != 0) {
                  local_88 = (iVar9 - iVar16) + -1;
                  goto LAB_004d44f8;
                }
                iVar16 = iVar16 + 1;
              } while (BEA_LOOP_GUARD((iVar16 < iVar9)));
            }
            uVar11 = *(undefined4 *)((int)this_ + 0x50);
            pfVar15 = &local_64;
            this_00 = (void *)FUN_0040d120(bea_arg(local_d0), bea_arg(local_1c), bea_arg((int)this_ + 0x40));
            FUN_004d4b90(bea_arg(this_00), bea_arg(pfVar15), bea_arg(uVar11));
            local_ec = (undefined2)(longlong)ROUND(local_64 * 32767.0f);
            local_6c = local_ec;
            local_ec = (undefined2)(longlong)ROUND(local_60 * 32767.0f);
            local_6a = local_ec;
            local_ec = (undefined2)(longlong)ROUND(local_5c * 32767.0f);
            local_68 = local_ec;
            local_88 = FUN_004d61b0(bea_arg(*(void **)((int)this_ + 0x98)), bea_arg(&local_6c));
LAB_004d44f8:
            iVar16 = 0;
            iVar9 = *(int *)(*(int *)((int)this_ + 0x98) + 8);
            if (0 < iVar9) {
              local_f4 = iVar9 * 6;
              do {
                local_f4 = local_f4 + -6;
                FUN_004d4b30(bea_arg((void *)(**(int **)((int)this_ + 0x98) + local_f4)), bea_arg(local_3c), bea_arg((int)this_ + 0x40));
                iVar12 = FUN_004d4bc0(bea_arg(local_3c), bea_arg(local_d0 + 4));
                if (iVar12 != 0) {
                  (*(uint16_t*)((char*)&local_e4 + 0)) = (short)iVar9 - (short)iVar16;
                  goto LAB_004d45b2;
                }
                iVar16 = iVar16 + 1;
              } while (BEA_LOOP_GUARD((iVar16 < iVar9)));
            }
            puVar10 = (undefined4 *)FUN_004d4aa0(bea_arg(&local_84), bea_arg(local_d0 + 4), bea_arg((int)this_ + 0x40));
            piVar8 = *(int **)((int)this_ + 0x98);
            iVar9 = piVar8[2] + 1;
            piVar8[2] = iVar9;
            if (piVar8[1] < iVar9) {
              FUN_004d6210(bea_arg(piVar8), bea_arg(iVar9 * 2));
            }
            puVar1 = (undefined4 *)(*piVar8 + -6 + piVar8[2] * 6);
            *puVar1 = *puVar10;
            *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(puVar10 + 1);
            (*(uint16_t*)((char*)&local_e4 + 0)) = (short)piVar8[2];
LAB_004d45b2:
            (*(uint16_t*)((char*)&local_e4 + 0)) = (short)local_e4 + -1;
            iVar16 = 0;
            iVar9 = *(int *)(*(int *)((int)this_ + 0x98) + 8);
            if (0 < iVar9) {
              iVar12 = iVar9 * 6;
              do {
                iVar12 = iVar12 + -6;
                FUN_004d4b30(bea_arg((void *)(**(int **)((int)this_ + 0x98) + iVar12)), bea_arg(local_2c), bea_arg((int)this_ + 0x40));
                iVar13 = FUN_004d4bc0(bea_arg(local_2c), bea_arg(&local_b0));
                if (iVar13 != 0) {
                  sVar7 = ((short)iVar9 - (short)iVar16) + -1;
                  goto LAB_004d462e;
                }
                iVar16 = iVar16 + 1;
              } while (BEA_LOOP_GUARD((iVar16 < iVar9)));
            }
            uVar11 = FUN_004d4aa0(bea_arg(local_54), bea_arg(&local_b0), bea_arg((int)this_ + 0x40));
            sVar7 = FUN_004d61b0(bea_arg(*(void **)((int)this_ + 0x98)), bea_arg(uVar11));
LAB_004d462e:
            local_d0[0] = local_d0[0] - *(float *)((int)this_ + 0x30);
            local_d0[1] = local_d0[1] - *(float *)((int)this_ + 0x34);
            local_d0[2] = local_d0[2] - *(float *)((int)this_ + 0x38);
            local_d0[4] = local_d0[4] - *(float *)((int)this_ + 0x30);
            local_bc = local_bc - *(float *)((int)this_ + 0x34);
            local_b8 = local_b8 - *(float *)((int)this_ + 0x38);
            local_b0 = local_b0 - *(float *)((int)this_ + 0x30);
            local_ac = local_ac - *(float *)((int)this_ + 0x34);
            local_a8 = local_a8 - *(float *)((int)this_ + 0x38);
            local_d8 = local_d0[2];
            if (local_b8 < local_d0[2]) {
              local_d8 = local_b8;
            }
            if (local_a8 < local_d8) {
              local_d8 = local_a8;
            }
            local_d4 = local_d0[2];
            if (local_d0[2] < local_b8) {
              local_d4 = local_b8;
            }
            if (local_d4 < local_a8) {
              local_d4 = local_a8;
            }
            fVar2 = 1e+11;
            local_9c = 1e+11;
            local_a0 = -1e+11;
            local_98 = -1e+11;
            pfVar15 = local_d0 + 1;
            iVar9 = 3;
            do {
              if (pfVar15[-1] < fVar2) {
                fVar2 = pfVar15[-1];
              }
              if (*pfVar15 < local_9c) {
                local_9c = *pfVar15;
              }
              if (local_a0 < pfVar15[-1]) {
                local_a0 = pfVar15[-1];
              }
              if (local_98 < *pfVar15) {
                local_98 = *pfVar15;
              }
              pfVar15 = pfVar15 + 4;
              iVar9 = iVar9 + -1;
            } while (BEA_LOOP_GUARD((iVar9 != 0)));
            fVar17 = (float10)FUN_0055dfe7((double)(fVar2 / *(float *)((int)this_ + 0x70)));
            local_74 = (ulonglong)ROUND(fVar17);
            iVar12 = (int)local_74;
            fVar17 = (float10)FUN_0055dfe7((double)(local_9c / *(float *)((int)this_ + 0x70)));
            local_90 = (longlong)ROUND(fVar17);
            iVar9 = (int)local_90;
            fVar17 = (float10)FUN_0055dfe7((double)(local_a0 / *(float *)((int)this_ + 0x70)));
            local_90 = (longlong)ROUND(fVar17);
            iVar16 = (int)local_90;
            fVar17 = (float10)FUN_0055dfe7((double)(local_98 / *(float *)((int)this_ + 0x70)));
            local_f4 = (int)(longlong)ROUND(fVar17);
            if (iVar12 < 0) {
              local_74 = local_74 & 0xffffffff00000000;
            }
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            if (*(int *)((int)this_ + 0x68) <= iVar16) {
              local_90 = CONCAT44((*(uint32_t*)((char*)&local_90 + 4)),*(int *)((int)this_ + 0x68) + -1);
            }
            if (*(int *)((int)this_ + 0x6c) <= local_f4) {
              local_f4 = *(int *)((int)this_ + 0x6c) + -1;
            }
            *(undefined2 *)(local_dc + *(int *)((int)this_ + 100)) = (undefined2)local_88;
            *(short *)(local_dc + 2 + *(int *)((int)this_ + 100)) = (short)local_e4;
            uVar14 = 0xffffffff;
            *(short *)(local_dc + 4 + *(int *)((int)this_ + 100)) = sVar7;
            *(undefined4 *)(local_dc + 8 + *(int *)((int)this_ + 100)) = 0xffffffff;
            *(undefined2 *)(local_dc + 6 + *(int *)((int)this_ + 100)) = 0;
            if (*(float *)((int)this_ + 0x74) != 0.0f) {
              local_d8 = local_d8 / *(float *)((int)this_ + 0x74);
              local_d4 = local_d4 / *(float *)((int)this_ + 0x74);
              local_e4 = (int)(longlong)ROUND(local_d8);
              iVar16 = local_e4;
              if (local_d8 - (float)local_e4 < 0.0f) {
                iVar16 = local_e4 + -1;
              }
              local_e4 = (int)(longlong)ROUND(local_d4);
              if (local_d4 - (float)local_e4 < 0.0f) {
                local_e4 = local_e4 + -1;
              }
              if (iVar16 < 0) {
                iVar16 = 0;
              }
              if (0x1f < local_e4) {
                local_e4 = 0x1f;
              }
              uVar14 = 0;
              for (; BEA_LOOP_GUARD((iVar16 <= local_e4)); iVar16 = iVar16 + 1) {
                uVar14 = uVar14 | 1 << ((byte)iVar16 & 0x1f);
              }
            }
            *(uint *)(local_dc + 8 + *(int *)((int)this_ + 100)) = uVar14;
            bVar6 = false;
            if (iVar9 <= local_f4) {
              iVar16 = (int)local_74;
              do {
                if (iVar16 <= (int)local_90) {
                  do {
                    iVar12 = FUN_004d3ce0(bea_arg(this_), bea_arg(local_d0), bea_arg(iVar16), bea_arg(iVar9));
                    if (iVar12 != 0) {
                      piVar8 = *(int **)(*(int *)((int)this_ + 0x60) +
                                        (*(int *)((int)this_ + 0x68) * iVar9 + iVar16) * 4);
                      if (piVar8 == (int *)0x0) {
                        piVar8 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x46), bea_arg(s__C__dev_ONSLAUGHT2_PolyBucket_cp_006316bb + 1), bea_arg(0x1d9));
                        if (piVar8 == (int *)0x0) {
                          piVar8 = (int *)0x0;
                        }
                        else {
                          *piVar8 = 0;
                          piVar8[1] = 0;
                          piVar8[2] = 0;
                          piVar8[3] = 0;
                        }
                        *(int **)(*(int *)((int)this_ + 0x60) +
                                 (*(int *)((int)this_ + 0x68) * iVar9 + iVar16) * 4) = piVar8;
                      }
                      iVar12 = piVar8[2];
                      piVar8[2] = iVar12 + 1;
                      if (piVar8[1] < iVar12 + 1) {
                        if (*piVar8 == 0) {
                          iVar12 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x46), bea_arg(s__C__dev_ONSLAUGHT2_PolyBucket_cp_006316bb + 1), bea_arg(0x76));
                          *piVar8 = iVar12;
                          piVar8[1] = 10;
                        }
                        else {
                          iVar12 = FUN_005491b0(bea_arg(&DAT_009c3df0), bea_arg(*piVar8), bea_arg(piVar8[1] << 2));
                          *piVar8 = iVar12;
                          piVar8[1] = piVar8[1] << 1;
                        }
                      }
                      bVar6 = true;
                      *(undefined2 *)(*piVar8 + -2 + piVar8[2] * 2) = (undefined2)local_94;
                    }
                    iVar16 = iVar16 + 1;
                  } while (BEA_LOOP_GUARD((iVar16 <= (int)local_90)));
                  iVar16 = (int)local_74;
                }
                iVar9 = iVar9 + 1;
              } while (BEA_LOOP_GUARD((iVar9 <= local_f4)));
              if (bVar6) goto LAB_004d4a2f;
            }
            FUN_00441740(&DAT_0066f580,s_Warning__Triangle_wasn_t_placed_i_006316e0,
                         *(int *)(param_1 + 0x88));
          }
LAB_004d4a2f:
          local_dc = local_dc + 0xc;
          local_94 = local_94 + 1;
        } while (BEA_LOOP_GUARD((local_94 < *(int *)(param_1 + 0xb0))));
      }
      puVar10 = *(undefined4 **)((int)this_ + 0x98);
      iVar9 = puVar10[2];
      uVar11 = FUN_005491b0(bea_arg(&DAT_009c3df0), bea_arg(*puVar10), bea_arg(iVar9 * 6));
      *puVar10 = uVar11;
      puVar10[1] = iVar9;
      uVar11 = 1;
    }
  }
  return uVar11;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d40d0, ap_004d40d0));
