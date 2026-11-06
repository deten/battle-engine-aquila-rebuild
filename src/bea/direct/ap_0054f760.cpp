// auto-ported from 0054f760_FUN_0054f760.c (FUN_0054f760, 117 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513af0_t)(uint32_t);
static const bea_guard<FUN_00513af0_t> FUN_00513af0 = {(FUN_00513af0_t)0x00513af0};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};

static uint32_t BEA_CDECL ap_0054f760(void)
{
  FUN_00513bc0(bea_arg(0x13), bea_arg(2));
  FUN_00513bc0(bea_arg(0x14), bea_arg(1));
  FUN_00513af0(bea_arg(0));
  FUN_00513820(bea_arg(0), bea_arg(5), bea_arg(2));
  FUN_00513820(bea_arg(0), bea_arg(6), bea_arg(0));
  FUN_00513820(bea_arg(0), bea_arg(4), bea_arg(4));
  FUN_00513bc0(bea_arg(0xe), bea_arg(1));
  return FUN_00513bc0(bea_arg(0xf), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054f760, ap_0054f760));
