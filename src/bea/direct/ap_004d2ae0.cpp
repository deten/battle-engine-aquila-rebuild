// auto-ported from 004d2ae0_FUN_004d2ae0.c (FUN_004d2ae0, 85 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0082b5c0 GLOBAL_AT(undefined4, 0x0082b5c0)
#define DAT_008a9d58 GLOBAL_AT(int, 0x008a9d58)

static undefined4 * BEA_THISCALL ap_004d2ae0(void * this_, undefined4 *param_1)
{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;

  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  undefined4 (&local_60)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x60 - 0x60);
  undefined1 (&local_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x60 - 0x30);
  iVar3 = *(int *)((int)this_ + 0x2c);
  puVar1 = &DAT_0082b5c0;
  puVar4 = local_60;
  for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  if (*(int **)(((char *)&DAT_008a9d58) + iVar3 * 4) != (int *)0x0) {
    puVar1 = (undefined4 *)bea_vcall<uint32_t>(*(int **)(((char *)&DAT_008a9d58) + iVar3 * 4), 0x4, local_30);
    puVar4 = local_60;
    for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  puVar1 = local_60;
  puVar4 = param_1;
  for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  return (undefined4 *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d2ae0, ap_004d2ae0));
