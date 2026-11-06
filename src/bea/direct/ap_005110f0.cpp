// auto-ported from 005110f0_FUN_005110f0.c (FUN_005110f0, 675 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef undefined4 (BEA_THISCALL* FUN_00409760_t)(uint32_t);
static const bea_guard<FUN_00409760_t> FUN_00409760 = {(FUN_00409760_t)0x00409760};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_005110f0(void * this_)
{
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  int iVar1;
  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_14)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x20 - 0x14);
  void * &local_10 = *reinterpret_cast<void * *>(bea_frame_ + 0x20 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x4);
  local_4 = 3;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0xb0)));
  *(undefined4 *)((int)this_ + 0xb0) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x2c)));
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x30)));
  this_00 = (void *)((int)this_ + 0x3c);
  *(undefined4 *)((int)this_ + 0x30) = 0;
  iVar1 = FUN_00406d20(bea_arg(this_00));
  while (BEA_LOOP_GUARD((iVar1 != 0))) {
    FUN_004e5bd0(bea_arg(this_00), bea_arg(iVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1));
    iVar1 = FUN_00406d20(bea_arg(this_00));
  }
  this_01 = (void *)((int)this_ + 0x4c);
  iVar1 = FUN_00406d20(bea_arg(this_01));
  while (BEA_LOOP_GUARD((iVar1 != 0))) {
    FUN_004e5bd0(bea_arg(this_01), bea_arg(iVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1));
    iVar1 = FUN_00406d20(bea_arg(this_01));
  }
  this_02 = (void *)((int)this_ + 0x5c);
  iVar1 = FUN_00406d20(bea_arg(this_02));
  while (BEA_LOOP_GUARD((iVar1 != 0))) {
    FUN_004e5bd0(bea_arg(this_02), bea_arg(iVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1));
    iVar1 = FUN_00406d20(bea_arg(this_02));
  }
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x7c)));
  *(undefined4 *)((int)this_ + 0x7c) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x80)));
  *(undefined4 *)((int)this_ + 0x80) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x84)));
  *(undefined4 *)((int)this_ + 0x84) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x88)));
  *(undefined4 *)((int)this_ + 0x88) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x8c)));
  *(undefined4 *)((int)this_ + 0x8c) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x94)));
  *(undefined4 *)((int)this_ + 0x94) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x98)));
  *(undefined4 *)((int)this_ + 0x98) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x9c)));
  *(undefined4 *)((int)this_ + 0x9c) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0xa0)));
  *(undefined4 *)((int)this_ + 0xa0) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0xa4)));
  *(undefined4 *)((int)this_ + 0xa4) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0xa8)));
  *(undefined4 *)((int)this_ + 0xa8) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0xac)));
  *(undefined4 *)((int)this_ + 0xac) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x90)));
  this_03 = (void *)((int)this_ + 0x6c);
  *(undefined4 *)((int)this_ + 0x90) = 0;
  local_10 = this_03;
  iVar1 = FUN_00409760(bea_arg(local_14));
  while (BEA_LOOP_GUARD((iVar1 != 0))) {
    FUN_004e5bd0(bea_arg(this_03), bea_arg(iVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1));
    iVar1 = FUN_00409760(bea_arg(local_14));
  }
  *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)((uint3)((uint)local_4 >> 8)) & 0xffffffu) << 8);
  (*(uint8_t*)((char*)&local_4 + 0)) = 2;
  FUN_004e5c60(bea_arg(this_03));
  (*(uint8_t*)((char*)&local_4 + 0)) = 1;
  FUN_004e5c60(bea_arg(this_02));
  local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
  FUN_004e5c60(bea_arg(this_01));
  local_4 = 0xffffffff;
  return FUN_004e5c60(bea_arg(this_00));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005110f0, ap_005110f0));
