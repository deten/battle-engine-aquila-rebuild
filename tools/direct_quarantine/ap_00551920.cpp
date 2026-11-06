// auto-ported from 00551920_FUN_00551920.c (FUN_00551920, 385 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c7480 GLOBAL_AT(int, 0x009c7480)
#define DAT_009c7484 GLOBAL_AT(int, 0x009c7484)
#define DAT_009c7488 GLOBAL_AT(int, 0x009c7488)
#define DAT_009c748c GLOBAL_AT(int, 0x009c748c)
#define DAT_009c7450 GLOBAL_AT(undefined4, 0x009c7450)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513af0_t)(uint32_t);
static const bea_guard<FUN_00513af0_t> FUN_00513af0 = {(FUN_00513af0_t)0x00513af0};
typedef uint32_t (BEA_THISCALL* FUN_00550ca0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550ca0_t> FUN_00550ca0 = {(FUN_00550ca0_t)0x00550ca0};
typedef uint32_t (BEA_THISCALL* FUN_005515e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005515e0_t> FUN_005515e0 = {(FUN_005515e0_t)0x005515e0};

static void BEA_THISCALL ap_00551920(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x34);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x30);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x14);
  if (*(char *)this_ != '\0') {
    *(undefined4 *)((int)this_ + 8) = 0;
    *(undefined4 *)((int)this_ + 0x20) = 0x3f800000;
    *(undefined4 *)((int)this_ + 0x24) = 0x3f800000;
    *(undefined4 *)((int)this_ + 0xc) = 0;
    *(undefined4 *)((int)this_ + 0x10) = 0;
    *(undefined4 *)((int)this_ + 0x14) = 0xffffffff;
    *(undefined4 *)((int)this_ + 0x18) = 0;
    *(undefined4 *)((int)this_ + 0x1c) = 0;
    *(undefined4 *)((int)this_ + 0x28) = DAT_009c7480;
    *(undefined4 *)((int)this_ + 0x2c) = DAT_009c7484;
    *(undefined4 *)((int)this_ + 0x30) = DAT_009c7488;
    *(undefined4 *)((int)this_ + 0x34) = DAT_009c748c;
    puVar2 = &DAT_009c7450;
    puVar3 = (undefined4 *)((int)this_ + 0x38);
    for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = &DAT_009c7450;
    puVar3 = (undefined4 *)&local_40;
    for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(DAT_009c7480), bea_arg(DAT_009c7484), bea_arg(DAT_009c7488), bea_arg(DAT_009c748c), bea_arg(local_40), bea_arg(local_3c), bea_arg(local_38), bea_arg(local_34), bea_arg(local_30), bea_arg(local_2c), bea_arg(local_28), bea_arg(local_24), bea_arg(local_20), bea_arg(local_1c), bea_arg(local_18), bea_arg(local_14));
    FUN_00513af0(bea_arg(0));
    FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(2), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(4), bea_arg(4));
    FUN_00513820(bea_arg(1), bea_arg(5), bea_arg(3));
    FUN_00513820(bea_arg(1), bea_arg(6), bea_arg(1));
    FUN_005515e0(bea_arg(this_), bea_arg(0));
    FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
    FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(4), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(2), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(3), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(5), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(6), bea_arg(1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00551920, ap_00551920));
