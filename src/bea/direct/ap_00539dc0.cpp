// auto-ported from 00539dc0_FUN_00539dc0.c (FUN_00539dc0, 69 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00528d10_t)(uint32_t);
static const bea_guard<FUN_00528d10_t> FUN_00528d10 = {(FUN_00528d10_t)0x00528d10};
typedef uint32_t (BEA_THISCALL* FUN_00528d50_t)(uint32_t);
static const bea_guard<FUN_00528d50_t> FUN_00528d50 = {(FUN_00528d50_t)0x00528d50};

static uint32_t BEA_THISCALL ap_00539dc0(void * this_, char *param_1, undefined4 param_2)
{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  FUN_00528d10(bea_arg(this_));
  uVar2 = 0xffffffff;
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
  pcVar5 = (char *)((int)this_ + 0x20);
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
  *(undefined4 *)((int)this_ + 0x124) = param_2;
  return FUN_00528d50(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00539dc0, ap_00539dc0));
