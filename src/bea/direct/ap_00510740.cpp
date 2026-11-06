// auto-ported from 00510740_FUN_00510740.c (FUN_00510740, 185 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008553fc GLOBAL_AT(undefined4*, 0x008553fc)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00855400 GLOBAL_AT(undefined4*, 0x00855400)
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_CDECL ap_00510740(void)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)*DAT_008553fc;
  DAT_008553fc[2] = (int)piVar1;
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  while (BEA_LOOP_GUARD((iVar3 != 0))) {
    while (BEA_LOOP_GUARD(((piVar1 = *(int **)(iVar3 + 0x6c), piVar1 != (int *)0x0 && (iVar2 = *piVar1, iVar2 != 0))
          ))) {
      FUN_004e5bd0(bea_arg((int *)(iVar3 + 0x6c)), bea_arg(iVar2));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
    }
    piVar1 = *(int **)(DAT_008553fc[2] + 4);
    DAT_008553fc[2] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
  }
  piVar1 = (int *)*DAT_00855400;
  DAT_00855400[2] = (int)piVar1;
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  while (BEA_LOOP_GUARD((iVar3 != 0))) {
    while (BEA_LOOP_GUARD(((piVar1 = *(int **)(iVar3 + 0x6c), piVar1 != (int *)0x0 && (iVar2 = *piVar1, iVar2 != 0))
          ))) {
      FUN_004e5bd0(bea_arg((int *)(iVar3 + 0x6c)), bea_arg(iVar2));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
    }
    piVar1 = *(int **)(DAT_00855400[2] + 4);
    DAT_00855400[2] = (int)piVar1;
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
BEA_HOOKS(BEA_HOOK(0x00510740, ap_00510740));
