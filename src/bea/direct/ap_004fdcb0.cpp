// auto-ported from 004fdcb0_vslot54.c (CUnit::vslot54, 69 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};

static void BEA_THISCALL ap_004fdcb0(CUnit * this_, int param_1)
{
  int iVar1;
  
  iVar1 = *(int *)(this_ + 0x13c);
  if (iVar1 != 0) {
    if (param_1 == 1) {
      FUN_00401000(bea_arg((void *)(iVar1 + 0xc)), bea_arg(0));
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    *(int *)(this_ + 0x210) = param_1;
    return;
  }
  *(int *)(this_ + 0x210) = param_1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fdcb0, ap_004fdcb0));
