// auto-ported from 00517a20_FUN_00517a20.c (FUN_00517a20, 170 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile: the dword at 0x63e2ac copied to esp+0x38 (0x517a2e-0x517a3b) as a 4-byte memcpy
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define s_333__s_data_sounds_sounds__s_pc__0063e2ac ((char*)0x0063e2ac)

static void BEA_THISCALL ap_00517a20(void * this_)
{
  int *piVar1;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x34);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x30);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0xc);
  char (&local_8)[4] = *reinterpret_cast<char (*)[4]>(bea_frame_ + 0x40 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x4);
  if (*(char *)((int)this_ + 4) != '\0') {
    local_40 = 0x40;
    memcpy(local_8, s_333__s_data_sounds_sounds__s_pc__0063e2ac, 4);
    piVar1 = *(int **)((int)this_ + 0x2c4);
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_24 = 0;
    local_20 = 0x3f800000;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0xbf800000;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_c = 0x3f800000;
    local_4 = 0x3f800000;
    if (piVar1 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar1, 0x28, piVar1,&local_40,1);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00517a20, ap_00517a20));
