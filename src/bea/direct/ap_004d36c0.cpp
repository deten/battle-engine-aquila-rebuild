// auto-ported from 004d36c0_FUN_004d36c0.c (FUN_004d36c0, 101 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef uint32_t (BEA_THISCALL* FUN_004d3730_t)(uint32_t);
static const bea_guard<FUN_004d3730_t> FUN_004d3730 = {(FUN_004d3730_t)0x004d3730};

static int BEA_THISCALL ap_004d36c0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)((int)this_ + 0x254);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this_ + 600) = param_1;
    *(undefined4 *)((int)this_ + 0x25c) = param_2;
    *(undefined4 *)((int)this_ + 0x260) = param_3;
    *(undefined4 *)((int)this_ + 0x264) = param_4;
    fVar2 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&param_1)));
    *(float *)((int)this_ + 0x260) = bea_fcast<float>(fVar2);
    iVar1 = FUN_004d3730(bea_arg(this_));
    *(undefined4 *)((int)this_ + 0x254) = 1;
    *(undefined4 *)((int)this_ + 0x250) = 0;
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d36c0, ap_004d36c0));
