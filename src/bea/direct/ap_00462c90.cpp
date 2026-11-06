// auto-ported from 00462c90_vslot12.c (CFEPMain::vslot12, 136 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};

static void BEA_STDCALL ap_00462c90(undefined4 param_1)
{
  switch(param_1) {
  case 0:
    FUN_0046a2a0(0,0);
    return;
  case 1:
    FUN_0046a2a0(1,0);
    return;
  case 2:
    FUN_0046a2a0(2,0);
    return;
  case 3:
    FUN_0046a2a0(4,0);
    return;
  case 4:
    FUN_0046a2a0(5,0);
    return;
  case 5:
    FUN_0046a2a0(6,0);
    return;
  default:
    FUN_0046a2a0(8,0);
    return;
  case 8:
    FUN_0046a2a0(3,0);
    return;
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00462c90, ap_00462c90));
