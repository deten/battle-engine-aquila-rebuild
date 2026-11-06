// auto-ported from 0040f140_FUN_0040f140.c (FUN_0040f140, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00660250 GLOBAL_AT(int, 0x00660250)
#define DAT_00660200 GLOBAL_AT(int, 0x00660200)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_CDECL ap_0040f140(void)
{
  int *piVar1;
  
  DAT_00660250 = 0;
  piVar1 = &DAT_00660200;
  do {
    if (*piVar1 != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*piVar1));
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
  } while (BEA_LOOP_GUARD(((int)piVar1 < 0x660250)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040f140, ap_0040f140));
