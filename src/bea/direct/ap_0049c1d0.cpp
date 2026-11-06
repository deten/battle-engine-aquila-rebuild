// auto-ported from 0049c1d0_vslot5.c (CMCMech::vslot5, 109 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMCMech;
#define DAT_008a9e44 GLOBAL_AT(float, 0x008a9e44)
typedef uint32_t (BEA_THISCALL* FUN_004988b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004988b0_t> FUN_004988b0 = {(FUN_004988b0_t)0x004988b0};

static float * BEA_THISCALL ap_0049c1d0(CMCMech * this_, int param_1, float *param_2)
{
  int iVar1;
  float *pfVar2;
  int iVar3;
  
  pfVar2 = *(float **)(this_ + 0x54);
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)FUN_004988b0(bea_arg(this_), bea_arg(1), bea_arg(0));
  }
  iVar1 = *(int *)(this_ + 0x44);
  *(undefined4 *)(this_ + 0x50) = 1;
  *(undefined4 *)(this_ + 200) = 0;
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x88) * 4;
    if (*(int *)(iVar3 + iVar1) != -0x40800000) {
      *param_2 = (*(float *)(*(int *)(this_ + 0x38) + iVar3) - *(float *)(iVar3 + iVar1)) *
                 DAT_008a9e44 + *(float *)(iVar3 + iVar1);
      return param_2;
    }
    *param_2 = *(float *)(*(int *)(this_ + 0x38) + iVar3);
    pfVar2 = param_2;
  }
  return pfVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049c1d0, ap_0049c1d0));
