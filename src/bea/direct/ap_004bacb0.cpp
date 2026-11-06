// auto-ported from 004bacb0_vslot2.c (CMonitor::vslot2, 97 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMonitor;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_THISCALL ap_004bacb0(CMonitor * this_)
{
  undefined4 *puVar1;
  void *this_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = *(undefined4 **)(this_ + 4);
  uVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    puVar1[2] = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    while (BEA_LOOP_GUARD((puVar2 != (undefined4 *)0x0))) {
      *puVar2 = 0;
      puVar2 = *(undefined4 **)(*(int *)(*(int *)(this_ + 4) + 8) + 4);
      *(undefined4 **)(*(int *)(this_ + 4) + 8) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = (undefined4 *)*puVar2;
      }
    }
    this_00 = *(void **)(this_ + 4);
    uVar3 = 0;
    if (this_00 != (void *)0x0) {
      FUN_004e5c60(bea_arg(this_00));
      uVar3 = FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
      *(undefined4 *)(this_ + 4) = 0;
    }
  }
  return uVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bacb0, ap_004bacb0));
