// auto-ported from 0053aa40_FUN_0053aa40.c (FUN_0053aa40, 243 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0067a748 GLOBAL_AT(int, 0x0067a748)
typedef int (BEA_THISCALL* FUN_005001e0_t)(uint32_t);
static FUN_005001e0_t const FUN_005001e0 = (FUN_005001e0_t)0x005001e0;
typedef uint32_t (BEA_CDECL* FUN_0053ab40_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_0053ab40_t const FUN_0053ab40 = (FUN_0053ab40_t)0x0053ab40;

static void BEA_THISCALL ap_0053aa40(void * this_, undefined4 param_1, undefined4 param_2)
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_4;
  
  iVar5 = 0;
  piVar1 = *(int **)(*(int *)((int)this_ + 0x70) + 8);
  local_4 = this_;
  iVar3 = bea_vcall<uint32_t>(piVar1, 0x2c, piVar1,0,0);
  if (-1 < iVar3) {
    iVar3 = *(int *)((int)this_ + 0x18);
    iVar4 = 8;
    do {
      FUN_0053ab40(bea_arg(iVar5), bea_arg(&local_4), bea_arg((float)*(int *)((int)this_ + 100)), bea_arg((float)*(int *)((int)this_ + 0x68)), bea_arg(iVar3), bea_arg(0x3f010000), bea_arg(0x2800));
      iVar3 = iVar3 + 8;
      iVar5 = iVar5 + 0x20;
      iVar4 = iVar4 + -1;
    } while (BEA_LOOP_GUARD((iVar4 != 0)));
    piVar1 = (int *)(DAT_0067a748 + 0x10);
    piVar2 = *(int **)(DAT_0067a748 + 8);
    *piVar1 = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    while (BEA_LOOP_GUARD((iVar4 != 0))) {
      FUN_0053ab40(bea_arg(iVar5), bea_arg(&local_4), bea_arg((float)*(int *)((int)this_ + 100)), bea_arg((float)*(int *)((int)this_ + 0x68)), bea_arg(iVar3), bea_arg(*(float *)(iVar4 + 0xb4) * 0.49f + 0.50390625f), bea_arg(0x2800));
      iVar5 = iVar5 + 0x20;
      iVar3 = iVar3 + 8;
      piVar2 = *(int **)(*piVar1 + 4);
      *piVar1 = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar2;
      }
    }
    FUN_005001e0(bea_arg(*(void **)((int)this_ + 0x70)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053aa40, ap_0053aa40));
