// auto-ported from 004c2100_vslot13.c (CPDModifier::vslot13, 42 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_009c63f8 GLOBAL_AT(float, 0x009c63f8)

static uint32_t BEA_STDCALL ap_004c2100(int param_1)
{
  float10 fVar1;
  
  fVar1 = bea_fcast<float10>(fcos(bea_fcast<float10>(*(float *)(param_1 + 0x3c)) * bea_fcast<float10>(10.0f)));
  *(float *)(param_1 + 0x4c) =
       bea_fcast<float>(((fVar1 * bea_fcast<float10>(0.01f) + bea_fcast<float10>(0.003f)) * bea_fcast<float10>(DAT_009c63f8) +
              bea_fcast<float10>(*(float *)(param_1 + 0x4c))));
  return param_1;
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c2100, ap_004c2100));
