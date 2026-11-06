// auto-ported from 004c5700_vslot14.c (CPDFoR::vslot14, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_STDCALL ap_004c5700(int param_1)
{
  void *this_local;
  
  this_local = *(void **)(param_1 + 0x88);
  if (this_local != (void *)0x0) {
    FUN_004cb0b0(bea_arg(this_local), bea_arg(1));
    FUN_004cb050(bea_arg(this_local));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_local));
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c5700, ap_004c5700));
