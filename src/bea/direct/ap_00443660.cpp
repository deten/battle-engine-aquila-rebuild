// auto-ported from 00443660_vslot8.c (CDestroyableCoreSegment::vslot8, 101 bytes) by tools/autoport.py
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

static void BEA_THISCALL ap_00443660(CDestroyableCoreSegment * this_)
{
  int iVar1;
  float10 fVar2;
  CDestroyableCoreSegment *pCStack_4;
  
  if (*(int *)(this_ + 0x38) != 1) {
    pCStack_4 = this_;
    if (*(float *)(this_ + 0xc) == 0.0) {
      CDestroyableSegment__vslot8(bea_arg((CDestroyableSegment *)this_));
      return;
    }
    iVar1 = bea_vcall<uint32_t>(this_, 0x18);
    if (iVar1 == 0) {
      *(undefined4 *)(this_ + 0x4c) = 1;
      fVar2 = (float10)bea_vcall<float10>(*(int **)(this_ + 0x20), 0x1c);
      *(float *)(this_ + 0x48) = (float)fVar2;
      pCStack_4 = (CDestroyableCoreSegment *)0xbf800000;
      FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xbba), bea_arg(this_), bea_arg(&pCStack_4), bea_arg(0), bea_arg(0), bea_arg(0));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00443660, ap_00443660));
