// auto-ported from 00419e00_FUN_00419e00.c (FUN_00419e00, 178 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define DAT_00660588 GLOBAL_AT(undefined4, 0x00660588)

static void * BEA_THISCALL ap_00419e00(void * this_, undefined4 *param_1, undefined4 *param_2, undefined4 *param_3, undefined4 *param_4, undefined4 *param_5)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined ***)this_ = ((void*)0x005d92e4);
  *(undefined4 *)((int)this_ + 4) = *param_1;
  *(undefined4 *)((int)this_ + 8) = param_1[1];
  *(undefined4 *)((int)this_ + 0xc) = param_1[2];
  *(undefined4 *)((int)this_ + 0x10) = param_1[3];
  *(undefined4 *)((int)this_ + 0x14) = *param_2;
  *(undefined4 *)((int)this_ + 0x18) = *param_3;
  *(undefined4 *)((int)this_ + 0x1c) = *param_4;
  *(undefined4 *)((int)this_ + 0x20) = *param_5;
  *(undefined4 *)((int)this_ + 0x24) = DAT_00672fd0;
  *(undefined4 *)((int)this_ + 0x2c) = *param_1;
  *(undefined4 *)((int)this_ + 0x30) = param_1[1];
  *(undefined4 *)((int)this_ + 0x34) = param_1[2];
  *(undefined4 *)((int)this_ + 0x38) = param_1[3];
  puVar2 = &DAT_00660588;
  puVar3 = (undefined4 *)((int)this_ + 0x40);
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this_ + 0xa0) = *param_1;
  *(undefined4 *)((int)this_ + 0xa4) = param_1[1];
  *(undefined4 *)((int)this_ + 0xa8) = param_1[2];
  *(undefined4 *)((int)this_ + 0xac) = param_1[3];
  puVar2 = &DAT_00660588;
  puVar3 = (undefined4 *)((int)this_ + 0x70);
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return this_;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00419e00, ap_00419e00));
