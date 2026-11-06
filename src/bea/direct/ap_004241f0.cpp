// auto-ported from 004241f0_FUN_004241f0.c (FUN_004241f0, 107 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00465580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00465580_t> FUN_00465580 = {(FUN_00465580_t)0x00465580};

static void * BEA_THISCALL ap_004241f0(void * this_, undefined4 param_1)
{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)((int)this_ + 4);
  if ((int)uVar2 <= *(int *)((int)this_ + 8)) {
    uVar1 = uVar2 + 1;
    if (uVar2 < uVar1) {
      if (*(int *)((int)this_ + 0xc) == 0) {
        return this_;
      }
      while (BEA_LOOP_GUARD(((uVar2 < uVar1 && (*(int *)this_ != 0))))) {
        iVar3 = *(int *)((int)this_ + 0xc);
        if (iVar3 < 1) {
          iVar3 = -(iVar3 * uVar2);
        }
        else {
          iVar3 = iVar3 + uVar2;
        }
        FUN_00465580(bea_arg(this_), bea_arg(iVar3));
        uVar2 = *(uint *)((int)this_ + 4);
      }
    }
    if (*(int *)this_ == 0) {
      return this_;
    }
  }
  *(undefined4 *)(*(int *)this_ + *(int *)((int)this_ + 8) * 4) = param_1;
  *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + 1;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004241f0, ap_004241f0));
