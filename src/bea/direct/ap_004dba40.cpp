// auto-ported from 004dba40_vslot10.c (CRTBuilding::vslot10, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CRTBuilding;
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static int BEA_THISCALL ap_004dba40(CRTBuilding * this_)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(this_ + 0x58) == 0) {
    return 0;
  }
  iVar1 = _rand();
  iVar3 = *(int *)(this_ + 0x54);
  iVar4 = 0;
  iVar2 = iVar3;
  if (0 < iVar1 % *(int *)(this_ + 0x58)) {
    do {
      iVar3 = *(int *)(iVar2 + 8);
      if (iVar3 == 0) {
        return iVar2;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar3;
    } while (BEA_LOOP_GUARD((iVar4 < iVar1 % *(int *)(this_ + 0x58))));
  }
  return iVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dba40, ap_004dba40));
