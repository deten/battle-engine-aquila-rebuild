// auto-ported from 0051a430_FUN_0051a430.c (FUN_0051a430, 210 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_005001e0_t)(uint32_t);
static const bea_guard<FUN_005001e0_t> FUN_005001e0 = {(FUN_005001e0_t)0x005001e0};
typedef undefined4 (BEA_THISCALL* FUN_00500390_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500390_t> FUN_00500390 = {(FUN_00500390_t)0x00500390};
typedef ushort (BEA_THISCALL* FUN_0051a380_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0051a380_t> FUN_0051a380 = {(FUN_0051a380_t)0x0051a380};
typedef uint32_t (BEA_THISCALL* FUN_0051a510_t)(uint32_t);
static const bea_guard<FUN_0051a510_t> FUN_0051a510 = {(FUN_0051a510_t)0x0051a510};

static uint32_t BEA_THISCALL ap_0051a430(void * this_, undefined4 param_1, int param_2)
{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(void **)this_ == (void *)0x0) {
    return 0xffff;
  }
  if (*(short *)((int)this_ + 6) == -1) {
    uVar1 = FUN_0051a380(bea_arg(this_), bea_arg(param_1), bea_arg(param_2));
    return uVar1;
  }
  if ((*(ushort *)((int)this_ + 4) == 0) ||
     (*(int *)((int)this_ + 0xc) < (int)((uint)*(ushort *)((int)this_ + 4) + param_2))) {
    FUN_0051a510(bea_arg(this_));
    *(undefined2 *)((int)this_ + 4) = 0;
    *(undefined2 *)((int)this_ + 6) = 0;
    *(undefined4 *)((int)this_ + 8) = 0;
    uVar3 = 0x2800;
  }
  else {
    uVar3 = 0x1800;
    FUN_005001e0(bea_arg(*(void **)this_));
  }
  uVar1 = *(ushort *)((int)this_ + 4);
  iVar2 = FUN_00500390(bea_arg(*(void **)this_), bea_arg((uint)uVar1 * 0x1c), bea_arg(param_2 * 0x1c), bea_arg(param_1), bea_arg(uVar3));
  *(short *)((int)this_ + 4) = *(short *)((int)this_ + 4) + (short)param_2;
  if (iVar2 < 0) {
    FUN_0051a510(bea_arg(this_));
    return 0xffff;
  }
  *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + param_2;
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051a430, ap_0051a430));
