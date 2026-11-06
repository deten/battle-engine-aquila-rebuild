// auto-ported from 005572c0_vslot3.c (CDXTexture::vslot3, 54 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char CDXTexture;
typedef uint32_t (BEA_STDCALL* CFEPBEConfig__vslot7_t)(uint32_t);
static const bea_guard<CFEPBEConfig__vslot7_t> CFEPBEConfig__vslot7 = {(CFEPBEConfig__vslot7_t)0x00452b60};

static undefined4 BEA_THISCALL ap_005572c0(CDXTexture * this_)
{
  int *piVar1;
  
  if (this_[0x14c] != (CDXTexture)0x0) {
    piVar1 = *(int **)(this_ + 0xb8);
    if (piVar1 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
      *(undefined4 *)(this_ + 0xb8) = 0;
    }
    CFEPBEConfig__vslot7(bea_arg(this_));
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005572c0, ap_005572c0));
