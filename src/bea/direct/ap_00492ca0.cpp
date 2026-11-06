// auto-ported from 00492ca0_FUN_00492ca0.c (FUN_00492ca0, 137 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
typedef uint32_t (BEA_THISCALL* FUN_00491cd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00491cd0_t> FUN_00491cd0 = {(FUN_00491cd0_t)0x00491cd0};
typedef uint32_t (BEA_THISCALL* FUN_00491d20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00491d20_t> FUN_00491d20 = {(FUN_00491d20_t)0x00491d20};
typedef uint32_t (BEA_THISCALL* FUN_00492670_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00492670_t> FUN_00492670 = {(FUN_00492670_t)0x00492670};

static undefined4 BEA_THISCALL ap_00492ca0(void * this_, undefined4 param_1)
{
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)

  short &local_8 = *reinterpret_cast<short *>(bea_frame_ + 0x10 - 0x8);
  short &local_6 = *reinterpret_cast<short *>(bea_frame_ + 0x10 - 0x6);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x4);
  FUN_00492670(bea_arg(&DAT_00704200), bea_arg(&local_8), bea_arg(param_1), bea_arg(*(undefined4 *)((int)this_ + 0xc)));
  if (((*(short *)((int)this_ + 8) == local_8) && (*(short *)((int)this_ + 10) == local_6)) &&
     (*(int *)((int)this_ + 0xc) == local_4)) {
    return 0;
  }
  if (*(int *)((int)this_ + 0xc) != -1) {
    FUN_00491d20(bea_arg(&DAT_00704200), bea_arg(this_));
  }
  *(short *)((int)this_ + 10) = local_6;
  *(short *)((int)this_ + 8) = local_8;
  *(int *)((int)this_ + 0xc) = local_4;
  FUN_00491cd0(bea_arg(&DAT_00704200), bea_arg(this_));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00492ca0, ap_00492ca0));
