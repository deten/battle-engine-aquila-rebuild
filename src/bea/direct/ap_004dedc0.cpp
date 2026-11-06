// auto-ported from 004dedc0_vslot113.c (CSentinel::vslot113, 56 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CSentinel;
typedef uint32_t (BEA_CDECL* FUN_004b4de0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b4de0_t> FUN_004b4de0 = {(FUN_004b4de0_t)0x004b4de0};

static uint32_t BEA_THISCALL ap_004dedc0(CSentinel * this_, undefined4 param_1)
{
  CSentinel *pCVar1;
  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x30 - 0x30);
  if (this_ == (CSentinel *)0x0) {
    pCVar1 = (CSentinel *)0x0;
  }
  else {
    pCVar1 = this_ + 8;
  }
  return FUN_004b4de0(bea_arg(*(undefined4 *)(this_ + 0x30)), bea_arg(pCVar1), bea_arg(*(undefined4 *)(this_ + 0x220)), bea_arg(param_1), bea_arg(local_30), bea_arg(0), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dedc0, ap_004dedc0));
