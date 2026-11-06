// auto-ported from 0051b640_vslot0.c (CFEPIntro::vslot0, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPIntro;
typedef uint32_t (BEA_THISCALL* FUN_0051b610_t)(uint32_t);
static const bea_guard<FUN_0051b610_t> FUN_0051b610 = {(FUN_0051b610_t)0x0051b610};

static undefined4 BEA_THISCALL ap_0051b640(CFEPIntro * this_)
{
  *(undefined4 *)(this_ + 0xc) = 0;
  *(undefined4 *)(this_ + 0x14) = 1;
  FUN_0051b610(bea_arg(this_));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051b640, ap_0051b640));
