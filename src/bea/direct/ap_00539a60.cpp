// auto-ported from 00539a60_FUN_00539a60.c (FUN_00539a60, 128 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00539420_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00539420_t> FUN_00539420 = {(FUN_00539420_t)0x00539420};
typedef uint32_t (BEA_THISCALL* FUN_00539b00_t)(uint32_t);
static const bea_guard<FUN_00539b00_t> FUN_00539b00 = {(FUN_00539b00_t)0x00539b00};

static uint32_t BEA_THISCALL ap_00539a60(void * this_, int param_1, undefined4 param_2, undefined4 *param_3, int param_4)
{
  *(int *)((int)this_ + 8) = param_1;
  if ((*(int *)(param_1 + 0x6c) == 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    *(undefined4 *)((int)this_ + 0x214) = 0;
    *(undefined4 *)((int)this_ + 0x21c) = *(undefined4 *)((int)this_ + 0x20c);
    FUN_00539b00(bea_arg(this_));
    *(undefined4 *)(param_1 + 0x6c) = 1;
  }
  *(undefined4 *)((int)this_ + 0x21c) = *(undefined4 *)((int)this_ + 0x20c);
  if (0 < param_4) {
    do {
      FUN_00539420(bea_arg((void *)((int)this_ + 0xc)), bea_arg(*param_3));
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (BEA_LOOP_GUARD((param_4 != 0)));
  }
  *(undefined4 *)((int)this_ + 0x214) = param_2;
  return FUN_00539b00(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00539a60, ap_00539a60));
