// auto-ported from 00523b30_FUN_00523b30.c (FUN_00523b30, 28 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0089bd98 GLOBAL_AT(int, 0x0089bd98)
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};

static void BEA_CDECL ap_00523b30(void)
{
  if (DAT_0089bd98 != 0) {
    FUN_004f27e0(bea_arg((void *)(DAT_0089bd98 + 8)));
    DAT_0089bd98 = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00523b30, ap_00523b30));
