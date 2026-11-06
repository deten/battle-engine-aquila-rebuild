// auto-ported from 00413eb0_FUN_00413eb0.c (FUN_00413eb0, 341 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00409e80_t)(uint32_t);
static const bea_guard<FUN_00409e80_t> FUN_00409e80 = {(FUN_00409e80_t)0x00409e80};
typedef int (BEA_THISCALL* FUN_00414030_t)(uint32_t);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};

static int BEA_THISCALL ap_00413eb0(void * this_)
{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint local_8;
  
  iVar6 = FUN_00414030(bea_arg(this_));
  uVar11 = *(int *)((int)this_ + 0x10) + 1;
  iVar6 = *(int *)(*(int *)(iVar6 + 0xa4) + 0x34);
  piVar7 = *(int **)((int)this_ + 0x18);
  local_8 = (uint)(piVar7 != (int *)0x0);
  piVar3 = *(int **)this_;
  *(int **)((int)this_ + 8) = piVar3;
  if (piVar3 != (int *)0x0) {
    iVar8 = *piVar3;
    local_8 = (uint)(piVar7 != (int *)0x0);
    while (BEA_LOOP_GUARD((iVar8 != 0))) {
      local_8 = local_8 + 1;
      piVar7 = *(int **)(*(int *)((int)this_ + 8) + 4);
      *(int **)((int)this_ + 8) = piVar7;
      if (piVar7 == (int *)0x0) break;
      iVar8 = *piVar7;
    }
  }
  if (uVar11 == *(uint *)((int)this_ + 0x10)) {
    return (int)piVar7;
  }
  do {
    if ((uVar11 == 0) && (iVar8 = *(int *)((int)this_ + 0x18), iVar8 != 0)) {
      if ((*(int *)(*(int *)((int)this_ + 0x20) + 0x2fc) == 0) ||
         (iVar4 = *(int *)((int)this_ + 0x1c), *(int *)((int)this_ + 0x1c) == 0)) {
LAB_00413f35:
        iVar4 = iVar8;
        if (iVar8 == 0) goto LAB_00413f6d;
      }
      iVar8 = iVar4;
      iVar4 = *(int *)(*(int *)(iVar8 + 0xa4) + 0x24);
      if (*(int *)(iVar8 + 0x9c) != 0) {
        iVar5 = *(int *)((int)this_ + 0x20);
        if (*(int *)(iVar5 + 0x55c + iVar4 * 4) != 0) {
LAB_00413fbe:
          *(uint *)((int)this_ + 0x10) = uVar11;
          *(undefined4 *)(*(int *)((int)this_ + 0x20) + 0x588) = 0;
          iVar8 = FUN_00414030(bea_arg(this_));
          if (iVar8 != 0) {
            *(undefined4 *)(iVar8 + 0x60) = 0;
          }
          iVar8 = FUN_00414030(bea_arg(this_));
          if (iVar6 == *(int *)(*(int *)(iVar8 + 0xa4) + 0x34)) {
            return iVar6;
          }
          uVar9 = FUN_00409e80(bea_arg(*(void **)((int)this_ + 0x20)));
          return uVar9;
        }
        fVar1 = *(float *)(*(int *)(iVar8 + 0xa4) + 0x20);
        fVar2 = *(float *)(iVar5 + 0x52c + iVar4 * 4);
        iVar8 = CONCAT22((short)((uint)iVar5 >> 0x10),
                         (ushort)(fVar1 < fVar2) << 8 | (ushort)(bea_isnan(fVar1) || bea_isnan(fVar2)) << 10 |
                         (ushort)(fVar1 == fVar2) << 0xe);
        if (fVar1 < fVar2 || (fVar1 == fVar2) != 0) goto LAB_00413fbe;
      }
    }
    else {
      uVar10 = (uint)(*(int *)((int)this_ + 0x18) != 0);
      *(int **)((int)this_ + 8) = piVar3;
      if (piVar3 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar3;
      }
      while (BEA_LOOP_GUARD((iVar8 != 0))) {
        if (uVar10 == uVar11) goto LAB_00413f35;
        uVar10 = uVar10 + 1;
        piVar7 = *(int **)(*(int *)((int)this_ + 8) + 4);
        *(int **)((int)this_ + 8) = piVar7;
        if (piVar7 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *piVar7;
        }
      }
    }
LAB_00413f6d:
    uVar11 = uVar11 + 1;
    if ((int)local_8 <= (int)uVar11) {
      uVar11 = 0;
    }
    if (uVar11 == *(uint *)((int)this_ + 0x10)) {
      return iVar8;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00413eb0, ap_00413eb0));
