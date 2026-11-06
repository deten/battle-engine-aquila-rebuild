// auto-ported from 004b6df0_vslot0_t32.c (COggLoader::vslot0_t32, 36 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char COggLoader;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004b6cd0_t)(uint32_t);
static const bea_guard<FUN_004b6cd0_t> FUN_004b6cd0 = {(FUN_004b6cd0_t)0x004b6cd0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static COggLoader * BEA_THISCALL ap_004b6df0(COggLoader * this_, uint param_1)
{
  FUN_004b6cd0(bea_arg(this_));
  if ((param_1 & 1) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_ + -0x20));
  }
  return this_ + -0x20;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b6df0, ap_004b6df0));
