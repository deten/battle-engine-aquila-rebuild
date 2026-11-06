// auto-ported from 004ea780_vslot67.c (CRelaxedSquad::vslot67, 191 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRelaxedSquad;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_SquadRelaxed_c_00632918 ((char*)0x00632918)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static FUN_00401000_t const FUN_00401000 = (FUN_00401000_t)0x00401000;
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static FUN_004e5a80_t const FUN_004e5a80 = (FUN_004e5a80_t)0x004e5a80;
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_005490e0_t const FUN_005490e0 = (FUN_005490e0_t)0x005490e0;

static float * BEA_THISCALL ap_004ea780(CRelaxedSquad * this_, float *param_1, int *param_2, undefined4 param_3, undefined4 param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *this_00;
  float10 fVar7;
  
  if ((param_2 != (int *)0x0) && (param_2[0x52] == 0)) {
    puVar6 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(8), bea_arg(s_C__dev_ONSLAUGHT2_SquadRelaxed_c_00632918), bea_arg(100));
    this_00 = (undefined4 *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0;
      this_00 = puVar6;
    }
    FUN_00401000(bea_arg(this_00), bea_arg(param_2));
    FUN_004e5a80(bea_arg(this_ + 0xa4), bea_arg(this_00));
    iVar5 = *(int *)(this_ + 0xb0);
    fVar7 = (float10)bea_vcall<float10>(param_2, 0x40);
    fVar7 = fVar7 * (float10)(iVar5 + -1) * (float10)1.5f;
    fVar1 = *(float *)(this_ + 0x4c);
    fVar2 = *(float *)(this_ + 0x5c);
    fVar3 = (float)param_2[9];
    fVar4 = (float)param_2[8];
    *param_1 = (float)(fVar7 * (float10)*(float *)(this_ + 0x3c)) + (float)param_2[7];
    param_1[1] = (float)(fVar7 * (float10)fVar1) + fVar4;
    param_1[2] = (float)(fVar7 * (float10)fVar2 + (float10)fVar3);
    return param_1;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ea780, ap_004ea780));
