// auto-ported from 004ad830_vslot4.c (CMeshCollisionVolume::vslot4, 1566 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xc0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CMeshCollisionVolume;
typedef char Vec3;
typedef char fStack_8c;
typedef char fStack_90;
typedef char fStack_94;
typedef char fStack_a0;
typedef char fStack_a4;
typedef char fStack_a8;
typedef char iStack_b4;
typedef char psStack_74;
typedef char psStack_78;
typedef char psStack_7c;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef undefined4 (BEA_CDECL* FUN_00478c20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00478c20_t> FUN_00478c20 = {(FUN_00478c20_t)0x00478c20};
typedef uint32_t (BEA_THISCALL* FUN_004ad600_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ad600_t> FUN_004ad600 = {(FUN_004ad600_t)0x004ad600};
typedef undefined4 (BEA_THISCALL* FUN_004ae220_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ae220_t> FUN_004ae220 = {(FUN_004ae220_t)0x004ae220};
typedef undefined4 (BEA_THISCALL* FUN_004ae430_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ae430_t> FUN_004ae430 = {(FUN_004ae430_t)0x004ae430};
typedef void * (BEA_THISCALL* FUN_004b0cd0_t)(uint32_t);
static const bea_guard<FUN_004b0cd0_t> FUN_004b0cd0 = {(FUN_004b0cd0_t)0x004b0cd0};

// The original reads stack slots it never writes; the hook enters through a stub that
// copies the real stack below the entry esp, and bea_frame_ starts from it
// (tools: frame_mirror, 2026-10-30)
extern "C" uint8_t g_frame_in_004ad830[0xc0] __asm__("g_frame_in_004ad830");
alignas(16) uint8_t g_frame_in_004ad830[0xc0];
extern "C" int BEA_THISCALL ap_004ad830_body(CMeshCollisionVolume * this_, undefined4 param_1, int param_2, int param_3, int param_4) __asm__("ap_004ad830_body");

int BEA_THISCALL ap_004ad830_body(CMeshCollisionVolume * this_, undefined4 param_1, int param_2, int param_3, int param_4)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  undefined4 *puVar9;
  void *pvVar10;
  float *pfVar11;

  alignas(16) uint8_t bea_frame_[0xc0];   // the original stack frame (emulate_frame)
  memcpy(bea_frame_, g_frame_in_004ad830, sizeof bea_frame_);   // the real stack at entry (stub below)
  int &iStack_bc = *reinterpret_cast<int *>(bea_frame_ + 0xc0 - 0xbc);
  undefined4 &uStack_b8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0xb8);
  int &iStack_b4 = *reinterpret_cast<int *>(bea_frame_ + 0xc0 - 0xb4);
  int &iStack_b0 = *reinterpret_cast<int *>(bea_frame_ + 0xc0 - 0xb0);
  uint &uStack_ac = *reinterpret_cast<uint *>(bea_frame_ + 0xc0 - 0xac);
  float &fStack_a8 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xa8);
  float &fStack_a4 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xa4);
  float &fStack_a0 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xa0);
  float &fStack_98 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x98);
  float &fStack_94 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x94);
  float &fStack_90 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x90);
  float &fStack_8c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x8c);
  int * &piStack_84 = *reinterpret_cast<int * *>(bea_frame_ + 0xc0 - 0x84);
  CMeshCollisionVolume * &local_80 = *reinterpret_cast<CMeshCollisionVolume * *>(bea_frame_ + 0xc0 - 0x80);
  short * &psStack_7c = *reinterpret_cast<short * *>(bea_frame_ + 0xc0 - 0x7c);
  short * &psStack_78 = *reinterpret_cast<short * *>(bea_frame_ + 0xc0 - 0x78);
  short * &psStack_74 = *reinterpret_cast<short * *>(bea_frame_ + 0xc0 - 0x74);
  float &fStack_70 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x70);
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x68);
  float &fStack_60 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x58);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x48);
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x38);
  float &fStack_30 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x28);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x18);
  float &fStack_10 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x8);
  *(undefined4 *)(this_ + 0x18) = 0;
  if ((*(int **)(this_ + 0x14) != (int *)0x0) &&
     (local_80 = this_, iVar4 = bea_vcall<uint32_t>(*(int **)(this_ + 0x14), 0x24), iVar4 != 0)) {
    iVar4 = bea_vcall<uint32_t>(*(int **)(this_ + 0x14), 0x24);
    piVar5 = (int *)bea_vcall<uint32_t>(*(int **)(*(int *)(this_ + 0x14) + 8), 0x70);
    iStack_b0 = 0;
    fStack_70 = *(float *)(param_3 + 0x14) + *(float *)(param_2 + 0x10);
    fStack_6c = *(float *)(param_3 + 0x18) + *(float *)(param_2 + 0x14);
    fStack_68 = *(float *)(param_3 + 0x1c) + *(float *)(param_2 + 0x18);
    fStack_60 = *(float *)(param_2 + 0x10) + *(float *)(param_3 + 0x24);
    fStack_5c = *(float *)(param_3 + 0x28) + *(float *)(param_2 + 0x14);
    fStack_58 = *(float *)(param_3 + 0x2c) + *(float *)(param_2 + 0x18);
    *(undefined4 *)(param_4 + 0xa8) = 0;
    iStack_b4 = 0;
    if (0 < *(int *)(iVar4 + 0x15c)) {
      iStack_bc = 0;
      piStack_84 = piVar5;
      do {
        uStack_b8 = 0;
        pvVar10 = *(void **)(*(int *)(iVar4 + 0x160) + iStack_b4 * 4);
        iVar6 = FUN_004b0cd0(bea_arg(pvVar10));
        if ((iVar6 != 0) && (iVar6 = FUN_004b0cd0(bea_arg(pvVar10)), *(int *)(iVar6 + 0x8c) == 1)) {
          uStack_ac = 0;
          if (piVar5 != (int *)0x0) {
            bea_vcall<uint32_t>(piVar5, 0x18, pvVar10,&uStack_ac);
            iVar6 = bea_vcall<uint32_t>(piVar5, 0x1c, pvVar10);
            if ((iVar6 != 0) && (0 < iVar6)) {
              do {
                if (pvVar10 != (void *)0x0) {
                  pvVar10 = *(void **)((int)pvVar10 + 0x9c);
                }
                iVar6 = iVar6 + -1;
              } while (((iVar6 != 0)));
            }
          }
          fVar3 = bea_fcast<float>(DAT_00672fd0);
          if (((uStack_ac & 1) == 0) && (pvVar10 != (void *)0x0)) {
            fStack_98 = bea_fcast<float>(DAT_00672fd0);
            if ((*(int *)(this_ + 0x24) == 0) ||
               (*(float *)(*(int *)(this_ + 0x24) + 0x70 + iStack_bc) < 0.0f)) {
              FUN_004ad600(bea_arg(this_), bea_arg(iVar4), bea_arg(iStack_b4), bea_arg(DAT_00672fd0));
            }
            if ((*(int *)(this_ + 0x20) == 0) &&
               (*(float *)(*(int *)(this_ + 0x24) + 0x70 + iStack_bc) < fStack_98)) {
              FUN_004ad600(bea_arg(this_), bea_arg(iVar4), bea_arg(iStack_b4), bea_arg(fVar3));
            }
            fStack_94 = fStack_70 - *(float *)(*(int *)(this_ + 0x24) + 0x60 + iStack_bc);
            iVar6 = *(int *)(this_ + 0x24) + iStack_bc;
            fStack_90 = fStack_6c - *(float *)(iVar6 + 100);
            fStack_8c = fStack_68 - *(float *)(iVar6 + 0x68);
            fStack_18 = fStack_8c * *(float *)(iVar6 + 0x58) +   // class 19: z, y, x as the asm (004ada03-004adac2)
                        fStack_90 * *(float *)(iVar6 + 0x54) + fStack_94 * *(float *)(iVar6 + 0x50);
            fStack_1c = fStack_8c * *(float *)(iVar6 + 0x48) +
                        fStack_90 * *(float *)(iVar6 + 0x44) + fStack_94 * *(float *)(iVar6 + 0x40);
            fStack_20 = fStack_8c * *(float *)(iVar6 + 0x38) +
                        fStack_90 * *(float *)(iVar6 + 0x34) + fStack_94 * *(float *)(iVar6 + 0x30);
            fStack_a8 = fStack_60 - *(float *)(iVar6 + 0x60);
            fStack_a4 = fStack_5c - *(float *)(iVar6 + 100);
            fStack_a0 = fStack_58 - *(float *)(iVar6 + 0x68);
            fStack_38 = fStack_a0 * *(float *)(iVar6 + 0x58) +
                        fStack_a4 * *(float *)(iVar6 + 0x54) + fStack_a8 * *(float *)(iVar6 + 0x50);
            fStack_3c = fStack_a0 * *(float *)(iVar6 + 0x48) +
                        fStack_a4 * *(float *)(iVar6 + 0x44) + fStack_a8 * *(float *)(iVar6 + 0x40);
            fStack_40 = fStack_a0 * *(float *)(iVar6 + 0x38) +
                        fStack_a4 * *(float *)(iVar6 + 0x34) + fStack_a8 * *(float *)(iVar6 + 0x30);
            pvVar7 = (void *)FUN_004b0cd0(bea_arg(pvVar10));
            iVar8 = FUN_004ae220(bea_arg(pvVar7), bea_arg(&fStack_20), bea_arg(&fStack_40), bea_arg(&psStack_7c));
            iVar6 = *(int *)((int)pvVar7 + 0x100);
            pfVar11 = (float *)(iVar6 + 0x40);
            piVar5 = piStack_84;
            this_ = local_80;
            while (((piStack_84 = piVar5, local_80 = this_, iVar8 == 1))) {
              fStack_50 = (float)(int)*psStack_7c * *(float *)(iVar6 + 0x50) * 3.051851e-05f +
                          *pfVar11;
              fStack_4c = (float)(int)psStack_7c[1] * *(float *)(iVar6 + 0x50) * 3.051851e-05f +
                          *(float *)(iVar6 + 0x44);
              fStack_48 = (float)(int)psStack_7c[2] * *(float *)(iVar6 + 0x50) * 3.051851e-05f +
                          *(float *)(iVar6 + 0x48);
              fStack_30 = (float)(int)*psStack_78 * *(float *)(iVar6 + 0x50) * 3.051851e-05f +
                          *pfVar11;
              fStack_2c = (float)(int)psStack_78[1] * *(float *)(iVar6 + 0x50) * 3.051851e-05f +
                          *(float *)(iVar6 + 0x44);
              fStack_28 = (float)(int)psStack_78[2] * *(float *)(iVar6 + 0x50) * 3.051851e-05f +
                          *(float *)(iVar6 + 0x48);
              fStack_10 = (float)(int)*psStack_74 * *(float *)(iVar6 + 0x50) * 3.051851e-05f +
                          *pfVar11;
              fStack_c = (float)(int)psStack_74[1] * *(float *)(iVar6 + 0x50) * 3.051851e-05f +
                         *(float *)(iVar6 + 0x44);
              fStack_8 = (float)(int)psStack_74[2] * *(float *)(iVar6 + 0x50) * 3.051851e-05f +
                         *(float *)(iVar6 + 0x48);
              iVar8 = FUN_00478c20(bea_arg(&fStack_50), bea_arg(&fStack_30), bea_arg(&fStack_10), bea_arg(&fStack_20), bea_arg(&fStack_40), bea_arg(param_4));
              if (iVar8 != 0) {
                if (*(int *)(param_4 + 0xd0) != 0) {
                  return 1;
                }
                iStack_b0 = 1;
                uStack_b8 = 1;
                *(void **)(param_4 + 0xe4) = pvVar10;
              }
              iVar8 = FUN_004ae430(bea_arg(pvVar7), bea_arg(&psStack_7c), bea_arg(uStack_b8));
              piVar5 = piStack_84;
              this_ = local_80;
            }
          }
        }
        iStack_bc = iStack_bc + 0x74;
        iStack_b4 = iStack_b4 + 1;
      } while (((iStack_b4 < *(int *)(iVar4 + 0x15c))));
      if (iStack_b0 != 0) {
        uVar2 = *(undefined4 *)(*(int *)(param_4 + 0xe4) + 0x88);
        *(undefined4 *)(param_4 + 0xac) = *(undefined4 *)(param_4 + 0xc4);
        *(undefined4 *)(param_4 + 0x68) = uVar2;
        *(undefined4 *)(param_4 + 0x80) = 1;
        fVar3 = bea_fcast<float>(DAT_00672fd0);
        iVar6 = *(int *)(*(int *)(param_4 + 0xe4) + 0x88);
        if ((*(int *)(this_ + 0x24) == 0) ||
           (*(float *)(*(int *)(this_ + 0x24) + 0x70 + iVar6 * 0x74) < 0.0f)) {
          FUN_004ad600(bea_arg(this_), bea_arg(iVar4), bea_arg(iVar6), bea_arg(DAT_00672fd0));
        }
        if ((*(int *)(this_ + 0x20) == 0) &&
           (*(float *)(*(int *)(this_ + 0x24) + 0x70 + iVar6 * 0x74) < fVar3)) {
          FUN_004ad600(bea_arg(this_), bea_arg(iVar4), bea_arg(iVar6), bea_arg(fVar3));
        }
        puVar1 = (undefined4 *)(param_4 + 0x84);
        pvVar10 = (void *)(*(int *)(this_ + 0x24) + iVar6 * 0x74);
        pfVar11 = &fStack_50;
        iVar4 = (int)pvVar10 + 0x60;
        pvVar7 = (void *)FUN_0040d2c0(bea_arg(pvVar10), bea_arg(&fStack_30), bea_arg(puVar1));
        puVar9 = (undefined4 *)FUN_00401ee0(bea_arg(pvVar7), bea_arg(pfVar11), bea_arg(iVar4));
        *puVar1 = *puVar9;
        *(undefined4 *)(param_4 + 0x88) = puVar9[1];
        *(undefined4 *)(param_4 + 0x8c) = puVar9[2];
        *(undefined4 *)(param_4 + 0x90) = puVar9[3];
        puVar9 = (undefined4 *)FUN_0040d2c0(bea_arg(pvVar10), bea_arg(&fStack_50), bea_arg(param_4 + 0xd4));
        *(undefined4 *)(param_4 + 8) = *puVar9;
        *(undefined4 *)(param_4 + 0xc) = puVar9[1];
        *(undefined4 *)(param_4 + 0x10) = puVar9[2];
        *(undefined4 *)(param_4 + 0x14) = puVar9[3];
        if ((param_4 != 0) && (*(int *)(param_4 + 0xcc) != 0)) {
          *(undefined4 *)(param_2 + 0x10) = *puVar1;
          *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_4 + 0x88);
          *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_4 + 0x8c);
          *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_4 + 0x90);
          *(undefined4 *)(param_2 + 0x20) = 1;
        }
      }
    }
    return iStack_b0;
  }
  return 0;
}

__attribute__((naked)) static void ap_004ad830()
{
    __asm__ volatile(
        "movl -0x4(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0xbc\n\t"
        "movl -0x8(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0xb8\n\t"
        "movl -0xc(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0xb4\n\t"
        "movl -0x10(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0xb0\n\t"
        "movl -0x14(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0xac\n\t"
        "movl -0x18(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0xa8\n\t"
        "movl -0x1c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0xa4\n\t"
        "movl -0x20(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0xa0\n\t"
        "movl -0x24(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x9c\n\t"
        "movl -0x28(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x98\n\t"
        "movl -0x2c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x94\n\t"
        "movl -0x30(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x90\n\t"
        "movl -0x34(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x8c\n\t"
        "movl -0x38(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x88\n\t"
        "movl -0x3c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x84\n\t"
        "movl -0x40(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x80\n\t"
        "movl -0x44(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x7c\n\t"
        "movl -0x48(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x78\n\t"
        "movl -0x4c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x74\n\t"
        "movl -0x50(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x70\n\t"
        "movl -0x54(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x6c\n\t"
        "movl -0x58(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x68\n\t"
        "movl -0x5c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x64\n\t"
        "movl -0x60(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x60\n\t"
        "movl -0x64(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x5c\n\t"
        "movl -0x68(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x58\n\t"
        "movl -0x6c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x54\n\t"
        "movl -0x70(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x50\n\t"
        "movl -0x74(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x4c\n\t"
        "movl -0x78(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x48\n\t"
        "movl -0x7c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x44\n\t"
        "movl -0x80(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x40\n\t"
        "movl -0x84(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x3c\n\t"
        "movl -0x88(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x38\n\t"
        "movl -0x8c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x34\n\t"
        "movl -0x90(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x30\n\t"
        "movl -0x94(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x2c\n\t"
        "movl -0x98(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x28\n\t"
        "movl -0x9c(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x24\n\t"
        "movl -0xa0(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x20\n\t"
        "movl -0xa4(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x1c\n\t"
        "movl -0xa8(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x18\n\t"
        "movl -0xac(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x14\n\t"
        "movl -0xb0(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x10\n\t"
        "movl -0xb4(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0xc\n\t"
        "movl -0xb8(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x8\n\t"
        "movl -0xbc(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x4\n\t"
        "movl -0xc0(%esp), %eax\n\t"
        "movl %eax, g_frame_in_004ad830+0x0\n\t"
        "jmp ap_004ad830_body\n\t"
    );
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ad830, ap_004ad830));
