// auto-ported from 00558fb0_FUN_00558fb0.c (FUN_00558fb0, 980 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
#define DAT_0063012c GLOBAL_AT(int, 0x0063012c)
#define DAT_00704e48 GLOBAL_AT(int, 0x00704e48)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513af0_t)(uint32_t);
static const bea_guard<FUN_00513af0_t> FUN_00513af0 = {(FUN_00513af0_t)0x00513af0};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_STDCALL* FUN_00513d90_t)(uint32_t);
static const bea_guard<FUN_00513d90_t> FUN_00513d90 = {(FUN_00513d90_t)0x00513d90};

static void BEA_THISCALL ap_00558fb0(void * this_, undefined4 param_1)
{
  int iVar1;

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
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x4);
  iVar1 = DAT_0063012c;
  if (DAT_00704e48 == 5) {
    return;
  }
  if ((((*(int *)((int)this_ + 0x94) != 0x3f800000) || (*(int *)((int)this_ + 0x98) != 0x3f800000)) ||
      (*(float *)((int)this_ + 0x8c) != 0.0f)) || (*(float *)((int)this_ + 0x90) != 0.0f)) {
    local_8 = 0;
    local_c = 0;
    local_10 = 0;
    local_14 = 0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_4 = 0x3f800000;
    local_18 = 0x3f800000;
    local_2c = 0x3f800000;
    local_40 = 0x3f800000;
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x10,&local_40);
    FUN_00513820(bea_arg(0), bea_arg(0x18), bea_arg(0));
  }
  switch(*(undefined4 *)((int)this_ + 0x88)) {
  case 0:
    FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(4), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(2), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(3), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(5), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(6), bea_arg(1));
    break;
  case 1:
    FUN_00513820(bea_arg(0), bea_arg(2), bea_arg(2));
    FUN_00513820(bea_arg(0), bea_arg(3), bea_arg(0));
    FUN_00513af0(bea_arg(0));
    FUN_00513bc0(bea_arg(0xf), bea_arg(1));
    return;
  case 2:
    FUN_00513820(bea_arg(0), bea_arg(0x18), bea_arg(0));
    FUN_00513820(bea_arg(0), bea_arg(0xb), bea_arg(0));
    FUN_00513bc0(bea_arg(0x13), bea_arg(5));
    FUN_00513bc0(bea_arg(0x14), bea_arg(6));
    FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(4), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(2), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(3), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(5), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(6), bea_arg(1));
    FUN_00513bc0(bea_arg(0xf), bea_arg(1));
    break;
  case 3:
    FUN_00513820(bea_arg(0), bea_arg(0x18), bea_arg(0));
    FUN_00513820(bea_arg(0), bea_arg(0xb), bea_arg(0));
    DAT_009c68ad = 1;
    DAT_009c6910 = 1;
    FUN_00513af0(bea_arg(0));
    FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(4), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(2), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(3), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(5), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(6), bea_arg(1));
    if (iVar1 == 0xff) {
      return;
    }
    FUN_00513bc0(bea_arg(0x1b), bea_arg(0));
    if ((char)param_1 != '\0') {
      return;
    }
    goto LAB_0055936c;
  case 4:
    FUN_00513d90(bea_arg(8));
    FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(4), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(2), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(3), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(5), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(6), bea_arg(1));
    break;
  default:
    goto switchD_005590c0_default;
  }
  if ((iVar1 != 0xff) && (FUN_00513bc0(bea_arg(0x1b), bea_arg(0)), (char)param_1 == '\0')) {
LAB_0055936c:
    FUN_00513820(bea_arg(1), bea_arg(0xb), bea_arg(1));
  }
switchD_005590c0_default:
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00558fb0, ap_00558fb0));
