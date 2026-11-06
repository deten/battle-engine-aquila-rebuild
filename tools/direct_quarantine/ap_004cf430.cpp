// auto-ported from 004cf430_vslot17.c (CSCModeMenuItem::vslot17, 117 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_008889f0 GLOBAL_AT(int, 0x008889f0)
#define DAT_009d3200 GLOBAL_AT(int, 0x009d3200)
#define DAT_00856014 GLOBAL_AT(int, 0x00856014)
#define u__ld_x__ld_006314fc ((short*)0x006314fc)
typedef int (BEA_CDECL* FUN_0055e598_t)(void *, void *, ...);
static const bea_guard<FUN_0055e598_t> FUN_0055e598 = {(FUN_0055e598_t)0x0055e598};

static undefined * BEA_STDCALL ap_004cf430(int param_1)
{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_00855bb0 + (DAT_008889f0 + 1) * 0x516c) * 0xf68 + DAT_008889f0 * 0x516c;
  FUN_0055e598(&DAT_009d3200,u__ld_x__ld_006314fc,
               *(undefined4 *)(((char *)&DAT_00856014) + param_1 * 0x18 + iVar1 + 0x140),
               *(undefined4 *)(((char *)&DAT_00856014) + param_1 * 0x18 + iVar1 + 0x144));
  return (undefined *)(&DAT_009d3200);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf430, ap_004cf430));
