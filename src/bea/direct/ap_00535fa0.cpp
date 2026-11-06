// auto-ported from 00535fa0_FUN_00535fa0.c (FUN_00535fa0, 200 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_Warning__Called_Attack_with_NULL_0064fbe4 ((char*)0x0064fbe4)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 (BEA_THISCALL* FUN_004fda20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fda20_t> FUN_004fda20 = {(FUN_004fda20_t)0x004fda20};

static undefined4 BEA_THISCALL ap_00535fa0(void * this_, undefined4 *param_1, undefined4 param_2, undefined4 param_3)
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  
  iVar1 = bea_vcall<uint32_t>(*param_1, 0x40);
  if (iVar1 == 0) {
    uVar2 = FUN_00441740(&DAT_0066f580,s_Warning__Called_Attack_with_NULL_0064fbe4);
    return uVar2;
  }
  uVar4 = *(uint *)(*(int *)((int)this_ + 0x10) + 0x34);
  if ((uVar4 & 0x10) == 0) {
    if ((uVar4 & 0x20000000) != 0) {
      iVar1 = bea_vcall<uint32_t>(*param_1, 0x40);
      if ((*(byte *)(iVar1 + 0x34) & 0x10) == 0) {
        iVar1 = bea_vcall<uint32_t>(*param_1, 0x40);
        if ((*(uint *)(iVar1 + 0x34) & 0x20000000) == 0) {
          return iVar1;
        }
        iVar1 = bea_vcall<uint32_t>(*param_1, 0x40);
      }
      else {
        iVar1 = bea_vcall<uint32_t>(*param_1, 0x40);
        iVar1 = *(int *)(iVar1 + 0x148);
      }
      uVar4 = 0;
      if (iVar1 != 0) {
        uVar4 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x10), 0x154, iVar1);
      }
    }
  }
  else {
    iVar1 = bea_vcall<uint32_t>(*param_1, 0x40);
    if ((*(byte *)(iVar1 + 0x34) & 0x10) == 0) {
      iVar1 = bea_vcall<uint32_t>(*param_1, 0x40);
      if ((*(uint *)(iVar1 + 0x34) & 0x20000000) == 0) {
        return iVar1;
      }
      piVar3 = (int *)bea_vcall<uint32_t>(*param_1, 0x40);
      iVar1 = bea_vcall<uint32_t>(piVar3, 0x128);
    }
    else {
      iVar1 = bea_vcall<uint32_t>(*param_1, 0x40);
    }
    uVar4 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_004fda20(bea_arg(*(void **)((int)this_ + 0x10)), bea_arg(iVar1));
      return uVar2;
    }
  }
  return uVar4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00535fa0, ap_00535fa0));
