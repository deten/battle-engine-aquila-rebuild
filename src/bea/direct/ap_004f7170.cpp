// auto-ported from 004f7170_FUN_004f7170.c (FUN_004f7170, 708 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_triangulate_cp_00633ab8 ((char*)0x00633ab8)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_004f7170(void * this_, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6)
{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_1 * 8), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_triangulate_cp_00633ab8), bea_arg(6))
  ;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  *(int *)this_ = iVar3;
  uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_1 * 0xc), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_triangulate_cp_00633ab8), bea_arg(7));
  *(undefined4 *)((int)this_ + 4) = uVar4;
  *(int *)((int)this_ + 0x10) = param_1;
  if (param_6 == 0) {
    puVar1 = *(undefined4 **)this_;
    *puVar1 = param_2;
    puVar1[1] = param_3;
    *(undefined4 *)(*(int *)this_ + 8) = param_4;
    *(undefined4 *)(*(int *)this_ + 0xc) = param_3;
    *(undefined4 *)(*(int *)this_ + 0x10) = param_2;
    *(undefined4 *)(*(int *)this_ + 0x14) = param_5;
    iVar3 = *(int *)this_;
    *(undefined4 *)(iVar3 + 0x18) = param_4;
    *(undefined4 *)(iVar3 + 0x1c) = param_5;
    **(undefined2 **)((int)this_ + 4) = 0;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 2) = 1;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 4) = 2;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 6) = 1;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 8) = 3;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 10) = 2;
    *(undefined4 *)((int)this_ + 8) = 4;
    *(undefined4 *)((int)this_ + 0xc) = 2;
  }
  else if (param_6 == 1) {
    puVar1 = *(undefined4 **)this_;
    *puVar1 = param_2;
    puVar1[1] = param_3;
    *(undefined4 *)(*(int *)this_ + 0x10) = param_4;
    *(undefined4 *)(*(int *)this_ + 0x14) = param_3;
    *(undefined4 *)(*(int *)this_ + 0x28) = param_2;
    *(undefined4 *)(*(int *)this_ + 0x2c) = param_5;
    iVar3 = *(int *)this_;
    *(undefined4 *)(iVar3 + 0x38) = param_4;
    *(undefined4 *)(iVar3 + 0x3c) = param_5;
    pfVar2 = *(float **)this_;
    pfVar2[2] = (pfVar2[4] + *pfVar2) * 0.5f;
    pfVar2[3] = (pfVar2[5] + pfVar2[1]) * 0.5f;
    pfVar2 = *(float **)this_;
    pfVar2[6] = (*pfVar2 + pfVar2[10]) * 0.5f;
    pfVar2[7] = (pfVar2[0xb] + pfVar2[1]) * 0.5f;
    iVar3 = *(int *)this_;
    *(float *)(iVar3 + 0x20) = (*(float *)(iVar3 + 0x10) + *(float *)(iVar3 + 0x38)) * 0.5f;
    *(float *)(iVar3 + 0x24) = (*(float *)(iVar3 + 0x3c) + *(float *)(iVar3 + 0x14)) * 0.5f;
    iVar3 = *(int *)this_;
    *(float *)(iVar3 + 0x30) = (*(float *)(iVar3 + 0x28) + *(float *)(iVar3 + 0x38)) * 0.5f;
    *(float *)(iVar3 + 0x34) = (*(float *)(iVar3 + 0x3c) + *(float *)(iVar3 + 0x2c)) * 0.5f;
    **(undefined2 **)((int)this_ + 4) = 0;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 2) = 1;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 4) = 3;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 6) = 1;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 8) = 5;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 10) = 3;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 0xc) = 1;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 0xe) = 6;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 0x10) = 5;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 0x12) = 1;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 0x14) = 7;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 0x16) = 6;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 0x18) = 1;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 0x1a) = 4;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 0x1c) = 7;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 0x1e) = 1;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 0x20) = 2;
    *(undefined2 *)(*(int *)((int)this_ + 4) + 0x22) = 4;
    *(undefined4 *)((int)this_ + 8) = 8;
    *(undefined4 *)((int)this_ + 0xc) = 6;
    return this_;
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f7170, ap_004f7170));
