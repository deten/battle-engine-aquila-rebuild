// auto-ported from 00509140_FUN_00509140.c (FUN_00509140, 868 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x80: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Vec3;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef f80 (BEA_THISCALL* FUN_004026b0_t)(uint32_t);
static const bea_guard<FUN_004026b0_t> FUN_004026b0 = {(FUN_004026b0_t)0x004026b0};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef undefined4 (BEA_THISCALL* FUN_0040d0f0_t)(uint32_t);
static const bea_guard<FUN_0040d0f0_t> FUN_0040d0f0 = {(FUN_0040d0f0_t)0x0040d0f0};
typedef uint32_t (BEA_THISCALL* FUN_0044a850_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a850_t> FUN_0044a850 = {(FUN_0044a850_t)0x0044a850};
typedef uint32_t (BEA_THISCALL* FUN_0044a930_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a930_t> FUN_0044a930 = {(FUN_0044a930_t)0x0044a930};
#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static uint32_t BEA_THISCALL ap_00509140(void * this_, undefined4 param_1, float *param_2)
{
  int iVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  alignas(16) uint8_t bea_frame_[0x80] = {};   // the original stack frame (emulate_frame)
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x7c);
  float &local_74 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x74);
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x68);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x60);
  float &local_5c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x5c);
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x58);
  undefined1 (&local_50)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0x80 - 0x50);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x48);
  undefined1 (&local_40)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x80 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x3c);
  undefined4 (&local_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x80 - 0x30);
  pfVar6 = (float *)FUN_0044a850(bea_arg(this_), bea_arg(local_40));
  FUN_00401ec0(bea_arg(&local_60), bea_arg(*param_2 - *pfVar6), bea_arg(param_2[1] - pfVar6[1]), bea_arg(param_2[2] - pfVar6[2]));
  if (*(int *)(*(int *)((int)this_ + 0xa4) + 0x28) == 0) {
    puVar8 = (undefined4 *)FUN_0044a930(bea_arg(this_), bea_arg(local_30));
    puVar9 = (undefined4 *)((int)this_ + 0x30);
    iVar7 = 0xc;
  }
  else {
    iVar7 = FUN_0040d0f0(bea_arg(*(void **)(*(int *)((int)this_ + 0xa0) + 0x18)));
    if (iVar7 == 0) {
      fVar3 = SQRT(local_5c * local_5c + local_60 * local_60 + local_58 * local_58);   // class 19: the asm's order
      if (fVar3 <= 0.0f) {
        local_68 = 0.0f;
      }
      else {
        fVar10 = _CIasin(bea_fcast<float10>(local_58) / bea_fcast<float10>(fVar3));
        local_68 = bea_fcast<float>(fVar10);
      }
      fVar10 = bea_fcast<float10>(fpatan(bea_fcast<float10>(local_60),bea_fcast<float10>(local_5c)));
      FUN_004062d0(bea_arg(local_30), bea_arg(bea_fcast<float>(-fVar10)), bea_arg(local_68), bea_arg(0));
      puVar9 = (undefined4 *)((int)this_ + 0x30);
      iVar7 = 0xc;
      puVar8 = local_30;
    }
    else {
      local_3c = *(float *)(*(int *)(*(int *)((int)this_ + 0xa0) + 0x18) + 0x2c);
      iVar7 = FUN_0044a930(bea_arg(this_), bea_arg(local_30));
      FUN_00401ec0(bea_arg(local_50), bea_arg(local_3c * *(float *)(iVar7 + 4)), bea_arg(local_3c * *(float *)(iVar7 + 0x14)), bea_arg(local_3c * *(float *)(iVar7 + 0x24)));
      iVar7 = FUN_0044a850(bea_arg(this_), bea_arg(local_40));
      local_68 = param_2[2] - *(float *)(iVar7 + 8);
      iVar7 = *(int *)((int)this_ + 0xa0);
      fVar3 = *(float *)(*(int *)(iVar7 + 0x18) + 0x2c) * 0.05f;
      fVar4 = *(float *)(*(int *)(iVar7 + 0x18) + 0x3c) * 0.025f;
      fVar5 = SQRT(local_60 * local_60 + local_5c * local_5c);
      if (*(int *)((int)this_ + 0x98) == 0) {
        fVar10 = bea_fcast<float10>(FUN_004026b0(bea_arg(local_50)));
        if (fVar10 <= bea_fcast<float10>(0.0f)) {
          fVar10 = bea_fcast<float10>(0.0f);
        }
        else {
          fVar10 = _CIasin(bea_fcast<float10>(local_48) / bea_fcast<float10>(bea_fcast<float>(fVar10)));
        }
        iVar1 = *(int *)((int)this_ + 0xa0);
        local_74 = bea_fcast<float>((fVar10 + bea_fcast<float10>(*(float *)(iVar7 + 0x7c))));
        fVar10 = bea_fcast<float10>(FUN_004026b0(bea_arg(local_50)));
        if (fVar10 <= bea_fcast<float10>(0.0f)) {
          fVar10 = bea_fcast<float10>(0.0f);
        }
        else {
          fVar10 = _CIasin(bea_fcast<float10>(local_48) / bea_fcast<float10>(bea_fcast<float>(fVar10)));
        }
        fVar10 = fVar10 + bea_fcast<float10>(*(float *)(iVar1 + 0x80));
      }
      else {
        local_74 = *(float *)(iVar7 + 0x7c);
        fVar10 = bea_fcast<float10>(*(float *)(iVar7 + 0x80));
      }
      local_7c = 9999999.0;
      if (fVar10 < bea_fcast<float10>(local_74)) {
        fVar2 = bea_fcast<float10>(local_68);
        fVar10 = bea_fcast<float10>(bea_fcast<float>(fVar10));
        do {
          fVar11 = bea_fcast<float10>(fcos(fVar10));
          fVar11 = fVar11 * bea_fcast<float10>(fVar3);
          fVar12 = bea_fcast<float10>(fsin(fVar10));
          fVar12 = fVar12 * bea_fcast<float10>(fVar3);
          // class 19: the asm's order (the doubled product is formed first, fadd st0,st0)
          fVar13 = SQRT(fVar12 * fVar12 + (bea_fcast<float10>(fVar4) * fVar2 + bea_fcast<float10>(fVar4) * fVar2));
          fVar14 = ((fVar13 - fVar12) / bea_fcast<float10>(fVar4)) * fVar11;
          if ((bea_fcast<float10>(0.0f) < fVar14) &&
             (fVar14 = ABS(fVar14 - bea_fcast<float10>(fVar5)), fVar14 < bea_fcast<float10>(local_7c))) {
            local_7c = bea_fcast<float>(fVar14);
            local_68 = bea_fcast<float>(fVar10);
          }
          fVar11 = ((-fVar12 - fVar13) / bea_fcast<float10>(fVar4)) * fVar11;
          if ((bea_fcast<float10>(0.0f) < fVar11) &&
             (fVar11 = ABS(fVar11 - bea_fcast<float10>(fVar5)), fVar11 < bea_fcast<float10>(local_7c))) {
            local_7c = bea_fcast<float>(fVar11);
            local_68 = bea_fcast<float>(fVar10);
          }
          fVar10 = fVar10 + bea_fcast<float10>(0.02f);
        } while (BEA_LOOP_GUARD((fVar10 < bea_fcast<float10>(local_74))));
      }
      fVar10 = bea_fcast<float10>(fpatan(bea_fcast<float10>(local_60),bea_fcast<float10>(local_5c)));
      FUN_004062d0(bea_arg(local_30), bea_arg(bea_fcast<float>(-fVar10)), bea_arg(local_68), bea_arg(0));
      iVar7 = 0xc;
      puVar8 = local_30;
      puVar9 = (undefined4 *)((int)this_ + 0x30);
    }
  }
  for (; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)((int)this_ + 0x80) = 1;
  *(float *)((int)this_ + 0x84) = *param_2;
  *(float *)((int)this_ + 0x88) = param_2[1];
  *(float *)((int)this_ + 0x8c) = param_2[2];
  *(float *)((int)this_ + 0x90) = param_2[3];
  return FUN_00401000(bea_arg((void *)((int)this_ + 0x2c)), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00509140, ap_00509140));
