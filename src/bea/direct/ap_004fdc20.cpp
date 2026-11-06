// auto-ported from 004fdc20_vslot55.c (CUnit::vslot55, 101 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CUnit;
#define DAT_008a9b8c GLOBAL_AT(int, 0x008a9b8c)
typedef int (BEA_THISCALL* FUN_004e3ac0_t)(uint32_t);
static const bea_guard<FUN_004e3ac0_t> FUN_004e3ac0 = {(FUN_004e3ac0_t)0x004e3ac0};
typedef undefined4 (BEA_CDECL* FUN_00511510_t)(uint32_t);
static const bea_guard<FUN_00511510_t> FUN_00511510 = {(FUN_00511510_t)0x00511510};

static void * BEA_THISCALL ap_004fdc20(CUnit * this_)
{
  int *piVar1;
  void *this_00;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = *(void **)(this_ + 0x164);
  if (pvVar2 == (void *)0x0) {
    return (void *)0;
  }
  if (*(int *)(this_ + 0x138) == 0) {
    iVar3 = FUN_00511510(bea_arg(pvVar2));
    pvVar2 = (void *)-iVar3;
  }
  else {
    if (*(int *)(this_ + 0x138) != 1) goto LAB_004fdc57;
    pvVar2 = (void *)FUN_00511510(bea_arg(pvVar2));
  }
  DAT_008a9b8c = DAT_008a9b8c + (int)pvVar2;
LAB_004fdc57:
  piVar1 = *(int **)(this_ + 0x18c);
  if (piVar1 == (int *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*piVar1;
  }
  while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
    FUN_004e3ac0(bea_arg(this_00));
    piVar1 = (int *)piVar1[1];
    if (piVar1 == (int *)0x0) {
      pvVar2 = (void *)0x0;
      this_00 = pvVar2;
    }
    else {
      pvVar2 = (void *)*piVar1;
      this_00 = pvVar2;
    }
  }
  return pvVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fdc20, ap_004fdc20));
