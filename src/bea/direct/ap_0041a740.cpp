// auto-ported from 0041a740_FUN_0041a740.c (FUN_0041a740, 165 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_006605c8 GLOBAL_AT(int, 0x006605c8)

static void * BEA_THISCALL ap_0041a740(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined ***)((int)this_ + 4) = ((void*)0x005d9388);
  puVar2 = &param_5;
  puVar3 = (undefined4 *)((int)this_ + 0xc);
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined ***)this_ = ((void*)0x005d935c);
  *(undefined4 *)((int)this_ + 0x3c) = param_1;
  *(undefined ***)((int)this_ + 4) = ((void*)0x005d9340);
  *(undefined4 *)((int)this_ + 0x40) = param_2;
  *(undefined4 *)((int)this_ + 0x44) = param_3;
  *(undefined4 *)((int)this_ + 0x48) = param_4;
  *(undefined4 *)((int)this_ + 0x4c) = param_1;
  *(undefined4 *)((int)this_ + 0x50) = param_2;
  *(undefined4 *)((int)this_ + 0x54) = param_3;
  *(undefined4 *)((int)this_ + 0x58) = param_4;
  puVar2 = &param_5;
  puVar3 = (undefined4 *)((int)this_ + 0x5c);
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this_ + 0x8c) = param_1;
  *(undefined4 *)((int)this_ + 0x90) = param_2;
  *(undefined4 *)((int)this_ + 0x94) = param_3;
  *(undefined4 *)((int)this_ + 0x98) = param_4;
  puVar2 = &param_5;
  puVar3 = (undefined4 *)((int)this_ + 0x9c);
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this_ + 0xcc) = DAT_006605c8;
  return this_;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041a740, ap_0041a740));
