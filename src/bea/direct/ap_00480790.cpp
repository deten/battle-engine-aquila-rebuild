// auto-ported from 00480790_vslot3.c (CHiveBossGuide::vslot3, 370 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char CHiveBossGuide;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static uint32_t BEA_THISCALL ap_00480790(CHiveBossGuide * this_)
{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x18);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  iVar1 = *(int *)(this_ + 0x18);
  local_10 = *(float *)(iVar1 + 0x1c);
  local_c = *(float *)(iVar1 + 0x20);
  local_8 = *(float *)(iVar1 + 0x24);
  local_4 = *(undefined4 *)(iVar1 + 0x28);
  local_20 = 0.0f;
  local_1c = 0.0f;
  local_18 = 0.0f;
  fVar3 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&local_10)));
  piVar2 = *(int **)(this_ + 0x18);
  fVar3 = (fVar3 - bea_fcast<float10>(bea_fcast<float>(piVar2[0x9a]))) - bea_fcast<float10>(local_8);
  if (*(float *)(this_ + 0x28) <= ABS(*(float *)(this_ + 0x10) - local_8)) {
    if (*(float *)(this_ + 0x10) <= local_8) {
      local_18 = -*(float *)(this_ + 0x28);
    }
    else if (bea_fcast<float10>(*(float *)(this_ + 0x28)) <= fVar3) {
      local_18 = *(float *)(this_ + 0x28);
    }
    else {
      local_18 = bea_fcast<float>(fVar3);
    }
  }
  else {
    local_18 = 0.0f;
  }
  if (*(float *)(this_ + 0x20) <= ABS(*(float *)(this_ + 8) - local_10)) {
    if (*(float *)(this_ + 8) <= local_10) {
      local_20 = -*(float *)(this_ + 0x20);
    }
    else {
      local_20 = *(float *)(this_ + 0x20);
    }
  }
  else {
    local_20 = 0.0f;
  }
  if (*(float *)(this_ + 0x24) <= ABS(*(float *)(this_ + 0xc) - local_c)) {
    if (*(float *)(this_ + 0xc) <= local_c) {
      local_1c = -*(float *)(this_ + 0x24);
    }
    else {
      local_1c = *(float *)(this_ + 0x24);
    }
  }
  else {
    local_1c = 0.0f;
  }
  if (fVar3 < bea_fcast<float10>(0.0f)) {
    if (fVar3 < bea_fcast<float10>(-*(float *)(this_ + 0x28))) {
      fVar3 = bea_fcast<float10>(-*(float *)(this_ + 0x28));
    }
    local_18 = bea_fcast<float>(fVar3);
    return bea_vcall<uint32_t>(piVar2, 0x70, &local_20);
  }
  return bea_vcall<uint32_t>(piVar2, 0x70, &local_20);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00480790, ap_00480790));
