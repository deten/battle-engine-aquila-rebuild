// auto-ported from 0054d210_vslot1.c (CDXMeshVB::vslot1, 468 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x150: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CDXMeshVB;
#define DAT_00888c8c GLOBAL_AT(int, 0x00888c8c)
#define DAT_0063c108 GLOBAL_AT(char, 0x0063c108)
typedef void * (BEA_THISCALL* FUN_004237d0_t)(uint32_t);
static const bea_guard<FUN_004237d0_t> FUN_004237d0 = {(FUN_004237d0_t)0x004237d0};
typedef uint32_t (BEA_THISCALL* FUN_00423840_t)(uint32_t);
static const bea_guard<FUN_00423840_t> FUN_00423840 = {(FUN_00423840_t)0x00423840};
typedef uint32_t (BEA_THISCALL* FUN_00423870_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00423870_t> FUN_00423870 = {(FUN_00423870_t)0x00423870};
typedef int (BEA_THISCALL* FUN_00423900_t)(uint32_t);
static const bea_guard<FUN_00423900_t> FUN_00423900 = {(FUN_00423900_t)0x00423900};
typedef uint32_t (BEA_STDCALL* FUN_0042d0b0_t)(uint32_t);
static const bea_guard<FUN_0042d0b0_t> FUN_0042d0b0 = {(FUN_0042d0b0_t)0x0042d0b0};
typedef void* (BEA_THISCALL* FUN_00547d70_t)(uint32_t);
static const bea_guard<FUN_00547d70_t> FUN_00547d70 = {(FUN_00547d70_t)0x00547d70};
typedef uint32_t (BEA_THISCALL* FUN_00547d90_t)(uint32_t);
static const bea_guard<FUN_00547d90_t> FUN_00547d90 = {(FUN_00547d90_t)0x00547d90};
typedef undefined4 (BEA_THISCALL* FUN_00547ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00547ec0_t> FUN_00547ec0 = {(FUN_00547ec0_t)0x00547ec0};
typedef int (BEA_THISCALL* FUN_005482d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005482d0_t> FUN_005482d0 = {(FUN_005482d0_t)0x005482d0};
typedef int (BEA_THISCALL* FUN_0054c0a0_t)(uint32_t);
static const bea_guard<FUN_0054c0a0_t> FUN_0054c0a0 = {(FUN_0054c0a0_t)0x0054c0a0};
typedef int (BEA_THISCALL* FUN_0054c920_t)(uint32_t);
static const bea_guard<FUN_0054c920_t> FUN_0054c920 = {(FUN_0054c920_t)0x0054c920};
typedef uint32_t (BEA_THISCALL* FUN_0054e160_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0054e160_t> FUN_0054e160 = {(FUN_0054e160_t)0x0054e160};

static undefined4 BEA_THISCALL ap_0054d210(CDXMeshVB * this_)
{
  int iVar1;
  undefined4 uVar2;

  alignas(16) uint8_t bea_frame_[0x150] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_150)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x150);
  undefined1 (&local_140)[308] = *reinterpret_cast<undefined1 (*)[308]>(bea_frame_ + 0x150 - 0x140);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x150 - 0x8);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x150 - 0x4);
  local_4 = 0xffffffff;
  if (DAT_00888c8c == 0) {
    return 0;
  }
  if (*(int *)(this_ + 0x10c) == 0) {
    *(undefined4 *)(this_ + 0x108) = 0;
    return 0;
  }
  if ((*(int *)(this_ + 0x120) != 0) && (*(int *)(this_ + 0x124) != 0)) {
    FUN_00547d70(bea_arg(local_140));
    local_4 = 0;
    iVar1 = FUN_00547ec0(bea_arg(local_140), bea_arg(*(undefined4 *)(this_ + 0x124)), bea_arg(0x11), bea_arg(1), bea_arg(0));
    if (iVar1 == 0) {
      FUN_0042d0b0(bea_arg(*(undefined4 *)(this_ + 0x124)));
      local_4 = 0xffffffff;
      FUN_00547d90(bea_arg(local_140));
      return 0xffffffff;
    }
    FUN_005482d0(bea_arg(local_140), bea_arg(*(undefined4 *)(this_ + 0x120)));
    FUN_004237d0(bea_arg(local_150));
    (*(uint8_t*)((char*)&local_4 + 0)) = 1;
    FUN_00423870(bea_arg(local_150), bea_arg(local_140));
    FUN_0054e160(bea_arg(this_), bea_arg(local_150), bea_arg((uint)(*(int *)(*(int *)(this_ + 0x10c) + 0x8c) == 3)));
    FUN_00423900(bea_arg(local_150));
    local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
    FUN_00423840(bea_arg(local_150));
    local_4 = 0xffffffff;
    FUN_00547d90(bea_arg(local_140));
    return 0;
  }
  uVar2 = 0;
  if (*(int *)(*(int *)(this_ + 0x10c) + 0x8c) == 3) {
    if (DAT_0063c108 != '\0') {
      uVar2 = FUN_0054c920(bea_arg(this_));
      return uVar2;
    }
  }
  else {
    uVar2 = FUN_0054c0a0(bea_arg(this_));
  }
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054d210, ap_0054d210));
