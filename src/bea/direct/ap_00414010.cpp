// auto-ported from 00414010_FUN_00414010.c (FUN_00414010, 17 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00414030_t)(uint32_t);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};

static void BEA_THISCALL ap_00414010(void * this_)
{
  int iVar1;

  iVar1 = FUN_00414030(bea_arg(this_));
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x60) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00414010, ap_00414010));
