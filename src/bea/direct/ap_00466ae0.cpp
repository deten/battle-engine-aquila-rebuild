// auto-ported from 00466ae0_FUN_00466ae0.c (FUN_00466ae0, 177 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (34 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00466ae0(void * this_, int param_1, int param_2)
{
  if (*(int *)((int)this_ + 0x1f8) == -1) {
    *(undefined4 *)((int)this_ + 0x1f8) = *(undefined4 *)((int)this_ + 0x1fc);
  }
  if (param_2 == 0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + *(int *)((int)this_ + 0x1f8) * 4 + 0x214), 0x20);
    bea_vcall<uint32_t>(*(int **)((int)this_ + param_1 * 4 + 0x214), 0x18, *(undefined4 *)((int)this_ + 0x1f8));
    bea_vcall<uint32_t>(*(int **)((int)this_ + param_1 * 4 + 0x214), 0x1c, *(undefined4 *)((int)this_ + 0x1f8));
    *(int *)((int)this_ + 0x1f8) = param_1;
    return;
  }
  *(undefined4 *)((int)this_ + 0x204) = 0;
  *(undefined4 *)((int)this_ + 0x1fc) = *(undefined4 *)((int)this_ + 0x1f8);
  *(int *)((int)this_ + 0x200) = param_1;
  *(undefined4 *)((int)this_ + 0x1f8) = 0xffffffff;
  *(float *)((int)this_ + 0x208) = (float)param_2;
  bea_vcall<uint32_t>(*(int **)((int)this_ + param_1 * 4 + 0x214), 0x18, *(undefined4 *)((int)this_ + 0x1fc));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00466ae0, ap_00466ae0));
