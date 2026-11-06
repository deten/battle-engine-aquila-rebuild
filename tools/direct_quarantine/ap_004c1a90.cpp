// auto-ported from 004c1a90_vslot10.c (CPDEmitter::vslot10, 1582 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xf0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CPDEmitter;
typedef char Vec3;
typedef char fStack_58;
typedef char fStack_5c;
#define DAT_009c63fc GLOBAL_AT(int, 0x009c63fc)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef float10 (BEA_THISCALL* FUN_004c10c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c10c0_t> FUN_004c10c0 = {(FUN_004c10c0_t)0x004c10c0};
typedef undefined4 * (BEA_THISCALL* FUN_004cb5c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb5c0_t> FUN_004cb5c0 = {(FUN_004cb5c0_t)0x004cb5c0};
typedef uint32_t (BEA_THISCALL* FUN_004cb920_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb920_t> FUN_004cb920 = {(FUN_004cb920_t)0x004cb920};
typedef float10 (BEA_STDCALL* FUN_004cba90_t)(uint32_t);
static const bea_guard<FUN_004cba90_t> FUN_004cba90 = {(FUN_004cba90_t)0x004cba90};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static undefined4 BEA_THISCALL ap_004c1a90(CPDEmitter * this_, int param_1)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined4 *puVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;

  alignas(16) uint8_t bea_frame_[0xf0] = {};   // the original stack frame (emulate_frame)
  int &iStack_e4 = *reinterpret_cast<int *>(bea_frame_ + 0xf0 - 0xe4);
  int &iStack_e0 = *reinterpret_cast<int *>(bea_frame_ + 0xf0 - 0xe0);
  int &iStack_d8 = *reinterpret_cast<int *>(bea_frame_ + 0xf0 - 0xd8);
  int &iStack_d0 = *reinterpret_cast<int *>(bea_frame_ + 0xf0 - 0xd0);
  undefined4 &uStack_b4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xb4);
  float &fStack_a0 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0xa0);
  undefined4 &uStack_9c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0x9c);
  undefined4 &uStack_98 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0x98);
  undefined4 &uStack_94 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0x94);
  float &fStack_8c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x8c);
  float &fStack_88 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x88);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x7c);
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x78);
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x68);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x58);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x48);
  undefined1 (&auStack_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xf0 - 0x40);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0xf0 - 0x30);
  if (*(int **)(this_ + 0xb0) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)(this_ + 0xb0), 0x30, param_1,((float)*(int *)(this_ + 100) - *(float *)(param_1 + 0x60)) /
                       (float)*(int *)(this_ + 100));
  }
  if ((*(int *)(this_ + 0x68) != 0) && (DAT_009c63fc != 0)) {
    fVar21 = (float10)FUN_004c10c0(bea_arg(this_ + 0x5c), bea_arg(((float)*(int *)(this_ + 100) - *(float *)(param_1 + 0x60)) /
                                   (float)*(int *)(this_ + 100)), bea_arg(param_1));
    *(short *)(param_1 + 0x7e) = *(short *)(param_1 + 0x7e) + -1;
    if (*(short *)(param_1 + 0x7e) < 0) {
      *(short *)(param_1 + 0x7e) = *(short *)(param_1 + 0x7e) + 0x14;
      fVar22 = (float10)FUN_004cba90(bea_arg(param_1));
      fVar22 = (SQRT(fVar22) - (float10)30.0f) * (float10)0.008333334f;
      if ((float10)0.0f <= fVar22) {
        if ((float10)1.0f < fVar22) {
          fVar22 = (float10)1.0f;
        }
      }
      else {
        fVar22 = (float10)0.0f;
      }
      *(float *)(param_1 + 0x74) = (float)((float10)1.0f - fVar22 * (float10)0.8f);
    }
    fVar2 = (float)fVar21 * *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x78) = fVar2;
    fVar21 = (float10)FUN_0055dfe7((double)fVar2);
    iStack_d0 = (int)(longlong)ROUND(fVar21);
    iStack_e0 = iStack_d0;
    iStack_d8 = iStack_d0;
    *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x78) - (float)iStack_d0;
    if (*(int *)(this_ + 0xa4) == 0) {
      iStack_d8 = -1;
    }
    if ((*(int **)(this_ + 0xa0) != (int *)0x0) && (*(int *)(this_ + 0xa4) == 0)) {
      iStack_e0 = bea_vcall<uint32_t>(*(int **)(this_ + 0xa0), 0x44);
    }
    iStack_e4 = 0;
    if (0 < iStack_e0) {
      do {
        piVar13 = *(int **)(this_ + 0x68);
        while (BEA_LOOP_GUARD(((piVar13 != (int *)0x0 && (iVar12 = bea_vcall<uint32_t>(piVar13, 0x4), iVar12 == 4))))) {
          piVar13 = (int *)bea_vcall<uint32_t>(piVar13, 0x40);
        }
        if ((*(int *)(param_1 + 0x58) == 0) ||
           ((*(ushort *)(*(int *)(param_1 + 0x58) + 0xb6) | 1) == 0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = 1;
        }
        iVar12 = FUN_004cb5c0(bea_arg(&DAT_009c63e8), bea_arg(piVar13), bea_arg(uVar14));
        if (iVar12 != 0) {
          if (*(int **)(this_ + 0xa0) != (int *)0x0) {
            bea_vcall<uint32_t>(*(int **)(this_ + 0xa0), 0x48, iVar12,iStack_e4,iStack_d8);
            fVar21 = (float10)FUN_004c10c0(bea_arg(this_ + 0xa8), bea_arg(((float)*(int *)(this_ + 100) - *(float *)(param_1 + 0x60)
                                           ) / (float)*(int *)(this_ + 100)), bea_arg(param_1));
            if (fVar21 != (float10)0.0f) {
              fStack_5c = *(float *)(param_1 + 0x1c) * *(float *)(iVar12 + 0x3c) +
                          *(float *)(param_1 + 0x20) * *(float *)(iVar12 + 0x40) +
                          *(float *)(param_1 + 0x18) * *(float *)(iVar12 + 0x38);
              fStack_58 = *(float *)(param_1 + 0x2c) * *(float *)(iVar12 + 0x3c) +
                          *(float *)(param_1 + 0x30) * *(float *)(iVar12 + 0x40) +
                          *(float *)(param_1 + 0x28) * *(float *)(iVar12 + 0x38);
              fStack_4c = (float)((float10)fStack_5c * fVar21);
              fStack_48 = (float)((float10)fStack_58 * fVar21);
              *(float *)(iVar12 + 0x48) =
                   (float)(((float10)*(float *)(param_1 + 8) * (float10)*(float *)(iVar12 + 0x38) +
                           (float10)*(float *)(param_1 + 0xc) * (float10)*(float *)(iVar12 + 0x3c) +
                           (float10)*(float *)(param_1 + 0x10) * (float10)*(float *)(iVar12 + 0x40))
                           * fVar21 + (float10)*(float *)(iVar12 + 0x48));
              *(float *)(iVar12 + 0x4c) = fStack_4c + *(float *)(iVar12 + 0x4c);
              *(float *)(iVar12 + 0x50) = fStack_48 + *(float *)(iVar12 + 0x50);
            }
          }
          pfVar1 = (float *)(iVar12 + 0x38);
          fVar2 = *(float *)(param_1 + 0x18);
          fVar3 = *pfVar1;
          fVar4 = *(float *)(param_1 + 0x20);
          fVar5 = *(float *)(param_1 + 0x1c);
          fVar6 = *(float *)(param_1 + 0x28);
          fVar7 = *pfVar1;
          fVar8 = *(float *)(param_1 + 0x30);
          fVar9 = *(float *)(param_1 + 0x2c);
          fVar10 = *(float *)(iVar12 + 0x3c);
          *pfVar1 = *pfVar1 * *(float *)(param_1 + 8) +
                    *(float *)(param_1 + 0xc) * *(float *)(iVar12 + 0x3c) +
                    *(float *)(param_1 + 0x10) * *(float *)(iVar12 + 0x40);
          *(float *)(iVar12 + 0x3c) =
               fVar5 * *(float *)(iVar12 + 0x3c) + fVar4 * *(float *)(iVar12 + 0x40) + fVar2 * fVar3
          ;
          *(float *)(iVar12 + 0x40) =
               fVar9 * fVar10 + fVar8 * *(float *)(iVar12 + 0x40) + fVar6 * fVar7;
          *(undefined4 *)(iVar12 + 0x44) = uStack_b4;
          *pfVar1 = *pfVar1 + *(float *)(param_1 + 0x38);
          *(float *)(iVar12 + 0x3c) = *(float *)(param_1 + 0x3c) + *(float *)(iVar12 + 0x3c);
          *(float *)(iVar12 + 0x40) = *(float *)(param_1 + 0x40) + *(float *)(iVar12 + 0x40);
          fVar21 = (float10)FUN_004c10c0(bea_arg(this_ + 0x6c), bea_arg(((float)*(int *)(this_ + 100) - *(float *)(param_1 + 0x60))
                                         / (float)*(int *)(this_ + 100)), bea_arg(param_1));
          fVar22 = (float10)FUN_004c10c0(bea_arg(this_ + 0x74), bea_arg(((float)*(int *)(this_ + 100) - *(float *)(param_1 + 0x60))
                                         / (float)*(int *)(this_ + 100)), bea_arg(param_1));
          fVar23 = (float10)FUN_004c10c0(bea_arg(this_ + 0x7c), bea_arg(((float)*(int *)(this_ + 100) - *(float *)(param_1 + 0x60))
                                         / (float)*(int *)(this_ + 100)), bea_arg(param_1));
          fVar24 = (float10)FUN_004c10c0(bea_arg(this_ + 0x84), bea_arg(((float)*(int *)(this_ + 100) - *(float *)(param_1 + 0x60))
                                         / (float)*(int *)(this_ + 100)), bea_arg(param_1));
          fVar2 = (float)fVar24;
          uVar15 = _rand();
          uVar16 = _rand();
          uVar17 = _rand();
          fStack_8c = (float)(int)((uVar16 & 0xff) - 0x80) * fVar2 * 0.0078125f;
          fStack_88 = (float)(int)((uVar15 & 0xff) - 0x80) * fVar2 * 0.0078125f;
          fStack_7c = fStack_8c + (float)fVar22;
          fStack_78 = fStack_88 + (float)fVar23;
          *(float *)(iVar12 + 0x48) =
               (float)(int)((uVar17 & 0xff) - 0x80) * fVar2 * 0.0078125f + (float)fVar21 +
               *(float *)(iVar12 + 0x48);
          *(float *)(iVar12 + 0x4c) = fStack_7c + *(float *)(iVar12 + 0x4c);
          *(float *)(iVar12 + 0x50) = fStack_78 + *(float *)(iVar12 + 0x50);
          if ((*(int *)(this_ + 0x8c) != 0) &&
             (fVar2 = (*(float *)(iVar12 + 0x60) * *(float *)(param_1 + 0x60)) /
                      (float)*(int *)(this_ + 100), *(float *)(iVar12 + 0x60) = fVar2, fVar2 <= 0.0f))
          {
            *(undefined4 *)(iVar12 + 0x60) = 0x3c23d70a;
          }
          fVar21 = (float10)FUN_004c10c0(bea_arg(this_ + 0x94), bea_arg(((float)*(int *)(this_ + 100) - *(float *)(param_1 + 0x60))
                                         / (float)*(int *)(this_ + 100)), bea_arg(param_1));
          if (fVar21 != (float10)0.0f) {
            fStack_6c = (float)(fVar21 * (float10)*(float *)(param_1 + 0x4c));
            fStack_68 = (float)(fVar21 * (float10)*(float *)(param_1 + 0x50));
            *(float *)(iVar12 + 0x48) =
                 (float)(fVar21 * (float10)*(float *)(param_1 + 0x48) +
                        (float10)*(float *)(iVar12 + 0x48));
            *(float *)(iVar12 + 0x4c) = fStack_6c + *(float *)(iVar12 + 0x4c);
            *(float *)(iVar12 + 0x50) = fStack_68 + *(float *)(iVar12 + 0x50);
          }
          pfVar11 = *(float **)(param_1 + 0x58);
          if (*(int *)(this_ + 0x90) == 0) {
            if (pfVar11 != (float *)0x0) {
              if (pfVar11[0x28] != 0.0f) {
                FUN_00401ec0(bea_arg(&fStack_a0), bea_arg(*pfVar1 * pfVar11[4] +
                             pfVar11[5] * *(float *)(iVar12 + 0x3c) +
                             pfVar11[6] * *(float *)(iVar12 + 0x40)), bea_arg(pfVar11[9] * *(float *)(iVar12 + 0x3c) +
                             pfVar11[10] * *(float *)(iVar12 + 0x40) + pfVar11[8] * *pfVar1), bea_arg(pfVar11[0xd] * *(float *)(iVar12 + 0x3c) +
                             pfVar11[0xe] * *(float *)(iVar12 + 0x40) + pfVar11[0xc] * *pfVar1));
                *pfVar1 = fStack_a0;
                *(undefined4 *)(iVar12 + 0x3c) = uStack_9c;
                *(undefined4 *)(iVar12 + 0x40) = uStack_98;
                *(undefined4 *)(iVar12 + 0x44) = uStack_94;
                puVar18 = (undefined4 *)
                          FUN_0040d320(bea_arg((undefined4 *)(iVar12 + 8)), bea_arg(auStack_30), bea_arg(pfVar11 + 4));
                puVar20 = (undefined4 *)(iVar12 + 8);
                for (iVar19 = 0xc; BEA_LOOP_GUARD((iVar19 != 0)); iVar19 = iVar19 + -1) {
                  *puVar20 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar20 = puVar20 + 1;
                }
                puVar18 = (undefined4 *)
                          FUN_0040d2c0(bea_arg(pfVar11 + 4), bea_arg(auStack_40), bea_arg((undefined4 *)(iVar12 + 0x48)));
                *(undefined4 *)(iVar12 + 0x48) = *puVar18;
                *(undefined4 *)(iVar12 + 0x4c) = puVar18[1];
                *(undefined4 *)(iVar12 + 0x50) = puVar18[2];
                *(undefined4 *)(iVar12 + 0x54) = puVar18[3];
              }
              *pfVar1 = *pfVar1 + *pfVar11;
              *(float *)(iVar12 + 0x3c) = pfVar11[1] + *(float *)(iVar12 + 0x3c);
              *(float *)(iVar12 + 0x40) = pfVar11[2] + *(float *)(iVar12 + 0x40);
            }
          }
          else {
            *(float **)(iVar12 + 0x58) = pfVar11;
          }
          FUN_004cb920(bea_arg(&DAT_009c63e8), bea_arg(iVar12));
          bea_vcall<uint32_t>(*(int **)(iVar12 + 0x5c), 0x3c, iVar12);
        }
        iStack_e4 = iStack_e4 + 1;
      } while (BEA_LOOP_GUARD((iStack_e4 < iStack_e0)));
      return 0;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c1a90, ap_004c1a90));
