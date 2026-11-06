// auto-ported from 00420d10_FUN_00420d10.c (FUN_00420d10, 93 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00420d10(void * this_, uint *param_1)
{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (*param_1 ^ *(uint *)this_) & 0xffff ^ *(uint *)this_;
  *(uint *)this_ = uVar3;
  uVar4 = (param_1[1] & 0x7fff) << 0x10;
  *(uint *)this_ = uVar4 | uVar3 & 0x8000ffff;
  uVar1 = param_1[2];
  if (((uVar1 == 0x16) || (uVar1 == 0x15)) || (uVar1 == 0x14)) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
  }
  *(uint *)this_ = (uint)bVar2 << 0x1f | uVar4 | uVar3 & 0xffff;
  return;
}

// @autoport-registration (verified: 3720 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00420d10, ap_00420d10));
