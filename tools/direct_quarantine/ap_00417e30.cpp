// auto-ported from 00417e30_vslot52.c (CBuilding::vslot52, 600 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xf0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CBuilding;
typedef char fStack_38;
typedef char fStack_3c;
typedef char fStack_40;
typedef char fStack_48;
typedef char fStack_4c;
typedef char fStack_50;
typedef char fStack_58;
typedef char fStack_5c;
typedef char fStack_60;
typedef char iStack_9c;
#define DAT_00660500 GLOBAL_AT(undefined4, 0x00660500)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_0089ce88 GLOBAL_AT(int, 0x0089ce88)
typedef void * (BEA_THISCALL* FUN_004b0cd0_t)(uint32_t);
static const bea_guard<FUN_004b0cd0_t> FUN_004b0cd0 = {(FUN_004b0cd0_t)0x004b0cd0};
typedef uint32_t (BEA_THISCALL* FUN_004b0fb0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b0fb0_t> FUN_004b0fb0 = {(FUN_004b0fb0_t)0x004b0fb0};
typedef uint32_t (BEA_STDCALL* FUN_0053d760_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0053d760_t> FUN_0053d760 = {(FUN_0053d760_t)0x0053d760};
typedef uint32_t (BEA_THISCALL* FUN_00550ca0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550ca0_t> FUN_00550ca0 = {(FUN_00550ca0_t)0x00550ca0};

static void BEA_THISCALL ap_00417e30(CBuilding * this_)
{
  alignas(16) uint8_t bea_frame_[0xf0] = {};   // the original stack frame (emulate_frame)

  undefined4 &local_f0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xf0);
  int *piVar1;
  void *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  CBuilding *pCVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 &local_ec = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xec);
  undefined4 &local_e8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xe8);
  undefined4 &local_e4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xe4);
  undefined4 uVar14;
  undefined4 &local_e0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xe0);
  undefined4 uVar15;
  undefined4 &local_dc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xdc);
  undefined4 uVar16;
  undefined4 &local_d8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xd8);
  undefined4 uVar17;
  undefined4 &local_d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xd4);
  undefined4 uVar18;
  undefined4 &local_d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xd0);
  float *pfVar19;
  undefined4 &local_cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xcc);
  float *pfVar20;
  undefined4 &local_c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xc8);
  undefined4 uVar21;
  undefined4 &local_c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xc4);
  undefined4 uVar22;
  undefined4 &local_c0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xc0);
  undefined4 uVar23;
  undefined4 &local_a0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xa0);
  int &iStack_9c = *reinterpret_cast<int *>(bea_frame_ + 0xf0 - 0x9c);
  float &fStack_90 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x90);
  float &fStack_8c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x8c);
  float &fStack_88 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x88);
  undefined4 &uStack_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0x80);
  undefined4 &uStack_7c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0x7c);
  undefined4 &uStack_78 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0x78);
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x68);
  float &fStack_60 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x58);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x48);
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x38);
  undefined4 (&local_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0xf0 - 0x30);
  piVar1 = *(int **)(this_ + 0x30);
  if (piVar1 != (int *)0x0) {
    puVar10 = &DAT_00660500;
    puVar12 = local_30;
    for (iVar6 = 0xc; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    puVar10 = &DAT_00660500;
    puVar12 = (undefined4 *)&local_ec;
    for (iVar6 = 0xc; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(local_a0), bea_arg(local_ec), bea_arg(local_e8), bea_arg(local_e4), bea_arg(local_e0), bea_arg(local_dc), bea_arg(local_d8), bea_arg(local_d4), bea_arg(local_d0), bea_arg(local_cc), bea_arg(local_c8), bea_arg(local_c4), bea_arg(local_c0));
    iVar6 = bea_vcall<uint32_t>(piVar1, 0x24);
    if (iVar6 != 0) {
      iStack_9c = 0;
      if (0 < *(int *)(iVar6 + 0x15c)) {
        do {
          this_00 = *(void **)(*(int *)(iVar6 + 0x160) + iStack_9c * 4);
          pvVar5 = (void *)FUN_004b0cd0(bea_arg(this_00));
          if (pvVar5 != (void *)0x0) {
            pfVar8 = *(float **)((int)this_00 + 0xfc);
            uVar9 = 0xff7f7f7f;
            if (this_00 != pvVar5) {
              pfVar8 = *(float **)((int)pvVar5 + 0xfc);
              uVar9 = 0xff007f00;
            }
            if ((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 0xa4) == 0)) {
              uVar23 = 0;
              uVar22 = 0;
              pfVar20 = &fStack_90;
              uVar21 = 0;
              pfVar19 = &fStack_60;
              uVar18 = *(undefined4 *)(*(int *)(this_ + 0x30) + 8);
              uVar17 = 0;
              uVar16 = 0;
              uVar15 = 0;
              uVar14 = 0x417f48;
              FUN_004b0fb0(bea_arg(this_00), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(uVar18), bea_arg(pfVar19), bea_arg(pfVar20), bea_arg(0), bea_arg(0), bea_arg(0));
              fVar2 = fStack_5c * pfVar8[1];
              fVar4 = fStack_60 * *pfVar8;
              fVar3 = fStack_58 * pfVar8[2];
              puVar10 = local_30;
              puVar12 = (undefined4 *)&local_ec;
              for (iVar7 = 0xc; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
                *puVar12 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar12 = puVar12 + 1;
              }
              fStack_6c = fStack_48 * pfVar8[2] + fStack_4c * pfVar8[1] + fStack_50 * *pfVar8;
              fStack_68 = fStack_38 * pfVar8[2] + fStack_3c * pfVar8[1] + fStack_40 * *pfVar8;
              uVar13 = local_a0;
              FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(fVar3 + fVar4 + fVar2 + fStack_90), bea_arg(fStack_8c + fStack_6c), bea_arg(fStack_88 + fStack_68), bea_arg(local_a0), bea_arg(local_ec), bea_arg(local_e8), bea_arg(uVar14), bea_arg(uVar15), bea_arg(uVar16), bea_arg(uVar17), bea_arg(uVar18), bea_arg(pfVar19), bea_arg(pfVar20), bea_arg(uVar21), bea_arg(uVar22), bea_arg(uVar23));
              pCVar11 = this_ + 0x3c;
              puVar10 = (undefined4 *)&local_f0;
              uVar23 = DAT_0089ce88;
              for (iVar7 = 0xc; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
                *puVar10 = *(undefined4 *)pCVar11;
                pCVar11 = pCVar11 + 4;
                puVar10 = puVar10 + 1;
              }
              uStack_80 = 0;
              uStack_7c = 0;
              uStack_78 = 0;
              FUN_0053d760(bea_arg(uVar9), bea_arg(pfVar8 + 4), bea_arg(&uStack_80), bea_arg(uVar13), bea_arg(local_ec), bea_arg(local_e8), bea_arg(uVar14), bea_arg(uVar15), bea_arg(uVar16), bea_arg(uVar17), bea_arg(uVar18), bea_arg(pfVar19), bea_arg(pfVar20), bea_arg(uVar21), bea_arg(uVar22), bea_arg(uVar23));
            }
          }
          iStack_9c = iStack_9c + 1;
        } while (BEA_LOOP_GUARD((iStack_9c < *(int *)(iVar6 + 0x15c))));
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00417e30, ap_00417e30));
