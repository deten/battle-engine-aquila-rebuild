// auto-ported from 00403690_vslot50.c (CAirUnit::vslot50, 148 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CUnit;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* CUnit__vslot50_t)(uint32_t);
static const bea_guard<CUnit__vslot50_t> CUnit__vslot50 = {(CUnit__vslot50_t)0x004fd140};
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004fcfe0_t)(uint32_t);
static const bea_guard<FUN_004fcfe0_t> FUN_004fcfe0 = {(FUN_004fcfe0_t)0x004fcfe0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_THISCALL ap_00403690(CAirUnit * this_)
{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  
  iVar3 = CUnit__vslot50(bea_arg((CUnit *)this_));
  if (iVar3 == 0) {
    return 0;
  }
  FUN_004fcfe0(bea_arg(this_));
  while(BEA_LOOP_GUARD(( true ))) {
    puVar1 = *(undefined4 **)(this_ + 0x25c);
    *(undefined4 **)(this_ + 0x264) = puVar1;
    if ((puVar1 == (undefined4 *)0x0) || (pvVar2 = (void *)*puVar1, pvVar2 == (void *)0x0)) break;
    FUN_004e5bd0(bea_arg(this_ + 0x25c), bea_arg(pvVar2));
    FUN_004cb0b0(bea_arg(pvVar2), bea_arg(0));
    FUN_004cb050(bea_arg(pvVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar2));
  }
  while(BEA_LOOP_GUARD(( true ))) {
    puVar1 = *(undefined4 **)(this_ + 0x26c);
    *(undefined4 **)(this_ + 0x274) = puVar1;
    if ((puVar1 == (undefined4 *)0x0) || (pvVar2 = (void *)*puVar1, pvVar2 == (void *)0x0)) break;
    FUN_004e5bd0(bea_arg(this_ + 0x26c), bea_arg(pvVar2));
    FUN_004cb0b0(bea_arg(pvVar2), bea_arg(0));
    FUN_004cb050(bea_arg(pvVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar2));
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00403690, ap_00403690));
