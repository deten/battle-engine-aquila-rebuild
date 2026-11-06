// auto-ported from 0044e1c0_vslot50.c (CFenrir::vslot50, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFenrir;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b2d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b2d0_t> FUN_0044b2d0 = {(FUN_0044b2d0_t)0x0044b2d0};

static undefined4 BEA_THISCALL ap_0044e1c0(CFenrir * this_)
{
  if ((*(ushort *)(this_ + 0x2c) & 4) != 0) {
    return 0;
  }
  *(ushort *)(this_ + 0x2c) = *(ushort *)(this_ + 0x2c) | 4;
  FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(this_ + 0x27c), bea_arg(7000), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044e1c0, ap_0044e1c0));
