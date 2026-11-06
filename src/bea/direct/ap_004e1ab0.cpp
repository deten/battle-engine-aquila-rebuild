// auto-ported from 004e1ab0_FUN_004e1ab0.c (FUN_004e1ab0, 106 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static undefined4 BEA_THISCALL ap_004e1ab0(void * this_, int param_1, int param_2)
{
  int *piVar1;
  int iVar2;
  
  do {
    if (param_1 == 0) {
      return 0;
    }
    if (*(char *)((int)this_ + 4) != '\0') {
      for (piVar1 = *(int **)((int)this_ + 0xc); BEA_LOOP_GUARD((piVar1 != (int *)0x0)); piVar1 = (int *)piVar1[0x1d])
      {
        if ((((char)piVar1[2] != '\0') && (*piVar1 == param_2)) &&
           (iVar2 = FUN_00568390(bea_arg(piVar1[3] + 8), bea_arg(param_1 + 0x40)), iVar2 == 0)) {
          return 1;
        }
      }
    }
    param_1 = *(int *)(param_1 + 0xd4);
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e1ab0, ap_004e1ab0));
