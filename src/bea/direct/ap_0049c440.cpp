// auto-ported from 0049c440_vslot4.c (CMCMine::vslot4, 99 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMCMine;
typedef float10 (BEA_THISCALL* FUN_00401b50_t)(uint32_t);
static const bea_guard<FUN_00401b50_t> FUN_00401b50 = {(FUN_00401b50_t)0x00401b50};

static int BEA_THISCALL ap_0049c440(CMCMine * this_, int param_1, int param_2, undefined4 param_3, undefined4 param_4)
{
  void *this_00;
  float10 fVar1;
  
  if (*(int *)(this_ + 8) == 0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)(*(int *)(this_ + 8) + -8);
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    fVar1 = (float10)FUN_00401b50(bea_arg(this_00));
    *(float *)(param_2 + 8) =
         (float)((float10)*(float *)(param_2 + 8) -
                (((float10)*(float *)((int)this_00 + 0x250) -
                 (float10)*(float *)((int)this_00 + 0x254)) * fVar1 +
                (float10)*(float *)((int)this_00 + 0x254)));
    *(undefined4 *)(this_ + 0xc) = *(undefined4 *)((int)this_00 + 0x250);
    return param_2;
  }
  *(undefined4 *)(this_ + 0xc) = *(undefined4 *)((int)this_00 + 0x250);
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049c440, ap_0049c440));
