// auto-ported from 00482090_FUN_00482090.c (FUN_00482090, 277 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_00551480_t)(uint32_t);
static const bea_guard<FUN_00551480_t> FUN_00551480 = {(FUN_00551480_t)0x00551480};

static uint32_t BEA_CDECL ap_00482090(void)
{
  FUN_00513bc0(bea_arg(0x13), bea_arg(5));
  FUN_00513bc0(bea_arg(0x14), bea_arg(6));
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  DAT_009c68ad = 0;
  DAT_009c6910 = 1;
  FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(3));
  FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(3));
  FUN_00551480(bea_arg(0));
  FUN_00513930(bea_arg(0), bea_arg(6), bea_arg(2));
  FUN_00513930(bea_arg(0), bea_arg(5), bea_arg(2));
  FUN_00513bc0(bea_arg(0x17), bea_arg(4));
  FUN_00513820(bea_arg(0), bea_arg(2), bea_arg(2));
  FUN_00513820(bea_arg(0), bea_arg(3), bea_arg(0));
  FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
  FUN_00513bc0(bea_arg(0xf), bea_arg(1));
  FUN_00513bc0(bea_arg(0x18), bea_arg(8));
  FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
  FUN_00513bc0(bea_arg(0xe), bea_arg(0));
  FUN_00513bc0(bea_arg(7), bea_arg(0));
  return FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00482090, ap_00482090));
