// auto-ported from 0042e3d0_FUN_0042e3d0.c (FUN_0042e3d0, 196 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float10 BEA_THISCALL ap_0042e3d0(int * this_, undefined4 param_1, undefined4 param_2)
{
  int iVar1;

  float10 fVar2;
  
  switch(param_2) {
  case 0xfffffffa:
    fVar2 = (float10)bea_vcall<float10>(this_, 0x38, param_1);
    break;
  case 0xfffffffb:
    fVar2 = (float10)bea_vcall<float10>(this_, 0x34, param_1);
    break;
  case 0xfffffffc:
    fVar2 = (float10)bea_vcall<float10>(this_, 0x30, param_1);
    break;
  case 0xfffffffd:
    fVar2 = (float10)bea_vcall<float10>(this_, 0x2c, param_1);
    break;
  case 0xfffffffe:
    fVar2 = (float10)bea_vcall<float10>(this_, 0x28, param_1);
    break;
  case 0xffffffff:
    fVar2 = (float10)bea_vcall<float10>(this_, 0x24, param_1);
    break;
  default:
    iVar1 = bea_vcall<uint32_t>(this_, 0x10, param_1,param_2);
    if (iVar1 != 0) {
      return (float10)1.0f;
    }
    goto LAB_0042e473;
  }
  if (fVar2 < (float10)-0.15f) {
    return (fVar2 + (float10)1.0f) * (float10)1.1764706f - (float10)1.0f;
  }
  if ((float10)0.15f < fVar2) {
    return (float10)1.0f - ((float10)1.0f - fVar2) * (float10)1.1764706f;
  }
LAB_0042e473:
  return (float10)0.0f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042e3d0, ap_0042e3d0));
