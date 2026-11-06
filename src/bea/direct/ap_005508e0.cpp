// auto-ported from 005508e0_FUN_005508e0.c (FUN_005508e0, 547 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_005508e0(void * this_)
{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 (&local_40)[16] = *reinterpret_cast<undefined4 (*)[16]>(bea_frame_ + 0x40 - 0x40);
  local_40[0xe] = 0;
  local_40[0xd] = 0;
  local_40[0xc] = 0;
  local_40[0xb] = 0;
  local_40[9] = 0;
  local_40[8] = 0;
  local_40[7] = 0;
  local_40[6] = 0;
  local_40[4] = 0;
  local_40[3] = 0;
  local_40[2] = 0;
  local_40[1] = 0;
  local_40[0xf] = 0x3f800000;
  local_40[10] = 0x3f800000;
  local_40[5] = 0x3f800000;
  local_40[0] = 0x3f800000;
  puVar3 = local_40;
  puVar4 = (undefined4 *)((int)this_ + 0x354);
  for (iVar1 = 0x10; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = local_40;
  puVar4 = (undefined4 *)((int)this_ + 0x394);
  for (iVar1 = 0x10; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = local_40;
  puVar4 = (undefined4 *)((int)this_ + 0x3d4);
  for (iVar1 = 0x10; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)((int)this_ + 0xe28) = 1;
  *(undefined1 *)((int)this_ + 0xe29) = 1;
  *(undefined1 *)((int)this_ + 0xe2a) = 1;
  *(undefined4 *)((int)this_ + 0xe24) = 0;
  puVar2 = (undefined1 *)((int)this_ + 0x344);
  do {
    puVar2[-100] = 0;
    *puVar2 = 1;
    puVar2[-8] = 0;
    puVar2 = puVar2 + 1;
  } while (BEA_LOOP_GUARD(((int)(puVar2 + (-0x344 - (int)this_)) < 8)));
  *(undefined1 *)((int)this_ + 0x34c) = 1;
  *(undefined1 *)((int)this_ + 0x2ec) = 1;
  *(undefined1 *)((int)this_ + 0x2ed) = 1;
  *(undefined1 *)((int)this_ + 0xe2b) = 1;
  *(undefined1 *)((int)this_ + 0xe2c) = 1;
  *(undefined1 *)((int)this_ + 0xe2d) = 1;
  *(undefined1 *)((int)this_ + 0xe2e) = 1;
  *(undefined1 *)((int)this_ + 0x34d) = 1;
  *(undefined1 *)((int)this_ + 0x350) = 1;
  *(undefined1 *)((int)this_ + 0x34f) = 1;
  *(undefined4 *)((int)this_ + 0x2e8) = 0xfff00fff;
  *(undefined4 *)((int)this_ + 0xe1c) = 0;
  *(undefined4 *)((int)this_ + 0xe20) = 0x41200000;
  *(undefined4 *)((int)this_ + 0x2f0) = 0x3f800000;
  *(undefined1 *)((int)this_ + 0x34e) = 0;
  *(undefined1 *)((int)this_ + 0x2f4) = 0;
  *(undefined1 *)((int)this_ + 0x2f5) = 0;
  *(undefined4 *)((int)this_ + 800) = 0;
  *(undefined4 *)((int)this_ + 0x324) = 0xffff0000;
  *(undefined4 *)((int)this_ + 0x310) = 0;
  *(undefined1 *)((int)this_ + 0x308) = 0;
  *(undefined4 *)((int)this_ + 0x30c) = 0;
  puVar3 = local_40;
  puVar4 = (undefined4 *)((int)this_ + 0x414);
  for (iVar1 = 0x10; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)((int)this_ + 0x414);
  puVar4 = (undefined4 *)((int)this_ + 0x454);
  for (iVar1 = 0x270; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this_ + 0xe14) = 0;
  *(undefined1 *)((int)this_ + 0xe5c) = 0;
  *(undefined4 *)((int)this_ + 0xe58) = 0;
  *(undefined4 *)((int)this_ + 0xe18) = 0;
  *(undefined1 *)((int)this_ + 0x2f6) = 0;
  *(undefined1 *)((int)this_ + 0x328) = 0;
  *(undefined4 *)((int)this_ + 0x32c) = 0;
  *(undefined4 *)((int)this_ + 0x330) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x334) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0xe34) = 0;
  *(undefined4 *)((int)this_ + 0xe38) = 0;
  *(undefined4 *)((int)this_ + 0xe3c) = 0;
  *(undefined4 *)((int)this_ + 0xe44) = 0;
  *(undefined4 *)((int)this_ + 0xe48) = 0;
  *(undefined4 *)((int)this_ + 0xe4c) = 0;
  *(undefined4 *)((int)this_ + 0xe30) = 0;
  *(undefined4 *)((int)this_ + 0xe54) = 0;
  *(undefined1 *)((int)this_ + 0x31c) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005508e0, ap_005508e0));
