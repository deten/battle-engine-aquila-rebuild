// auto-ported from 004f7e90_FUN_004f7e90.c (FUN_004f7e90, 675 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef void * (BEA_THISCALL* FUN_0044adb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044adb0_t> FUN_0044adb0 = {(FUN_0044adb0_t)0x0044adb0};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef void * (BEA_THISCALL* FUN_004f3e10_t)(uint32_t);
static const bea_guard<FUN_004f3e10_t> FUN_004f3e10 = {(FUN_004f3e10_t)0x004f3e10};
typedef uint32_t (BEA_THISCALL* FUN_004f8140_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f8140_t> FUN_004f8140 = {(FUN_004f8140_t)0x004f8140};

static void * BEA_THISCALL ap_004f7e90(void * this_)
{
  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)

  undefined4 &local_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x40);
  undefined1 (&local_3c)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x50 - 0x3c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x50 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4);
  local_4 = 0xffffffff;
  FUN_004f3e10(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005d844c);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005d83d4);
  *(undefined4 *)((int)this_ + 0x144) = 0;
  *(undefined4 *)((int)this_ + 0x148) = 0;
  (*(uint8_t*)((char*)&local_4 + 0)) = 2;
  *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x17c)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 3;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x18c)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 4;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x19c)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 5;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x1b4)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 6;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x1c4)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 7;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x1d4)));
  *(undefined ***)this_ = ((void*)0x005df998);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005df920);
  *(undefined4 *)((int)this_ + 0x1f0) = 0;
  *(undefined4 *)((int)this_ + 0x1e8) = 0;
  *(undefined4 *)((int)this_ + 0x1ec) = 0;
  *(undefined4 *)((int)this_ + 0x168) = 0;
  *(undefined4 *)((int)this_ + 0x16c) = 0;
  *(undefined4 *)((int)this_ + 0x10c) = 0;
  *(undefined4 *)((int)this_ + 0xf8) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0xfc) = 0;
  *(undefined4 *)((int)this_ + 0x100) = 0;
  *(undefined4 *)((int)this_ + 0x104) = 0;
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),8);
  *(undefined4 *)((int)this_ + 0x108) = 0;
  *(undefined4 *)((int)this_ + 0x15c) = 1;
  *(undefined4 *)((int)this_ + 0x110) = 0;
  *(undefined4 *)((int)this_ + 0x178) = 0;
  *(undefined4 *)((int)this_ + 0x13c) = 0;
  *(undefined4 *)((int)this_ + 0x140) = 0;
  FUN_00401000(bea_arg((undefined4 *)((int)this_ + 0x144)), bea_arg(0));
  FUN_00401000(bea_arg((undefined4 *)((int)this_ + 0x148)), bea_arg(0));
  *(undefined4 *)((int)this_ + 0x1ac) = 0;
  *(undefined4 *)((int)this_ + 0x174) = 0;
  *(undefined4 *)((int)this_ + 0x170) = 0;
  *(undefined4 *)((int)this_ + 0x1ec) = 0;
  FUN_004f8140(bea_arg(local_3c), bea_arg(0), bea_arg(0), bea_arg(0));
  FUN_0044adb0(bea_arg(&local_4c), bea_arg(local_3c));
  *(undefined4 *)((int)this_ + 0x114) = local_4c;
  *(undefined4 *)((int)this_ + 0x118) = local_48;
  *(undefined4 *)((int)this_ + 0x11c) = local_44;
  FUN_004f8140(bea_arg(local_3c), bea_arg(0), bea_arg(0), bea_arg(0));
  FUN_0044adb0(bea_arg(&local_4c), bea_arg(local_3c));
  *(undefined4 *)((int)this_ + 0x160) = 0;
  *(undefined4 *)((int)this_ + 300) = local_4c;
  *(undefined4 *)((int)this_ + 0x164) = 0;
  *(undefined4 *)((int)this_ + 0x130) = local_48;
  *(undefined4 *)((int)this_ + 0x170) = 0;
  *(undefined4 *)((int)this_ + 0x174) = 0;
  *(undefined4 *)((int)this_ + 0x134) = local_44;
  *(undefined4 *)((int)this_ + 0x14c) = 0;
  *(undefined4 *)((int)this_ + 0x150) = 0;
  *(undefined4 *)((int)this_ + 0x20c) = 0;
  *(undefined4 *)((int)this_ + 0x154) = 0;
  *(undefined4 *)((int)this_ + 0xe0) = 0;
  *(undefined4 *)((int)this_ + 0xe4) = 0;
  *(undefined4 *)((int)this_ + 0x158) = local_40;
  *(undefined4 *)((int)this_ + 0x1f8) = 0;
  *(undefined4 *)((int)this_ + 0x15c) = 1;
  *(undefined4 *)((int)this_ + 0xe8) = 0;
  *(undefined4 *)((int)this_ + 0x1fc) = 0;
  *(undefined4 *)((int)this_ + 0xf0) = 0;
  *(undefined4 *)((int)this_ + 0xec) = 0;
  *(undefined4 *)((int)this_ + 0xf4) = 0;
  *(undefined4 *)((int)this_ + 0x200) = 0;
  *(undefined4 *)((int)this_ + 0x208) = 0;
  *(undefined4 *)((int)this_ + 0x210) = 0;
  *(undefined4 *)((int)this_ + 0x214) = 1;
  *(undefined4 *)((int)this_ + 500) = 0;
  *(undefined4 *)((int)this_ + 0x220) = 0;
  *(undefined4 *)((int)this_ + 0x1e4) = 0;
  *(undefined4 *)((int)this_ + 0x218) = 0;
  *(undefined4 *)((int)this_ + 0x24c) = 1;
  *(undefined4 *)((int)this_ + 0x138) = 2;
  *(undefined4 *)((int)this_ + 0x204) = local_40;
  *(undefined4 *)((int)this_ + 0x21c) = 10;
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f7e90, ap_004f7e90));
