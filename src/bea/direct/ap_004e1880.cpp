// auto-ported from 004e1880_FUN_004e1880.c (FUN_004e1880, 79 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static int * BEA_THISCALL ap_004e1880(void * this_, undefined4 param_1, int param_2)
{
  int *piVar1;
  int iVar2;
  
  if (*(char *)((int)this_ + 4) != '\0') {
    for (piVar1 = *(int **)((int)this_ + 0xc); BEA_LOOP_GUARD((piVar1 != (int *)0x0)); piVar1 = (int *)piVar1[0x1d]) {
      if ((((char)piVar1[2] != '\0') && (*piVar1 == param_2)) &&
         (iVar2 = FUN_00568390(bea_arg(piVar1[3] + 8), bea_arg(param_1)), iVar2 == 0)) {
        return piVar1;
      }
    }
  }
  return (int *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e1880, ap_004e1880));
