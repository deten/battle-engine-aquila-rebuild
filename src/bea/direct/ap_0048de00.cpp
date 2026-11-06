// auto-ported from 0048de00_FUN_0048de00.c (FUN_0048de00, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00548820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548820_t> FUN_00548820 = {(FUN_00548820_t)0x00548820};

static void BEA_THISCALL ap_0048de00(void * this_, char *param_1, undefined4 param_2)
{
  char cVar1;

  uint uVar2;
  char *pcVar3;
  
  FUN_00548820(bea_arg(this_), bea_arg(param_1), bea_arg(param_2));
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  if ((uVar2 != 1) && (param_1[uVar2 - 2] == '\n')) {
    param_1[uVar2 - 2] = '\0';
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048de00, ap_0048de00));
