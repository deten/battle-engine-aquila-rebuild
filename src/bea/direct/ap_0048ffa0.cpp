// auto-ported from 0048ffa0_vslot3.c (CLevelBriefingLog::vslot3, 53 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CLevelBriefingLog;
#define DAT_008a9d8c GLOBAL_AT(int, 0x008a9d8c)
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef uint32_t (BEA_THISCALL* FUN_004cdd70_t)(uint32_t);
static const bea_guard<FUN_004cdd70_t> FUN_004cdd70 = {(FUN_004cdd70_t)0x004cdd70};
typedef uint32_t (BEA_THISCALL* FUN_004d0ff0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d0ff0_t> FUN_004d0ff0 = {(FUN_004d0ff0_t)0x004d0ff0};

static void BEA_THISCALL ap_0048ffa0(CLevelBriefingLog * this_, undefined4 param_1, int param_2, undefined4 param_3)
{
  if (param_2 == 0x2e) {
    FUN_00468770(2);
    *(undefined4 *)(this_ + 8) = 0;
    FUN_004d0ff0(bea_arg(DAT_008a9d8c), bea_arg(0));
    FUN_004cdd70(bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048ffa0, ap_0048ffa0));
