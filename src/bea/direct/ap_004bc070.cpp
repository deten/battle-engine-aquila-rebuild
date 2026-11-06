// auto-ported from 004bc070_vslot0.c (CNamedMesh::vslot0, 59 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* CActor__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CActor__vslot0_t> CActor__vslot0 = {(CActor__vslot0_t)0x004019e0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};

static uint32_t BEA_THISCALL ap_004bc070(CActor * this_, int param_1)
{
  if (*(short *)(param_1 + 4) != 3000) {
    return CActor__vslot0(bea_arg(this_), bea_arg(param_1));
  }
  param_1 = 0xbf800000;
  return FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bc070, ap_004bc070));
