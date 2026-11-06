// auto-ported from 0050d4c0_FUN_0050d4c0.c (FUN_0050d4c0, 183 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_CDECL* FUN_0040f180_t)(uint32_t);
static const bea_guard<FUN_0040f180_t> FUN_0040f180 = {(FUN_0040f180_t)0x0040f180};
typedef uint32_t (BEA_CDECL* FUN_0040f260_t)(uint32_t);
static const bea_guard<FUN_0040f260_t> FUN_0040f260 = {(FUN_0040f260_t)0x0040f260};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static void BEA_THISCALL ap_0050d4c0(void * this_, void *param_1, int param_2)
{
  void *this_00;
  int iVar1;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x14);
  undefined1 (&local_10)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x20 - 0x10);
  undefined1 (&local_c)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x20 - 0xc);
  undefined1 (&local_8)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x20 - 0x8);
  undefined1 (&local_4)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x20 - 0x4);
  this_00 = param_1;
  FUN_00548570(bea_arg(param_1), bea_arg(&param_1), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(local_10), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(local_c), bea_arg(4));
  iVar1 = param_2;
  if (param_2 == 0) {
    FUN_0040f180(bea_arg(this_00));
  }
  else {
    FUN_0040f260(bea_arg(this_00));
  }
  if (1 < (int)param_1) {
    FUN_00548570(bea_arg(this_00), bea_arg(&param_2), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(local_8), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(local_4), bea_arg(4));
  }
  local_14 = 0;
  if (2 < (int)param_1) {
    FUN_00548570(bea_arg(this_00), bea_arg(&local_14), bea_arg(4));
  }
  if (iVar1 == 0) {
    *(undefined4 *)((int)this_ + 0x27c) = local_14;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050d4c0, ap_0050d4c0));
