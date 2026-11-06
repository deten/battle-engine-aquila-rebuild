// auto-ported from 00419b00_FUN_00419b00.c (FUN_00419b00, 573 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_00416fc0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00416fc0_t> FUN_00416fc0 = {(FUN_00416fc0_t)0x00416fc0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static void BEA_THISCALL ap_00419b00(void * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;

  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  float &local_54 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x54);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x44);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x38);
  float (&local_30)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x60 - 0x30);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x18);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x8);
  pfVar8 = (float *)((int)this_ + 0x1c);
  *(float *)((int)this_ + 0x2c) = *pfVar8;
  *(undefined4 *)((int)this_ + 0x30) = *(undefined4 *)((int)this_ + 0x20);
  *(undefined4 *)((int)this_ + 0x34) = *(undefined4 *)((int)this_ + 0x24);
  *(undefined4 *)((int)this_ + 0x38) = *(undefined4 *)((int)this_ + 0x28);
  puVar7 = (undefined4 *)((int)this_ + 0x3c);
  puVar9 = (undefined4 *)((int)this_ + 0x6c);
  for (iVar6 = 0xc; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  local_54 = (DAT_00672fd0 - *(float *)((int)this_ + 0x14)) / *(float *)((int)this_ + 0x18);
  if (local_54 <= 1.0f) {
    FUN_00416fc0(bea_arg(*(void **)((int)this_ + 0x10)), bea_arg(&local_40), bea_arg(local_54));
    iVar6 = *(int *)((int)this_ + 0xc);
    if (iVar6 != 0) {
      fVar1 = *(float *)(iVar6 + 0x20);
      fVar2 = *(float *)(iVar6 + 0x24);
      *pfVar8 = local_40 + *(float *)(iVar6 + 0x1c);
      *(float *)((int)this_ + 0x20) = local_3c + fVar1;
      *(float *)((int)this_ + 0x24) = local_38 + fVar2;
      *(undefined4 *)((int)this_ + 0x28) = local_44;
      local_50 = *(float *)(iVar6 + 0x1c) - *pfVar8;
      local_4c = *(float *)(iVar6 + 0x20) - *(float *)((int)this_ + 0x20);
      local_48 = *(float *)(iVar6 + 0x24) - *(float *)((int)this_ + 0x24);
      local_54 = SQRT(local_4c * local_4c + local_48 * local_48 + local_50 * local_50);   // class 19: the asm's order
      if (local_54 != 0.0f) {
        if (local_54 <= 0.0f) {
          fVar11 = bea_fcast<float10>(0.0f);
        }
        else {
          fVar11 = _CIasin(bea_fcast<float10>(local_48) / bea_fcast<float10>(local_54));
        }
        fVar13 = bea_fcast<float10>(fpatan(bea_fcast<float10>(local_50),bea_fcast<float10>(local_4c)));
        fVar12 = bea_fcast<float10>(fcos(-fVar13));
        fVar1 = bea_fcast<float>(fVar12);
        fVar12 = bea_fcast<float10>(fsin(-fVar13));
        fVar2 = bea_fcast<float>(fVar12);
        fVar12 = bea_fcast<float10>(fcos(bea_fcast<float10>(0.0f)));
        fVar3 = bea_fcast<float>(fVar12);
        fVar12 = bea_fcast<float10>(fsin(bea_fcast<float10>(0.0f)));
        fVar4 = bea_fcast<float>(fVar12);
        fVar12 = bea_fcast<float10>(fcos(fVar11));
        fVar5 = bea_fcast<float>(fVar12);
        fVar11 = bea_fcast<float10>(fsin(fVar11));
        local_30[0] = bea_fcast<float>((bea_fcast<float10>(fVar3) * bea_fcast<float10>(fVar1) -
                             fVar11 * bea_fcast<float10>(fVar4) * bea_fcast<float10>(fVar2)));
        local_30[1] = -(fVar5 * fVar2);
        local_30[2] = bea_fcast<float>((bea_fcast<float10>(fVar4) * bea_fcast<float10>(fVar1) +
                             fVar11 * bea_fcast<float10>(fVar3) * bea_fcast<float10>(fVar2)));
        local_20 = bea_fcast<float>((bea_fcast<float10>(fVar3) * bea_fcast<float10>(fVar2) +
                          fVar11 * bea_fcast<float10>(fVar4) * bea_fcast<float10>(fVar1)));
        local_1c = fVar5 * fVar1;
        local_18 = fVar4 * fVar2 - bea_fcast<float>((fVar11 * bea_fcast<float10>(fVar3))) * fVar1;
        local_10 = -(fVar5 * fVar4);
        local_c = bea_fcast<float>(fVar11);
        local_8 = fVar5 * fVar3;
        pfVar8 = local_30;
        pfVar10 = (float *)((int)this_ + 0x3c);
        for (iVar6 = 0xc; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
          *pfVar10 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          pfVar10 = pfVar10 + 1;
        }
      }
    }
    local_54 = -1.0f;
    if (this_ == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)this_ + 4;
    }
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(2000), bea_arg(iVar6), bea_arg(&local_54), bea_arg(2), bea_arg(0), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00419b00, ap_00419b00));
