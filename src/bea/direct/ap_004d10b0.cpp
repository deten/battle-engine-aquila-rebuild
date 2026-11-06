// auto-ported from 004d10b0_FUN_004d10b0.c (FUN_004d10b0, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static uint32_t BEA_THISCALL ap_004d10b0(void * this_, int param_1)
{
  float10 fVar1;
  
  *(undefined4 *)((int)this_ + 0x10) = 0;
  fVar1 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(float *)((int)this_ + 0x30) = (float)fVar1;
  if (*(int **)((int)this_ + 8) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x4, 1);
    *(undefined4 *)((int)this_ + 8) = 0;
  }
  if (*(int **)((int)this_ + 0x3c) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x3c), 0x4, 1);
    *(undefined4 *)((int)this_ + 0x3c) = 0;
  }
  *(uint *)((int)this_ + 0x48) = (uint)(param_1 == 0);
  return *(uint32_t*)((char*)this_ + 0x48);
  return *(uint32_t*)((char*)this_ + 0x48);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d10b0, ap_004d10b0));
