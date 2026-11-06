// auto-ported from 0049c2d0_FUN_0049c2d0.c (FUN_0049c2d0, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define s_LegMotion_00623074 ((char*)0x00623074)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static uint32_t BEA_CDECL ap_0049c2d0(void *param_1)
{
  int iVar1;
  
  iVar1 = FUN_004aa630(bea_arg(param_1), bea_arg(s_LegMotion_00623074));
  return iVar1 != -1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049c2d0, ap_0049c2d0));
