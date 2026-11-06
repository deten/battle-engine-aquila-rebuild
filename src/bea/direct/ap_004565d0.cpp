// auto-ported from 004565d0_FUN_004565d0.c (FUN_004565d0, 62 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef undefined1 * (BEA_CDECL* FUN_0042db10_t)(int, ...);
static const bea_guard<FUN_0042db10_t> FUN_0042db10 = {(FUN_0042db10_t)0x0042db10};

static undefined4 BEA_CDECL ap_004565d0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_0042db10(param_2);
  iVar1 = iVar2 + param_1 * 0xc;
  *(undefined4 *)(iVar1 + 8) = param_3;
  *(undefined4 *)(iVar2 + (param_1 * 3 + 3) * 4) = param_4;
  *(undefined2 *)(iVar1 + 0x10) = (undefined2)param_5;
  *(undefined2 *)(iVar1 + 0x12) = (undefined2)param_6;
  return CONCAT22((short)((uint)iVar2 >> 0x10),(undefined2)param_5);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004565d0, ap_004565d0));
