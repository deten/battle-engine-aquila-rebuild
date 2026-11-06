// auto-ported from 0047bab0_FUN_0047bab0.c (FUN_0047bab0, 70 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef uint32_t (BEA_THISCALL* FUN_0047bff0_t)(uint32_t);
static const bea_guard<FUN_0047bff0_t> FUN_0047bff0 = {(FUN_0047bff0_t)0x0047bff0};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static uint32_t BEA_THISCALL ap_0047bab0(void * this_)
{
  uint uVar1;
  *(undefined4 *)((int)this_ + 0x60) = 0;
  uVar1 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar1 = uVar1 & 0x8000ffff;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xffff0000) + 1;
  }
  *(float *)((int)this_ + 100) = (float)(int)uVar1 * 0.00030517578f + 20.0f;
  return FUN_0047bff0(bea_arg(*(void **)((int)this_ + 8)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047bab0, ap_0047bab0));
