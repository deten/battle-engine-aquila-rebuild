// auto-ported from 004a1c40_FUN_004a1c40.c (FUN_004a1c40, 94 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00662b2c GLOBAL_AT(int, 0x00662b2c)
typedef undefined4 * (BEA_THISCALL* FUN_004a1810_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a1810_t> FUN_004a1810 = {(FUN_004a1810_t)0x004a1810};
typedef uint32_t (BEA_THISCALL* FUN_004a1ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004a1ca0_t> FUN_004a1ca0 = {(FUN_004a1ca0_t)0x004a1ca0};

static undefined4 * BEA_THISCALL ap_004a1c40(void * this_, int param_1, uint param_2)
{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)FUN_004a1810(bea_arg(this_), bea_arg(param_2), bea_arg(*(undefined4 *)(param_1 + 8)), bea_arg(&DAT_00662b2c), bea_arg(0));
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = *(uint *)(param_1 + 4) & 0xfffffff0;
    if (param_2 < uVar3) {
      uVar3 = param_2;
    }
    puVar4 = (undefined4 *)(param_1 + 0x10);
    puVar5 = puVar1;
    for (uVar2 = uVar3 >> 2; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  FUN_004a1ca0(bea_arg(this_), bea_arg(param_1));
  return puVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a1c40, ap_004a1c40));
