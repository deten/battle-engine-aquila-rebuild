// auto-ported from 004bbcd0_vslot9.c (CNamedMesh::vslot9, 206 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CActor;
typedef char CNamedMesh;
#define DAT_00623adc GLOBAL_AT(int, 0x00623adc)
#define _DAT_00807528 GLOBAL_AT(int, 0x00807528)
#define _DAT_0080752c GLOBAL_AT(int, 0x0080752c)
#define _DAT_00807530 GLOBAL_AT(int, 0x00807530)
#define _DAT_00807534 GLOBAL_AT(int, 0x00807534)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef int (BEA_THISCALL* CActor__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CActor__vslot9_t> CActor__vslot9 = {(CActor__vslot9_t)0x004011e0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef uint32_t (BEA_STDCALL* FUN_0050b010_t)(uint32_t);
static const bea_guard<FUN_0050b010_t> FUN_0050b010 = {(FUN_0050b010_t)0x0050b010};

static uint32_t BEA_THISCALL ap_004bbcd0(CNamedMesh * this_, int param_1)
{
  void *this_00;
  int iVar1;
  undefined4 uVar2;
  *(undefined4 *)(this_ + 0xe0) = *(undefined4 *)(param_1 + 100);
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x20;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x8c) = 1;
  CActor__vslot9(bea_arg((CActor *)this_), bea_arg(param_1));
  bea_vcall<uint32_t>(this_, 0x48);
  iVar1 = *(int *)this_;
  uVar2 = 1;
  this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, &DAT_00623adc,1);
  uVar2 = FUN_004aa630(bea_arg(this_00), bea_arg(uVar2));
  bea_vcall<uint32_t>(this_, 0xf0, uVar2);
  _DAT_00807528 = *(undefined4 *)(this_ + 0x1c);
  _DAT_0080752c = *(undefined4 *)(this_ + 0x20);
  _DAT_00807530 = *(undefined4 *)(this_ + 0x24);
  _DAT_00807534 = *(undefined4 *)(this_ + 0x28);
  iVar1 = bea_vcall<uint32_t>(this_ + 8, 0x58);
  if (iVar1 != 0) {
    iVar1 = bea_vcall<uint32_t>(this_ + 8, 0x58);
    if (iVar1 != -1) {
      param_1 = -0x40800000;
      FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
    }
  }
  return FUN_0050b010(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bbcd0, ap_004bbcd0));
