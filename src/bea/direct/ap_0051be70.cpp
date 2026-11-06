// auto-ported from 0051be70_vslot6.c (CFEPIntro::vslot6, 61 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPIntro;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define _DAT_0089d9cc GLOBAL_AT(int, 0x0089d9cc)
#define DAT_0089be50 GLOBAL_AT(int, 0x0089be50)
#define DAT_0089be5c GLOBAL_AT(int, 0x0089be5c)
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_THISCALL* FUN_00527960_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00527960_t> FUN_00527960 = {(FUN_00527960_t)0x00527960};

static void BEA_THISCALL ap_0051be70(CFEPIntro * this_, undefined4 param_1)
{
  float10 fVar1;
  
  fVar1 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(float *)(this_ + 4) = (float)fVar1;
  _DAT_0089d9cc = 0xffffffff;
  FUN_00527960(bea_arg(&DAT_0089be50), bea_arg(0));
  FUN_00527960(bea_arg(&DAT_0089be5c), bea_arg(0));
  *(undefined4 *)(this_ + 0x18) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051be70, ap_0051be70));
