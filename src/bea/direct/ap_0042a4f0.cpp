// auto-ported from 0042a4f0_FUN_0042a4f0.c (FUN_0042a4f0, 66 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0042b9c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042b9c0_t> FUN_0042b9c0 = {(FUN_0042b9c0_t)0x0042b9c0};

static void BEA_THISCALL ap_0042a4f0(void * this_, undefined4 param_1, int param_2)
{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar3 = 0;
  if ((param_2 != 0) && (param_2 == 1)) {
    iVar3 = 1;
  }
  iVar4 = -1;
  pcVar1 = (char *)((iVar3 + (char)param_1 * 2) * 0x40 + 0x23bc + (int)this_);
  pcVar5 = pcVar1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (BEA_LOOP_GUARD((cVar2 != '\0')));
  if (iVar4 != -2) {
    FUN_0042b9c0(bea_arg(this_), bea_arg(pcVar1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042a4f0, ap_0042a4f0));
