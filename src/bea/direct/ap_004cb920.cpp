// auto-ported from 004cb920_FUN_004cb920.c (FUN_004cb920, 266 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Vec3;
#define DAT_009c63f8 GLOBAL_AT(float, 0x009c63f8)
#define DAT_009c63fc GLOBAL_AT(int, 0x009c63fc)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef int (BEA_THISCALL* FUN_004cae50_t)(uint32_t);
static const bea_guard<FUN_004cae50_t> FUN_004cae50 = {(FUN_004cae50_t)0x004cae50};

static void BEA_THISCALL ap_004cb920(void * this_, void *param_1)
{
  uint uVar1;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0x8);
  if (-1.0f < *(float *)((int)param_1 + 0x60)) {
    *(float *)((int)param_1 + 0x60) = *(float *)((int)param_1 + 0x60) - DAT_009c63f8;
  }
  FUN_00401ec0(bea_arg(&local_10), bea_arg(DAT_009c63f8 * *(float *)((int)param_1 + 0x48)), bea_arg(DAT_009c63f8 * *(float *)((int)param_1 + 0x4c)), bea_arg(DAT_009c63f8 * *(float *)((int)param_1 + 0x50)));
  *(float *)((int)param_1 + 0x38) = local_10 + *(float *)((int)param_1 + 0x38);
  *(float *)((int)param_1 + 0x3c) = local_c + *(float *)((int)param_1 + 0x3c);
  *(float *)((int)param_1 + 0x40) = local_8 + *(float *)((int)param_1 + 0x40);
  if (*(int *)((int)param_1 + 0x58) != 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0x58) + 0xa4) = 1;
    *(void **)(*(int *)((int)param_1 + 0x58) + 0xa8) = param_1;
  }
  if (((DAT_009c63fc == 0) || (*(float *)((int)param_1 + 0x60) <= -2.0f)) ||
     (0.0f <= *(float *)((int)param_1 + 0x60))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(uint *)((int)param_1 + 100) = *(uint *)((int)param_1 + 100) | uVar1;
  bea_vcall<uint32_t>(*(int **)((int)param_1 + 0x5c), 0x28, param_1);
  if (*(int *)((int)param_1 + 100) != 0) {
    if (*(int *)((int)param_1 + 0x6c) == 0) {
      *(undefined4 *)this_ = *(undefined4 *)((int)param_1 + 0x68);
    }
    else {
      *(undefined4 *)(*(int *)((int)param_1 + 0x6c) + 0x68) = *(undefined4 *)((int)param_1 + 0x68);
    }
    if (*(int *)((int)param_1 + 0x68) != 0) {
      *(undefined4 *)(*(int *)((int)param_1 + 0x68) + 0x6c) = *(undefined4 *)((int)param_1 + 0x6c);
    }
    FUN_004cae50(bea_arg(param_1));
    *(undefined4 *)((int)param_1 + 0x68) = *(undefined4 *)((int)this_ + 8);
    *(void **)((int)this_ + 8) = param_1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cb920, ap_004cb920));
