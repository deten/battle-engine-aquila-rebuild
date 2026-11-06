// auto-ported from 0040e860_FUN_0040e860.c (FUN_0040e860, 128 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define PTR_DAT_006234fc GLOBAL_AT(void*, 0x006234fc)

static void BEA_THISCALL ap_0040e860(void * this_, float *param_1, undefined4 param_2)
{
  float fVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x40 - 0x40);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x40 - 0x30);
  if (*(int **)((int)this_ + 0x528) != (int *)0x0) {
    piVar3 = (int *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x528), 0x10);
    bea_vcall<uint32_t>(piVar3, 0x1c, &PTR_DAT_006234fc,1,param_1,auStack_30,0,1);
  }
  pfVar4 = (float *)bea_vcall<uint32_t>(this_, 0x6c, local_40);
  fVar1 = pfVar4[1];
  fVar2 = pfVar4[2];
  *param_1 = *pfVar4 * 0.5f + *param_1;
  param_1[1] = fVar1 * 0.5f + param_1[1];
  param_1[2] = fVar2 * 0.5f + param_1[2];
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040e860, ap_0040e860));
