// auto-ported from 00402d30_vslot2.c (CAirUnit::vslot2, 156 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CUnit;
#define DAT_008550e0 GLOBAL_AT(int, 0x008550e0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* CUnit__vslot2_t)(uint32_t);
static const bea_guard<CUnit__vslot2_t> CUnit__vslot2 = {(CUnit__vslot2_t)0x004f95d0};
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_00402d30(CAirUnit * this_)
{
  undefined4 *puVar1;
  void *pvVar2;
  FUN_004e5bd0(bea_arg(&DAT_008550e0), bea_arg(this_));
  FUN_004cb0b0(bea_arg(this_ + 0x250), bea_arg(0));
  while(BEA_LOOP_GUARD(( true ))) {
    puVar1 = *(undefined4 **)(this_ + 0x25c);
    *(undefined4 **)(this_ + 0x264) = puVar1;
    if ((puVar1 == (undefined4 *)0x0) || (pvVar2 = (void *)*puVar1, pvVar2 == (void *)0x0)) break;
    FUN_004cb0b0(bea_arg(pvVar2), bea_arg(0));
    FUN_004e5bd0(bea_arg(this_ + 0x25c), bea_arg(pvVar2));
    FUN_004cb050(bea_arg(pvVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar2));
  }
  while(BEA_LOOP_GUARD(( true ))) {
    puVar1 = *(undefined4 **)(this_ + 0x26c);
    *(undefined4 **)(this_ + 0x274) = puVar1;
    if ((puVar1 == (undefined4 *)0x0) || (pvVar2 = (void *)*puVar1, pvVar2 == (void *)0x0)) break;
    FUN_004cb0b0(bea_arg(pvVar2), bea_arg(0));
    FUN_004e5bd0(bea_arg(this_ + 0x26c), bea_arg(pvVar2));
    FUN_004cb050(bea_arg(pvVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar2));
  }
  return CUnit__vslot2(bea_arg((CUnit *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00402d30, ap_00402d30));
