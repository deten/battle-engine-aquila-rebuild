// auto-ported from 004a3be0_vslot4.c (CMenuMenuItem::vslot4, 65 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMenuMenuItem;
#define DAT_0070486c GLOBAL_AT(int, 0x0070486c)
#define DAT_00704874 GLOBAL_AT(int, 0x00704874)
#define DAT_00704870 GLOBAL_AT(int, 0x00704870)
typedef uint32_t (BEA_THISCALL* FUN_004a3c30_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a3c30_t> FUN_004a3c30 = {(FUN_004a3c30_t)0x004a3c30};

static void BEA_THISCALL ap_004a3be0(CMenuMenuItem * this_, undefined4 param_1, undefined4 param_2, int param_3)
{
  if ((param_3 != 0) && (DAT_0070486c == (CMenuMenuItem *)0x0)) {
    DAT_00704874 = param_1;
    DAT_00704870 = param_2;
    DAT_0070486c = this_;
    return;
  }
  FUN_004a3c30(bea_arg(this_), bea_arg(param_1), bea_arg(param_2), bea_arg(0));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a3be0, ap_004a3be0));
