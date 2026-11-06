// auto-ported from 004a4d20_vslot1.c (CMenuOptionsList::vslot1, 173 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CMenuOptionsList;
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef uint32_t (BEA_THISCALL* FUN_004a4790_t)(uint32_t);
static const bea_guard<FUN_004a4790_t> FUN_004a4790 = {(FUN_004a4790_t)0x004a4790};
typedef void* (BEA_THISCALL* FUN_004e5c90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5c90_t> FUN_004e5c90 = {(FUN_004e5c90_t)0x004e5c90};

static void BEA_THISCALL ap_004a4d20(CMenuOptionsList * this_, undefined4 param_1, int param_2, undefined4 param_3)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 != 0x2a) {
    if (param_2 != 0x2b) {
      piVar2 = (int *)FUN_004e5c90(bea_arg(this_ + 8), bea_arg(*(undefined4 *)(this_ + 0x18)));
      bea_vcall<uint32_t>(piVar2, 0x4, param_1,param_2,param_3);
      return;
    }
    FUN_004a4790(bea_arg(this_));
    return;
  }
  iVar1 = *(int *)(this_ + 0x18);
  if (iVar1 < 1) {
    if (*(int *)(this_ + 0x14) < 3) {
      return;
    }
    *(int *)(this_ + 0x18) = *(int *)(this_ + 0x14) + -1;
  }
  else {
    *(int *)(this_ + 0x18) = iVar1 + -1;
  }
  piVar2 = (int *)FUN_004e5c90(bea_arg(this_ + 8), bea_arg(*(undefined4 *)(this_ + 0x18)));
  iVar3 = bea_vcall<uint32_t>(piVar2, 0xc);
  while(BEA_LOOP_GUARD(( true ))) {
    if (iVar3 != 0) {
      FUN_00468770(0);
      return;
    }
    iVar3 = *(int *)(this_ + 0x18) + -1;
    *(int *)(this_ + 0x18) = iVar3;
    if (iVar3 < 0) break;
    piVar2 = (int *)FUN_004e5c90(bea_arg(this_ + 8), bea_arg(iVar3));
    iVar3 = bea_vcall<uint32_t>(piVar2, 0xc);
  }
  *(int *)(this_ + 0x18) = iVar1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a4d20, ap_004a4d20));
