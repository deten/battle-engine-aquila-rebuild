// auto-ported from 0044cd80_vslot50.c (CFeature::vslot50, 35 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFeature;
typedef uint32_t (BEA_THISCALL* FUN_00533660_t)(uint32_t);
static const bea_guard<FUN_00533660_t> FUN_00533660 = {(FUN_00533660_t)0x00533660};

static undefined4 BEA_THISCALL ap_0044cd80(CFeature * this_)
{
  if ((*(ushort *)(this_ + 0x2c) & 4) != 0) {
    return 0;
  }
  *(ushort *)(this_ + 0x2c) = *(ushort *)(this_ + 0x2c) | 4;
  if (*(void **)(this_ + 0x74) != (void *)0x0) {
    FUN_00533660(bea_arg(*(void **)(this_ + 0x74)));
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044cd80, ap_0044cd80));
