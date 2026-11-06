// auto-ported from 0048afb0_FUN_0048afb0.c (FUN_0048afb0, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_0048afb0(void * this_)
{
  int *piVar1;
  int iVar2;
  
  while(BEA_LOOP_GUARD(( true ))) {
    piVar1 = *(int **)((int)this_ + 8);
    *(int **)((int)this_ + 0x10) = piVar1;
    if ((piVar1 == (int *)0x0) || (piVar1 = (int *)*piVar1, piVar1 == (int *)0x0)) break;
    FUN_004e5bd0(bea_arg((int *)((int)this_ + 8)), bea_arg(piVar1));
    bea_vcall<uint32_t>(piVar1, 0x8);
  }
  while(BEA_LOOP_GUARD(( true ))) {
    piVar1 = *(int **)((int)this_ + 0x18);
    *(int **)((int)this_ + 0x20) = piVar1;
    if ((piVar1 == (int *)0x0) || (iVar2 = *piVar1, iVar2 == 0)) break;
    FUN_004e5bd0(bea_arg((int *)((int)this_ + 0x18)), bea_arg(iVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048afb0, ap_0048afb0));
