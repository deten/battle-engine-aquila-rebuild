// auto-ported from 004e6ce0_vslot2.c (CNormalSquad::vslot2, 88 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CNormalSquad;
typedef char CSquad;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* CSquad__vslot2_t)(uint32_t);
static const bea_guard<CSquad__vslot2_t> CSquad__vslot2 = {(CSquad__vslot2_t)0x004e65b0};
typedef uint32_t (BEA_THISCALL* FUN_0044b1d0_t)(uint32_t);
static const bea_guard<FUN_0044b1d0_t> FUN_0044b1d0 = {(FUN_0044b1d0_t)0x0044b1d0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_004e6ce0(CNormalSquad * this_)
{
  undefined4 *puVar1;
  void *this_00;
  while(BEA_LOOP_GUARD(( true ))) {
    puVar1 = *(undefined4 **)(this_ + 0xa4);
    *(undefined4 **)(this_ + 0xac) = puVar1;
    if ((puVar1 == (undefined4 *)0x0) || (this_00 = (void *)*puVar1, this_00 == (void *)0x0)) break;
    FUN_004e5bd0(bea_arg(this_ + 0xa4), bea_arg(this_00));
    *(int *)(this_ + 0xb4) = *(int *)(this_ + 0xb4) + -1;
    FUN_0044b1d0(bea_arg(this_00));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
  }
  *(undefined4 *)(this_ + 0xd0) = 0;
  return CSquad__vslot2(bea_arg((CSquad *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e6ce0, ap_004e6ce0));
