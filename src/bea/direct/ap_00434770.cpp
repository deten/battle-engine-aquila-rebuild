// auto-ported from 00434770_vslot3.c (CWeaponChargeLevel::vslot3, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CWeaponChargeLevel;
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static void BEA_THISCALL ap_00434770(CWeaponChargeLevel * this_, void *param_1)
{
  CWeaponChargeLevel *pCVar1;
  
  FUN_00548570(bea_arg(param_1), bea_arg(this_ + 0x108), bea_arg(4));
  pCVar1 = this_ + 7;
  do {
    pCVar1 = pCVar1 + 1;
    FUN_00548570(bea_arg(param_1), bea_arg(pCVar1), bea_arg(1));
  } while (BEA_LOOP_GUARD((*pCVar1 != (CWeaponChargeLevel)0x0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00434770, ap_00434770));
