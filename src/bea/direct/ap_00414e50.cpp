// auto-ported from 00414e50_vslot9.c (CBoat::vslot9, 336 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBoat;
typedef char CGroundUnit;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Boat_cpp_00623990 ((char*)0x00623990)
typedef uint32_t (BEA_THISCALL* CGroundUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CGroundUnit__vslot9_t> CGroundUnit__vslot9 = {(CGroundUnit__vslot9_t)0x0047c730};
typedef void * (BEA_THISCALL* FUN_00415d70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00415d70_t> FUN_00415d70 = {(FUN_00415d70_t)0x00415d70};
typedef void * (BEA_THISCALL* FUN_004fe710_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fe710_t> FUN_004fe710 = {(FUN_004fe710_t)0x004fe710};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00414e50(CBoat * this_, int param_1)
{
  void *this_00;
  undefined4 uVar1;
  undefined4 *this_01;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x2100000;
  *(undefined4 *)(param_1 + 0x98) = 1;
  CGroundUnit__vslot9(bea_arg((CGroundUnit *)this_), bea_arg(param_1));
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0xb8);
  *(undefined4 *)(this_ + 300) = uVar1;
  *(undefined4 *)(this_ + 0x130) = 0x3ac49ba6;
  *(undefined4 *)(this_ + 0x134) = uVar1;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 200);
  *(undefined4 *)(this_ + 0x100) = uVar1;
  *(undefined4 *)(this_ + 0x104) = uVar1;
  *(undefined4 *)(this_ + 0x108) = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0xd0);
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20), bea_arg(0x17), bea_arg(s_C__dev_ONSLAUGHT2_Boat_cpp_00623990), bea_arg(0x1e))
  ;
  if (this_00 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00415d70(bea_arg(this_00), bea_arg(this_));
  }
  *(undefined4 *)(this_ + 0x208) = uVar1;
  this_01 = (undefined4 *)
            FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x60), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_Boat_cpp_00623990), bea_arg(0x1f));
  if (this_01 == (undefined4 *)0x0) {
    this_01 = (undefined4 *)0x0;
  }
  else {
    FUN_004fe710(bea_arg(this_01), bea_arg(this_), bea_arg(param_1));
    *this_01 = ((void*)0x005d8ce8);
  }
  *(undefined4 **)(this_ + 0x13c) = this_01;
  *(undefined4 *)(this_ + 0x260) = 0;
  *(undefined4 *)(this_ + 0x264) = 0;
  *(undefined4 *)(this_ + 0x268) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00414e50, ap_00414e50));
