// auto-ported from 00464b10_vslot6.c (CFEPLanguageTest::vslot6, 26 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPLanguageTest;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static void BEA_THISCALL ap_00464b10(CFEPLanguageTest * this_, undefined4 param_1)
{
  float10 fVar1;
  
  fVar1 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(float *)(this_ + 4) = (float)(fVar1 + (float10)2.0f);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00464b10, ap_00464b10));
