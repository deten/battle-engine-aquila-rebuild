// auto-ported from 00409f20_FUN_00409f20.c (FUN_00409f20, 80 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00411b90_t)(uint32_t);
static const bea_guard<FUN_00411b90_t> FUN_00411b90 = {(FUN_00411b90_t)0x00411b90};
typedef uint32_t (BEA_THISCALL* FUN_00413cc0_t)(uint32_t);
static const bea_guard<FUN_00413cc0_t> FUN_00413cc0 = {(FUN_00413cc0_t)0x00413cc0};

static void BEA_THISCALL ap_00409f20(void * this_)
{
  short sVar1;
  
  *(undefined4 *)((int)this_ + 0x588) = 0;
  sVar1 = (short)*(undefined4 *)((int)this_ + 0x2a0);
  *(short *)((int)this_ + 0x2b4) = sVar1;
  if (sVar1 == 0) {
    *(short *)((int)this_ + 0x2b4) = (short)*(undefined4 *)((int)this_ + 0x2b0);
  }
  if (*(int *)((int)this_ + 0x260) == 2) {
    FUN_00413cc0(bea_arg(*(void **)((int)this_ + 0x578)));
    return;
  }
  if (*(int *)((int)this_ + 0x260) == 3) {
    FUN_00411b90(bea_arg(*(void **)((int)this_ + 0x57c)));
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00409f20, ap_00409f20));
