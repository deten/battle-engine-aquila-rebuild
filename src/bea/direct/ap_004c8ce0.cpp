// auto-ported from 004c8ce0_vslot11.c (CPDMesh::vslot11, 789 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xa0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CPDMesh;
typedef char Vec3;
typedef char fStack_38;
typedef char fStack_3c;
typedef char fStack_40;
typedef char fStack_48;
typedef char fStack_4c;
typedef char fStack_50;
typedef char fStack_7c;
typedef char fStack_80;
typedef char fStack_84;
#define DAT_0089c9a4 GLOBAL_AT(int, 0x0089c9a4)
#define DAT_0089ce4c GLOBAL_AT(int, 0x0089ce4c)
#define DAT_0063012c GLOBAL_AT(int, 0x0063012c)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef uint32_t (BEA_CDECL* FUN_004b6350_t)(void *, void *, void *, void *, void *, undefined4, undefined4, ...);
static const bea_guard<FUN_004b6350_t> FUN_004b6350 = {(FUN_004b6350_t)0x004b6350};
typedef uint32_t (BEA_CDECL* FUN_0054f760_t)(void);
static const bea_guard<FUN_0054f760_t> FUN_0054f760 = {(FUN_0054f760_t)0x0054f760};

static void BEA_THISCALL ap_004c8ce0(CPDMesh * this_, int param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;

  alignas(16) uint8_t bea_frame_[0xa0] = {};   // the original stack frame (emulate_frame)
  float &local_94 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x94);
  float &local_90 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x90);
  float &local_8c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x88);
  float &fStack_84 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x84);
  float &fStack_80 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x80);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x7c);
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x78);
  int &local_74 = *reinterpret_cast<int *>(bea_frame_ + 0xa0 - 0x74);
  undefined1 (&local_70)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0xa0 - 0x70);
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x68);
  float (&afStack_60)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0xa0 - 0x60);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x48);
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x38);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0xa0 - 0x30);
  iVar6 = *(int *)(param_1 + 0x8c);
  if ((iVar6 != 0) || (iVar6 = *(int *)(this_ + 0x5c), iVar6 != 0)) {
    iVar4 = (int)*(short *)(param_1 + 0x7e);
    if (*(int *)(iVar6 + 0x15c) <= iVar4) {
      iVar4 = 0;
    }
    local_74 = *(int *)(*(int *)(iVar6 + 0x160) + iVar4 * 4);
    if (local_74 != 0) {
      local_94 = *(float *)(param_1 + 0x38);
      local_90 = *(float *)(param_1 + 0x3c);
      local_8c = *(float *)(param_1 + 0x40);
      pfVar5 = *(float **)(param_1 + 0x58);
      local_88 = *(float *)(param_1 + 0x44);
      if (pfVar5 != (float *)0x0) {
        local_94 = local_94 + *pfVar5;
        local_90 = local_90 + pfVar5[1];
        local_8c = local_8c + pfVar5[2];
      }
      pfVar5 = (float *)bea_vcall<uint32_t>((&DAT_0089c9a4)[DAT_0089ce4c], 0x0, local_70);
      if (2.0f <= ((*(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x74)) /
                 ((pfVar5[2] - local_8c) * (pfVar5[2] - local_8c) +
                 (pfVar5[1] - local_90) * (pfVar5[1] - local_90) +
                 (*pfVar5 - local_94) * (*pfVar5 - local_94))) * 102400.0f) {   // class 19: the asm's order
        fStack_84 = *(float *)(param_1 + 0x38);
        fStack_80 = *(float *)(param_1 + 0x3c);
        fStack_7c = *(float *)(param_1 + 0x40);
        fStack_78 = *(float *)(param_1 + 0x44);
        iVar6 = *(int *)(this_ + 0x74);
        pfVar5 = (float *)(param_1 + 8);
        pfVar7 = afStack_60;
        for (iVar4 = 0xc; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
          *pfVar7 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          pfVar7 = pfVar7 + 1;
        }
        if (iVar6 != 0) {
          pfVar5 = *(float **)(local_74 + 0xfc);
          fVar1 = *pfVar5;
          fVar2 = pfVar5[1];
          fVar3 = pfVar5[2];
          local_88 = pfVar5[3];
          // class 19: the asm's order (3 sums)
          fStack_6c = fStack_48 * fVar3 + fStack_4c * fVar2 + fStack_50 * fVar1;
          fStack_68 = fStack_38 * fVar3 + fStack_3c * fVar2 + fStack_40 * fVar1;
          local_94 = fStack_84 -
                     (afStack_60[2] * fVar3 + afStack_60[1] * fVar2 + afStack_60[0] * fVar1);
          local_90 = fStack_80 - fStack_6c;
          local_8c = fStack_7c - fStack_68;
          fStack_84 = local_94;
          fStack_80 = local_90;
          fStack_7c = local_8c;
          fStack_78 = local_88;
        }
        iVar6 = *(int *)(param_1 + 0x58);
        if (iVar6 != 0) {
          if (*(int *)(iVar6 + 0xa0) != 0) {
            // class 19: the asm's order (3 sums)
            FUN_00401ec0(bea_arg(&local_94), bea_arg(fStack_7c * *(float *)(iVar6 + 0x18) +
                         fStack_80 * *(float *)(iVar6 + 0x14) + fStack_84 * *(float *)(iVar6 + 0x10)), bea_arg(fStack_7c * *(float *)(iVar6 + 0x28) +
                          fStack_80 * *(float *)(iVar6 + 0x24) +
                          fStack_84 * *(float *)(iVar6 + 0x20)), bea_arg(fStack_7c * *(float *)(iVar6 + 0x38) +
                         fStack_80 * *(float *)(iVar6 + 0x34) + fStack_84 * *(float *)(iVar6 + 0x30)));
            fStack_80 = local_90;
            fStack_7c = local_8c;
            fStack_84 = local_94;
            fStack_78 = local_88;
            pfVar5 = (float *)FUN_0040d320(bea_arg(afStack_60), bea_arg(auStack_30), bea_arg(*(int *)(param_1 + 0x58) + 0x10));
            pfVar7 = afStack_60;
            for (iVar6 = 0xc; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
              *pfVar7 = *pfVar5;
              pfVar5 = pfVar5 + 1;
              pfVar7 = pfVar7 + 1;
            }
          }
          iVar6 = *(int *)(param_1 + 0x58);
          fStack_84 = fStack_84 + *(float *)(iVar6 + 0x80);
          fStack_80 = fStack_80 + *(float *)(iVar6 + 0x84);
          fStack_7c = fStack_7c + *(float *)(iVar6 + 0x88);
        }
        FUN_0054f760();
        DAT_0063012c = 0xff;
        FUN_004b6350(&fStack_84,afStack_60,local_74,0,0,0,0);
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c8ce0, ap_004c8ce0));
