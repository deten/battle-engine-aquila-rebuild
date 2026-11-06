// auto-ported from 0044a930_FUN_0044a930.c (FUN_0044a930, 144 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 * BEA_THISCALL ap_0044a930(void * this_, undefined4 *param_1)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x38);
  undefined4 (&local_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x40 - 0x30);
  if (*(int *)((int)this_ + 0xc) != -1) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x160, *(undefined4 *)((int)this_ + 0x10),*(int *)((int)this_ + 0xc),&local_40,local_30);
    if (((local_40 != 0.0f) || (fStack_3c != 0.0f)) || (fStack_38 != 0.0f)) {
      puVar2 = local_30;
      puVar3 = param_1;
      for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      return (undefined4 *)(param_1);
    }
  }
  puVar2 = (undefined4 *)(*(int *)((int)this_ + 8) + 0x3c);
  puVar3 = param_1;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (undefined4 *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044a930, ap_0044a930));
