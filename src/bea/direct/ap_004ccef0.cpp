// auto-ported from 004ccef0_vslot8.c (CPDTimeline::vslot8, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CPDTimeline;

static int BEA_THISCALL ap_004ccef0(CPDTimeline * this_, undefined4 param_1)
{
  int iVar1;
  CPDTimeline *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)(this_ + 0x5c);
  if (0 < iVar1) {
    pCVar2 = this_ + 0x60;
    do {
      if (*(int **)pCVar2 != (int *)0x0) {
        bea_vcall<uint32_t>(*(int **)pCVar2, 0x20, param_1);
      }
      iVar1 = *(int *)(this_ + 0x5c);
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 0xc;
    } while (BEA_LOOP_GUARD((iVar3 < iVar1)));
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ccef0, ap_004ccef0));
