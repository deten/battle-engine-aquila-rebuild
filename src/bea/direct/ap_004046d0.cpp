// auto-ported from 004046d0_FUN_004046d0.c (FUN_004046d0, 125 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};

static void * BEA_THISCALL ap_004046d0(void * this_, undefined4 param_1)
{  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 0x20) = param_1;
  *(undefined ***)this_ = ((void*)0x005d87c8);
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  param_1 = 0xbf800000;
  FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004046d0, ap_004046d0));
