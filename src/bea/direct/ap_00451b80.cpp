// auto-ported from 00451b80_vslot2.c (CFEPBriefing::vslot2, 150 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CFEPBriefing;
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_0089d948 GLOBAL_AT(int, 0x0089d948)

static void BEA_THISCALL ap_00451b80(CFEPBriefing * this_, int param_1)
{
  float fVar1;
  
  *(float *)(this_ + 0x10) = *(float *)(this_ + 0x10) + 0.01f;
  if (param_1 == 0) {
    fVar1 = *(float *)(this_ + 8) + 0.05f;
  }
  else {
    if (param_1 != 2) goto LAB_00451bb0;
    fVar1 = *(float *)(this_ + 8) - 0.15f;
  }
  *(float *)(this_ + 8) = fVar1;
LAB_00451bb0:
  if (*(float *)(this_ + 8) < 0.0f) {
    *(undefined4 *)(this_ + 8) = 0;
  }
  if (1.0f < *(float *)(this_ + 8)) {
    *(undefined4 *)(this_ + 8) = 0x3f800000;
  }
  if ((((param_1 == 0) && (DAT_00662df4 != 0)) && (DAT_0089d948 == 0xff)) &&
     (1.0f <= *(float *)(this_ + 8))) {
    bea_vcall<uint32_t>(this_, 0xc, 0x2c,0x3f800000);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00451b80, ap_00451b80));
