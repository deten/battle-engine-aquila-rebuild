// auto-ported from 00512990_vslot9.c (PCLTShell::vslot9, 81 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00889078 GLOBAL_AT(int, 0x00889078)
#define DAT_00889074 GLOBAL_AT(int, 0x00889074)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
typedef uint32_t (BEA_THISCALL* FUN_0042c810_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042c810_t> FUN_0042c810 = {(FUN_0042c810_t)0x0042c810};

static undefined4 BEA_CDECL ap_00512990(void)
{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_00889078;
  while (BEA_LOOP_GUARD((piVar2 = DAT_00889074, piVar1 != (int *)0x0))) {
    bea_vcall<uint32_t>(piVar1, 0x8);
    piVar1 = (int *)piVar1[1];
    FUN_0042c810(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(2));
  }
  while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
    bea_vcall<uint32_t>(piVar2, 0x8);
    piVar2 = (int *)piVar2[1];
    FUN_0042c810(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(2));
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00512990, ap_00512990));
