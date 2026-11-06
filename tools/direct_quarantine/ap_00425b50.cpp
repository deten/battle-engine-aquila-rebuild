// auto-ported from 00425b50_vslot3.c (CCollisionSeekingRound::vslot3, 265 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit uStack_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit uStack_14: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CCSPersistentThing;
typedef char CCollisionSeekingRound;
typedef char extraout_ST0;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_WARNING__Collision_seeking_round_0062465c ((char*)0x0062465c)
#define s_C__dev_ONSLAUGHT2_CollisionSeeki_00624630 ((char*)0x00624630)
typedef uint32_t (BEA_THISCALL* CCSPersistentThing__vslot3_t)(uint32_t, uint32_t);
static const bea_guard<CCSPersistentThing__vslot3_t> CCSPersistentThing__vslot3 = {(CCSPersistentThing__vslot3_t)0x004269b0};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00425b50(CCollisionSeekingRound * this_, undefined4 *param_1)
{
  undefined4 *puVar1;
  float10 extraout_ST0;
  undefined4 uStack_14 = 0;
  undefined4 uStack_4;
  
  if (param_1[3] != 0) {
    FUN_00441740(&DAT_0066f580,s_WARNING__Collision_seeking_round_0062465c);
    if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(param_1[3], 0x0, 1);
    }
  }
  *(undefined4 *)(this_ + 0x38) = param_1[0xd];
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x34), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_CollisionSeeki_00624630), bea_arg(0x1b));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *puVar1 = ((void*)0x005d8bfc);
    puVar1[8] = uStack_14;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = uStack_4;
  }
  param_1[3] = puVar1;
  CCSPersistentThing__vslot3(bea_arg((CCSPersistentThing *)this_), bea_arg(param_1));
  extraout_ST0 = bea_fcast<float10>(bea_vcall<float10>(*param_1, 0x3c));
  *(float *)(this_ + 0x1c) = bea_fcast<float>((extraout_ST0 * bea_fcast<float10>(0.05f) + bea_fcast<float10>(*(float *)(this_ + 0x38))))
  ;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00425b50, ap_00425b50));
