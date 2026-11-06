// auto-ported from 004d2b40_FUN_004d2b40.c (FUN_004d2b40, 109 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008a9d58 GLOBAL_AT(int, 0x008a9d58)

static void BEA_THISCALL ap_004d2b40(void * this_, undefined4 *param_1)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x4);
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if (*(int **)(&DAT_008a9d58 + *(int *)((int)this_ + 0x2c) * 4) == (int *)0x0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    puVar1 = (undefined4 *)
             bea_vcall<uint32_t>(*(int **)(&DAT_008a9d58 + *(int *)((int)this_ + 0x2c) * 4), 0x8, &local_10);
    uVar4 = *puVar1;
    uVar3 = puVar1[1];
    uVar2 = puVar1[2];
    local_4 = puVar1[3];
  }
  *param_1 = uVar4;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = local_4;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d2b40, ap_004d2b40));
