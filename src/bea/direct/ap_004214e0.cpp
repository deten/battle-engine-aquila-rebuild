// auto-ported from 004214e0_FUN_004214e0.c (FUN_004214e0, 109 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_Error__Outside_slot_range___d__i_0062434c ((char*)0x0062434c)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static void BEA_THISCALL ap_004214e0(void * this_, uint param_1, int param_2)
{
  uint uVar1;
  int iVar2;
  
  if (((int)param_1 < 0) || (0xff < (int)param_1)) {
    FUN_00441740(&DAT_0066f580,s_Error__Outside_slot_range___d__i_0062434c,param_1);
    return;
  }
  iVar2 = (int)param_1 >> 5;
  uVar1 = 1;
  if ((param_1 & 0x1f) != 0) {
    uVar1 = 1 << (sbyte)(param_1 & 0x1f);
  }
  if (param_2 == 1) {
    *(uint *)((int)this_ + iVar2 * 4 + 0x2408) = *(uint *)((int)this_ + iVar2 * 4 + 0x2408) | uVar1;
    return;
  }
  *(uint *)((int)this_ + iVar2 * 4 + 0x2408) = *(uint *)((int)this_ + iVar2 * 4 + 0x2408) & ~uVar1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004214e0, ap_004214e0));
