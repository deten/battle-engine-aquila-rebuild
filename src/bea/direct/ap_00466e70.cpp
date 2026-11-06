// auto-ported from 00466e70_FUN_00466e70.c (FUN_00466e70, 410 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0089d7a8 GLOBAL_AT(int, 0x0089d7a8)
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};

static uint32_t BEA_STDCALL ap_00466e70(float param_1, float param_2, float param_3, float param_4, undefined4 param_5, float param_6, undefined4 param_7)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  fVar4 = bea_fcast<float10>(param_3) - bea_fcast<float10>(param_1);
  fVar1 = param_6 * 0.015625f;
  fVar2 = (param_1 + param_3) * 0.5f;
  fVar5 = bea_fcast<float10>(fpatan(bea_fcast<float10>(0.0),fVar4));
  FUN_005563d0(bea_arg(fVar2), bea_arg((param_2 + param_2) * 0.5f), bea_arg(param_7), bea_arg(DAT_0089d7a8), bea_arg(param_5), bea_arg(bea_fcast<float>((SQRT(fVar4 * fVar4) * bea_fcast<float10>(0.03125f)))), bea_arg(fVar1), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(bea_fcast<float>(fVar5)));
  fVar4 = bea_fcast<float10>(param_4) - bea_fcast<float10>(param_2);
  fVar3 = (param_2 + param_4) * 0.5f;
  fVar5 = bea_fcast<float10>(fpatan(fVar4,bea_fcast<float10>(0.0)));
  FUN_005563d0(bea_arg((param_3 + param_3) * 0.5f), bea_arg(fVar3), bea_arg(param_7), bea_arg(DAT_0089d7a8), bea_arg(param_5), bea_arg(bea_fcast<float>((SQRT(fVar4 * fVar4) * bea_fcast<float10>(0.03125f)))), bea_arg(fVar1), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(bea_fcast<float>(fVar5)));
  fVar4 = bea_fcast<float10>(param_1) - bea_fcast<float10>(param_3);
  fVar5 = bea_fcast<float10>(fpatan(bea_fcast<float10>(0.0),fVar4));
  FUN_005563d0(bea_arg(fVar2), bea_arg((param_4 + param_4) * 0.5f), bea_arg(param_7), bea_arg(DAT_0089d7a8), bea_arg(param_5), bea_arg(bea_fcast<float>((SQRT(fVar4 * fVar4) * bea_fcast<float10>(0.03125f)))), bea_arg(fVar1), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(bea_fcast<float>(fVar5)));
  fVar4 = bea_fcast<float10>(param_2) - bea_fcast<float10>(param_4);
  fVar5 = bea_fcast<float10>(fpatan(fVar4,bea_fcast<float10>(0.0)));
  return FUN_005563d0(bea_arg((param_1 + param_1) * 0.5f), bea_arg(fVar3), bea_arg(param_7), bea_arg(DAT_0089d7a8), bea_arg(param_5), bea_arg(bea_fcast<float>((SQRT(fVar4 * fVar4) * bea_fcast<float10>(0.03125f)))), bea_arg(fVar1), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(bea_fcast<float>(fVar5)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00466e70, ap_00466e70));
