// auto-ported from 00422440_vslot9.c (CCarver::vslot9, 280 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CCarver;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Carver_cpp_00624400 ((char*)0x00624400)
#define s_launch_006243f8 ((char*)0x006243f8)
typedef uint32_t (BEA_THISCALL* CAirUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CAirUnit__vslot9_t> CAirUnit__vslot9 = {(CAirUnit__vslot9_t)0x00402ad0};
typedef void * (BEA_THISCALL* FUN_00422f90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00422f90_t> FUN_00422f90 = {(FUN_00422f90_t)0x00422f90};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef void * (BEA_THISCALL* FUN_004fe710_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fe710_t> FUN_004fe710 = {(FUN_004fe710_t)0x004fe710};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00422440(CCarver * this_, int param_1)
{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *this_00;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)(param_1 + 0x80) = 1;
  CAirUnit__vslot9(bea_arg((CAirUnit *)this_), bea_arg(param_1));
  *(undefined4 *)(this_ + 0x134) = 0x3f000000;
  pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x30), bea_arg(0x17), bea_arg(s_C__dev_ONSLAUGHT2_Carver_cpp_00624400), bea_arg(0x16));
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00422f90(bea_arg(pvVar2), bea_arg(this_));
  }
  *(undefined4 *)(this_ + 0x208) = uVar3;
  this_00 = (undefined4 *)
            FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(100), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_Carver_cpp_00624400), bea_arg(0x17));
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    FUN_004fe710(bea_arg(this_00), bea_arg(this_), bea_arg(param_1));
    *this_00 = ((void*)0x005d9448);
    this_00[0x18] = 0;
    this_00[5] = 0;
  }
  *(undefined4 **)(this_ + 0x13c) = this_00;
  iVar1 = *(int *)this_;
  uVar3 = 1;
  pvVar2 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_launch_006243f8,1);
  uVar3 = FUN_004aa630(bea_arg(pvVar2), bea_arg(uVar3));
  bea_vcall<uint32_t>(this_, 0xf0, uVar3);
  *(undefined4 *)(this_ + 0x27c) = 0;
  *(undefined4 *)(this_ + 0x280) = 0;
  *(undefined4 *)(this_ + 0x284) = 0;
  *(undefined4 *)(this_ + 0x288) = 0xc2c80000;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00422440, ap_00422440));
