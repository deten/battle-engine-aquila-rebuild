// auto-ported from 00490f10_FUN_00490f10.c (FUN_00490f10, 35 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef undefined4 (BEA_CDECL* CFEPCredits__vslot0_t)(undefined4, ...);
static const bea_guard<CFEPCredits__vslot0_t> CFEPCredits__vslot0 = {(CFEPCredits__vslot0_t)0x004fdc10};

static undefined4 BEA_THISCALL ap_00490f10(void * this_)
{
  int iVar1;
  iVar1 = CFEPCredits__vslot0(0);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)((int)this_ + 0x93e0) = 0;
  *(undefined4 *)((int)this_ + 0x93e4) = 0;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00490f10, ap_00490f10));
