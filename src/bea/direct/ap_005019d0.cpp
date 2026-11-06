// auto-ported from 005019d0_FUN_005019d0.c (FUN_005019d0, 57 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x130: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00888c8c GLOBAL_AT(int, 0x00888c8c)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_00854e6c GLOBAL_AT(char, 0x00854e6c)

static void BEA_CDECL ap_005019d0(void)
{
  alignas(16) uint8_t bea_frame_[0x130] = {};   // the original stack frame (emulate_frame)

  undefined1 (&local_130)[188] = *reinterpret_cast<undefined1 (*)[188]>(bea_frame_ + 0x130 - 0x130);
  uint &uStack_74 = *reinterpret_cast<uint *>(bea_frame_ + 0x130 - 0x74);
  if (DAT_00888c8c != 0) {
    bea_vcall<uint32_t>(DAT_00888a50, 0x1c, DAT_00888a50,local_130);
    DAT_00854e6c = uStack_74 < 0xfffe0101;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005019d0, ap_005019d0));
