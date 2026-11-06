// auto-ported from 0046baf0_FUN_0046baf0.c (FUN_0046baf0, 301 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static void BEA_THISCALL ap_0046baf0(void * this_)
{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 local_4 = 0;
  
  fVar3 = (float10)fcos((float10)(DAT_00672fd0 * 0.2f));
  fVar4 = (float10)fsin((float10)(DAT_00672fd0 * 0.2f));
  *(float *)((int)this_ + 0x14) = (float)fVar3;
  *(float *)((int)this_ + 0x18) = (float)-fVar4;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x20) = local_4;
  *(float *)((int)this_ + 0x24) = (float)fVar4;
  *(float *)((int)this_ + 0x28) = (float)fVar3;
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0x30) = local_4;
  *(undefined4 *)((int)this_ + 0x34) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined4 *)((int)this_ + 0x3c) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x40) = local_4;
  fVar1 = *(float *)((int)this_ + 0x48) * 0.6f;
  if (*(int *)((int)this_ + 0x50) == 0) {
    fVar1 = *(float *)((int)this_ + 0x4c) - fVar1;
    *(float *)((int)this_ + 0x4c) = fVar1;
    if (fVar1 < 0.0f) {
      *(undefined4 *)((int)this_ + 0x4c) = 0;
      iVar2 = *(int *)((int)this_ + 0x54) + -1;
      *(int *)((int)this_ + 0x54) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this_ + 0x54) = 200;
        *(undefined4 *)((int)this_ + 0x50) = 1;
      }
    }
  }
  else {
    fVar1 = fVar1 + *(float *)((int)this_ + 0x4c);
    *(float *)((int)this_ + 0x4c) = fVar1;
    if (1.0f < fVar1) {
      *(undefined4 *)((int)this_ + 0x4c) = 0x3f800000;
      iVar2 = *(int *)((int)this_ + 0x54) + -1;
      *(int *)((int)this_ + 0x54) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this_ + 0x54) = 200;
        *(undefined4 *)((int)this_ + 0x50) = 0;
        return;
      }
    }
  }
  return;
}

// @autoport-registration (verified: 277574 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0046baf0, ap_0046baf0));
