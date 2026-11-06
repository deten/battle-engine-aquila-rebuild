// auto-ported from 004cba30_FUN_004cba30.c (FUN_004cba30, 85 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static undefined4 BEA_STDCALL ap_004cba30(undefined4 *param_1, float param_2, undefined4 *param_3)
{
  float10 fVar1;
  
  fVar1 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(param_1)));
  if (fVar1 < bea_fcast<float10>(param_2) + bea_fcast<float10>(bea_fcast<float>(param_1[2]))) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    param_3[2] = bea_piece32(bea_fcast<float>((fVar1 - bea_fcast<float10>(param_2))));
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cba30, ap_004cba30));
