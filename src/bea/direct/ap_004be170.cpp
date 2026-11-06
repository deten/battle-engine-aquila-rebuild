// auto-ported from 004be170_FUN_004be170.c (FUN_004be170, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static uint32_t BEA_CDECL ap_004be170(void *param_1)
{
  void *this_local;
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_10)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x10 - 0x10);
  undefined1 (&local_c)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x10 - 0xc);
  undefined1 (&local_8)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x10 - 0x8);
  undefined1 (&local_4)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x10 - 0x4);
  this_local = param_1;
  FUN_00548570(bea_arg(param_1), bea_arg(&param_1), bea_arg(4));
  FUN_00548570(bea_arg(this_local), bea_arg(local_10), bea_arg(4));
  FUN_00548570(bea_arg(this_local), bea_arg(local_c), bea_arg(4));
  FUN_00548570(bea_arg(this_local), bea_arg(local_8), bea_arg(4));
  return FUN_00548570(bea_arg(this_local), bea_arg(local_4), bea_arg(4));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004be170, ap_004be170));
