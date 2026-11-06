// auto-ported from 00402150_FUN_00402150.c (FUN_00402150, 171 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGuide;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef CGuide* (BEA_THISCALL* FUN_0047e290_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047e290_t> FUN_0047e290 = {(FUN_0047e290_t)0x0047e290};

static void * BEA_THISCALL ap_00402150(void * this_, undefined4 param_1)
{  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_0047e290(bea_arg(this_), bea_arg(param_1));
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined ***)this_ = ((void*)0x005d8594);
  *(undefined4 *)((int)this_ + 0x20) = 0;
  FUN_00401000(bea_arg((undefined4 *)((int)this_ + 0x2c)), bea_arg(0));
  param_1 = 0xbf800000;
  FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(2000), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
  param_1 = 0xbf800000;
  FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x7d1), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00402150, ap_00402150));
