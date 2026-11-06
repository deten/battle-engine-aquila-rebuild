// auto-ported from 004fe4a0_vslot21.c (CUnit::vslot21, 91 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CActor__vslot21_t)(uint32_t, uint32_t);
static const bea_guard<CActor__vslot21_t> CActor__vslot21 = {(CActor__vslot21_t)0x004019b0};
typedef void * (BEA_THISCALL* FUN_0044adb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044adb0_t> FUN_0044adb0 = {(FUN_0044adb0_t)0x0044adb0};

static uint32_t BEA_THISCALL ap_004fe4a0(CUnit * this_, undefined4 param_1)
{
  undefined4 *puVar1;
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_c)[12] = *reinterpret_cast<undefined1 (*)[12]>(bea_frame_ + 0x10 - 0xc);
  puVar1 = (undefined4 *)FUN_0044adb0(bea_arg(local_c), bea_arg(param_1));
  *(undefined4 *)(this_ + 0x114) = *puVar1;
  *(undefined4 *)(this_ + 0x118) = puVar1[1];
  *(undefined4 *)(this_ + 0x11c) = puVar1[2];
  puVar1 = (undefined4 *)FUN_0044adb0(bea_arg(local_c), bea_arg(param_1));
  *(undefined4 *)(this_ + 0x120) = *puVar1;
  *(undefined4 *)(this_ + 0x124) = puVar1[1];
  *(undefined4 *)(this_ + 0x128) = puVar1[2];
  return CActor__vslot21(bea_arg((CActor *)this_), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fe4a0, ap_004fe4a0));
