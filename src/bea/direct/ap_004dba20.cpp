// auto-ported from 004dba20_vslot4.c (CRTBuilding::vslot4, 19 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CRTBuilding;

static undefined4 BEA_THISCALL ap_004dba20(CRTBuilding * this_)
{
  int iVar1;
  
  iVar1 = bea_vcall<uint32_t>(this_, 0x24);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x150);
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dba20, ap_004dba20));
