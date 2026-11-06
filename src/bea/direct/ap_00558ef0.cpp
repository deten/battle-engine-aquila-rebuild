// auto-ported from 00558ef0_FUN_00558ef0.c (FUN_00558ef0, 182 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009cc118 GLOBAL_AT(int, 0x009cc118)
#define DAT_009cc124 GLOBAL_AT(int, 0x009cc124)
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef bool (BEA_THISCALL* FUN_00528af0_t)(uint32_t);
static const bea_guard<FUN_00528af0_t> FUN_00528af0 = {(FUN_00528af0_t)0x00528af0};

static undefined4 BEA_CDECL ap_00558ef0(int param_1)
{
  char cVar1;
  
  if (param_1 != 0xff) {
    cVar1 = FUN_00528af0(bea_arg(&DAT_009cc118));
    if ((cVar1 != '\0') && (DAT_009cc124 == 0)) {
      return 0;
    }
    FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(4));
    FUN_00513820(bea_arg(1), bea_arg(2), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(3), bea_arg(3));
    FUN_00513820(bea_arg(1), bea_arg(4), bea_arg(4));
    FUN_00513820(bea_arg(1), bea_arg(5), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(6), bea_arg(3));
    FUN_00513bc0(bea_arg(0x3c), bea_arg(param_1 * 0x1000000 + 0xffffff));
    FUN_00513820(bea_arg(1), bea_arg(0xb), bea_arg(0));
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00558ef0, ap_00558ef0));
