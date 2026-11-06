// auto-ported from 00512b30_vslot6.c (PCLTShell::vslot6, 255 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char PCLTShell;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00889074 GLOBAL_AT(int, 0x00889074)
#define DAT_00889078 GLOBAL_AT(int, 0x00889078)
#define DAT_0063dc20 GLOBAL_AT(char, 0x0063dc20)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
typedef uint32_t (BEA_THISCALL* FUN_0042c810_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042c810_t> FUN_0042c810 = {(FUN_0042c810_t)0x0042c810};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_CDECL* FUN_0054fd80_t)(void);
static const bea_guard<FUN_0054fd80_t> FUN_0054fd80 = {(FUN_0054fd80_t)0x0054fd80};

static undefined4 BEA_THISCALL ap_00512b30(PCLTShell * this_)
{
  int *piVar1;
  int *piVar2;
  PCLTShell *pPVar3;
  int iVar4;
  
  iVar4 = 4;
  pPVar3 = this_ + 0x333f4;
  do {
    if (*(int *)(pPVar3 + -0x10) != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)(pPVar3 + -0x10)));
      *(int *)(pPVar3 + -0x10) = 0;
    }
    if (*(int *)pPVar3 != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)pPVar3));
      *(int *)pPVar3 = 0;
    }
    pPVar3 = pPVar3 + 4;
    iVar4 = iVar4 + -1;
    piVar1 = DAT_00889074;
  } while (BEA_LOOP_GUARD((iVar4 != 0)));
  while (BEA_LOOP_GUARD((piVar2 = DAT_00889078, piVar1 != (int *)0x0))) {
    bea_vcall<uint32_t>(piVar1, 0x10);
    piVar1 = (int *)piVar1[1];
    if (DAT_0063dc20 != '\0') {
      FUN_0042c810(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(3));
    }
  }
  while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
    bea_vcall<uint32_t>(piVar2, 0x10);
    piVar2 = (int *)piVar2[1];
    if (DAT_0063dc20 != '\0') {
      FUN_0042c810(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(3));
    }
  }
  iVar4 = 0;
  if (0 < *(int *)(this_ + 0x33448)) {
    pPVar3 = this_ + 0x33408;
    do {
      piVar1 = *(int **)pPVar3;
      if (piVar1 != (int *)0x0) {
        bea_vcall<uint32_t>(piVar1, 0x20, piVar1);
      }
      piVar1 = *(int **)pPVar3;
      if (piVar1 != (int *)0x0) {
        bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
        *(int *)pPVar3 = 0;
      }
      iVar4 = iVar4 + 1;
      pPVar3 = pPVar3 + 4;
    } while (BEA_LOOP_GUARD((iVar4 < *(int *)(this_ + 0x33448))));
  }
  piVar1 = *(int **)(this_ + 0x33478);
  if (piVar1 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
    *(undefined4 *)(this_ + 0x33478) = 0;
  }
  FUN_0054fd80();
  *(undefined4 *)(this_ + 0x330dc) = 0;
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00512b30, ap_00512b30));
