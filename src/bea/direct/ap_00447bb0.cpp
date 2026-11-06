// auto-ported from 00447bb0_FUN_00447bb0.c (FUN_00447bb0, 401 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x70: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef undefined4 (BEA_THISCALL* FUN_00447d50_t)(uint32_t);
static const bea_guard<FUN_00447d50_t> FUN_00447d50 = {(FUN_00447d50_t)0x00447d50};

static undefined4 * BEA_THISCALL ap_00447bb0(void * this_, undefined4 *param_1)
{
  float fVar1;
  int iVar2;
  uint uVar3;

  alignas(16) uint8_t bea_frame_[0x70] = {};   // the original stack frame (emulate_frame)
  uint &local_64 = *reinterpret_cast<uint *>(bea_frame_ + 0x70 - 0x64);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x54);
  undefined1 (&local_30)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x70 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x2c);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x1c);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0xc);
  if (*(int *)((int)this_ + 0x294) == 0) {
    if (*(int *)((int)this_ + 0x290) == 0) {
      *(float *)((int)this_ + 0x280) = *(float *)((int)this_ + 0x1c) + 0.0f;
      *(undefined4 *)((int)this_ + 0x290) = 1;
      *(float *)((int)this_ + 0x284) = *(float *)((int)this_ + 0x20) + 0.0f;
      *(float *)((int)this_ + 0x288) = *(float *)((int)this_ + 0x24) + 0.0f;
      *(undefined4 *)((int)this_ + 0x28c) = local_54;
    }
    local_64 = 0;
    iVar2 = FUN_00447d50(bea_arg(this_));
    if (iVar2 == 0) {
      do {
        if (7999 < (int)local_64) goto LAB_00447d0c;
        uVar3 = local_64 & 0x8000001f;
        fVar1 = (float)(int)local_64 * 0.03125f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
        }
        FUN_004062d0(bea_arg(local_30), bea_arg((float)(int)uVar3 * 0.19634955f), bea_arg(0), bea_arg(0));
        local_64 = local_64 + 1;
        *(float *)((int)this_ + 0x280) = local_2c * fVar1 + *(float *)((int)this_ + 0x1c);
        *(float *)((int)this_ + 0x284) = local_1c * fVar1 + *(float *)((int)this_ + 0x20);
        *(float *)((int)this_ + 0x288) = local_c * fVar1 + *(float *)((int)this_ + 0x24);
        *(undefined4 *)((int)this_ + 0x28c) = local_54;
        iVar2 = FUN_00447d50(bea_arg(this_));
      } while (BEA_LOOP_GUARD((iVar2 == 0)));
      if (7999 < (int)local_64) {
LAB_00447d0c:
        *(undefined4 *)((int)this_ + 0x290) = 0;
      }
    }
  }
  *param_1 = *(undefined4 *)((int)this_ + 0x280);
  param_1[1] = *(undefined4 *)((int)this_ + 0x284);
  param_1[2] = *(undefined4 *)((int)this_ + 0x288);
  param_1[3] = *(undefined4 *)((int)this_ + 0x28c);
  return (undefined4 *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00447bb0, ap_00447bb0));
