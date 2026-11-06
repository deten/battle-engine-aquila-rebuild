// auto-ported from 004e5690_vslot2.c (CSphereTrigger::vslot2, 108 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CSphereTrigger;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot2_t)(uint32_t);
static const bea_guard<CComplexThing__vslot2_t> CComplexThing__vslot2 = {(CComplexThing__vslot2_t)0x004f41b0};
typedef uint32_t (BEA_THISCALL* FUN_0044b1d0_t)(uint32_t);
static const bea_guard<FUN_0044b1d0_t> FUN_0044b1d0 = {(FUN_0044b1d0_t)0x0044b1d0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_004e5690(CSphereTrigger * this_)
{
  undefined4 *puVar1;
  void *this_00;
  puVar1 = *(undefined4 **)(this_ + 0x8c);
  *(undefined4 **)(this_ + 0x94) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*puVar1;
  }
  while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
    if (this_00 != (void *)0x0) {
      FUN_0044b1d0(bea_arg(this_00));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
    }
    puVar1 = *(undefined4 **)(*(int *)(this_ + 0x94) + 4);
    *(undefined4 **)(this_ + 0x94) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*puVar1;
    }
  }
  FUN_004e5c60(bea_arg(this_ + 0x8c));
  bea_vcall<uint32_t>(this_, 0x5c);
  return CComplexThing__vslot2(bea_arg((CComplexThing *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e5690, ap_004e5690));
