// auto-ported from 004fe390_FUN_004fe390.c (FUN_004fe390, 85 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static void BEA_THISCALL ap_004fe390(void * this_, undefined4 param_1)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)((int)this_ + 0x18c);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  while (BEA_LOOP_GUARD((iVar3 != 0))) {
    iVar2 = FUN_00568390(bea_arg(param_1), bea_arg(*(undefined4 *)(*(int *)(iVar3 + 0x3d0) + 8)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar3 + 0x3f4) = 1;
    }
    piVar1 = (int *)piVar1[1];
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fe390, ap_004fe390));
