// auto-ported from 0049fdb0_vslot71.c (CMech::vslot71, 752 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x90: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CMech;
typedef char fStack_14;
typedef char fStack_18;
typedef char fStack_1c;
typedef char fStack_24;
typedef char fStack_28;
typedef char fStack_2c;
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_007047c8 GLOBAL_AT(int, 0x007047c8)
#define DAT_007047cc GLOBAL_AT(int, 0x007047cc)
#define DAT_007047d0 GLOBAL_AT(int, 0x007047d0)
#define DAT_007047d4 GLOBAL_AT(int, 0x007047d4)
#define s_Generic_Mesh_00623b94 ((char*)0x00623b94)
typedef uint32_t (BEA_THISCALL* FUN_004097a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004097a0_t> FUN_004097a0 = {(FUN_004097a0_t)0x004097a0};
typedef uint32_t (BEA_THISCALL* FUN_004b0fb0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b0fb0_t> FUN_004b0fb0 = {(FUN_004b0fb0_t)0x004b0fb0};
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef int (BEA_THISCALL* FUN_004cd7a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cd7a0_t> FUN_004cd7a0 = {(FUN_004cd7a0_t)0x004cd7a0};
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static int BEA_THISCALL ap_0049fdb0(CMech * this_, undefined4 param_1, undefined4 param_2)
{
  float fVar1;
  int iVar2;
  int iVar3;
  CMech *pCVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;

  alignas(16) uint8_t bea_frame_[0x90] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_8c)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x90 - 0x8c);
  void * &pvStack_88 = *reinterpret_cast<void * *>(bea_frame_ + 0x90 - 0x88);
  float &fStack_84 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x84);
  float &fStack_80 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x80);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x7c);
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x78);
  int &local_74 = *reinterpret_cast<int *>(bea_frame_ + 0x90 - 0x74);
  CMech * &local_70 = *reinterpret_cast<CMech * *>(bea_frame_ + 0x90 - 0x70);
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x68);
  float &fStack_64 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x64);
  undefined4 &uStack_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x58);
  float &fStack_54 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x54);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x48);
  float &fStack_44 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x44);
  float (&afStack_3c)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x90 - 0x3c);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x28);
  float &fStack_24 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x24);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x18);
  float &fStack_14 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x14);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x90 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x4);
  iVar2 = *(int *)(this_ + 0x164);
  if (*(int *)(iVar2 + 0x130) != 0) {
    local_70 = this_;
    iVar2 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(s_Generic_Mesh_00623b94));
    if (*(int **)(this_ + 0x30) != (int *)0x0) {
      local_74 = iVar2;
      iVar3 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 0x15c);
        iVar9 = 0;
        if (0 < iVar2) {
          do {
            if (*(int *)(*(int *)(*(int *)(iVar3 + 0x160) + iVar9 * 4) + 0x8c) == 1) {
              pvStack_88 = (void *)0x0;
              FUN_004cb040(bea_arg(auStack_8c));
              FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(local_74), bea_arg(auStack_8c), bea_arg(DAT_007047c8), bea_arg(DAT_007047cc), bea_arg(DAT_007047d0), bea_arg(DAT_007047d4), bea_arg(0), bea_arg(0));
              if (pvStack_88 != (void *)0x0) {
                iVar2 = *(int *)((int)pvStack_88 + 0xa8);
                if (iVar2 != 0) {
                  if (local_70 == (CMech *)0x0) {
                    pCVar4 = (CMech *)0x0;
                  }
                  else {
                    pCVar4 = local_70 + 8;
                  }
                  FUN_004b0fb0(bea_arg(*(void **)(*(int *)(iVar3 + 0x160) + iVar9 * 4)), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(pCVar4), bea_arg(afStack_3c), bea_arg(&fStack_4c), bea_arg(0), bea_arg(1), bea_arg(0));
                  pfVar10 = *(float **)(*(int *)(*(int *)(iVar3 + 0x160) + iVar9 * 4) + 0xfc);
                  fStack_84 = *pfVar10;
                  fStack_80 = pfVar10[1];
                  fStack_7c = pfVar10[2];
                  fStack_78 = pfVar10[3];
                  // class 19: the asm's order (3 sums; the translation is added to the whole sum)
                  fStack_54 = fStack_14 * fStack_7c + fStack_18 * fStack_80 + fStack_1c * fStack_84
                              + fStack_44;
                  fStack_58 = fStack_48 +
                              (fStack_24 * fStack_7c + fStack_28 * fStack_80 + fStack_2c * fStack_84);
                  fStack_5c = afStack_3c[2] * fStack_7c +
                              afStack_3c[1] * fStack_80 + afStack_3c[0] * fStack_84 + fStack_4c;
                  if (pvStack_88 != (void *)0x0) {
                    FUN_004097a0(bea_arg(pvStack_88), bea_arg(&fStack_5c));
                    if (pvStack_88 != (void *)0x0) {
                      pfVar10 = afStack_3c;
                      pfVar11 = (float *)((int)pvStack_88 + 0x10);
                      for (iVar8 = 0xc; BEA_LOOP_GUARD((iVar8 != 0)); iVar8 = iVar8 + -1) {
                        *pfVar11 = *pfVar10;
                        pfVar10 = pfVar10 + 1;
                        pfVar11 = pfVar11 + 1;
                      }
                      *(undefined4 *)((int)pvStack_88 + 0xa0) = 1;
                    }
                  }
                  uVar5 = _rand();
                  uVar6 = _rand();
                  uVar7 = _rand();
                  *(int *)(iVar2 + 0x8c) = iVar3;
                  *(short *)(iVar2 + 0x7e) = (short)iVar9;
                  fStack_6c = (float)(int)((uVar7 & 0xff) - 0x80) * 0.0003125f;
                  *(float *)(iVar2 + 0x48) = fStack_6c;
                  fStack_68 = (float)(int)((uVar6 & 0xff) - 0x80) * 0.0003125f;
                  *(float *)(iVar2 + 0x4c) = fStack_68;
                  fVar1 = (float)(int)((uVar5 & 0xff) - 0x80) * 0.0003125f;
                  fStack_64 = (fVar1 + fVar1) - 0.04f;
                  *(float *)(iVar2 + 0x50) = fStack_64;
                  *(undefined4 *)(iVar2 + 0x54) = uStack_60;
                  *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(iVar3 + 0x164);
                }
              }
              FUN_004cb050(bea_arg(auStack_8c));
            }
            iVar2 = *(int *)(iVar3 + 0x15c);
            iVar9 = iVar9 + 1;
          } while (BEA_LOOP_GUARD((iVar9 < iVar2)));
        }
      }
    }
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049fdb0, ap_0049fdb0));
