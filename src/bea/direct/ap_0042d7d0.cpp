// auto-ported from 0042d7d0_FUN_0042d7d0.c (FUN_0042d7d0, 63 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0066e94c GLOBAL_AT(char, 0x0066e94c)
#define DAT_006630cc GLOBAL_AT(int, 0x006630cc)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define _DAT_0066e948 GLOBAL_AT(float, 0x0066e948)
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static void BEA_CDECL ap_0042d7d0(undefined4 param_1)
{
  float10 fVar1;
  
  if (DAT_0066e94c != (char)param_1) {
    if (DAT_006630cc == 0) {
      fVar1 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
      _DAT_0066e948 = (float)(fVar1 - (float10)_DAT_0066e948);
    }
    DAT_0066e94c = (char)param_1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042d7d0, ap_0042d7d0));
