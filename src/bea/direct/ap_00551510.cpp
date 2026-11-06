// auto-ported from 00551510_FUN_00551510.c (FUN_00551510, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define _DAT_009c742c GLOBAL_AT(float, 0x009c742c)

static void BEA_THISCALL ap_00551510(void * this_, undefined4 *param_1)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 (&local_40)[16] = *reinterpret_cast<undefined4 (*)[16]>(bea_frame_ + 0x40 - 0x40);
  puVar2 = (undefined4 *)((int)this_ + 0x3d4);
  puVar3 = local_40;
  for (iVar1 = 0x10; ((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_40;
  puVar3 = param_1;
  for (iVar1 = 0x10; ((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0xe] = bea_piece32(bea_fcast<float>(param_1[0xe]) - (float)*(uint *)((int)this_ + 0xe24) * _DAT_009c742c);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00551510, ap_00551510));
