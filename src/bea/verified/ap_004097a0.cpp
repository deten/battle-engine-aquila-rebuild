// auto-ported from 004097a0_FUN_004097a0.c (FUN_004097a0, 211 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax unused (14 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)

static void BEA_THISCALL ap_004097a0(void * this_, undefined4 *param_1)
{
  if (*(int *)((int)this_ + 0x48) == 0x461c4000) {
    *(undefined4 *)((int)this_ + 0x80) = *param_1;
    *(undefined4 *)((int)this_ + 0x84) = param_1[1];
    *(undefined4 *)((int)this_ + 0x88) = param_1[2];
    *(undefined4 *)((int)this_ + 0x8c) = param_1[3];
    *(undefined4 *)((int)this_ + 0x40) = *param_1;
    *(undefined4 *)((int)this_ + 0x44) = param_1[1];
    *(undefined4 *)((int)this_ + 0x48) = param_1[2];
    *(undefined4 *)((int)this_ + 0x4c) = param_1[3];
    *(undefined4 *)this_ = *param_1;
    *(undefined4 *)((int)this_ + 4) = param_1[1];
    *(undefined4 *)((int)this_ + 8) = param_1[2];
    *(undefined4 *)((int)this_ + 0xc) = param_1[3];
    if (*(int *)((int)this_ + 0xac) != -0x40800000) {
      *(undefined4 *)((int)this_ + 0xac) = DAT_00672fd0;
      return;
    }
  }
  else {
    *(undefined4 *)((int)this_ + 0x40) = *(undefined4 *)this_;
    *(undefined4 *)((int)this_ + 0x44) = *(undefined4 *)((int)this_ + 4);
    *(undefined4 *)((int)this_ + 0x48) = *(undefined4 *)((int)this_ + 8);
    *(undefined4 *)((int)this_ + 0x4c) = *(undefined4 *)((int)this_ + 0xc);
    *(undefined4 *)this_ = *param_1;
    *(undefined4 *)((int)this_ + 4) = param_1[1];
    *(undefined4 *)((int)this_ + 8) = param_1[2];
    *(undefined4 *)((int)this_ + 0xc) = param_1[3];
    if (*(int *)((int)this_ + 0xac) != -0x40800000) {
      *(undefined4 *)((int)this_ + 0xac) = DAT_00672fd0;
    }
  }
  return;
}

// @autoport-registration (verified: 2006331 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004097a0, ap_004097a0));
