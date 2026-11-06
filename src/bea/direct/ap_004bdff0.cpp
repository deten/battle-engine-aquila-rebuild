// auto-ported from 004bdff0_FUN_004bdff0.c (FUN_004bdff0, 87 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static void BEA_STDCALL ap_004bdff0(void *param_1)
{
  void *this_local;
  int iVar1;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x4);
  this_local = param_1;
  FUN_00548570(bea_arg(param_1), bea_arg(&local_4), bea_arg(4));
  if (local_4 == 1) {
    iVar1 = 0x8000;
    do {
      FUN_00548570(bea_arg(this_local), bea_arg(&param_1), bea_arg(1));
      iVar1 = iVar1 + -1;
    } while (BEA_LOOP_GUARD((iVar1 != 0)));
  }
  else if (local_4 == 2) {
    iVar1 = 0x2000;
    do {
      FUN_00548570(bea_arg(this_local), bea_arg(&param_1), bea_arg(1));
      iVar1 = iVar1 + -1;
    } while (BEA_LOOP_GUARD((iVar1 != 0)));
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bdff0, ap_004bdff0));
