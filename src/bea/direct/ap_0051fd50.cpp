// auto-ported from 0051fd50_vslot6.c (CFEPScreenPos::vslot6, 49 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPScreenPos;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_THISCALL* FUN_0051f470_t)(uint32_t);
static const bea_guard<FUN_0051f470_t> FUN_0051f470 = {(FUN_0051f470_t)0x0051f470};

static void BEA_THISCALL ap_0051fd50(CFEPScreenPos * this_, undefined4 param_1)
{
  float10 fVar1;
  
  fVar1 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(float *)(this_ + 0xc) = (float)(fVar1 + (float10)2.0f);
  FUN_0051f470(bea_arg(this_ + 0x10));
  *(undefined4 *)(this_ + 4) = *(undefined4 *)(this_ + 0x10);
  *(undefined4 *)(this_ + 8) = *(undefined4 *)(this_ + 0x14);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051fd50, ap_0051fd50));
