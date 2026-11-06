// auto-ported from 0051b460_vslot5.c (CFEPDirectory::vslot5, 169 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPDirectory;
#define DAT_008a9580 GLOBAL_AT(int, 0x008a9580)
typedef uint32_t (BEA_STDCALL* FUN_00452df0_t)(uint32_t);
static const bea_guard<FUN_00452df0_t> FUN_00452df0 = {(FUN_00452df0_t)0x00452df0};
typedef uint32_t (BEA_STDCALL* FUN_00467bd0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467bd0_t> FUN_00467bd0 = {(FUN_00467bd0_t)0x00467bd0};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef int (BEA_THISCALL* FUN_0051ae70_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0051ae70_t> FUN_0051ae70 = {(FUN_0051ae70_t)0x0051ae70};

static uint32_t BEA_THISCALL ap_0051b460(CFEPDirectory * this_, float param_1, undefined4 param_2)
{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  iVar1 = FUN_0051ae70(bea_arg(this_), bea_arg(param_1), bea_arg(param_2));
  if (iVar1 != 0) {
    bea_vcall<uint32_t>(this_, 0xc, 0x2c,0x3f800000);
  }
  fVar3 = param_1;
  uVar2 = FUN_0046a2a0(0xf - (uint)(DAT_008a9580 != 0),0);
  FUN_00467bd0(bea_arg(uVar2), bea_arg(fVar3), bea_arg(param_2));
  fVar3 = (param_1 - 0.75f) * 4.0f;
  if (fVar3 < 0.0f) {
    return FUN_00452df0(bea_arg(0));
  }
  if (1.0f < fVar3) {
    fVar3 = 1.0f;
  }
  return FUN_00452df0(bea_arg(fVar3));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051b460, ap_0051b460));
