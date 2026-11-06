// auto-ported from 004e9570_vslot87.c (CNormalSquad::vslot87, 136 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CNormalSquad;
#define DAT_008550c0 GLOBAL_AT(int, 0x008550c0)
#define DAT_008550b0 GLOBAL_AT(int, 0x008550b0)
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef int (BEA_THISCALL* FUN_004fd830_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fd830_t> FUN_004fd830 = {(FUN_004fd830_t)0x004fd830};

static void BEA_THISCALL ap_004e9570(CNormalSquad * this_, undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(this_ + 0x7c) = param_1;
  puVar1 = *(undefined4 **)(this_ + 0xa4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)*puVar1;
  }
  while (BEA_LOOP_GUARD((puVar2 != (undefined4 *)0x0))) {
    if ((void *)*puVar2 != (void *)0x0) {
      FUN_004fd830(bea_arg((void *)*puVar2), bea_arg(param_1));
    }
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)*puVar1;
    }
  }
  FUN_004e5bd0(bea_arg(&DAT_008550c0), bea_arg(this_));
  FUN_004e5bd0(bea_arg(&DAT_008550b0), bea_arg(this_));
  if ((*(int *)(this_ + 0x7c) == 1) || (*(int *)(this_ + 0x7c) == 6)) {
    FUN_004e5b20(bea_arg(&DAT_008550c0), bea_arg(this_));
  }
  if ((*(int *)(this_ + 0x7c) == 0) || (*(int *)(this_ + 0x7c) == 6)) {
    FUN_004e5b20(bea_arg(&DAT_008550b0), bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e9570, ap_004e9570));
