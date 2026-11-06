// auto-ported from 004aa500_FUN_004aa500.c (FUN_004aa500, 158 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00662b2c GLOBAL_AT(char, 0x00662b2c)

static undefined4 * BEA_THISCALL ap_004aa500(void * this_, int param_1, char *param_2, undefined4 *param_3)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar2 = *(int *)((int)this_ + 0x1c);
  if (iVar2 <= param_1) {
    do {
      this_ = *(void **)((int)this_ + 8);
      if (this_ == (void *)0x0) {
        uVar3 = 0xffffffff;
        pcVar5 = &DAT_00662b2c;
        goto code_r0x004aa575;
      }
      param_1 = param_1 - iVar2;
      iVar2 = *(int *)((int)this_ + 0x1c);
    } while (BEA_LOOP_GUARD((iVar2 <= param_1)));
  }
  uVar3 = 0xffffffff;
  pcVar5 = (char *)(*(int *)((int)this_ + 0x20) + 0x4c + param_1 * 0x150);
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *param_2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    param_2 = param_2 + 1;
  }
  *param_3 = *(undefined4 *)(*(int *)((int)this_ + 0x20) + 0x14c + param_1 * 0x150);
  return (undefined4 *)(param_3);
  while(BEA_LOOP_GUARD(( true ))) {
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
    if (cVar1 == '\0') break;
code_r0x004aa575:
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
  }
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *param_2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    param_2 = param_2 + 1;
  }
  *param_3 = 0xffffffff;
  return (undefined4 *)(param_3);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004aa500, ap_004aa500));
