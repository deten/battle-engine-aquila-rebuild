// auto-ported from 0041b9f0_FUN_0041b9f0.c (FUN_0041b9f0, 292 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00624184 GLOBAL_AT(int, 0x00624184)
#define DAT_00660624 GLOBAL_AT(undefined, 0x00660624)
#define DAT_00660620 GLOBAL_AT(undefined4, 0x00660620)
typedef void * (BEA_THISCALL* FUN_0041b940_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041b940_t> FUN_0041b940 = {(FUN_0041b940_t)0x0041b940};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef void * (BEA_THISCALL* FUN_004e5850_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5850_t> FUN_004e5850 = {(FUN_004e5850_t)0x004e5850};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};

static void * BEA_THISCALL ap_0041b9f0(void * this_, void *param_1)
{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *this_00;
  int iVar4;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  int * (&local_2c)[2] = *reinterpret_cast<int * (*)[2]>(bea_frame_ + 0x30 - 0x2c);
  int * &local_24 = *reinterpret_cast<int * *>(bea_frame_ + 0x30 - 0x24);
  undefined1 (&local_1c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x30 - 0x1c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x30 - 0x8);
  uint &local_4 = *reinterpret_cast<uint *>(bea_frame_ + 0x30 - 0x4);
  local_4 = 0xffffffff;
  FUN_004e5840(bea_arg(local_1c));
  iVar4 = 0;
  local_4 = 1;
  if (0 < DAT_00624184) {
    this_00 = &DAT_00660624;
    puVar3 = &DAT_00660620;
    do {
      if ((0x66061f < (int)puVar3) && (this_00 != (undefined *)0x0)) {
        FUN_0041b940(bea_arg(this_00), bea_arg(local_2c));
        (*(uint8_t*)((char*)&local_4 + 0)) = 2;
        local_24 = local_2c[0];
        if (local_2c[0] == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *local_2c[0];
        }
        while (BEA_LOOP_GUARD((iVar2 != 0))) {
          if (*(int *)(iVar2 + 4) < 0) {
            puVar1 = (undefined *)0x0;
          }
          else {
            puVar1 = &DAT_00660624 + *(int *)(iVar2 + 4) * 0x40;
          }
          if (puVar1 == this_) {
            FUN_004e5b20(bea_arg(local_1c), bea_arg(iVar2));
          }
          local_24 = (int *)local_24[1];
          if (local_24 == (int *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *local_24;
          }
        }
        local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
        FUN_004e5c60(bea_arg(local_2c));
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 0x10;
      this_00 = this_00 + 0x40;
    } while (BEA_LOOP_GUARD((iVar4 < DAT_00624184)));
  }
  FUN_004e5850(bea_arg(param_1), bea_arg(local_1c));
  local_4 = local_4 & 0xffffff00;
  FUN_004e5c60(bea_arg(local_1c));
  return (void *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041b9f0, ap_0041b9f0));
