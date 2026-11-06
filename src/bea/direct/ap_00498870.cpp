// auto-ported from 00498870_vslot0.c (CMCMech::vslot0, 64 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMCMech;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_004988b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004988b0_t> FUN_004988b0 = {(FUN_004988b0_t)0x004988b0};

static void BEA_THISCALL ap_00498870(CMCMech * this_, int param_1)
{
  int iVar1;
  
  iVar1 = param_1;
  if (*(short *)(param_1 + 4) == 3000) {
    FUN_004988b0(bea_arg(this_), bea_arg(0), bea_arg(0));
    param_1 = 0xbf800000;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(iVar1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00498870, ap_00498870));
