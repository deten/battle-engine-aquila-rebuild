// auto-ported from 005438c0_FUN_005438c0.c (FUN_005438c0, 1218 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x90: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28: sprite-draw calls in 15-dword form, float constants as floats (tools/menu_test.py)
// @hand-fixed 2026-10-28: 0x550ca0's by-value matrix (split-screen picture differed, tools/menu_test.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0067a67c GLOBAL_AT(int, 0x0067a67c)
#define DAT_0067a678 GLOBAL_AT(int, 0x0067a678)
#define DAT_008aa8d0 GLOBAL_AT(char, 0x008aa8d0)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_008aa8b8 GLOBAL_AT(int, 0x008aa8b8)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_0083d248 GLOBAL_AT(int, 0x0083d248)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_008aa8b4 GLOBAL_AT(int, 0x008aa8b4)
#define DAT_008aa8cc GLOBAL_AT(int, 0x008aa8cc)
typedef uint32_t (BEA_THISCALL* FUN_00500fa0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500fa0_t> FUN_00500fa0 = {(FUN_00500fa0_t)0x00500fa0};
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};
typedef uint32_t (BEA_STDCALL* FUN_00513af0_t)(uint32_t);
static const bea_guard<FUN_00513af0_t> FUN_00513af0 = {(FUN_00513af0_t)0x00513af0};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_STDCALL* FUN_00513d90_t)(uint32_t);
static const bea_guard<FUN_00513d90_t> FUN_00513d90 = {(FUN_00513d90_t)0x00513d90};
typedef uint32_t (BEA_THISCALL* FUN_00550ca0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550ca0_t> FUN_00550ca0 = {(FUN_00550ca0_t)0x00550ca0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
// 15 dwords (conv_overrides.csv); the old 14 + varargs prototype dropped the trailing 1.0f and
// turned float bit patterns (0x43a00000) into their integer values (menu tours, 2026-10-28)
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};

static void BEA_CDECL ap_005438c0(void)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  alignas(16) uint8_t bea_frame_[0x90] = {};   // the original stack frame (emulate_frame)
  void * &local_8c = *reinterpret_cast<void * *>(bea_frame_ + 0x90 - 0x8c);
  undefined4 &local_88 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x88);
  undefined4 &local_84 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x84);
  undefined4 &local_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x80);
  undefined4 &local_7c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x7c);
  undefined4 &local_78 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x78);
  undefined4 &local_74 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x74);
  undefined4 &local_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x70);
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x34);
  undefined4 (&local_30)[4] = *reinterpret_cast<undefined4 (*)[4]>(bea_frame_ + 0x90 - 0x30);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x18);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x8);
  if ((DAT_0067a67c != 0) && (DAT_0067a678 != 0)) {
    if (DAT_008aa8d0 != '\0') {
      DAT_009c68ac = 0;
      DAT_009c690d = 1;
      FUN_00513bc0(bea_arg(0x1b), bea_arg(0));
      FUN_00513bc0(bea_arg(0xf), bea_arg(1));
      FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
      local_70 = 0x3f800000;
      local_74 = 0x3f800000;
      local_78 = 0xffffffff;
      local_7c = 0;
      local_80 = 0x3f800000;
      local_84 = 0;
      local_88 = 4;
      local_8c = DAT_008aa8b8;
      FUN_00555be0(bea_arg(0x43c80000), bea_arg(0x43960000), bea_arg(0), bea_arg(DAT_008aa8b8), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0xffffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    }
    FUN_00513930(bea_arg(0), bea_arg(5), bea_arg(1));
    uVar7 = 1;
    uVar6 = 6;
    uVar5 = 0;
    uVar4 = 0x543981;
    FUN_00513930(bea_arg(0), bea_arg(6), bea_arg(1));
    local_30[0] = 0x3f800000;
    local_30[1] = 0;
    local_30[2] = 0;
    local_20 = 0;
    local_1c = 0x3f800000;
    local_18 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0x3f800000;
    puVar2 = local_30;
    puVar3 = (undefined4 *)&local_8c;
    for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    // the original passes a 4-dword vector (0,0,0,w) and a 3x4 identity matrix
    // by value, built in its frame and copied with `rep movsd`; Ghidra took the
    // 0x513930 call's leftover pushes (0x543981, 0, 6, 1) for the matrix's last
    // row.  The w entries are frame slots the original never writes (stack
    // leftovers there): 0 here, as the emulated frame's other unwritten slots
    (void)local_34; (void)uVar4; (void)uVar5; (void)uVar6; (void)uVar7;
    FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0),
                 bea_arg(0x3f800000), bea_arg(0), bea_arg(0), bea_arg(0),
                 bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0),
                 bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
    bea_vcall<uint32_t>(DAT_00888a50, 0xc4, DAT_00888a50,&DAT_0083d248);
    DAT_009c68ad = 1;
    DAT_009c6910 = 1;
    FUN_00513bc0(bea_arg(0x13), bea_arg(5));
    FUN_00513bc0(bea_arg(0x14), bea_arg(6));
    FUN_00513bc0(bea_arg(0x1b), bea_arg(0));
    FUN_00513bc0(bea_arg(0xf), bea_arg(1));
    FUN_00513bc0(bea_arg(0x18), bea_arg(8));
    FUN_00513820(bea_arg(0), bea_arg(2), bea_arg(2));
    FUN_00513820(bea_arg(0), bea_arg(3), bea_arg(0));
    FUN_00513af0(bea_arg(0));
    FUN_00513820(bea_arg(0), bea_arg(5), bea_arg(2));
    FUN_00513820(bea_arg(0), bea_arg(4), bea_arg(2));
    uVar4 = FUN_00558690(bea_arg(DAT_008aa8b8));
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(uVar4));
    if (DAT_008aa8b4 != (void *)0x0) {
      FUN_00500fa0(bea_arg(DAT_008aa8b4), bea_arg(1), bea_arg(0), bea_arg(0));
    }
    DAT_009c68ad = 0;
    DAT_009c6910 = 1;
    FUN_00513bc0(bea_arg(0x3c), bea_arg(0xffffffff));
    FUN_00513820(bea_arg(0), bea_arg(2), bea_arg(2));
    FUN_00513820(bea_arg(0), bea_arg(3), bea_arg(3));
    FUN_00513af0(bea_arg(0));
    FUN_00513bc0(bea_arg(0x18), bea_arg(8));
    FUN_00500fa0(bea_arg(DAT_008aa8cc), bea_arg(1), bea_arg(0), bea_arg(0));
    FUN_00513bc0(bea_arg(0x13), bea_arg(5));
    FUN_00513bc0(bea_arg(0x14), bea_arg(6));
    FUN_00513820(bea_arg(0), bea_arg(2), bea_arg(2));
    FUN_00513820(bea_arg(0), bea_arg(3), bea_arg(0));
    FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
    FUN_00513930(bea_arg(1), bea_arg(5), bea_arg(1));
    FUN_00513930(bea_arg(1), bea_arg(6), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(0xb), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(0x1a), bea_arg(3));
    FUN_00513820(bea_arg(1), bea_arg(2), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(3), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(4), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(6), bea_arg(1));
    FUN_00513930(bea_arg(2), bea_arg(5), bea_arg(1));
    FUN_00513930(bea_arg(2), bea_arg(6), bea_arg(1));
    FUN_00513820(bea_arg(2), bea_arg(1), bea_arg(1));
    FUN_00513820(bea_arg(2), bea_arg(5), bea_arg(2));
    FUN_00513820(bea_arg(2), bea_arg(4), bea_arg(1));
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(2), bea_arg(0));
    FUN_00513820(bea_arg(2), bea_arg(0xb), bea_arg(2));
    FUN_00513d90(bea_arg(8));
    FUN_00513930(bea_arg(0), bea_arg(5), bea_arg(2));
    FUN_00513930(bea_arg(0), bea_arg(6), bea_arg(2));
    FUN_00513930(bea_arg(1), bea_arg(5), bea_arg(2));
    FUN_00513930(bea_arg(1), bea_arg(6), bea_arg(2));
    FUN_00513930(bea_arg(2), bea_arg(5), bea_arg(2));
    FUN_00513930(bea_arg(2), bea_arg(6), bea_arg(2));
    FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
    DAT_009c68ad = 1;
    DAT_009c6910 = 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005438c0, ap_005438c0));
