// auto-ported from 004621e0_vslot9.c (CFEPMain::vslot9, 61 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00662aa8 GLOBAL_AT(int, 0x00662aa8)
typedef undefined4 (BEA_CDECL* FUN_00466990_t)(void);
static const bea_guard<FUN_00466990_t> FUN_00466990 = {(FUN_00466990_t)0x00466990};

static uint BEA_STDCALL ap_004621e0(undefined4 param_1)
{
  int iVar1;
  
  switch(param_1) {
  case 1:
  case 8:
    return DAT_00662aa8;
  case 3:
    iVar1 = FUN_00466990();
    return (uint)(1 < iVar1);
  default:
    return 0;
  case 0xffffffff:
  case 0:
  case 2:
  case 4:
  case 5:
  case 6:
    return 1;
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004621e0, ap_004621e0));
