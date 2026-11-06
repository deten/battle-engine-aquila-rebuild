// auto-ported from 004bb210_FUN_004bb210.c (FUN_004bb210, 122 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef bool (BEA_CDECL* FUN_00494b50_t)(uint32_t);
static const bea_guard<FUN_00494b50_t> FUN_00494b50 = {(FUN_00494b50_t)0x00494b50};
typedef undefined4 (BEA_CDECL* FUN_00498270_t)(uint32_t);
static const bea_guard<FUN_00498270_t> FUN_00498270 = {(FUN_00498270_t)0x00498270};
typedef bool (BEA_CDECL* FUN_0049c2d0_t)(uint32_t);
static const bea_guard<FUN_0049c2d0_t> FUN_0049c2d0 = {(FUN_0049c2d0_t)0x0049c2d0};
typedef undefined4 (BEA_CDECL* FUN_0049ed30_t)(uint32_t);
static const bea_guard<FUN_0049ed30_t> FUN_0049ed30 = {(FUN_0049ed30_t)0x0049ed30};

static uint32_t BEA_CDECL ap_004bb210(undefined4 param_1)
{
  int iVar1;
  
  iVar1 = FUN_00494b50(bea_arg(param_1));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_0049c2d0(bea_arg(param_1));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_0049c2d0(bea_arg(param_1));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_00498270(bea_arg(param_1));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_0049ed30(bea_arg(param_1));
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_0049c2d0(bea_arg(param_1));
  return iVar1 != 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bb210, ap_004bb210));
