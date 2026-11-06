// auto-ported from 004308e0_vslot0.c (CPhysicsSpawnerValueList::vslot0, 59 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CPhysicsSpawnerValueList;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static CPhysicsSpawnerValueList * BEA_THISCALL ap_004308e0(CPhysicsSpawnerValueList * this_, uint param_1)
{
  *(undefined ***)this_ = ((void*)0x005d98c8);
  if (*(undefined4 **)(this_ + 4) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)(this_ + 4), 0x0, 1);
  }
  if (*(undefined4 **)(this_ + 8) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)(this_ + 8), 0x0, 1);
  }
  if ((param_1 & 1) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_));
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004308e0, ap_004308e0));
