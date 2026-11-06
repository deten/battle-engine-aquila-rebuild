// auto-ported from 00423910_FUN_00423910.c (FUN_00423910, 65 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static uint BEA_THISCALL ap_00423910(void * this_)
{
  int iVar1;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  void * &local_4 = *reinterpret_cast<void * *>(bea_frame_ + 0x10 - 0x4);
  *(undefined4 *)((int)this_ + 8) = 0;
  local_4 = this_;
  iVar1 = FUN_00548570(bea_arg(*(void **)((int)this_ + 4)), bea_arg(&local_4), bea_arg(4));
  if (iVar1 < 4) {
    return 0;
  }
  iVar1 = FUN_00548570(bea_arg(*(void **)((int)this_ + 4)), bea_arg(this_), bea_arg(4));
  return (uint)local_4 & (iVar1 < 4) - 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00423910, ap_00423910));
