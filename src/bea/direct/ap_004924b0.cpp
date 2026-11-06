// auto-ported from 004924b0_FUN_004924b0.c (FUN_004924b0, 229 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00492670_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00492670_t> FUN_00492670 = {(FUN_00492670_t)0x00492670};

static undefined4 BEA_THISCALL ap_004924b0(void * this_)
{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_8)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0x10 - 0x8);
  *(int *)((int)this_ + 0x34) = *(int *)((int)this_ + 0x34) + 1;
  *(undefined2 *)((int)this_ + 0x5c) = *(undefined2 *)((int)this_ + 0x88);
  *(undefined2 *)((int)this_ + 0x5e) = *(undefined2 *)((int)this_ + 0x8a);
  *(undefined4 *)((int)this_ + 0x60) = *(undefined4 *)((int)this_ + 0x8c);
  if (*(int *)((int)this_ + 0x34) == 1) {
    if (*(int *)((int)this_ + 0x68) == 0) {
      *(short *)((int)this_ + 0x5c) = *(short *)((int)this_ + 0x5c) + -1;
    }
    else {
      *(short *)((int)this_ + 0x5e) = *(short *)((int)this_ + 0x5e) + 1;
    }
  }
  if (*(int *)((int)this_ + 0x34) == 2) {
    if (*(int *)((int)this_ + 0x68) == 0) {
      *(short *)((int)this_ + 0x5c) = *(short *)((int)this_ + 0x5c) + 1;
    }
    else {
      *(short *)((int)this_ + 0x5e) = *(short *)((int)this_ + 0x5e) + -1;
    }
  }
  if (*(int *)((int)this_ + 0x34) == 3) {
    iVar3 = *(int *)((int)this_ + 0x58) + 1;
    *(int *)((int)this_ + 0x58) = iVar3;
    if (*(int *)((int)this_ + 0x74) < iVar3) {
      return 0;
    }
    *(float *)((int)this_ + 0x78) = *(float *)((int)this_ + 0x6c) + *(float *)((int)this_ + 0x78);
    *(float *)((int)this_ + 0x7c) = *(float *)((int)this_ + 0x70) + *(float *)((int)this_ + 0x7c);
    puVar2 = (undefined2 *)
             FUN_00492670(bea_arg(this_), bea_arg(local_8), bea_arg((float *)((int)this_ + 0x78)), bea_arg(*(undefined4 *)((int)this_ + 0x24)));
    uVar1 = *puVar2;
    *(undefined2 *)((int)this_ + 0x88) = uVar1;
    *(undefined2 *)((int)this_ + 0x8a) = puVar2[1];
    *(undefined4 *)((int)this_ + 0x8c) = *(undefined4 *)(puVar2 + 2);
    *(undefined2 *)((int)this_ + 0x5c) = uVar1;
    *(undefined2 *)((int)this_ + 0x5e) = *(undefined2 *)((int)this_ + 0x8a);
    *(undefined4 *)((int)this_ + 0x60) = *(undefined4 *)((int)this_ + 0x8c);
    *(undefined4 *)((int)this_ + 0x34) = 0;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004924b0, ap_004924b0));
