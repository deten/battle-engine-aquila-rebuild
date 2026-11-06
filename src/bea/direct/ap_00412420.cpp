// auto-ported from 00412420_FUN_00412420.c (FUN_00412420, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};

static undefined4 BEA_THISCALL ap_00412420(void * this_)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = *(int **)this_;
  iVar4 = 0;
  *(int **)((int)this_ + 8) = piVar1;
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (iVar2 != 0) {
    do {
      if (iVar4 == *(int *)((int)this_ + 0x10)) {
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(*(undefined4 *)(*(int *)(iVar2 + 0xa4) + 0x3c)));
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      piVar1 = *(int **)(*(int *)((int)this_ + 8) + 4);
      *(int **)((int)this_ + 8) = piVar1;
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
    } while (BEA_LOOP_GUARD((iVar2 != 0)));
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00412420, ap_00412420));
