// auto-ported from 00521c80_vslot2.c (CFEPWingmen::vslot2, 150 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPWingmen;
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
typedef uint32_t (BEA_THISCALL* FUN_0046baf0_t)(uint32_t);
static const bea_guard<FUN_0046baf0_t> FUN_0046baf0 = {(FUN_0046baf0_t)0x0046baf0};

static void BEA_THISCALL ap_00521c80(CFEPWingmen * this_, int param_1)
{
  float fVar1;
  
  *(float *)(this_ + 0x14) = *(float *)(this_ + 0x14) + 0.01f;
  if (*(void **)(this_ + 8) != (void *)0x0) {
    FUN_0046baf0(bea_arg(*(void **)(this_ + 8)));
  }
  if (*(void **)(this_ + 0xc) != (void *)0x0) {
    FUN_0046baf0(bea_arg(*(void **)(this_ + 0xc)));
  }
  if (*(void **)(this_ + 0x10) != (void *)0x0) {
    FUN_0046baf0(bea_arg(*(void **)(this_ + 0x10)));
  }
  fVar1 = *(float *)(this_ + 0x1c);
  *(float *)(this_ + 0x1c) = fVar1 - 0.1f;
  if (fVar1 - 0.1f < 0.0f) {
    *(undefined4 *)(this_ + 0x1c) = 0;
  }
  fVar1 = *(float *)(this_ + 0x20);
  *(float *)(this_ + 0x20) = fVar1 - 0.1f;
  if (fVar1 - 0.1f < 0.0f) {
    *(undefined4 *)(this_ + 0x20) = 0;
  }
  if ((param_1 == 0) && (DAT_00662df4 != 0)) {
    bea_vcall<uint32_t>(this_, 0xc, 0x2c,0x3f800000);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00521c80, ap_00521c80));
