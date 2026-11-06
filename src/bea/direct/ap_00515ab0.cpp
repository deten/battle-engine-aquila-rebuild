// auto-ported from 00515ab0_FUN_00515ab0.c (FUN_00515ab0, 73 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static uint32_t BEA_STDCALL ap_00515ab0(undefined4 *param_1)
{
  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)

  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  local_c = param_1[1];
  local_10 = *param_1;
  local_14 = param_1[3];
  local_18 = param_1[2];
  local_4 = param_1[5];
  local_8 = param_1[4];
  return bea_vcall<uint32_t>(DAT_00888a50, 0xbc, DAT_00888a50,&local_18);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00515ab0, ap_00515ab0));
