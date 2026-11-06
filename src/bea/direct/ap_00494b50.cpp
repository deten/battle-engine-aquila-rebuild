// auto-ported from 00494b50_FUN_00494b50.c (FUN_00494b50, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define s_WheelMotion_0062cb54 ((char*)0x0062cb54)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static uint32_t BEA_CDECL ap_00494b50(void *param_1)
{
  int iVar1;
  
  iVar1 = FUN_004aa630(bea_arg(param_1), bea_arg(s_WheelMotion_0062cb54));
  return iVar1 != -1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00494b50, ap_00494b50));
