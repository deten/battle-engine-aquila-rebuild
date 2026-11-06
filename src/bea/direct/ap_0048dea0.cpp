// auto-ported from 0048dea0_FUN_0048dea0.c (FUN_0048dea0, 28 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0067a7d0 GLOBAL_AT(int, 0x0067a7d0)
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};

static void BEA_CDECL ap_0048dea0(void)
{
  if (DAT_0067a7d0 != 0) {
    FUN_004f27e0(bea_arg((void *)(DAT_0067a7d0 + 8)));
    DAT_0067a7d0 = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048dea0, ap_0048dea0));
