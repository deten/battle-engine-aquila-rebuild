// auto-ported from 004d8dc0_vslot2.c (CRound::vslot2, 121 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CRound;
#define DAT_008550f0 GLOBAL_AT(int, 0x008550f0)
#define DAT_008551a0 GLOBAL_AT(int, 0x008551a0)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot2_t)(uint32_t);
static const bea_guard<CComplexThing__vslot2_t> CComplexThing__vslot2 = {(CComplexThing__vslot2_t)0x004f41b0};
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_00407140_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00407140_t> FUN_00407140 = {(FUN_00407140_t)0x00407140};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static uint32_t BEA_THISCALL ap_004d8dc0(CRound * this_)
{
  void *this_00;
  if (*(int *)(*(int *)(this_ + 0xf0) + 0x58) != 0) {
    FUN_004e5bd0(bea_arg(&DAT_008550f0), bea_arg(this_));
  }
  FUN_004cb0b0(bea_arg(this_ + 0xe0), bea_arg(0));
  this_00 = *(void **)(this_ + 0xec);
  if ((this_00 != (void *)0x0) && ((*(byte *)((int)this_00 + 0x34) & 8) != 0)) {
    FUN_00407140(bea_arg(this_00), bea_arg(*(undefined4 *)(this_ + 0xe8)));
  }
  if ((*(int *)(this_ + 0xe8) != 0) && ((*(byte *)(*(int *)(this_ + 0xe8) + 0x34) & 8) != 0)) {
    FUN_004e5bd0(bea_arg(&DAT_008551a0), bea_arg(this_));
  }
  FUN_00401000(bea_arg(this_ + 0xe8), bea_arg(0));
  return CComplexThing__vslot2(bea_arg((CComplexThing *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d8dc0, ap_004d8dc0));
