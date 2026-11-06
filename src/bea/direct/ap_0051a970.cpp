// auto-ported from 0051a970_vslot6.c (CFEPCredits::vslot6, 47 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPCredits;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
typedef uint32_t (BEA_THISCALL* FUN_004bb8c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bb8c0_t> FUN_004bb8c0 = {(FUN_004bb8c0_t)0x004bb8c0};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static void BEA_THISCALL ap_0051a970(CFEPCredits * this_, undefined4 param_1)
{
  float10 fVar1;
  
  fVar1 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(float *)(this_ + 4) = (float)(fVar1 + (float10)2.0f);
  FUN_004bb8c0(bea_arg(&DAT_00889a48), bea_arg(1), bea_arg(1));
  *(undefined4 *)(this_ + 8) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051a970, ap_0051a970));
