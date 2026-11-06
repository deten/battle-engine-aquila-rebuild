// auto-ported from 004ea880_vslot86.c (CRelaxedSquad::vslot86, 65 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRelaxedSquad;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_0044b1d0_t)(uint32_t);
static const bea_guard<FUN_0044b1d0_t> FUN_0044b1d0 = {(FUN_0044b1d0_t)0x0044b1d0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004ea880(CRelaxedSquad * this_)
{
  undefined4 *puVar1;
  int *this_00;
  
  while(BEA_LOOP_GUARD(( true ))) {
    puVar1 = *(undefined4 **)(this_ + 0xa4);
    *(undefined4 **)(this_ + 0xac) = puVar1;
    if ((puVar1 == (undefined4 *)0x0) || (this_00 = (int *)*puVar1, this_00 == (int *)0x0)) break;
    if ((int *)*this_00 != (int *)0x0) {
      bea_vcall<uint32_t>(*this_00, 0x8);
    }
    FUN_004e5bd0(bea_arg(this_ + 0xa4), bea_arg(this_00));
    FUN_0044b1d0(bea_arg(this_00));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ea880, ap_004ea880));
