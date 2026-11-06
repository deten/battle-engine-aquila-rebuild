// auto-ported from 004f0630_vslot9.c (CTentacle::vslot9, 304 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CComponent;
typedef char CTentacle;
#define s_Sentinel_Big_Arm_00632cb8 ((char*)0x00632cb8)
typedef uint32_t (BEA_THISCALL* CComponent__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CComponent__vslot9_t> CComponent__vslot9 = {(CComponent__vslot9_t)0x00427b80};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static uint32_t BEA_THISCALL ap_004f0630(CTentacle * this_, int param_1)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_4 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0x1a0) = 1;
  *(undefined4 *)(this_ + 0x2c4) = 0;
  *(undefined4 *)(this_ + 0x2c8) = 0x3fe90fdb;
  *(undefined4 *)(this_ + 0x2cc) = 0;
  *(undefined4 *)(this_ + 0x2d0) = 0x3fe90fdb;
  *(undefined4 *)(this_ + 0x30c) = 0;
  iVar2 = FUN_00568390(bea_arg(*(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0xb0)), bea_arg(s_Sentinel_Big_Arm_00632cb8));
  if (iVar2 == 0) {
    *(undefined4 *)(this_ + 0x30c) = 1;
  }
  if (*(int *)(this_ + 0x30c) == 0) {
    uVar1 = 0x41ac0000;
  }
  else {
    uVar1 = 0x41e00000;
  }
  *(undefined4 *)(this_ + 0x2d4) = 0;
  *(undefined4 *)(this_ + 0x2d8) = uVar1;
  *(undefined4 *)(this_ + 0x2dc) = 0x3e800000;
  *(undefined4 *)(this_ + 0x308) = 0;
  *(undefined4 *)(this_ + 0x2e0) = local_4;
  *(undefined4 *)(this_ + 0x2e4) = 0;
  *(undefined4 *)(this_ + 0x2e8) = uVar1;
  *(undefined4 *)(this_ + 0x2ec) = 0x3e800000;
  *(undefined4 *)(this_ + 0x2f4) = 0;
  *(undefined4 *)(this_ + 0x2f0) = local_4;
  *(undefined4 *)(this_ + 0x2f8) = 0;
  *(undefined4 *)(this_ + 0x2fc) = 0;
  *(undefined4 *)(this_ + 0x300) = local_4;
  *(undefined4 *)(this_ + 0x2c0) = 1;
  *(undefined4 *)(this_ + 0x304) = 1;
  return CComponent__vslot9(bea_arg((CComponent *)this_), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f0630, ap_004f0630));
