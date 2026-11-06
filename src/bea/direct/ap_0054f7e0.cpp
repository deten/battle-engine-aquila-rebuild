// auto-ported from 0054f7e0_FUN_0054f7e0.c (FUN_0054f7e0, 656 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char Vec3;
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_0089c9a4 GLOBAL_AT(int, 0x0089c9a4)
#define DAT_0089ce4c GLOBAL_AT(int, 0x0089ce4c)
#define DAT_0082b404 GLOBAL_AT(int, 0x0082b404)
typedef uint32_t (BEA_THISCALL* FUN_00406d50_t)(uint32_t);
static const bea_guard<FUN_00406d50_t> FUN_00406d50 = {(FUN_00406d50_t)0x00406d50};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef Vec3* (BEA_THISCALL* FUN_00411a60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00411a60_t> FUN_00411a60 = {(FUN_00411a60_t)0x00411a60};
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_CDECL* FUN_0054ff20_t)(void);
static const bea_guard<FUN_0054ff20_t> FUN_0054ff20 = {(FUN_0054ff20_t)0x0054ff20};

static uint32_t BEA_THISCALL ap_0054f7e0(void * this_)
{
  undefined4 *this_00;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *this_01;
  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x60);
  undefined4 &local_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x5c);
  undefined4 &local_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x58);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x54);
  undefined4 &uStack_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x50);
  undefined4 &uStack_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x4c);
  undefined4 &uStack_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x48);
  undefined1 (&auStack_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x60 - 0x40);
  undefined1 (&local_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x60 - 0x30);
  DAT_009c68ad = 0;
  DAT_009c6910 = 1;
  FUN_00513bc0(bea_arg(0x16), bea_arg(1));
  FUN_00513bc0(bea_arg(0xf), bea_arg(0));
  FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
  FUN_00513bc0(bea_arg(0x13), bea_arg(2));
  FUN_00513bc0(bea_arg(0x14), bea_arg(6));
  FUN_00513820(bea_arg(0), bea_arg(5), bea_arg(2));
  FUN_00513820(bea_arg(0), bea_arg(6), bea_arg(0));
  FUN_00513820(bea_arg(0), bea_arg(4), bea_arg(4));
  FUN_00513bc0(bea_arg(0xe), bea_arg(0));
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  FUN_00513bc0(bea_arg(0xf), bea_arg(0));
  this_00 = (undefined4 *)((int)this_ + 0x20);
  *this_00 = 0x3f800000;
  this_01 = (undefined4 *)((int)this_ + 0x30);
  *(undefined4 *)((int)this_ + 0x24) = 0;
  local_60 = 0;
  local_5c = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x28) = 0;
  local_58 = 0;
  *(undefined4 *)((int)this_ + 0x2c) = local_54;
  *this_01 = 0;
  *(undefined4 *)((int)this_ + 0x34) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined4 *)((int)this_ + 0x3c) = local_54;
  bea_vcall<uint32_t>((&DAT_0089c9a4)[DAT_0089ce4c], 0x4, local_30);
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  uStack_48 = 0;
  FUN_0040d2c0(bea_arg(local_30), bea_arg(auStack_40), bea_arg(&uStack_50));
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0xbf800000;
  FUN_0040d2c0(bea_arg(local_30), bea_arg(&local_60), bea_arg(&uStack_50));
  puVar2 = (undefined4 *)FUN_00411a60(bea_arg(auStack_40), bea_arg(&uStack_50), bea_arg(&local_60));
  *this_00 = *puVar2;
  *(undefined4 *)((int)this_ + 0x24) = puVar2[1];
  *(undefined4 *)((int)this_ + 0x28) = puVar2[2];
  *(undefined4 *)((int)this_ + 0x2c) = puVar2[3];
  FUN_00406d50(bea_arg(this_00));
  *this_01 = local_60;
  *(undefined4 *)((int)this_ + 0x34) = local_5c;
  *(undefined4 *)((int)this_ + 0x38) = local_58;
  *(undefined4 *)((int)this_ + 0x3c) = local_54;
  FUN_00406d50(bea_arg(this_01));
  for (piVar1 = DAT_0082b404; BEA_LOOP_GUARD((piVar1 != (int *)0x0)); piVar1 = (int *)piVar1[0x10]) {
    iVar3 = bea_vcall<uint32_t>(piVar1, 0x4);
    if (iVar3 != 0xb) {
      bea_vcall<uint32_t>(piVar1, 0x5c, 1);
    }
  }
  FUN_0054ff20();
  FUN_00513bc0(bea_arg(0xe), bea_arg(1));
  DAT_009c68ad = 1;
  DAT_009c6910 = 1;
  FUN_00513bc0(bea_arg(0x13), bea_arg(5));
  FUN_00513bc0(bea_arg(0x14), bea_arg(6));
  FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
  FUN_00513bc0(bea_arg(0xf), bea_arg(1));
  DAT_009c68ac = 1;
  DAT_009c690d = 1;
  FUN_00513bc0(bea_arg(0x16), bea_arg(3));
  return FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054f7e0, ap_0054f7e0));
