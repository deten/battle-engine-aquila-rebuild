// auto-ported from 00488bb0_vslot9.c (CInfantryUnit::vslot9, 523 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CInfantryUnit;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Infantry_cpp_0062d4a8 ((char*)0x0062d4a8)
typedef uint32_t (BEA_THISCALL* CGroundUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CGroundUnit__vslot9_t> CGroundUnit__vslot9 = {(CGroundUnit__vslot9_t)0x0047c730};
typedef uint32_t (BEA_THISCALL* FUN_00488ef0_t)(uint32_t);
static const bea_guard<FUN_00488ef0_t> FUN_00488ef0 = {(FUN_00488ef0_t)0x00488ef0};
typedef uint32_t (BEA_THISCALL* FUN_00488f00_t)(uint32_t);
static const bea_guard<FUN_00488f00_t> FUN_00488f00 = {(FUN_00488f00_t)0x00488f00};
typedef void * (BEA_THISCALL* FUN_0048a3c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0048a3c0_t> FUN_0048a3c0 = {(FUN_0048a3c0_t)0x0048a3c0};
typedef void * (BEA_THISCALL* FUN_004fe710_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fe710_t> FUN_004fe710 = {(FUN_004fe710_t)0x004fe710};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00488bb0(CInfantryUnit * this_, int param_1)
{
  undefined4 *puVar1;
  void *this_00;
  undefined4 uVar2;
  float10 fVar3;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x14);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x70) = 0x2000010;
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x38), bea_arg(0xb), bea_arg(s_C__dev_ONSLAUGHT2_Infantry_cpp_0062d4a8), bea_arg(0x1c));
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00488ef0(bea_arg(puVar1));
    local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
    FUN_00488f00(bea_arg(puVar1 + 9));
    *puVar1 = ((void*)0x005dbf48);
  }
  *(undefined4 **)(this_ + 0x38) = puVar1;
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x60) == 1) {
    fVar3 = bea_fcast<float10>(fpatan(bea_fcast<float10>(*(float *)(param_1 + 0x18)),bea_fcast<float10>(*(float *)(param_1 + 0x28))))
    ;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(float *)(param_1 + 0x44) = bea_fcast<float>(-fVar3);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(this_ + 0x260) = 0x40800000;
  if ((*(int *)(param_1 + 0x3bc) != 0) && (*(int *)(*(int *)(param_1 + 0x3bc) + 0x100) == 1)) {
    *(undefined4 *)(this_ + 0x260) = 0x3f800000;
  }
  CGroundUnit__vslot9(bea_arg((CGroundUnit *)this_), bea_arg(param_1));
  local_1c = 0;
  bea_vcall<uint32_t>(this_, 0x70, &local_1c);
  bea_vcall<uint32_t>(this_, 0xf0, 3,1,0);
  *(undefined4 *)(this_ + 300) = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0xb8);
  *(undefined4 *)(this_ + 0x130) = 0;
  *(undefined4 *)(this_ + 0x134) = 0;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 200);
  *(undefined4 *)(this_ + 0x100) = uVar2;
  *(undefined4 *)(this_ + 0x104) = uVar2;
  *(undefined4 *)(this_ + 0x108) = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0xd0);
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x48), bea_arg(0x17), bea_arg(s_C__dev_ONSLAUGHT2_Infantry_cpp_0062d4a8), bea_arg(0x46));
  local_4 = 2;
  if (this_00 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0048a3c0(bea_arg(this_00), bea_arg(this_));
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(this_ + 0x208) = uVar2;
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x60), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_Infantry_cpp_0062d4a8), bea_arg(0x47));
  local_4 = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_004fe710(bea_arg(puVar1), bea_arg(this_), bea_arg(param_1));
    *puVar1 = ((void*)0x005dbf14);
    puVar1[5] = 0;
  }
  *(undefined4 **)(this_ + 0x13c) = puVar1;
  *(undefined4 *)(this_ + 0x268) = 0;
  *(undefined4 *)(this_ + 0x26c) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00488bb0, ap_00488bb0));
