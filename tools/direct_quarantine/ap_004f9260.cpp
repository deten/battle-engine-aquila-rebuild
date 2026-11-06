// auto-ported from 004f9260_vslot95.c (CUnit::vslot95, 454 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CUnit;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static FUN_0048dcf0_t const FUN_0048dcf0 = (FUN_0048dcf0_t)0x0048dcf0;
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static FUN_0050ff10_t const FUN_0050ff10 = (FUN_0050ff10_t)0x0050ff10;

static void BEA_THISCALL ap_004f9260(CUnit * this_)
{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CUnit *pCVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  undefined1 local_3e8 [16];
  undefined **local_3d8;
  float local_3d4;
  float local_3d0;
  float local_3cc;
  float local_3c8;
  undefined4 local_338;
  int local_1c;
  undefined4 local_18;
  CUnit *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(this_ + 0x164) != 0) {
    FUN_0048dcf0(bea_arg(&local_3d8));
    local_3d8 = ((void*)0x005d8c80);
    local_1c = 0;
    local_18 = 0;
    local_14 = (CUnit *)0x0;
    local_10 = 0;
    local_c = 0;
    local_4 = 0;
    local_8 = 0;
    if (*(int **)(this_ + 0x30) == (int *)0x0) {
      pCVar6 = this_ + 0x1c;
    }
    else {
      pCVar6 = (CUnit *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x20, local_3e8,0);
    }
    local_3d4 = *(float *)pCVar6;
    local_3d0 = *(float *)(pCVar6 + 4);
    local_3cc = *(float *)(pCVar6 + 8);
    local_3c8 = *(float *)(pCVar6 + 0xc);
    local_338 = *(undefined4 *)(this_ + 0x138);
    if (local_3cc < DAT_006fbdfc + 2.0f) {
      fVar3 = local_3d4 - *(float *)(this_ + 0x1c);
      fVar5 = local_3d0 - *(float *)(this_ + 0x20);
      fVar4 = local_3cc - *(float *)(this_ + 0x24);
      fVar9 = (float10)bea_vcall<float10>(this_, 0x40);
      fVar10 = (float10)bea_vcall<float10>(this_, 0x40);
      if (((float10)(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4) < fVar10 * (float10)(float)fVar9
          ) && (piVar7 = (int *)FUN_0050ff10(bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xec))),
               piVar7 != (int *)0x0)) {
        local_10 = 0;
        local_c = 0;
        iVar1 = *(int *)(*(int *)(this_ + 0x164) + 0xec);
        iVar8 = 0;
        piVar2 = (int *)*DAT_008553f8;
        DAT_008553f8[2] = (int)piVar2;
        if (piVar2 == (int *)0x0) {
          local_1c = 0;
        }
        else {
          local_1c = *piVar2;
        }
        while (BEA_LOOP_GUARD((local_1c != 0))) {
          if (iVar8 == iVar1) goto LAB_004f93e8;
          iVar8 = iVar8 + 1;
          piVar2 = *(int **)(DAT_008553f8[2] + 4);
          DAT_008553f8[2] = (int)piVar2;
          if (piVar2 == (int *)0x0) {
            local_1c = 0;
          }
          else {
            local_1c = *piVar2;
          }
        }
        local_1c = 0;
LAB_004f93e8:
        local_18 = 2;
        if (local_3cc <= DAT_006fbdfc) {
          local_18 = 0;
        }
        local_14 = this_;
        bea_vcall<uint32_t>(piVar7, 0x24, &local_3d8);
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f9260, ap_004f9260));
