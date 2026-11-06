// auto-ported from 0047fe30_vslot9.c (CHiveBoss::vslot9, 463 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGuide;
typedef char CHiveBoss;
typedef char CUnit;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_core2_0062cc90 ((char*)0x0062cc90)
#define s_C__dev_ONSLAUGHT2_HiveBoss_cpp_0062cc98 ((char*)0x0062cc98)
typedef uint32_t (BEA_THISCALL* CUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CUnit__vslot9_t> CUnit__vslot9 = {(CUnit__vslot9_t)0x004f86d0};
typedef uint32_t (BEA_THISCALL* FUN_00443fc0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00443fc0_t> FUN_00443fc0 = {(FUN_00443fc0_t)0x00443fc0};
typedef undefined4 (BEA_THISCALL* FUN_00444520_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00444520_t> FUN_00444520 = {(FUN_00444520_t)0x00444520};
typedef CGuide* (BEA_THISCALL* FUN_0047e290_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047e290_t> FUN_0047e290 = {(FUN_0047e290_t)0x0047e290};
typedef void * (BEA_THISCALL* FUN_00497090_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00497090_t> FUN_00497090 = {(FUN_00497090_t)0x00497090};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_0047fe30(CHiveBoss * this_, int param_1)
{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *this_00;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0xa100000;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 2;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x30), bea_arg(0x55), bea_arg(s_C__dev_ONSLAUGHT2_HiveBoss_cpp_0062cc98), bea_arg(0x21));
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00443fc0(bea_arg(pvVar1), bea_arg(this_), bea_arg(0x41200000), bea_arg(0), bea_arg(1));
  }
  *(undefined4 *)(this_ + 0x178) = uVar2;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x78), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_HiveBoss_cpp_0062cc98), bea_arg(0x22));
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00497090(bea_arg(pvVar1), bea_arg(this_));
  }
  *(undefined4 *)(this_ + 0x70) = uVar2;
  CUnit__vslot9(bea_arg((CUnit *)this_), bea_arg(param_1));
  uVar2 = FUN_00444520(bea_arg(*(void **)(this_ + 0x178)), bea_arg(s_core2_0062cc90));
  *(undefined4 *)(this_ + 0x2a4) = uVar2;
  this_00 = (undefined4 *)
            FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2c), bea_arg(0x17), bea_arg(s_C__dev_ONSLAUGHT2_HiveBoss_cpp_0062cc98), bea_arg(0x28));
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    FUN_0047e290(bea_arg(this_00), bea_arg(this_));
    *this_00 = ((void*)0x005dbe08);
    this_00[8] = 0x3ca3d70a;
    this_00[9] = 0x3ca3d70a;
    this_00[10] = 0x3ca3d70a;
  }
  *(undefined4 **)(this_ + 0x208) = this_00;
  *(undefined4 *)(this_ + 0x250) = 0;
  *(undefined4 *)(this_ + 0x254) = 0;
  *(undefined4 *)(this_ + 600) = 0;
  *(undefined4 *)(this_ + 0x25c) = 0;
  *(undefined4 *)(this_ + 0x260) = 0;
  *(undefined4 *)(this_ + 0x264) = 0;
  *(undefined4 *)(this_ + 0x268) = 0xbf800000;
  *(undefined4 *)(this_ + 0x284) = 0;
  *(undefined4 *)(this_ + 0x288) = 0;
  *(undefined4 *)(this_ + 0x28c) = 0;
  *(undefined4 *)(this_ + 0x290) = 0;
  *(undefined4 *)(this_ + 0x294) = 0;
  *(undefined4 *)(this_ + 0x298) = 0;
  *(undefined4 *)(this_ + 0x2a0) = 0x41f00000;
  *(undefined4 *)(this_ + 0x29c) = 0;
  *(undefined4 *)(this_ + 300) = 0x41200000;
  *(undefined4 *)(this_ + 0x130) = 0;
  *(undefined4 *)(this_ + 0x134) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047fe30, ap_0047fe30));
