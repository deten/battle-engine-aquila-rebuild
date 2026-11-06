// auto-ported from 004c5280_FUN_004c5280.c (FUN_004c5280, 166 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit local_14: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit local_24: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 * BEA_THISCALL ap_004c5280(void * this_, undefined4 *param_1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_24 = 0;
  undefined4 local_14;
  undefined4 local_4;
  
  uVar1 = *(undefined4 *)((int)this_ + 8);
  uVar2 = *(undefined4 *)((int)this_ + 0x18);
  uVar3 = *(undefined4 *)((int)this_ + 0x28);
  uVar4 = *(undefined4 *)((int)this_ + 4);
  uVar5 = *(undefined4 *)((int)this_ + 0x14);
  uVar6 = *(undefined4 *)((int)this_ + 0x24);
  uVar7 = *(undefined4 *)((int)this_ + 0x10);
  uVar8 = *(undefined4 *)((int)this_ + 0x20);
  *param_1 = *(undefined4 *)this_;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = local_24;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = local_14;
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = local_4;
  return (undefined4 *)(param_1);
  return (undefined4 *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c5280, ap_004c5280));
