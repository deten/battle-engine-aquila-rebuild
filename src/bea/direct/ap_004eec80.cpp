// auto-ported from 004eec80_vslot9.c (CSubmarine::vslot9, 305 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSubmarine;
typedef char CUnit;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Submarine_cpp_00632abc ((char*)0x00632abc)
typedef uint32_t (BEA_THISCALL* CUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CUnit__vslot9_t> CUnit__vslot9 = {(CUnit__vslot9_t)0x004f86d0};
typedef void * (BEA_THISCALL* FUN_004ef570_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004ef570_t> FUN_004ef570 = {(FUN_004ef570_t)0x004ef570};
typedef void * (BEA_THISCALL* FUN_004fe710_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fe710_t> FUN_004fe710 = {(FUN_004fe710_t)0x004fe710};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_004eec80(CSubmarine * this_, int param_1)
{
  float fVar1;
  undefined4 *this_00;
  void *this_01;
  undefined4 uVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)(this_ + 0x250) = 0;
  fVar1 = DAT_006fbdfc + 25.0f;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x2000100;
  *(float *)(param_1 + 0xc) = fVar1;
  fVar1 = *(float *)(*(int *)(param_1 + 0x3bc) + 0xb8);
  *(float *)(this_ + 300) = fVar1;
  *(float *)(this_ + 0x130) = fVar1 * 0.33333334f;
  *(undefined4 *)(this_ + 0x134) = 0;
  CUnit__vslot9(bea_arg((CUnit *)this_), bea_arg(param_1));
  this_00 = (undefined4 *)
            FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x60), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_Submarine_cpp_00632abc), bea_arg(0x1d));
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    FUN_004fe710(bea_arg(this_00), bea_arg(this_), bea_arg(param_1));
    *this_00 = ((void*)0x005df404);
  }
  *(undefined4 **)(this_ + 0x13c) = this_00;
  this_01 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20), bea_arg(0x17), bea_arg(s_C__dev_ONSLAUGHT2_Submarine_cpp_00632abc), bea_arg(0x1e));
  if (this_01 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004ef570(bea_arg(this_01), bea_arg(this_));
  }
  *(undefined4 *)(this_ + 0x208) = uVar2;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004eec80, ap_004eec80));
