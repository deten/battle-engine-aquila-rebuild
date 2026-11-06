// auto-ported from 0042e8f0_FUN_0042e8f0.c (FUN_0042e8f0, 94 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0066e99c GLOBAL_AT(undefined4*, 0x0066e99c)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_CDECL ap_0042e8f0(void)
{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (DAT_0066e99c != (int *)0x0) {
    while(BEA_LOOP_GUARD(( true ))) {
      piVar1 = (int *)*DAT_0066e99c;
      DAT_0066e99c[2] = (int)piVar1;
      piVar3 = DAT_0066e99c;
      if ((piVar1 == (int *)0x0) || (puVar2 = (undefined4 *)*piVar1, puVar2 == (undefined4 *)0x0))
      break;
      FUN_004e5bd0(bea_arg(DAT_0066e99c), bea_arg(puVar2));
      bea_vcall<uint32_t>(puVar2, 0x0, 1);
    }
    if (DAT_0066e99c != (int *)0x0) {
      FUN_004e5c60(bea_arg(DAT_0066e99c));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar3));
      DAT_0066e99c = (int *)0x0;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042e8f0, ap_0042e8f0));
