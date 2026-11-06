// auto-ported from 004b71e0_FUN_004b71e0.c (FUN_004b71e0, 277 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00704e74 GLOBAL_AT(char, 0x00704e74)
#define DAT_00704e70 GLOBAL_AT(int, 0x00704e70)
#define s_The_quick_brown_fox_jumps_over_t_00630254 ((char*)0x00630254)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_004de8c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004de8c0_t> FUN_004de8c0 = {(FUN_004de8c0_t)0x004de8c0};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};

static void * BEA_THISCALL ap_004b71e0(void * this_)
{
  undefined4 uVar1;
  void *this_00;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  int (&local_14)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x20 - 0x14);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined ***)this_ = ((void*)0x005d92d4);
  local_4 = 0;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0xc)));
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
  FUN_004de8c0(bea_arg((void *)((int)this_ + 0x28)), bea_arg(0x1e240));
  piVar4 = local_14;
  *(undefined ***)this_ = ((void*)0x005dc6d4);
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x1ac) = 0;
  *(undefined1 *)((int)this_ + 0x1c0) = 0;
  *(undefined4 *)((int)this_ + 0x2c0) = 1;
  *(undefined4 *)((int)this_ + 0x1a8) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x1b4) = 0xbf800000;
  *(undefined4 *)((int)this_ + 0x1b0) = *(undefined4 *)((int)this_ + 0x34);
  uVar1 = FUN_004f7bf0(bea_arg(s_The_quick_brown_fox_jumps_over_t_00630254));
  this_00 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  FUN_00540680(bea_arg(this_00), bea_arg(uVar1), bea_arg(piVar4));
  if (local_14[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)(0x22e2 / (longlong)local_14[0]);
  }
  *(undefined4 *)((int)this_ + 0x1b8) = uVar1;
  *(undefined4 *)((int)this_ + 0x1bc) = 3;
  puVar3 = (undefined4 *)((int)this_ + 0x34);
  for (iVar2 = 0x4e; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this_ + 0x1a4) = 0;
  *(undefined4 *)((int)this_ + 0x1a0) = 0;
  *(undefined4 *)((int)this_ + 0x2c4) = 0;
  (*(uint8_t*)((char*)&DAT_00704e74 + 0)) = 0;
  FUN_00401000(bea_arg(&DAT_00704e70), bea_arg(0));
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b71e0, ap_004b71e0));
