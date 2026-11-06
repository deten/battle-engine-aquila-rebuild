// auto-ported from 004e8100_FUN_004e8100.c (FUN_004e8100, 199 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef int * (BEA_STDCALL* FUN_00477cb0_t)(uint32_t);
static const bea_guard<FUN_00477cb0_t> FUN_00477cb0 = {(FUN_00477cb0_t)0x00477cb0};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static uint32_t BEA_THISCALL ap_004e8100(void * this_)
{
  undefined4 uVar1;
  uint uVar2;
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  void * &local_4 = *reinterpret_cast<void * *>(bea_frame_ + 0x10 - 0x4);
  local_4 = this_;
  if ((*(int *)((int)this_ + 0x114) != 0) && (*(int *)((int)this_ + 0x120) != 1)) {
    if (*(int *)((int)this_ + 0xc4) == 0) {
      *(undefined4 *)((int)this_ + 0xcc) = 0;
    }
    if (*(int *)((int)this_ + 0xcc) == 0) {
      uVar1 = 0;
      if ((*(int *)((int)this_ + 0x7c) == 1) || (*(int *)((int)this_ + 0x7c) == 0)) {
        uVar1 = FUN_00477cb0(bea_arg(this_));
      }
      FUN_00401000(bea_arg((void *)((int)this_ + 0xc4)), bea_arg(uVar1));
      *(undefined4 *)((int)this_ + 0xcc) = 0;
    }
  }
  uVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar2 = uVar2 & 0x8000ffff;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xffff0000) + 1;
  }
  local_4 = (void *)(uintptr_t)bea_piece32(((float)(int)uVar2 * 3.0517578e-05f + 2.0f + DAT_00672fd0));
  return FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(4000), bea_arg(this_), bea_arg(&local_4), bea_arg(0), bea_arg(0), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e8100, ap_004e8100));
