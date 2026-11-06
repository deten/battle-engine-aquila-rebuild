// auto-ported from 00535560_FUN_00535560.c (FUN_00535560, 36 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_004fd830_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fd830_t> FUN_004fd830 = {(FUN_004fd830_t)0x004fd830};

static int BEA_THISCALL ap_00535560(void * this_, undefined4 *param_1, undefined4 param_2, undefined4 param_3)
{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this_ + 0x10);
  if ((*(byte *)(iVar2 + 0x34) & 0x10) != 0) {
    uVar1 = bea_vcall<uint32_t>(*param_1, 0x30);
    iVar2 = FUN_004fd830(bea_arg(*(void **)((int)this_ + 0x10)), bea_arg(uVar1));
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00535560, ap_00535560));
