// auto-ported from 00488620_FUN_00488620.c (FUN_00488620, 70 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_00488620(void * this_, char *param_1)
{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined ***)this_ = ((void*)0x005dbedc);
  do {
    pcVar4 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)((int)this_ + 0x18);
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00488620, ap_00488620));
