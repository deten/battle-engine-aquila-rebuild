// auto-ported from 0044b310_FUN_0044b310.c (FUN_0044b310, 87 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @autoport-repair: 1 float/pointer cast(s) made bit copies (compiler-located, tools/repair_fcasts.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};

static void BEA_THISCALL ap_0044b310(void * this_, undefined4 *param_1)
{
  undefined4 *puVar1;
  undefined4 *this_00;
  short *psVar2;
  undefined4 uVar3;
  undefined4 *this_01;
  
  this_01 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1 + 3;
    uVar3 = *param_1;
    this_00 = param_1 + 3;
    psVar2 = (short *)(param_1 + 1);
    param_1 = (undefined4 *)(uintptr_t)bea_piece32((*(float *)((int)this_ + 8) + bea_fcast<float>(param_1[4])));
    FUN_0044b370(bea_arg(this_), bea_arg((int)*psVar2), bea_arg(uVar3), bea_arg(&param_1), bea_arg(0), bea_arg(*puVar1), bea_arg(0));
    this_01[4] = *(undefined4 *)((int)this_ + 0x28);
    FUN_00401000(bea_arg(this_00), bea_arg(0));
    FUN_00401000(bea_arg(this_01), bea_arg(0));
    *(undefined4 **)((int)this_ + 0x28) = this_01;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044b310, ap_0044b310));
