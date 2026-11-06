// auto-ported from 00416fc0_FUN_00416fc0.c (FUN_00416fc0, 217 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef float10 (BEA_THISCALL* FUN_00416e30_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00416e30_t> FUN_00416e30 = {(FUN_00416e30_t)0x00416e30};

static void BEA_THISCALL ap_00416fc0(void * this_, float *param_1, float param_2)
{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  float local_10;
  float local_c;
  float local_8;
  float local_4 = 0;
  
  local_10 = 0.0;
  local_c = 0.0;
  iVar2 = *(int *)((int)this_ + 0x10);
  iVar3 = *(int *)((int)this_ + 0xc);
  local_8 = 0.0;
  puVar4 = (undefined4 *)**(undefined4 **)((int)this_ + 4);
  (*(undefined4 **)((int)this_ + 4))[2] = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    pfVar5 = (float *)0x0;
  }
  else {
    pfVar5 = (float *)*puVar4;
  }
  iVar6 = 0;
  if (-1 < *(int *)((int)this_ + 0x10)) {
    do {
      fVar7 = (float10)FUN_00416e30(bea_arg(this_), bea_arg(iVar6), bea_arg(*(undefined4 *)((int)this_ + 0xc)), bea_arg((float)((iVar2 - iVar3) + 2) * param_2));
      puVar4 = *(undefined4 **)(*(int *)(*(int *)((int)this_ + 4) + 8) + 4);
      local_10 = (float)(fVar7 * (float10)*pfVar5 + (float10)local_10);
      local_c = (float)(fVar7 * (float10)pfVar5[1] + (float10)local_c);
      fVar1 = pfVar5[2];
      *(undefined4 **)(*(int *)((int)this_ + 4) + 8) = puVar4;
      local_8 = (float)(fVar7 * (float10)fVar1 + (float10)local_8);
      if (puVar4 == (undefined4 *)0x0) {
        pfVar5 = (float *)0x0;
      }
      else {
        pfVar5 = (float *)*puVar4;
      }
      iVar6 = iVar6 + 1;
    } while (BEA_LOOP_GUARD((iVar6 <= *(int *)((int)this_ + 0x10))));
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00416fc0, ap_00416fc0));
