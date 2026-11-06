// auto-ported from 004027c0_FUN_004027c0.c (FUN_004027c0, 276 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef int (BEA_THISCALL* FUN_00491ea0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00491ea0_t> FUN_00491ea0 = {(FUN_00491ea0_t)0x00491ea0};
typedef int (BEA_THISCALL* FUN_00492020_t)(uint32_t);
static const bea_guard<FUN_00492020_t> FUN_00492020 = {(FUN_00492020_t)0x00492020};
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static const bea_guard<FUN_00492c90_t> FUN_00492c90 = {(FUN_00492c90_t)0x00492c90};

static void BEA_THISCALL ap_004027c0(void * this_)
{
  float fVar1;
  int iVar2;
  void *this_00;
  int *piVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_8;
  
  FUN_00401000(bea_arg((void *)((int)this_ + 0x2c)), bea_arg(0));
  iVar2 = *(int *)((int)this_ + 0x18);
  this_00 = (void *)FUN_00491ea0(bea_arg(&DAT_00704200), bea_arg(*(undefined4 *)(iVar2 + 0x1c)), bea_arg(*(undefined4 *)(iVar2 + 0x20)), bea_arg(*(undefined4 *)(iVar2 + 0x24)), bea_arg(*(undefined4 *)(iVar2 + 0x28)), bea_arg(0x41f00000));
  local_8 = 999999.0;
  fVar4 = bea_fcast<float10>(bea_vcall<float10>(*(int **)((int)this_ + 0x18), 0x40));
  while (((this_00 != (void *)0x0))) {
    piVar3 = (int *)FUN_00492c90(bea_arg(this_00));
    if (((piVar3 != (int *)0x0) && (piVar3 != *(int **)((int)this_ + 0x18))) &&
       ((*(byte *)(piVar3 + 0xd) & 4) == 0)) {
      fVar5 = bea_fcast<float10>(bea_vcall<float10>(piVar3, 0x40));
      iVar2 = *(int *)((int)this_ + 0x18);
      fVar6 = bea_fcast<float10>(bea_fcast<float>(piVar3[7])) - bea_fcast<float10>(*(float *)(iVar2 + 0x1c));
      fVar7 = bea_fcast<float10>(bea_fcast<float>(piVar3[8])) - bea_fcast<float10>(*(float *)(iVar2 + 0x20));
      fVar8 = bea_fcast<float10>(bea_fcast<float>(piVar3[9])) - bea_fcast<float10>(*(float *)(iVar2 + 0x24));
      fVar1 = bea_fcast<float>((((fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7) - fVar5 * fVar5) -
                     bea_fcast<float10>(bea_fcast<float>((fVar4 * fVar4)))));
      if ((fVar1 < local_8) && (fVar1 < 225.0f)) {
        FUN_00401000(bea_arg((void *)((int)this_ + 0x2c)), bea_arg(piVar3));
        local_8 = fVar1;
      }
    }
    this_00 = (void *)FUN_00492020(bea_arg(&DAT_00704200));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004027c0, ap_004027c0));
