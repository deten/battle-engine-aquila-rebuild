// auto-ported from 004fda90_vslot98.c (CUnit::vslot98, 60 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnit;
typedef undefined4 (BEA_THISCALL* FUN_004e43d0_t)(void *);
static const bea_guard<FUN_004e43d0_t> FUN_004e43d0 = {(FUN_004e43d0_t)0x004e43d0};

static undefined4 BEA_THISCALL ap_004fda90(CUnit * this_)
{
  undefined4 *puVar1;
  int iVar2;
  void *this_00;
  
  puVar1 = *(undefined4 **)(this_ + 0x18c);
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*puVar1;
  }
  while(BEA_LOOP_GUARD( true )) {
    if (this_00 == (void *)0x0) {
      return 0;
    }
    iVar2 = FUN_004e43d0(this_00);
    if (iVar2 != 0) break;
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*puVar1;
    }
  }
  return 1;
}

// @autoport-registration (verified: 610 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004fda90, ap_004fda90));
