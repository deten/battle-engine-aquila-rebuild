// auto-ported from 004f68e0_vslot40.c (CTree::vslot40, 199 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CTree;
typedef uint32_t (BEA_THISCALL* FUN_004f69b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f69b0_t> FUN_004f69b0 = {(FUN_004f69b0_t)0x004f69b0};

static void BEA_THISCALL ap_004f68e0(CTree * this_, float param_1, int param_2, undefined4 param_3, undefined4 param_4)
{
  float fVar1;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0x8);
  if (((*(int *)(this_ + 0x48) == 0) && (*(float *)(this_ + 0x44) != 0.0f)) &&
     (fVar1 = *(float *)(this_ + 0x44), *(float *)(this_ + 0x44) = fVar1 - param_1,
     fVar1 - param_1 <= 0.0f)) {
    *(undefined4 *)(this_ + 0x44) = 0;
    local_10 = *(float *)(this_ + 0x1c) - *(float *)(param_2 + 0x1c);
    local_c = *(float *)(this_ + 0x20) - *(float *)(param_2 + 0x20);
    local_8 = *(float *)(this_ + 0x24) - *(float *)(param_2 + 0x24);
    fVar1 = SQRT(local_c * local_c + local_8 * local_8 + local_10 * local_10);
    if (fVar1 != 0.0f) {
      fVar1 = 1.0f / fVar1;
      local_10 = local_10 * fVar1;
      local_c = local_c * fVar1;
      local_8 = local_8 * fVar1;
    }
    FUN_004f69b0(bea_arg(this_), bea_arg(&local_10));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f68e0, ap_004f68e0));
