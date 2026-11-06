// auto-ported from 004d28a0_FUN_004d28a0.c (FUN_004d28a0, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef uint32_t (BEA_THISCALL* FUN_004d28c0_t)(uint32_t);
static const bea_guard<FUN_004d28c0_t> FUN_004d28c0 = {(FUN_004d28c0_t)0x004d28c0};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static void BEA_THISCALL ap_004d28a0(void * this_)
{
  float10 fVar1;
  
  FUN_004d28c0(bea_arg(this_));
  fVar1 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(float *)((int)this_ + 0x4c) = (float)fVar1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d28a0, ap_004d28a0));
