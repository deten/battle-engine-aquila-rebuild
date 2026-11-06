// auto-ported from 00554df0_FUN_00554df0.c (FUN_00554df0, 110 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00500e70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00500e70_t> FUN_00500e70 = {(FUN_00500e70_t)0x00500e70};
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};

static uint32_t BEA_THISCALL ap_00554df0(void * this_)
{
  FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(3));
  FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(3));
  FUN_00513bc0(bea_arg(0xe), bea_arg(0));
  FUN_00500e70(bea_arg(*(void **)((int)this_ + 0x5b8)), bea_arg(1));
  FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(1));
  FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(1));
  return FUN_00513bc0(bea_arg(0xe), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00554df0, ap_00554df0));
