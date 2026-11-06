// auto-ported from 0053f180_vslot6.c (CDXFMV::vslot6, 10 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef uint32_t (BEA_CDECL* FUN_005159b0_t)(void);
static const bea_guard<FUN_005159b0_t> FUN_005159b0 = {(FUN_005159b0_t)0x005159b0};

static void BEA_CDECL ap_0053f180(void)
{
  FUN_005159b0();
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053f180, ap_0053f180));
