// auto-ported from 0051a380_FUN_0051a380.c (FUN_0051a380, 169 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00500390_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500390_t> FUN_00500390 = {(FUN_00500390_t)0x00500390};

static uint32_t BEA_THISCALL ap_0051a380(void * this_, undefined4 param_1, int param_2)
{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(void **)this_ == (void *)0x0) {
    return 0xffff;
  }
  uVar3 = ((int)(*(ushort *)((int)this_ + 4) + 3) >> 2) << 2;
  sVar2 = (short)uVar3;
  *(short *)((int)this_ + 4) = sVar2;
  if ((sVar2 == 0) || (*(int *)((int)this_ + 0xc) < (int)((uVar3 & 0xffff) + param_2))) {
    *(undefined2 *)((int)this_ + 4) = 0;
    uVar4 = 0x2800;
  }
  else {
    uVar4 = 0x1800;
  }
  uVar1 = *(ushort *)((int)this_ + 4);
  iVar5 = FUN_00500390(bea_arg(*(void **)this_), bea_arg((uint)uVar1 * 0x1c), bea_arg(param_2 * 0x1c), bea_arg(param_1), bea_arg(uVar4));
  *(short *)((int)this_ + 4) = *(short *)((int)this_ + 4) + (short)param_2;
  if (iVar5 < 0) {
    return 0xffff;
  }
  *(int *)((int)this_ + 8) = param_2;
  *(ushort *)((int)this_ + 6) = uVar1;
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051a380, ap_0051a380));
