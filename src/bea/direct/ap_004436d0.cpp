// auto-ported from 004436d0_vslot0.c (CDestroyableCoreSegment::vslot0, 161 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CDestroyableCoreSegment;
typedef char CDestroyableSegment;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* CDestroyableSegment__vslot8_t)(uint32_t);
static const bea_guard<CDestroyableSegment__vslot8_t> CDestroyableSegment__vslot8 = {(CDestroyableSegment__vslot8_t)0x00442b20};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};

static void BEA_THISCALL ap_004436d0(CDestroyableCoreSegment * this_, int param_1)
{
  float fVar1;
  float10 fVar2;
  
  if (*(short *)(param_1 + 4) == 0xbba) {
    **(undefined4 **)(this_ + 0x3c) = 1;
    fVar2 = (float10)bea_vcall<float10>(*(int **)(*(int *)(this_ + 0x3c) + 0x10), 0xb4);
    fVar1 = *(float *)(this_ + 0x48);
    *(float *)(this_ + 0x48) = (float)(fVar2 + (float10)fVar1);
    fVar2 = fVar2 + (float10)fVar1 + (float10)*(float *)(this_ + 0x44);
    *(float *)(this_ + 0x44) = (float)fVar2;
    if (fVar2 < (float10)*(float *)(*(int *)(this_ + 0x3c) + 0x14)) {
      param_1 = 0xbf800000;
      FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xbba), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
      bea_vcall<uint32_t>(this_, 0x24);
      return;
    }
    *(undefined4 *)(this_ + 0x4c) = 0;
    bea_vcall<uint32_t>(this_, 0x28);
    CDestroyableSegment__vslot8(bea_arg((CDestroyableSegment *)this_));
  }
  else if (*(short *)(param_1 + 4) == 3000) {
    bea_vcall<uint32_t>(this_, 0x20);
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004436d0, ap_004436d0));
