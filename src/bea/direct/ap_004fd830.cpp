// auto-ported from 004fd830_FUN_004fd830.c (FUN_004fd830, 155 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008550c0 GLOBAL_AT(int, 0x008550c0)
#define DAT_008550b0 GLOBAL_AT(int, 0x008550b0)
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef int (BEA_THISCALL* FUN_004fd830_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fd830_t> FUN_004fd830 = {(FUN_004fd830_t)0x004fd830};

static int BEA_THISCALL ap_004fd830(void * this_, undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(undefined4 *)((int)this_ + 0x138) = param_1;
  puVar1 = *(undefined4 **)((int)this_ + 0x19c);
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
  iVar3 = *(int *)((int)this_ + 0x148);
  if (iVar3 == 0) {
    if ((*(int *)((int)this_ + 0x138) == 1) || (*(int *)((int)this_ + 0x138) == 6)) {
      FUN_004e5b20(bea_arg(&DAT_008550c0), bea_arg(this_));
    }
    iVar3 = *(int *)((int)this_ + 0x138);
    if ((iVar3 == 0) || (iVar3 == 6)) {
      iVar3 = FUN_004e5b20(bea_arg(&DAT_008550b0), bea_arg(this_));
    }
  }
  return iVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fd830, ap_004fd830));
