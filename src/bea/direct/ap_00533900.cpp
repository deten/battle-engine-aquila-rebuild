// auto-ported from 00533900_FUN_00533900.c (FUN_00533900, 79 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
typedef uint32_t (BEA_THISCALL* FUN_004214e0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004214e0_t> FUN_004214e0 = {(FUN_004214e0_t)0x004214e0};
typedef uint32_t (BEA_THISCALL* FUN_0046d3a0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0046d3a0_t> FUN_0046d3a0 = {(FUN_0046d3a0_t)0x0046d3a0};

static uint32_t BEA_STDCALL ap_00533900(undefined4 *param_1, undefined4 param_2, undefined4 param_3)
{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  piVar1 = (int *)*param_1;
  uVar2 = bea_vcall<uint32_t>(param_1[1], 0x3c);
  uVar2 = uVar2 & 0xff;
  uVar3 = bea_vcall<uint32_t>(piVar1, 0x30);
  FUN_0046d3a0(bea_arg(&DAT_008a9a98), bea_arg(uVar3), bea_arg(uVar2));
  piVar1 = (int *)*param_1;
  uVar2 = bea_vcall<uint32_t>(param_1[1], 0x3c);
  uVar2 = uVar2 & 0xff;
  uVar3 = bea_vcall<uint32_t>(piVar1, 0x30);
  return FUN_004214e0(bea_arg(&DAT_00660620), bea_arg(uVar3), bea_arg(uVar2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00533900, ap_00533900));
