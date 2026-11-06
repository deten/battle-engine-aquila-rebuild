// auto-ported from 0051ff90_vslot0.c (CFEPVirtualKeyboard::vslot0, 56 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPVirtualKeyboard;
typedef uint32_t (BEA_THISCALL* FUN_00520530_t)(uint32_t);
static const bea_guard<FUN_00520530_t> FUN_00520530 = {(FUN_00520530_t)0x00520530};

static undefined4 BEA_THISCALL ap_0051ff90(CFEPVirtualKeyboard * this_)
{
  *(undefined4 *)(this_ + 0x6f4) = 0x3f000000;
  *(undefined4 *)(this_ + 0x4c) = 0;
  *(undefined4 *)(this_ + 0x50) = 0;
  *(undefined4 *)(this_ + 0x44) = 0;
  *(undefined4 *)(this_ + 0x6e4) = 0;
  *(undefined4 *)(this_ + 0x6e8) = 0;
  *(undefined4 *)(this_ + 0x6ec) = 0;
  *(undefined4 *)(this_ + 0x6f0) = 0;
  FUN_00520530(bea_arg(this_));
  return 1;
}

// @autoport-registration (verified: 97 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0051ff90, ap_0051ff90));
