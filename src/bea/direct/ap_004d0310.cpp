// auto-ported from 004d0310_vslot2.c (CJoystickEnableItem::vslot2, 249 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x220: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CJoystickEnableItem;
#define DAT_009d3060 GLOBAL_AT(int, 0x009d3060)
#define DAT_00631568 GLOBAL_AT(int, 0x00631568)
#define DAT_00888ff8 GLOBAL_AT(int, 0x00888ff8)
#define DAT_00888fb8 GLOBAL_AT(int, 0x00888fb8)
#define DAT_00889024 GLOBAL_AT(char, 0x00889024)
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};
typedef short * (BEA_CDECL* FUN_0055e624_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e624_t> FUN_0055e624 = {(FUN_0055e624_t)0x0055e624};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};

static undefined * BEA_THISCALL ap_004d0310(CJoystickEnableItem * this_)
{
  undefined4 uVar1;
  int iVar2;

  alignas(16) uint8_t bea_frame_[0x220] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_218 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x220 - 0x218);
  undefined4 &local_214 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x220 - 0x214);
  undefined4 &local_210 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x220 - 0x210);
  undefined4 &local_20c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x220 - 0x20c);
  undefined1 (&auStack_208)[520] = *reinterpret_cast<undefined1 (*)[520]>(bea_frame_ + 0x220 - 0x208);
  uVar1 = FUN_00524830(*(int *)(this_ + 0x1c) + 0x5e);
  FUN_0055e64e(bea_arg(&DAT_009d3060), bea_arg(uVar1));
  FUN_0055e624(bea_arg(&DAT_009d3060), bea_arg(&DAT_00631568));
  local_218 = 0x218;
  local_214 = 0x10;
  local_210 = 0;
  local_20c = 0;
  if (*(int *)(this_ + 0x1c) < DAT_00888ff8) {
    iVar2 = bea_vcall<uint32_t>(*(int **)(((uint8_t *)&DAT_00888fb8) + *(int *)(this_ + 0x1c) * 4), 0x14, *(int **)(((uint8_t *)&DAT_00888fb8) + *(int *)(this_ + 0x1c) * 4),0xd,&local_218);
    if (-1 < iVar2) {
      FUN_0055e624(bea_arg(&DAT_009d3060), bea_arg(auStack_208));
      FUN_0055e624(bea_arg(&DAT_009d3060), bea_arg(&DAT_00631568));
      uVar1 = FUN_00524830(((&DAT_00889024)[*(int *)(this_ + 0x1c)] != '\0') + 100);
      FUN_0055e624(bea_arg(&DAT_009d3060), bea_arg(uVar1));
      *(undefined4 *)(this_ + 0x10) = 1;
      return (undefined *)(&DAT_009d3060);
    }
  }
  uVar1 = FUN_00524830(99);
  FUN_0055e624(bea_arg(&DAT_009d3060), bea_arg(uVar1));
  *(undefined4 *)(this_ + 0x10) = 0;
  return (undefined *)(&DAT_009d3060);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d0310, ap_004d0310));
