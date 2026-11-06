// auto-ported from 00404c10_FUN_00404c10.c (FUN_00404c10, 121 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_006601a8 GLOBAL_AT(undefined4*, 0x006601a8)
#define DAT_006601ac GLOBAL_AT(int, 0x006601ac)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_CDECL ap_00404c10(void)
{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  
  piVar1 = DAT_006601a8;
  uVar6 = 0;
  if (DAT_006601ac != 0) {
    FUN_004f27e0(bea_arg((void *)(DAT_006601ac + 8)));
    DAT_006601ac = 0;
    piVar1 = DAT_006601a8;
    uVar6 = DAT_006601ac;
  }
  while (BEA_LOOP_GUARD((DAT_006601ac = uVar6, piVar4 = piVar1, piVar4 != (int *)0x0))) {
    piVar1 = (int *)piVar4[1];
    bea_vcall<uint32_t>(piVar4, 0x10);
    uVar6 = DAT_006601ac;
    if (piVar4 != (int *)0x0) {
      *piVar4 = (int)((void*)0x005d87ec);
      if (DAT_006601a8 == piVar4) {
        DAT_006601a8 = (int *)piVar4[1];
      }
      else {
        piVar5 = (int *)DAT_006601a8[1];
        piVar3 = DAT_006601a8;
        while (BEA_LOOP_GUARD((piVar2 = piVar5, piVar2 != piVar4))) {
          piVar3 = piVar2;
          piVar5 = (int *)piVar2[1];
        }
        piVar3[1] = piVar4[1];
      }
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar4));
      uVar6 = DAT_006601ac;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00404c10, ap_00404c10));
