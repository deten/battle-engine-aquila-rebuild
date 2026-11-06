// auto-ported from 00428b50_FUN_00428b50.c (FUN_00428b50, 105 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};

static void BEA_THISCALL ap_00428b50(void * this_, int *param_1, undefined4 param_2)
{
  float10 fVar1;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x40 - 0x40);
  undefined1 (&local_30)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x40 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x2c);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x1c);
  FUN_00401000(bea_arg((void *)((int)this_ + 0x26c)), bea_arg(param_1));
  *(undefined4 *)((int)this_ + 0x270) = param_2;
  if (param_1 != (int *)0x0) {
    bea_vcall<uint32_t>(param_1, 0x160, 0x14,param_2,local_40,local_30);
    fVar1 = bea_fcast<float10>(fpatan(bea_fcast<float10>(fStack_2c),bea_fcast<float10>(fStack_1c)));
    *(float *)((int)this_ + 0x274) = bea_fcast<float>((-fVar1 - bea_fcast<float10>(bea_fcast<float>(param_1[0x45]))));
    if ((param_1[0xd] & 0x100000U) != 0) {
      *(uint *)((int)this_ + 0x34) = *(uint *)((int)this_ + 0x34) | 0x100000;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00428b50, ap_00428b50));
