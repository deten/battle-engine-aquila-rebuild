// auto-ported from 0049fb00_vslot35.c (CMech::vslot35, 153 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CMech;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Mech_cpp_0062e0e0 ((char*)0x0062e0e0)
typedef uint32_t (BEA_THISCALL* CGroundUnit__vslot35_t)(uint32_t, uint32_t);
static CGroundUnit__vslot35_t const CGroundUnit__vslot35 = (CGroundUnit__vslot35_t)0x0047c8e0;
typedef uint32_t (BEA_THISCALL* FUN_0043fde0_t)(uint32_t, uint32_t);
static FUN_0043fde0_t const FUN_0043fde0 = (FUN_0043fde0_t)0x0043fde0;
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_005490e0_t const FUN_005490e0 = (FUN_005490e0_t)0x005490e0;

static uint32_t BEA_THISCALL ap_0049fb00(CMech * this_, int param_1)
{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  iVar1 = bea_vcall<uint32_t>(this_ + 8, 0x54);
  if (iVar1 != 0) {
    this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20), bea_arg(0x5c), bea_arg(s_C__dev_ONSLAUGHT2_Mech_cpp_0062e0e0), bea_arg(0x57));
    if (this_00 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0043fde0(bea_arg(this_00), bea_arg(iVar1));
    }
    bea_vcall<uint32_t>(this_, 0x44);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x4000;
  return CGroundUnit__vslot35(bea_arg((CGroundUnit *)this_), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049fb00, ap_0049fb00));
