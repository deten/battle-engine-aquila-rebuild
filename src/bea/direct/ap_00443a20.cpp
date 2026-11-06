// auto-ported from 00443a20_vslot10.c (CDestroyableExtraUseMeshSegment::vslot10, 1141 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x80: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CDestroyableExtraUseMeshSegment;
typedef char CDestroyableSegment;
typedef char Vec3;
typedef char fStack_14;
typedef char fStack_18;
typedef char fStack_1c;
typedef char fStack_24;
typedef char fStack_28;
typedef char fStack_2c;
typedef char fStack_44;
typedef char fStack_48;
typedef char fStack_4c;
typedef char fStack_64;
typedef char fStack_68;
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_00672710 GLOBAL_AT(int, 0x00672710)
#define DAT_00672714 GLOBAL_AT(int, 0x00672714)
#define DAT_00672718 GLOBAL_AT(int, 0x00672718)
#define DAT_0067271c GLOBAL_AT(int, 0x0067271c)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define s_Generic_Mesh_00623b94 ((char*)0x00623b94)
typedef uint32_t (BEA_THISCALL* CDestroyableSegment__vslot10_t)(uint32_t);
static const bea_guard<CDestroyableSegment__vslot10_t> CDestroyableSegment__vslot10 = {(CDestroyableSegment__vslot10_t)0x00442f60};
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_004097a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004097a0_t> FUN_004097a0 = {(FUN_004097a0_t)0x004097a0};
typedef uint32_t (BEA_THISCALL* FUN_00442710_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00442710_t> FUN_00442710 = {(FUN_00442710_t)0x00442710};
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
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static void BEA_THISCALL ap_00443a20(CDestroyableExtraUseMeshSegment * this_)
{
  int *piVar1;
  void *this_00;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;

  alignas(16) uint8_t bea_frame_[0x80] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_74)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x80 - 0x74);
  void * &pvStack_70 = *reinterpret_cast<void * *>(bea_frame_ + 0x80 - 0x70);
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x68);
  float &fStack_64 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x64);
  undefined4 &uStack_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x58);
  float &fStack_54 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x54);
  undefined4 &uStack_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x48);
  float &fStack_44 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x44);
  undefined4 &uStack_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x40);
  float (&afStack_3c)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x80 - 0x3c);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x28);
  float &fStack_24 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x24);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x18);
  float &fStack_14 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x14);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x80 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x4);
  *(undefined4 *)(this_ + 0x34) = 0;
  CDestroyableSegment__vslot10(bea_arg((CDestroyableSegment *)this_));
  piVar1 = *(int **)(*(int *)(*(int *)(this_ + 0x3c) + 0x10) + 0x30);
  if (piVar1 != (int *)0x0) {
    iVar3 = bea_vcall<uint32_t>(piVar1, 0x24);
    if (iVar3 != 0) {
      this_00 = *(void **)(*(int *)(iVar3 + 0x160) + *(int *)(this_ + 8) * 4);
      if (this_00 != (void *)0x0) {
        uVar4 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(s_Generic_Mesh_00623b94));
        pvStack_70 = (void *)0x0;
        FUN_004cb040(bea_arg(auStack_74));
        FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(uVar4), bea_arg(auStack_74), bea_arg(DAT_00672710), bea_arg(DAT_00672714), bea_arg(DAT_00672718), bea_arg(DAT_0067271c), bea_arg(0), bea_arg(0));
        FUN_004011b0(bea_arg(afStack_3c), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
        if (*(int *)(*(int *)(this_ + 0x3c) + 0x10) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(this_ + 0x3c) + 0x10) + 8;
        }
        FUN_004b0fb0(bea_arg(this_00), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(iVar3), bea_arg(afStack_3c), bea_arg(&fStack_5c), bea_arg(0), bea_arg(1), bea_arg(0));
        pfVar9 = *(float **)((int)this_00 + 0xfc);
        // class 19: the asm's order (3 sums)
        FUN_00401ec0(bea_arg(&fStack_6c), bea_arg(afStack_3c[0] * *pfVar9 + afStack_3c[1] * pfVar9[1] + afStack_3c[2] * pfVar9[2]), bea_arg(fStack_2c * *pfVar9 + fStack_28 * pfVar9[1] + fStack_24 * pfVar9[2]), bea_arg(fStack_1c * *pfVar9 + fStack_18 * pfVar9[1] + fStack_14 * pfVar9[2]));
        FUN_00401ec0(bea_arg(&fStack_4c), bea_arg(fStack_5c + fStack_6c), bea_arg(fStack_58 + fStack_68), bea_arg(fStack_54 + fStack_64));
        fStack_58 = fStack_48;
        fStack_5c = fStack_4c;
        fStack_54 = fStack_44;
        fStack_6c = *(float *)(this_ + 0x40);
        uStack_50 = uStack_40;
        fStack_68 = *(float *)(this_ + 0x44);
        fStack_64 = *(float *)(this_ + 0x48);
        uStack_60 = *(undefined4 *)(this_ + 0x4c);
        if (*(int *)(this_ + 0x50) == 0) {
          iVar3 = *(int *)(*(int *)(this_ + 0x3c) + 0x10);
          FUN_00401ec0(bea_arg(&fStack_4c), bea_arg(fStack_4c - *(float *)(iVar3 + 0x1c)), bea_arg(fStack_48 - *(float *)(iVar3 + 0x20)), bea_arg(fStack_44 - *(float *)(iVar3 + 0x24)));
          fStack_68 = fStack_48;
          fStack_6c = fStack_4c;
          fStack_64 = fStack_44;
          uStack_60 = uStack_40;
          fVar2 = SQRT(fStack_4c * fStack_4c + fStack_48 * fStack_48 + fStack_44 * fStack_44);   // class 19: the asm's order
          if (fVar2 != 0.0f) {
            fVar2 = 1.0f / fVar2;
            fStack_6c = fStack_4c * fVar2;
            fStack_68 = fStack_48 * fVar2;
            fStack_64 = fStack_44 * fVar2;
          }
          uVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
          uVar5 = uVar5 & 0x8000ffff;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xffff0000) + 1;
          }
          fVar2 = (float)(int)uVar5 * 1.5258789e-05f * 0.03f;
          fStack_6c = fVar2 * fStack_6c;
          fStack_68 = fStack_68 * fVar2;
          fStack_64 = fStack_64 * fVar2;
        }
        if (*(int *)(*(int *)(*(int *)(*(int *)(this_ + 0x3c) + 0x10) + 0x164) + 0xe8) != 0) {
          FUN_00442710(bea_arg(this_), bea_arg(fStack_5c), bea_arg(fStack_58), bea_arg(fStack_54), bea_arg(uStack_50));
        }
        if ((pvStack_70 != (void *)0x0) && (iVar3 = *(int *)((int)pvStack_70 + 0xa8), iVar3 != 0)) {
          FUN_004097a0(bea_arg(pvStack_70), bea_arg(&fStack_5c));
          if (pvStack_70 != (void *)0x0) {
            pfVar9 = afStack_3c;
            pfVar10 = (float *)((int)pvStack_70 + 0x10);
            for (iVar8 = 0xc; BEA_LOOP_GUARD((iVar8 != 0)); iVar8 = iVar8 + -1) {
              *pfVar10 = *pfVar9;
              pfVar9 = pfVar9 + 1;
              pfVar10 = pfVar10 + 1;
            }
            *(undefined4 *)((int)pvStack_70 + 0xa0) = 1;
          }
          uVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
          uVar5 = uVar5 & 0x8000ffff;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xffff0000) + 1;
          }
          uVar6 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
          uVar6 = uVar6 & 0x8000ffff;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xffff0000) + 1;
          }
          uVar7 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
          uVar7 = uVar7 & 0x8000ffff;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xffff0000) + 1;
          }
          fStack_48 = (float)(int)uVar6 * 1.5258789e-05f * 0.04f;
          fStack_44 = (float)(int)uVar7 * 1.5258789e-05f * 0.04f;
          *(float *)(iVar3 + 0xd0) = fStack_48;
          *(float *)(iVar3 + 200) = (float)(int)uVar5 * 1.5258789e-05f * 0.04f;
          *(float *)(iVar3 + 0xcc) = fStack_44;
          *(float *)(iVar3 + 0x48) = fStack_6c;
          *(float *)(iVar3 + 0x4c) = fStack_68;
          *(float *)(iVar3 + 0x50) = fStack_64;
          *(undefined4 *)(iVar3 + 0x54) = uStack_60;
          uVar4 = bea_vcall<uint32_t>(*(int **)(*(int *)(*(int *)(this_ + 0x3c) + 0x10) + 0x30), 0x24);
          *(undefined4 *)(iVar3 + 0x8c) = uVar4;
          *(undefined2 *)(iVar3 + 0x7e) = *(undefined2 *)(this_ + 8);
          *(undefined4 *)(iVar3 + 0x74) = *(undefined4 *)(*(int *)((int)this_00 + 0xfc) + 0x24);
        }
        FUN_004cb050(bea_arg(auStack_74));
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00443a20, ap_00443a20));
