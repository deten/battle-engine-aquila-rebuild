// auto-ported from 00496270_FUN_00496270.c (FUN_00496270, 53 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define s_DoorClosing_0062dd7c ((char*)0x0062dd7c)
#define s_DoorOpening_0062dd88 ((char*)0x0062dd88)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static uint32_t BEA_CDECL ap_00496270(void *param_1)
{
  int iVar1;
  
  iVar1 = FUN_004aa630(bea_arg(param_1), bea_arg(s_DoorOpening_0062dd88));
  if (iVar1 != -1) {
    return true;
  }
  iVar1 = FUN_004aa630(bea_arg(param_1), bea_arg(s_DoorClosing_0062dd7c));
  return iVar1 != -1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00496270, ap_00496270));
