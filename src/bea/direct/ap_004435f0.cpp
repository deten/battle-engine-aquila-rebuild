// auto-ported from 004435f0_vslot3.c (CDestroyableCoreSegment::vslot3, 102 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CDestroyableCoreSegment;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)

static void BEA_THISCALL ap_004435f0(CDestroyableCoreSegment * this_, float param_1, undefined4 param_2)
{
  float fVar1;
  undefined4 uVar2;
  
  if (*(int *)(this_ + 0x40) != 1) {
    if (*(int *)(this_ + 0x1c) != 0) {
      fVar1 = *(float *)(this_ + 0xc);
      *(float *)(this_ + 0xc) = fVar1 - param_1;
      uVar2 = DAT_00672fd0;
      *(float *)(this_ + 0x18) = param_1;
      *(undefined4 *)(this_ + 0x14) = uVar2;
      if (fVar1 - param_1 < 0.0f) {
        *(undefined4 *)(this_ + 0xc) = 0;
      }
    }
    if ((*(float *)(this_ + 0xc) <= 0.0f) && (*(int *)(this_ + 0x38) == 0)) {
      bea_vcall<uint32_t>(this_, 0x28);
      bea_vcall<uint32_t>(this_, 0x20);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004435f0, ap_004435f0));
