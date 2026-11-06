// auto-ported from 00450010_vslot2.c (CFEPBEConfig::vslot2, 124 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: thiscall, 1 stack arg (ret 4 at 0x450089), void (EAX only holds fnstsw garbage); fields +0xc/+0x14/+0x18 are floats (fld/fstp, Ghidra's int casts were reinterpretations); x-0.1f is stored with fst and the unrounded ST0 compared (0x45004b-0x45005f, 0x45006b-0x45007f); vcall slot 0xc pushes (0x2c, 0x3f800000) (0x450024-0x45002d); 0x46baf0 thiscall on [esi+8], no args
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
typedef void (BEA_THISCALL* FUN_0046baf0_t)(void *);
static const bea_guard<FUN_0046baf0_t> FUN_0046baf0 = {(FUN_0046baf0_t)0x0046baf0};

static void BEA_THISCALL ap_00450010(int * this_, int param_1)
{
  if ((param_1 == 0) && (DAT_00662df4 != 0)) {
    bea_vcall<uint32_t>(this_, 0xc, (uint32_t)0x2c, (uint32_t)0x3f800000);
  }
  float *f = (float *)this_;
  f[3] = (float)((float10)f[3] + (float10)0.01f);           // [0x5d8574]
  if ((void *)(uintptr_t)this_[2] != (void *)0x0) {
    FUN_0046baf0((void *)(uintptr_t)this_[2]);
  }
  float10 t = (float10)f[5] - (float10)0.1f;               // [0x5d85c0]
  f[5] = (float)t;
  if (!(t >= (float10)0.0f)) {   // C0: below or unordered
    this_[5] = 0;
  }
  t = (float10)f[6] - (float10)0.1f;
  f[6] = (float)t;
  if (!(t >= (float10)0.0f)) {   // C0: below or unordered
    this_[6] = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00450010, ap_00450010));
