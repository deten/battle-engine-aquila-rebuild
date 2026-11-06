// auto-ported from 00424260_FUN_00424260.c (FUN_00424260, 252 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00465580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00465580_t> FUN_00465580 = {(FUN_00465580_t)0x00465580};

static void * BEA_THISCALL ap_00424260(void * this_, int param_1, undefined4 param_2)
{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *(int *)((int)this_ + 8);
  uVar2 = *(uint *)((int)this_ + 4);
  if (param_1 == iVar4) {
    if ((int)uVar2 <= iVar4) {
      uVar1 = uVar2 + 1;
      if (uVar2 < uVar1) {
        if (*(int *)((int)this_ + 0xc) == 0) {
          return this_;
        }
        while (BEA_LOOP_GUARD(((uVar2 < uVar1 && (*(int *)this_ != 0))))) {
          iVar4 = *(int *)((int)this_ + 0xc);
          if (iVar4 < 1) {
            iVar4 = -(iVar4 * uVar2);
          }
          else {
            iVar4 = iVar4 + uVar2;
          }
          FUN_00465580(bea_arg(this_), bea_arg(iVar4));
          uVar2 = *(uint *)((int)this_ + 4);
        }
      }
      if (*(int *)this_ == 0) {
        return this_;
      }
    }
    *(undefined4 *)(*(int *)this_ + *(int *)((int)this_ + 8) * 4) = param_2;
    *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + 1;
    return this_;
  }
  if ((int)uVar2 <= iVar4) {
    uVar1 = uVar2 + 1;
    if (uVar2 < uVar1) {
      if (*(int *)((int)this_ + 0xc) == 0) {
        return this_;
      }
      while (BEA_LOOP_GUARD(((uVar2 < uVar1 && (*(int *)this_ != 0))))) {
        iVar4 = *(int *)((int)this_ + 0xc);
        if (iVar4 < 1) {
          iVar4 = -(iVar4 * uVar2);
        }
        else {
          iVar4 = iVar4 + uVar2;
        }
        FUN_00465580(bea_arg(this_), bea_arg(iVar4));
        uVar2 = *(uint *)((int)this_ + 4);
      }
    }
    if (*(int *)this_ == 0) {
      return this_;
    }
  }
  iVar4 = *(int *)this_;
  puVar5 = (undefined4 *)(iVar4 + *(int *)((int)this_ + 8) * 4);
  puVar3 = puVar5;
  while (BEA_LOOP_GUARD((puVar3 = puVar3 + -1, (undefined4 *)(iVar4 + param_1 * 4) <= puVar3))) {
    *puVar5 = *puVar3;
    puVar5 = puVar5 + -1;
  }
  *(undefined4 *)(*(int *)this_ + param_1 * 4) = param_2;
  *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + 1;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00424260, ap_00424260));
