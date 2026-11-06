// auto-ported from 00542ee0_FUN_00542ee0.c (FUN_00542ee0, 170 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00542ee0(void * this_, float param_1)
{
  float10 fVar1;
  float10 fVar2;
  undefined4 local_4 = 0;
  
  fVar1 = bea_fcast<float10>(fcos(bea_fcast<float10>(param_1)));
  fVar2 = bea_fcast<float10>(fsin(bea_fcast<float10>(param_1)));
  *(float *)this_ = bea_fcast<float>(fVar1);
  *(float *)((int)this_ + 4) = bea_fcast<float>(-fVar2);
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = local_4;
  *(float *)((int)this_ + 0x10) = bea_fcast<float>(fVar2);
  *(float *)((int)this_ + 0x14) = bea_fcast<float>(fVar1);
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = local_4;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x28) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x2c) = local_4;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00542ee0, ap_00542ee0));
