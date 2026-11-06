// auto-ported from 005129f0_vslot5.c (PCLTShell::vslot5, 99 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00889074 GLOBAL_AT(int, 0x00889074)
#define DAT_00889078 GLOBAL_AT(int, 0x00889078)
#define DAT_0063dc20 GLOBAL_AT(char, 0x0063dc20)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
typedef uint32_t (BEA_THISCALL* FUN_0042c810_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042c810_t> FUN_0042c810 = {(FUN_0042c810_t)0x0042c810};

static undefined4 BEA_CDECL ap_005129f0(void)
{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_00889074;
  while (BEA_LOOP_GUARD((piVar2 = DAT_00889078, piVar1 != (int *)0x0))) {
    bea_vcall<uint32_t>(piVar1, 0xc);
    piVar1 = (int *)piVar1[1];
    if (DAT_0063dc20 != '\0') {
      FUN_0042c810(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(3));
    }
  }
  while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
    bea_vcall<uint32_t>(piVar2, 0xc);
    piVar2 = (int *)piVar2[1];
    if (DAT_0063dc20 != '\0') {
      FUN_0042c810(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(3));
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005129f0, ap_005129f0));
