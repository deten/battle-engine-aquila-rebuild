// auto-ported from 005176d0_FUN_005176d0.c (FUN_005176d0, 184 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_pcsoundmanager_0063e46c ((char*)0x0063e46c)
typedef int (BEA_CDECL* FUN_00517440_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00517440_t> FUN_00517440 = {(FUN_00517440_t)0x00517440};
typedef uint32_t (BEA_CDECL* FUN_00517600_t)(void *, void *, uint, ...);
static const bea_guard<FUN_00517600_t> FUN_00517600 = {(FUN_00517600_t)0x00517600};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 * BEA_STDCALL ap_005176d0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 *param_4)
{
  int *piVar1;
  int iVar2;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)
              FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x84), bea_arg(0x4b), bea_arg(s_C__dev_ONSLAUGHT2_pcsoundmanager_0063e46c), bea_arg(0x2f1));
    if (param_4 == (undefined4 *)0x0) {
      param_4 = (undefined4 *)0x0;
    }
    else {
      param_4[1] = 0;
      param_4[0x1d] = 0;
      *param_4 = ((void*)0x005e4988);
      param_4[0x1e] = 0;
      param_4[0x20] = 0;
    }
  }
  else {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(param_4[0x1e]));
    piVar1 = (int *)param_4[0x20];
    param_4[0x1e] = 0;
    if (piVar1 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
      param_4[0x20] = 0;
    }
  }
  param_4[0x1f] = param_2;
  iVar2 = FUN_00517440(bea_arg(param_4 + 0x20), bea_arg(param_2));
  if (iVar2 != 0) {
    FUN_00517600(iVar2,param_1,param_4[0x1f]);
    piVar1 = (int *)param_4[0x20];
    bea_vcall<uint32_t>(piVar1, 0x4c, piVar1,iVar2,param_4[0x1f],0,0);
  }
  return param_4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005176d0, ap_005176d0));
