// auto-ported from 0048b660_FUN_0048b660.c (FUN_0048b660, 365 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static void BEA_STDCALL ap_0048b660(void *param_1)
{
  void *this_local;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  int &local_18 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x18);
  uint &local_14 = *reinterpret_cast<uint *>(bea_frame_ + 0x20 - 0x14);
  undefined1 (&local_10)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x20 - 0x10);
  undefined1 (&local_c)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x20 - 0xc);
  undefined1 (&local_8)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x20 - 0x8);
  undefined1 (&local_4)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x20 - 0x4);
  this_local = param_1;
  FUN_00548570(bea_arg(param_1), bea_arg(&local_14), bea_arg(2));
  if ((local_14 & 0xffff) == 0) {
    FUN_00548570(bea_arg(this_local), bea_arg(&param_1), bea_arg(4));
    for (; BEA_LOOP_GUARD((param_1 != (void *)0x0)); param_1 = (void *)((int)param_1 + -1)) {
      FUN_00548570(bea_arg(this_local), bea_arg(local_4), bea_arg(4));
      FUN_00548570(bea_arg(this_local), bea_arg(local_8), bea_arg(4));
      FUN_00548570(bea_arg(this_local), bea_arg(local_c), bea_arg(4));
    }
    FUN_00548570(bea_arg(this_local), bea_arg(&local_18), bea_arg(4));
    for (; BEA_LOOP_GUARD((local_18 != 0)); local_18 = local_18 + -1) {
      FUN_00548570(bea_arg(this_local), bea_arg(local_4), bea_arg(4));
      FUN_00548570(bea_arg(this_local), bea_arg(local_8), bea_arg(4));
    }
  }
  else if ((local_14 & 0xffff) == 1) {
    FUN_00548570(bea_arg(this_local), bea_arg(&param_1), bea_arg(4));
    for (; BEA_LOOP_GUARD((param_1 != (void *)0x0)); param_1 = (void *)((int)param_1 + -1)) {
      FUN_00548570(bea_arg(this_local), bea_arg(local_10), bea_arg(4));
      FUN_00548570(bea_arg(this_local), bea_arg(local_c), bea_arg(4));
      FUN_00548570(bea_arg(this_local), bea_arg(local_8), bea_arg(4));
      FUN_00548570(bea_arg(this_local), bea_arg(local_4), bea_arg(4));
    }
    FUN_00548570(bea_arg(this_local), bea_arg(&local_18), bea_arg(4));
    if (local_18 != 0) {
      do {
        FUN_00548570(bea_arg(this_local), bea_arg(local_4), bea_arg(4));
        FUN_00548570(bea_arg(this_local), bea_arg(local_8), bea_arg(4));
        FUN_00548570(bea_arg(this_local), bea_arg(local_c), bea_arg(4));
        local_18 = local_18 + -1;
      } while (BEA_LOOP_GUARD((local_18 != 0)));
      return;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048b660, ap_0048b660));
