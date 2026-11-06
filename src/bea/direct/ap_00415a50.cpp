// auto-ported from 00415a50_vslot76.c (CBoat::vslot76, 56 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CBoat;

static undefined4 BEA_THISCALL ap_00415a50(CBoat * this_)
{
  int iVar1;
  
  iVar1 = bea_vcall<uint32_t>(this_, 0x10c);
  if (iVar1 != 0) {
    return 0;
  }
  if (((*(int *)(this_ + 0x168) != 0) || (*(int *)(this_ + 0x214) == 0)) &&
     (((byte)this_[0x2c] & 4) == 0)) {
    return 0;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00415a50, ap_00415a50));
