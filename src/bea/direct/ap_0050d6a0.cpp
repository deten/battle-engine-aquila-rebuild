// auto-ported from 0050d6a0_FUN_0050d6a0.c (FUN_0050d6a0, 113 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};

static int * BEA_THISCALL ap_0050d6a0(void * this_, undefined4 param_1, undefined4 param_2)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)((int)this_ + 0x20c);
  do {
    if (*piVar1 == 0) {
      uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(param_1));
      *(undefined4 *)((int)this_ + iVar3 * 4 + 0x22c) = uVar2;
      *(undefined4 *)((int)this_ + iVar3 * 4 + 0x21c) = param_1;
      *(undefined4 *)((int)this_ + iVar3 * 4 + 0x20c) = param_2;
      *(undefined4 *)((int)this_ + iVar3 * 4 + 0x23c) = 0;
      *(undefined4 *)((int)this_ + iVar3 * 4 + 0x24c) = 0;
      *(undefined4 *)((int)this_ + iVar3 * 4 + 0x25c) = bea_piece32(DAT_00672fd0);
      return (int *)param_2;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 1;
  } while (((iVar3 < 4)));
  return piVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050d6a0, ap_0050d6a0));
