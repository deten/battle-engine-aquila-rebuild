// auto-ported from 0044adb0_FUN_0044adb0.c (FUN_0044adb0, 99 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static void * BEA_THISCALL ap_0044adb0(void * this_, int param_1)
{
  float10 fVar1;
  
  fVar1 = _CIasin(bea_fcast<float10>(*(float *)(param_1 + 0x24)));
  *(float *)((int)this_ + 4) = bea_fcast<float>(fVar1);
  if ((fVar1 < bea_fcast<float10>(3.1415927f)) && (bea_fcast<float10>(-3.1415927f) < fVar1)) {
    fVar1 = bea_fcast<float10>(fpatan(-bea_fcast<float10>(*(float *)(param_1 + 4)),bea_fcast<float10>(*(float *)(param_1 + 0x14))));
    *(float *)this_ = bea_fcast<float>(fVar1);
    fVar1 = bea_fcast<float10>(fpatan(-bea_fcast<float10>(*(float *)(param_1 + 0x20)),bea_fcast<float10>(*(float *)(param_1 + 0x28))
                           ));
    *(float *)((int)this_ + 8) = bea_fcast<float>(fVar1);
    return (void *)(this_);
  }
  *(undefined4 *)this_ = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044adb0, ap_0044adb0));
