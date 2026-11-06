// auto-ported from 004dbd50_vslot0.c (CRenderThing::vslot0, 46 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRenderThing;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static CRenderThing * BEA_THISCALL ap_004dbd50(CRenderThing * this_, uint param_1)
{
  *(undefined ***)this_ = ((void*)0x005deaac);
  if (*(undefined4 **)(this_ + 0x10) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)(this_ + 0x10), 0x0, 1);
  }
  if ((param_1 & 1) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_));
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dbd50, ap_004dbd50));
