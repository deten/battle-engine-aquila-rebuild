// auto-ported from 0044fdf0_FUN_0044fdf0.c (FUN_0044fdf0, 120 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_0044fdf0(void * this_)
{
  int *this_00;
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  this_00 = (int *)((int)this_ + 0x14);
  while(BEA_LOOP_GUARD(( true ))) {
    piVar1 = (int *)*this_00;
    *(int **)((int)this_ + 0x1c) = piVar1;
    if ((piVar1 == (int *)0x0) || (puVar2 = (undefined4 *)*piVar1, puVar2 == (undefined4 *)0x0))
    break;
    FUN_004e5bd0(bea_arg(this_00), bea_arg(puVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*puVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar2));
  }
  return FUN_004e5c60(bea_arg(this_00));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044fdf0, ap_0044fdf0));
