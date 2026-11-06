// auto-ported from 00554750_FUN_00554750.c (FUN_00554750, 1695 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)
#define DAT_006fbe54 GLOBAL_AT(int, 0x006fbe54)
#define DAT_006fbe44 GLOBAL_AT(int, 0x006fbe44)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef int (BEA_THISCALL* FUN_00500a10_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500a10_t> FUN_00500a10 = {(FUN_00500a10_t)0x00500a10};
typedef uint32_t (BEA_THISCALL* FUN_00500ac0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500ac0_t> FUN_00500ac0 = {(FUN_00500ac0_t)0x00500ac0};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};
typedef float10 (BEA_CDECL* FUN_0055eb3d_t)(double);
static const bea_guard<FUN_0055eb3d_t> FUN_0055eb3d = {(FUN_0055eb3d_t)0x0055eb3d};

static void BEA_THISCALL ap_00554750(void * this_, float param_1, float param_2, undefined4 param_3, undefined4 param_4, float param_5, int param_6)
{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  float &local_fc = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xfc);
  int &local_f8 = *reinterpret_cast<int *>(bea_frame_ + 0x100 - 0xf8);
  float &local_f0 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xf0);
  float &local_e8 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xe8);
  float &local_e4 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xe4);
  undefined4 &local_e0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x100 - 0xe0);
  undefined4 &local_dc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x100 - 0xdc);
  int &local_d8 = *reinterpret_cast<int *>(bea_frame_ + 0x100 - 0xd8);
  float &local_d4 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xd4);
  int &local_d0 = *reinterpret_cast<int *>(bea_frame_ + 0x100 - 0xd0);
  short &local_cc = *reinterpret_cast<short *>(bea_frame_ + 0x100 - 0xcc);
  short &local_ca = *reinterpret_cast<short *>(bea_frame_ + 0x100 - 0xca);
  short &local_c8 = *reinterpret_cast<short *>(bea_frame_ + 0x100 - 0xc8);
  short &local_c6 = *reinterpret_cast<short *>(bea_frame_ + 0x100 - 0xc6);
  short &local_c4 = *reinterpret_cast<short *>(bea_frame_ + 0x100 - 0xc4);
  short &local_c2 = *reinterpret_cast<short *>(bea_frame_ + 0x100 - 0xc2);
  float &local_c0 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xc0);
  float &local_bc = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xbc);
  undefined4 &local_b8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x100 - 0xb8);
  undefined4 &local_b4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x100 - 0xb4);
  float &local_b0 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xb0);
  float &local_ac = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xac);
  undefined4 &local_a8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x100 - 0xa8);
  undefined4 &local_a4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x100 - 0xa4);
  float &local_a0 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0xa0);
  float &local_9c = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x9c);
  undefined4 &local_98 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x100 - 0x98);
  undefined4 &local_94 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x100 - 0x94);
  float &local_90 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x90);
  float &local_8c = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x88);
  uint &local_78 = *reinterpret_cast<uint *>(bea_frame_ + 0x100 - 0x78);
  float &local_74 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x74);
  float &local_70 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x70);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x6c);
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x68);
  float &local_64 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x64);
  uint &local_54 = *reinterpret_cast<uint *>(bea_frame_ + 0x100 - 0x54);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x48);
  float &local_44 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x44);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x40);
  uint &local_30 = *reinterpret_cast<uint *>(bea_frame_ + 0x100 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x28);
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x24);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x1c);
  uint &local_c = *reinterpret_cast<uint *>(bea_frame_ + 0x100 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x8);
  float &local_4 = *reinterpret_cast<float *>(bea_frame_ + 0x100 - 0x4);
  if (DAT_0089d680 == '\0') {
    if (2.0f < param_5) {
      param_5 = 2.0f;
    }
    uVar4 = (DAT_006fbe54 & 0xfefefe) + (DAT_006fbe44 & 0xfefefe);
    iVar5 = 0xff - param_6;
    local_fc = 1.0f;
    uVar4 = (((int)((uVar4 >> 0x11) * iVar5 | 0xff0000) >> 8) << 8 |
            (int)((uVar4 >> 9 & 0xff) * iVar5) >> 8) << 8 | (int)((uVar4 >> 1 & 0xff) * iVar5) >> 8;
    if (1.0f < param_5) {
      local_fc = param_5;
    }
    if (*(float *)((int)this_ + 0x594) <= 0.0f) {
      fVar6 = (float10)FUN_0055dfe7((double)((param_1 - param_5 * 0.5f) - local_fc));
      local_f8 = (int)(longlong)ROUND(fVar6);
      iVar5 = local_f8;
      fVar6 = (float10)FUN_0055eb3d((double)(param_1 + local_fc + param_5));
      local_f8 = (int)(longlong)ROUND(fVar6);
      local_d8 = local_f8;
    }
    else {
      fVar6 = (float10)FUN_0055dfe7((double)((param_1 - param_5) - local_fc));
      local_f8 = (int)(longlong)ROUND(fVar6);
      iVar5 = local_f8;
      fVar6 = (float10)FUN_0055eb3d((double)(param_5 * 0.5f + param_1 + local_fc));
      local_f8 = (int)(longlong)ROUND(fVar6);
      local_d8 = local_f8;
    }
    local_f0 = param_5 * 0.5f;
    if (*(float *)((int)this_ + 0x598) <= 0.0f) {
      fVar6 = (float10)FUN_0055dfe7((double)((param_2 - local_f0) - local_fc));
      local_f8 = (int)(longlong)ROUND(fVar6);
      local_d0 = local_f8;
      fVar6 = (float10)FUN_0055eb3d((double)(param_2 + local_fc + param_5));
      local_f8 = (int)(longlong)ROUND(fVar6);
    }
    else {
      fVar6 = (float10)FUN_0055dfe7((double)((param_2 - param_5) - local_fc));
      local_f8 = (int)(longlong)ROUND(fVar6);
      local_d0 = local_f8;
      fVar6 = (float10)FUN_0055eb3d((double)(local_f0 + param_2 + local_fc));
      local_f8 = (int)(longlong)ROUND(fVar6);
    }
    local_fc = (float)iVar5;
    if (iVar5 < local_d8) {
      do {
        if (local_d0 < local_f8) {
          fVar1 = (float)(int)local_fc;
          local_98 = 0;
          local_b8 = 0;
          local_a8 = 0;
          local_d4 = fVar1 + 1.0f;
          iVar5 = local_d0;
          do {
            fVar2 = (float)iVar5;
            local_e0 = 0;
            local_88 = 0.0f;
            local_e8 = fVar1;
            local_e4 = fVar2;
            local_90 = fVar1;
            local_8c = fVar2;
            local_78 = uVar4;
            fVar6 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&local_e8));
            local_88 = (float)(fVar6 - (float10)0.01f);
            fVar3 = 1.0f - ((local_90 - param_1) * *(float *)((int)this_ + 0x594) +
                          (local_8c - param_2) * *(float *)((int)this_ + 0x598)) * 0.5f;
            if (fVar3 < 1.0f) {
              fVar3 = 1.0f;
            }
            fVar3 = fVar3 * param_5 + fVar3 * param_5;
            local_e0 = local_98;
            local_64 = 0.0f;
            local_74 = (local_90 - param_1) / fVar3 + 0.5f;
            local_70 = (local_8c - param_2) / fVar3 + 0.5f;
            local_a0 = local_d4;
            local_6c = local_d4;
            local_e8 = local_d4;
            local_dc = local_94;
            local_e4 = fVar2;
            local_9c = fVar2;
            local_68 = fVar2;
            local_54 = uVar4;
            fVar6 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&local_e8));
            local_64 = (float)(fVar6 - (float10)0.01f);
            fVar3 = 1.0f - ((local_6c - param_1) * *(float *)((int)this_ + 0x594) +
                          (local_68 - param_2) * *(float *)((int)this_ + 0x598)) * 0.5f;
            if (fVar3 < 1.0f) {
              fVar3 = 1.0f;
            }
            local_e0 = local_b8;
            fVar3 = fVar3 * param_5 + fVar3 * param_5;
            local_40 = 0.0f;
            local_50 = (local_6c - param_1) / fVar3 + 0.5f;
            local_4c = (local_68 - param_2) / fVar3 + 0.5f;
            local_c0 = local_d4;
            fVar2 = fVar2 + 1.0f;
            local_e8 = local_d4;
            local_dc = local_b4;
            local_48 = local_d4;
            local_e4 = fVar2;
            local_bc = fVar2;
            local_44 = fVar2;
            local_30 = uVar4;
            fVar6 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&local_e8));
            local_40 = (float)(fVar6 - (float10)0.01f);
            fVar3 = 1.0f - ((local_48 - param_1) * *(float *)((int)this_ + 0x594) +
                          (local_68 - param_2) * *(float *)((int)this_ + 0x598)) * 0.5f;
            if (fVar3 < 1.0f) {
              fVar3 = 1.0f;
            }
            fVar3 = fVar3 * param_5 + fVar3 * param_5;
            local_e0 = local_a8;
            local_1c = 0.0f;
            local_2c = (local_48 - param_1) / fVar3 + 0.5f;
            local_28 = (local_44 - param_2) / fVar3 + 0.5f;
            local_dc = local_a4;
            local_e8 = fVar1;
            local_e4 = fVar2;
            local_b0 = fVar1;
            local_ac = fVar2;
            local_24 = fVar1;
            local_20 = fVar2;
            local_c = uVar4;
            fVar6 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&local_e8));
            local_1c = (float)(fVar6 - (float10)0.01f);
            fVar2 = 1.0f - ((local_24 - param_1) * *(float *)((int)this_ + 0x594) +
                          (local_68 - param_2) * *(float *)((int)this_ + 0x598)) * 0.5f;
            if (fVar2 < 1.0f) {
              fVar2 = 1.0f;
            }
            fVar2 = fVar2 * param_5 + fVar2 * param_5;
            local_8 = (local_24 - param_1) / fVar2 + 0.5f;
            local_4 = (local_20 - param_2) / fVar2 + 0.5f;
            local_c8 = FUN_00500a10(bea_arg(*(void **)((int)this_ + 0x5b8)), bea_arg(&local_90), bea_arg(4));
            local_cc = local_c8 + 2;
            local_ca = local_c8 + 1;
            local_c4 = local_c8 + 3;
            local_c6 = local_c8;
            local_c2 = local_cc;
            FUN_00500ac0(bea_arg(*(void **)((int)this_ + 0x5b8)), bea_arg(&local_cc), bea_arg(6));
            iVar5 = iVar5 + 1;
          } while (BEA_LOOP_GUARD((iVar5 < local_f8)));
        }
        local_fc = (float)((int)local_fc + 1);
      } while (BEA_LOOP_GUARD(((int)local_fc < local_d8)));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00554750, ap_00554750));
