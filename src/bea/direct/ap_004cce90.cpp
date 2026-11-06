// auto-ported from 004cce90_vslot5.c (CPDTimeline::vslot5, 86 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CPDTimeline;

static int BEA_THISCALL ap_004cce90(CPDTimeline * this_, int param_1, undefined4 param_2)
{
  CPDTimeline *pCVar1;
  int iVar2;
  int iVar3;
  int local_194;
  int aiStack_190 [100];
  
  iVar3 = *(int *)(this_ + 0x5c);
  iVar2 = 0;
  local_194 = 0;
  if (0 < iVar3) {
    pCVar1 = this_ + 0x60;
    do {
      if (*(int *)pCVar1 != 0) {
        aiStack_190[iVar2] = *(int *)pCVar1;
        iVar2 = local_194 + 1;
        local_194 = iVar2;
      }
      pCVar1 = pCVar1 + 0xc;
      iVar3 = iVar3 + -1;
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
  }
  if (param_1 < iVar2) {
    return aiStack_190[param_1];
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cce90, ap_004cce90));
