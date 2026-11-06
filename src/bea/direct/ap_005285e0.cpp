// auto-ported from 005285e0_FUN_005285e0.c (FUN_005285e0, 161 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089bec8 GLOBAL_AT(int, 0x0089bec8)
#define _CIpow(a0, a1) bea_x87call2(0x0055fa40, (float10)(a0), (float10)(a1))

static void BEA_CDECL ap_005285e0(float param_1)
{
  int *a1;
  float10 fVar1;
  undefined4 local_8;
  
  a1 = DAT_0089bec8;
  if (DAT_0089bec8 != (int *)0x0) {
    if (0.0f <= param_1) {
      if (1.0f < param_1) {
        param_1 = 1.0f;
      }
    }
    else {
      param_1 = 0.0f;
    }
    fVar1 = _CIpow(bea_fcast<float10>(0.30000001192092896),bea_fcast<float10>(param_1));
    if (bea_fcast<float10>(0.0f) <= fVar1) {
      if (bea_fcast<float10>(1.0f) < fVar1) {
        fVar1 = bea_fcast<float10>(1.0f);
      }
    }
    else {
      fVar1 = bea_fcast<float10>(0.0f);
    }
    local_8 = (undefined4)(longlong)ROUND(fVar1 * bea_fcast<float10>(10000.0f) - bea_fcast<float10>(10000.0f));
    bea_vcall<uint32_t>(a1, 0x3c, a1,local_8);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005285e0, ap_005285e0));
