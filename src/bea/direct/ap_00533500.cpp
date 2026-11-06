// auto-ported from 00533500_FUN_00533500.c (FUN_00533500, 155 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_0089c5e0 GLOBAL_AT(int, 0x0089c5e0)
#define DAT_0089c590 GLOBAL_AT(int, 0x0089c590)
typedef undefined4 * (BEA_THISCALL* FUN_00538960_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00538960_t> FUN_00538960 = {(FUN_00538960_t)0x00538960};
typedef uint32_t (BEA_THISCALL* FUN_00539980_t)(uint32_t);
static const bea_guard<FUN_00539980_t> FUN_00539980 = {(FUN_00539980_t)0x00539980};
typedef uint32_t (BEA_THISCALL* FUN_00539990_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00539990_t> FUN_00539990 = {(FUN_00539990_t)0x00539990};

static void BEA_THISCALL ap_00533500(void * this_)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_008a9ac0 == 4) {
    FUN_00539980(bea_arg(&DAT_0089c5e0));
  }
  else {
    FUN_00539990(bea_arg(&DAT_0089c5e0), bea_arg(*(undefined4 *)((int)this_ + 0xc)), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  iVar1 = *(int *)((int)this_ + 0xc);
  piVar2 = *(int **)(iVar1 + 0x48);
  *(int **)(iVar1 + 0x50) = piVar2;
  if (piVar2 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar2;
  }
  while (BEA_LOOP_GUARD((iVar4 != 0))) {
    piVar2 = *(int **)(iVar4 + 0xc);
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    while (BEA_LOOP_GUARD((iVar5 != 0))) {
      uVar3 = FUN_00538960(bea_arg(&DAT_0089c590), bea_arg(iVar5), bea_arg(iVar4));
      *(undefined4 *)(iVar5 + 4) = uVar3;
      piVar2 = (int *)piVar2[1];
      if (piVar2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar2;
      }
    }
    piVar2 = *(int **)(*(int *)(iVar1 + 0x50) + 4);
    *(int **)(iVar1 + 0x50) = piVar2;
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00533500, ap_00533500));
