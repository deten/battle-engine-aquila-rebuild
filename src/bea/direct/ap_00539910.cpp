// auto-ported from 00539910_FUN_00539910.c (FUN_00539910, 103 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_00539350_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00539350_t> FUN_00539350 = {(FUN_00539350_t)0x00539350};

static void * BEA_THISCALL ap_00539910(void * this_, int param_1)
{
  *(undefined4 *)((int)this_ + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this_ + 0x214) = *(undefined4 *)(param_1 + 0x214);
  FUN_00539350(bea_arg((void *)((int)this_ + 0xc)), bea_arg(param_1 + 0xc));
  *(undefined4 *)((int)this_ + 0x218) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)((int)this_ + 0x220) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)((int)this_ + 0x21c) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)((int)this_ + 0x224) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)((int)this_ + 0x210) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00539910, ap_00539910));
