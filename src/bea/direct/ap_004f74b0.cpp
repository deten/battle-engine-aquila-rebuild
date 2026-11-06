// auto-ported from 004f74b0_FUN_004f74b0.c (FUN_004f74b0, 424 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004f7660_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f7660_t> FUN_004f7660 = {(FUN_004f7660_t)0x004f7660};

static undefined4 BEA_THISCALL ap_004f74b0(void * this_, ushort *param_1, float *param_2)
{
  ushort uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  
  if (*(int *)((int)this_ + 8) < *(int *)((int)this_ + 0x10)) {
    iVar9 = *(int *)this_;
    fVar3 = *(float *)(iVar9 + (uint)*param_1 * 8) - *param_2;
    fVar4 = *(float *)(iVar9 + (uint)*param_1 * 8 + 4) - param_2[1];
    uVar12 = (uint)param_1[1];
    fVar5 = *(float *)(iVar9 + uVar12 * 8) - *param_2;
    uVar1 = param_1[2];
    uVar13 = CONCAT22((short)(iVar9 + uVar12 * 8 >> 0x10),uVar1);
    fVar6 = *(float *)(iVar9 + 4 + uVar12 * 8) - param_2[1];
    fVar7 = *(float *)(iVar9 + (uint)uVar1 * 8) - *param_2;
    fVar8 = *(float *)(iVar9 + (uint)uVar1 * 8 + 4) - param_2[1];
    if (((0.0f <= fVar6 * fVar3 - fVar4 * fVar5) && (0.0f <= fVar8 * fVar5 - fVar7 * fVar6)) &&
       (0.0f <= fVar7 * fVar4 - fVar8 * fVar3)) {
      param_1[2] = *(ushort *)((int)this_ + 8);
      *(ushort *)(*(int *)((int)this_ + 4) + *(int *)((int)this_ + 0xc) * 6) = param_1[1];
      *(ushort *)(*(int *)((int)this_ + 4) + 2 + *(int *)((int)this_ + 0xc) * 6) = uVar1;
      *(undefined2 *)(*(int *)((int)this_ + 4) + 4 + *(int *)((int)this_ + 0xc) * 6) =
           *(undefined2 *)((int)this_ + 8);
      iVar9 = *(int *)((int)this_ + 0xc) + 1;
      *(int *)((int)this_ + 0xc) = iVar9;
      *(ushort *)(*(int *)((int)this_ + 4) + iVar9 * 6) = uVar1;
      *(ushort *)(*(int *)((int)this_ + 4) + 2 + *(int *)((int)this_ + 0xc) * 6) = *param_1;
      *(undefined2 *)(*(int *)((int)this_ + 4) + 4 + *(int *)((int)this_ + 0xc) * 6) =
           *(undefined2 *)((int)this_ + 8);
      iVar9 = *(int *)((int)this_ + 8);
      iVar2 = *(int *)this_;
      *(int *)((int)this_ + 0xc) = *(int *)((int)this_ + 0xc) + 1;
      fVar3 = *param_2;
      *(float *)(iVar2 + iVar9 * 8) = fVar3;
      *(float *)(iVar2 + 4 + iVar9 * 8) = param_2[1];
      iVar9 = *(int *)((int)this_ + 8) + 1;
      *(int *)((int)this_ + 8) = iVar9;
      uVar11 = CONCAT22((short)(bea_piece32(fVar3) >> 0x10),param_1[1]);
      uVar10 = CONCAT22((short)((uint)iVar9 >> 0x10),*param_1);
      FUN_004f7660(bea_arg(this_), bea_arg(uVar10), bea_arg(uVar11));
      FUN_004f7660(bea_arg(this_), bea_arg(uVar11), bea_arg(uVar13));
      FUN_004f7660(bea_arg(this_), bea_arg(uVar13), bea_arg(uVar10));
      return 1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f74b0, ap_004f74b0));
