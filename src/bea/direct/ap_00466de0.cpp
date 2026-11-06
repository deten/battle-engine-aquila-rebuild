// auto-ported from 00466de0_FUN_00466de0.c (FUN_00466de0, 143 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0089d7a8 GLOBAL_AT(int, 0x0089d7a8)
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};

static uint32_t BEA_STDCALL ap_00466de0(float param_1, float param_2, float param_3, float param_4, undefined4 param_5, float param_6, undefined4 param_7, float param_8)
{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  fVar1 = bea_fcast<float10>(param_3) - bea_fcast<float10>(param_1);
  fVar2 = bea_fcast<float10>(param_4) - bea_fcast<float10>(param_2);
  fVar3 = bea_fcast<float10>(fpatan(fVar2,fVar1));
  return FUN_005563d0(bea_arg((param_1 + param_3) * 0.5f), bea_arg((param_2 + param_4) * 0.5f), bea_arg(param_7), bea_arg(DAT_0089d7a8), bea_arg(param_5), bea_arg(bea_fcast<float>((SQRT(fVar1 * fVar1 + fVar2 * fVar2) * bea_fcast<float10>(param_8) * bea_fcast<float10>(0.03125f)))), bea_arg(param_6 * 0.015625f), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(bea_fcast<float>(fVar3)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00466de0, ap_00466de0));
