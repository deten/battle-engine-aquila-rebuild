// auto-ported from 004480c0_FUN_004480c0.c (FUN_004480c0, 80 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint (BEA_THISCALL* FUN_004fb500_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb500_t> FUN_004fb500 = {(FUN_004fb500_t)0x004fb500};
typedef undefined4 (BEA_THISCALL* FUN_004fd7e0_t)(uint32_t);
static const bea_guard<FUN_004fd7e0_t> FUN_004fd7e0 = {(FUN_004fd7e0_t)0x004fd7e0};

static undefined4 BEA_THISCALL ap_004480c0(void * this_)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this_ + 0x294) != 0) {
    return 1;
  }
  iVar1 = FUN_004fd7e0(bea_arg(this_));
  if (iVar1 == 0) {
    iVar1 = bea_vcall<uint32_t>(this_, 0x144);
    if (iVar1 != 0) {
      uVar3 = 1;
      uVar2 = bea_vcall<uint32_t>(this_, 0x144);
      iVar1 = FUN_004fb500(bea_arg(this_), bea_arg(uVar2), bea_arg(uVar3));
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004480c0, ap_004480c0));
