// auto-ported from 004fe2b0_vslot102.c (CUnit::vslot102, 84 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CUnit;
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static undefined4 BEA_THISCALL ap_004fe2b0(CUnit * this_, undefined4 param_1)
{
  uint32_t eax_in = 0;
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
    do {
      iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(**(undefined4 **)(iVar2 + 0xa4)));
      if (iVar1 == 0) {
        *(undefined4 *)(iVar2 + 0x9c) = 1;
      }
      piVar3 = (int *)piVar3[1];
      if (piVar3 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar3;
      }
    } while (BEA_LOOP_GUARD((iVar2 != 0)));
    eax_in = 0;
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fe2b0, ap_004fe2b0));
