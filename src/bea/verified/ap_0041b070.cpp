// auto-ported from 0041b070_vslot6.c (CCamera::vslot6, 28 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
typedef undefined4 (BEA_THISCALL* FUN_004725d0_t)(void *);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};

static float10 BEA_CDECL ap_0041b070(void)
{
  int iVar1;
  
  iVar1 = FUN_004725d0(&DAT_008a9a98);
  if (iVar1 != 0) {
    return (float10)0.5f;
  }
  return (float10)0.75f;
}

// @autoport-registration (verified: 2880 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0041b070, ap_0041b070));
