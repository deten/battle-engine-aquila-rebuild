// auto-ported from 0043e630_FUN_0043e630.c (FUN_0043e630, 34 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static void BEA_CDECL ap_0043e630(void *param_1, int param_2)
{
  int iVar1;
  
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      FUN_00548570(bea_arg(param_1), bea_arg(&param_2), bea_arg(1));
      iVar1 = iVar1 + -1;
    } while (BEA_LOOP_GUARD((iVar1 != 0)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043e630, ap_0043e630));
