// auto-ported from 004d1810_vslot3.c (CSimpleGameMenu::vslot3, 203 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSimpleGameMenu;
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void* (BEA_THISCALL* FUN_004e5c90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5c90_t> FUN_004e5c90 = {(FUN_004e5c90_t)0x004e5c90};

static undefined4 BEA_THISCALL ap_004d1810(CSimpleGameMenu * this_, undefined4 param_1, int param_2, undefined4 param_3)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *a1;
  int *a1_00;
  
  if (param_2 == 0x2e) {
    a1 = (int *)FUN_004e5c90(bea_arg(this_ + 0x14), bea_arg(0));
    puVar1 = *(undefined4 **)(this_ + 0x3c);
    *(undefined4 **)(this_ + 0x44) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      a1_00 = (int *)0x0;
    }
    else {
      a1_00 = (int *)*puVar1;
    }
    if (a1_00 != (int *)0x0) {
      while (BEA_LOOP_GUARD(((int *)a1_00[2] != a1))) {
        puVar1 = *(undefined4 **)(*(int *)(this_ + 0x44) + 4);
        *(undefined4 **)(this_ + 0x44) = puVar1;
        if (puVar1 == (undefined4 *)0x0) {
          a1_00 = (int *)0x0;
        }
        else {
          a1_00 = (int *)*puVar1;
        }
        if (a1_00 == (int *)0x0) {
          return a1;
        }
      }
      if ((undefined4 *)*a1_00 != (undefined4 *)0x0) {
        a1 = (int *)bea_vcall<uint32_t>(*a1_00, 0x0, a1_00);
      }
    }
  }
  else {
    if (param_2 != 0x33) {
      uVar2 = bea_vcall<uint32_t>(this_ + 0xc, 0x4, param_1,param_2,param_3);
      return uVar2;
    }
    iVar3 = FUN_004e5c90(bea_arg(this_ + 0x14), bea_arg(*(undefined4 *)(this_ + 0x24)));
    a1 = (int *)FUN_00406d20(bea_arg(this_ + 0x3c));
    if (a1 != (int *)0x0) {
      while (BEA_LOOP_GUARD((a1[2] != iVar3))) {
        puVar1 = *(undefined4 **)(*(int *)(this_ + 0x44) + 4);
        *(undefined4 **)(this_ + 0x44) = puVar1;
        if (puVar1 == (undefined4 *)0x0) {
          a1 = (int *)0x0;
        }
        else {
          a1 = (int *)*puVar1;
        }
        if (a1 == (int *)0x0) {
          return 0;
        }
      }
      if ((undefined4 *)*a1 != (undefined4 *)0x0) {
        uVar2 = bea_vcall<uint32_t>(*a1, 0x0, a1);
        return uVar2;
      }
    }
  }
  return a1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d1810, ap_004d1810));
