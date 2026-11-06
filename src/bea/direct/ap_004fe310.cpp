// auto-ported from 004fe310_vslot103.c (CUnit::vslot103, 124 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* FUN_004ffdd0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ffdd0_t> FUN_004ffdd0 = {(FUN_004ffdd0_t)0x004ffdd0};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static void BEA_THISCALL ap_004fe310(CUnit * this_, undefined4 param_1)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(this_ + 0x17c);
  if (piVar3 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar3;
  }
  if (iVar2 != 0) {
    while (BEA_LOOP_GUARD((iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(**(undefined4 **)(iVar2 + 0xa4))), iVar1 != 0))) {
      piVar3 = (int *)piVar3[1];
      if (piVar3 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar3;
      }
      if (iVar2 == 0) {
        return;
      }
    }
    *(undefined4 *)(iVar2 + 0x9c) = 0;
    if (*(int *)(this_ + 0x140) == iVar2) {
      *(undefined4 *)(this_ + 0x140) = 0;
    }
    if (*(void **)(this_ + 0x13c) != (void *)0x0) {
      FUN_004ffdd0(bea_arg(*(void **)(this_ + 0x13c)), bea_arg(0), bea_arg(0));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fe310, ap_004fe310));
