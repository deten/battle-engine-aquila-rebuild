// auto-ported from 004ba490_vslot2.c (CMine::vslot2, 59 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMine;
typedef char CUnit;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* CUnit__vslot2_t)(uint32_t);
static const bea_guard<CUnit__vslot2_t> CUnit__vslot2 = {(CUnit__vslot2_t)0x004f95d0};
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_004ba490(CMine * this_)
{
  void *this_00;
  if (*(void **)(this_ + 0x264) != (void *)0x0) {
    FUN_004cb0b0(bea_arg(*(void **)(this_ + 0x264)), bea_arg(0));
    this_00 = *(void **)(this_ + 0x264);
    if (this_00 != (void *)0x0) {
      FUN_004cb050(bea_arg(this_00));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
    }
  }
  return CUnit__vslot2(bea_arg((CUnit *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ba490, ap_004ba490));
