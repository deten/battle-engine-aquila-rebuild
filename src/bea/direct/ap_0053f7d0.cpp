// auto-ported from 0053f7d0_FUN_0053f7d0.c (FUN_0053f7d0, 89 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef undefined1 * (BEA_CDECL* FUN_004f7cd0_t)(void *, ...);
static const bea_guard<FUN_004f7cd0_t> FUN_004f7cd0 = {(FUN_004f7cd0_t)0x004f7cd0};

static void * BEA_THISCALL ap_0053f7d0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  pcVar2 = (char *)FUN_004f7cd0(param_1);
  uVar3 = 0xffffffff;
  do {
    pcVar5 = pcVar2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar2 = this_;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((pcVar2 = pcVar2 + 4, uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar2 = pcVar2 + 1;
  }
  *(undefined4 *)((int)this_ + 0x54) = param_2;
  *(undefined4 *)((int)this_ + 0x58) = param_3;
  *(undefined4 *)((int)this_ + 0x170) = 0;
  *(undefined1 *)((int)this_ + 0x15c) = 1;
  return this_;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053f7d0, ap_0053f7d0));
