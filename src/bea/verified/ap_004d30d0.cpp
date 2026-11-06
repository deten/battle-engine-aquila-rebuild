// auto-ported from 004d30d0_FUN_004d30d0.c (FUN_004d30d0, 64 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004d30d0(void * this_, int param_1)
{
  if ((*(uint *)(param_1 + 0x34) & 0x400) != 0) {
    *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + 1;
  }
  if ((*(uint *)(param_1 + 0x34) & 0x20000) != 0) {
    *(int *)((int)this_ + 0xc) = *(int *)((int)this_ + 0xc) + 1;
  }
  if ((*(uint *)(param_1 + 0x34) & 0x40000) != 0) {
    *(int *)((int)this_ + 0x10) = *(int *)((int)this_ + 0x10) + 1;
  }
  if ((*(uint *)(param_1 + 0x34) & 0x4000) != 0) {
    *(int *)((int)this_ + 0x14) = *(int *)((int)this_ + 0x14) + 1;
  }
  if ((*(uint *)(param_1 + 0x34) & 0x800) != 0) {
    *(int *)((int)this_ + 0x18) = *(int *)((int)this_ + 0x18) + 1;
  }
  return;
}

// @autoport-registration (verified: 107 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004d30d0, ap_004d30d0));
