// auto-ported from 00406050_vslot0_t8.c (CBattleEngine::vslot0_t8, 85 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit local_c: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CBattleEngine;
typedef uint32_t (BEA_THISCALL* CActor__vslot0_t8_t)(uint32_t, uint32_t);
static CActor__vslot0_t8_t const CActor__vslot0_t8 = (CActor__vslot0_t8_t)0x00401be0;

static undefined4 * BEA_THISCALL ap_00406050(CBattleEngine * this_, undefined4 *param_1)
{
  float10 fVar1;
  undefined4 local_10;
  undefined4 local_c = 0;
  float local_8;
  undefined4 local_4;
  
  CActor__vslot0_t8(bea_arg((CActor *)this_), bea_arg(&local_10));
  if (*(int *)(this_ + 0x5e8) == 1) {
    fVar1 = (float10)bea_vcall<float10>(this_ + -8, 0xc0);
    local_8 = (float)(fVar1 + (float10)local_8);
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00406050, ap_00406050));
