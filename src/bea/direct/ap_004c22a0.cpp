// auto-ported from 004c22a0_vslot16.c (CPDSelector::vslot16, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CPDSelector;
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static undefined4 BEA_THISCALL ap_004c22a0(CPDSelector * this_)
{
  CPDSelector *pCVar1;
  CPDSelector *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  pCVar2 = this_ + 0x6c;
  iVar3 = 4;
  pCVar1 = pCVar2;
  do {
    if (0 < *(int *)pCVar1) {
      iVar4 = iVar4 + *(int *)pCVar1;
    }
    pCVar1 = pCVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (BEA_LOOP_GUARD((iVar3 != 0)));
  iVar3 = _rand();
  iVar6 = 0;
  iVar5 = 0;
  while (BEA_LOOP_GUARD(((*(int *)pCVar2 < 1 || (iVar6 = iVar6 + *(int *)pCVar2, iVar6 < iVar3 % iVar4))))) {
    iVar5 = iVar5 + 1;
    pCVar2 = pCVar2 + 4;
    if (3 < iVar5) {
      return 0;
    }
  }
  return *(undefined4 *)(this_ + iVar5 * 4 + 0x5c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c22a0, ap_004c22a0));
