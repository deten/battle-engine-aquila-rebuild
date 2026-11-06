// auto-ported from 004145a0_FUN_004145a0.c (FUN_004145a0, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
typedef int (BEA_THISCALL* FUN_00414030_t)(uint32_t);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};

static undefined4 BEA_THISCALL ap_004145a0(void * this_)
{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00414030(bea_arg(this_));
  if (iVar1 != 0) {
    uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(*(undefined4 *)(*(int *)(iVar1 + 0xa4) + 0x3c)));
    return uVar2;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004145a0, ap_004145a0));
