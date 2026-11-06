// auto-ported from 00418ef0_FUN_00418ef0.c (FUN_00418ef0, 440 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
// @hand-fixed 2026-10-21: the virtual calls below return a float in ST0 (fstp follows the call);
// the generator had typed them uint32_t under a bea_fcast cast (12-character cast lookback)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Camera_cpp_00623c90 ((char*)0x00623c90)
typedef uint32_t (BEA_THISCALL* FUN_00401040_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401040_t> FUN_00401040 = {(FUN_00401040_t)0x00401040};
typedef void * (BEA_THISCALL* FUN_00416d10_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00416d10_t> FUN_00416d10 = {(FUN_00416d10_t)0x00416d10};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_00418ef0(void * this_, int *param_1)
{
  void *this_00;
  undefined4 *puVar1;
  void *this_01;
  undefined4 uVar2;
  float10 fVar3;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  *(undefined ***)this_ = ((void*)0x005d9260);
  local_4 = 1;
  uStack_3 = 0;
  *(undefined4 *)((int)this_ + 4) = param_1;
  if (param_1 != (int *)0x0) {
    FUN_00401040(bea_arg(param_1), bea_arg((undefined4 *)((int)this_ + 4)));
  }
  local_4 = 2;
  *(undefined ***)this_ = ((void*)0x005d9230);
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x28), bea_arg(s_C__dev_ONSLAUGHT2_Camera_cpp_00623c90), bea_arg(0x9e));
  local_4 = 3;
  if (this_00 == (void *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    FUN_004e5840(bea_arg(this_00));
  }
  local_4 = 2;
  fVar3 = bea_fcast<float10>(bea_vcall<float10>(param_1, 0x40));
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_Camera_cpp_00623c90), bea_arg(0xa4));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0x41b40000;
    puVar1[2] = bea_piece32((-bea_fcast<float>(fVar3) - 3.8f) * 2.5f);
  }
  FUN_004e5b20(bea_arg(this_00), bea_arg(puVar1));
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_Camera_cpp_00623c90), bea_arg(0xa5));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0xc1b40000;
    puVar1[2] = bea_piece32((-bea_fcast<float>(fVar3) - 1.0f) * 2.5f);
  }
  FUN_004e5b20(bea_arg(this_00), bea_arg(puVar1));
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_Camera_cpp_00623c90), bea_arg(0xa6));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0x40200000;
    puVar1[2] = 0x40900000;
  }
  FUN_004e5b20(bea_arg(this_00), bea_arg(puVar1));
  this_01 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_Camera_cpp_00623c90), bea_arg(0xa9));
  (*(uint32_t*)((char*)&local_4)) = CONCAT31(uStack_3,4);
  if (this_01 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00416d10(bea_arg(this_01), bea_arg(this_00), bea_arg(3));
  }
  *(undefined4 *)((int)this_ + 8) = uVar2;
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00418ef0, ap_00418ef0));
