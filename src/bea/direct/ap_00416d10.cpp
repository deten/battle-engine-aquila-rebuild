// auto-ported from 00416d10_FUN_00416d10.c (FUN_00416d10, 137 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_BSpline_cpp_00623ab8 ((char*)0x00623ab8)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_00416d10(void * this_, int param_1, int param_2)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *(int *)((int)this_ + 4) = param_1;
  *(int *)((int)this_ + 0xc) = param_2;
  *(undefined ***)this_ = ((void*)0x005d8e00);
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  *(int *)((int)this_ + 0x10) = iVar1;
  uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg((iVar1 + param_2) * 4 + 4), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_BSpline_cpp_00623ab8), bea_arg(0x13));
  iVar1 = *(int *)((int)this_ + 0xc);
  *(undefined4 *)((int)this_ + 8) = uVar2;
  iVar3 = *(int *)((int)this_ + 0x10);
  iVar4 = 0;
  if (-1 < iVar1 + iVar3) {
    do {
      if (iVar4 < iVar1) {
        *(undefined4 *)(*(int *)((int)this_ + 8) + iVar4 * 4) = 0;
      }
      else {
        if (iVar3 < iVar4) {
          iVar1 = (iVar3 - iVar1) + 2;
        }
        else {
          iVar1 = (iVar4 - iVar1) + 1;
        }
        *(int *)(*(int *)((int)this_ + 8) + iVar4 * 4) = iVar1;
      }
      iVar3 = *(int *)((int)this_ + 0x10);
      iVar1 = *(int *)((int)this_ + 0xc);
      iVar4 = iVar4 + 1;
    } while (BEA_LOOP_GUARD((iVar4 <= iVar1 + iVar3)));
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00416d10, ap_00416d10));
