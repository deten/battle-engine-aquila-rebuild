// auto-ported from 004f3de0_FUN_004f3de0.c (FUN_004f3de0, 46 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static undefined4 BEA_THISCALL ap_004f3de0(void * this_)
{
  float fVar1;
  float10 fVar2;
  
  fVar1 = DAT_006fbdfc;
  fVar2 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg((int)this_ + 0x1c));
  if ((float10)fVar1 < fVar2) {
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3de0, ap_004f3de0));
