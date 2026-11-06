// auto-ported from 00413cc0_FUN_00413cc0.c (FUN_00413cc0, 40 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00414030_t)(uint32_t);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};
typedef undefined4 (BEA_THISCALL* FUN_00506010_t)(uint32_t);
static const bea_guard<FUN_00506010_t> FUN_00506010 = {(FUN_00506010_t)0x00506010};

static void BEA_THISCALL ap_00413cc0(void * this_)
{
  void *this_00;
  
  *(undefined4 *)(*(int *)((int)this_ + 0x20) + 0x588) = 0;
  this_00 = (void *)FUN_00414030(bea_arg(this_));
  if ((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 0x9c) != 0)) {
    FUN_00506010(bea_arg(this_00));
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00413cc0, ap_00413cc0));
