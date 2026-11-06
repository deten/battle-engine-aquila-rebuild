// auto-ported from 0044a2d0_FUN_0044a2d0.c (FUN_0044a2d0, 793 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x80: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28: the sun direction's length sums y*y + z*z, then x*x, as the asm
// does (bug class 19)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define _DAT_006fbe6c GLOBAL_AT(float, 0x006fbe6c)
#define DAT_006fbe70 GLOBAL_AT(float, 0x006fbe70)
#define _DAT_006fbe74 GLOBAL_AT(float, 0x006fbe74)
#define DAT_009c7550 GLOBAL_AT(int, 0x009c7550)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define DAT_009c68a8 GLOBAL_AT(int, 0x009c68a8)
#define DAT_006fbe54 GLOBAL_AT(int, 0x006fbe54)
#define DAT_009c690c GLOBAL_AT(char, 0x009c690c)
#define DAT_006fbe44 GLOBAL_AT(int, 0x006fbe44)
#define DAT_006fbe48 GLOBAL_AT(int, 0x006fbe48)
#define DAT_009c65c0 GLOBAL_AT(undefined4, 0x009c65c0)
#define DAT_009c68fc GLOBAL_AT(char, 0x009c68fc)
#define DAT_009c68a0 GLOBAL_AT(char, 0x009c68a0)
#define DAT_009c6904 GLOBAL_AT(char, 0x009c6904)
#define DAT_009c661c GLOBAL_AT(undefined4, 0x009c661c)
#define DAT_009c68fd GLOBAL_AT(char, 0x009c68fd)
#define DAT_009c68a1 GLOBAL_AT(char, 0x009c68a1)
#define DAT_009c6905 GLOBAL_AT(char, 0x009c6905)
#define DAT_009c68a2 GLOBAL_AT(char, 0x009c68a2)
#define DAT_009c6906 GLOBAL_AT(char, 0x009c6906)
#define DAT_009c6907 GLOBAL_AT(char, 0x009c6907)
#define DAT_009c6908 GLOBAL_AT(char, 0x009c6908)
#define DAT_009c6909 GLOBAL_AT(char, 0x009c6909)
#define DAT_009c690a GLOBAL_AT(char, 0x009c690a)
#define DAT_009c690b GLOBAL_AT(char, 0x009c690b)
#define DAT_009c68a3 GLOBAL_AT(char, 0x009c68a3)
#define DAT_009c68a4 GLOBAL_AT(char, 0x009c68a4)
#define DAT_009c68a5 GLOBAL_AT(char, 0x009c68a5)
#define DAT_009c68a6 GLOBAL_AT(char, 0x009c68a6)
#define DAT_009c68a7 GLOBAL_AT(char, 0x009c68a7)
typedef uint32_t (BEA_CDECL* FUN_00404c90_t)(uint32_t);
static const bea_guard<FUN_00404c90_t> FUN_00404c90 = {(FUN_00404c90_t)0x00404c90};
typedef uint32_t (BEA_THISCALL* FUN_0044a5f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044a5f0_t> FUN_0044a5f0 = {(FUN_0044a5f0_t)0x0044a5f0};
typedef uint32_t (BEA_THISCALL* FUN_004901e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004901e0_t> FUN_004901e0 = {(FUN_004901e0_t)0x004901e0};
typedef uint32_t (BEA_THISCALL* FUN_005524a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005524a0_t> FUN_005524a0 = {(FUN_005524a0_t)0x005524a0};

static void BEA_CDECL ap_0044a2d0(void)
{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;

  alignas(16) uint8_t bea_frame_[0x80] = {};   // the original stack frame (emulate_frame)
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x7c);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x78);
  float &local_74 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x74);
  undefined4 &local_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x70);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x6c);
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x68);
  float &local_64 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x64);
  undefined4 &local_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x60);
  undefined4 &local_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x5c);
  undefined1 (&local_58)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x80 - 0x58);
  undefined1 (&local_48)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x80 - 0x48);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x34);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x30);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x14);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x80 - 0x10);
  local_7c = -_DAT_006fbe6c;
  local_78 = -DAT_006fbe70;
  local_74 = -_DAT_006fbe74;
  fVar1 = SQRT(local_78 * local_78 + local_74 * local_74 + local_7c * local_7c);
  if (fVar1 != 0.0f) {
    fVar1 = 1.0f / fVar1;
    local_7c = fVar1 * local_7c;
    local_78 = fVar1 * local_78;
    local_74 = fVar1 * local_74;
  }
  FUN_00404c90(bea_arg(&local_7c));
  FUN_005524a0(bea_arg(&DAT_009c7550), bea_arg(local_7c), bea_arg(local_78), bea_arg(local_74), bea_arg(local_70));
  DAT_009c68ad = 1;
  DAT_009c6910 = 1;
  local_5c = 0;
  FUN_0044a5f0(bea_arg(local_48), bea_arg(0), bea_arg(0), bea_arg(0));
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  FUN_0044a5f0(bea_arg(local_58), bea_arg(0), bea_arg(0), bea_arg(0));
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_0044a5f0(bea_arg(local_10), bea_arg(0), bea_arg(0), bea_arg(0));
  DAT_009c68a8 = DAT_006fbe54;
  DAT_009c690c = 1;
  FUN_004901e0(bea_arg(&local_5c), bea_arg(0), bea_arg(local_7c), bea_arg(local_78), bea_arg(local_74), bea_arg(local_70), bea_arg((float)(DAT_006fbe44 >> 0x10 & 0xff) * 0.00390625f), bea_arg((float)(DAT_006fbe44 >> 8 & 0xff) * 0.00390625f), bea_arg((float)(DAT_006fbe44 & 0xff) * 0.00390625f));
  uVar2 = DAT_006fbe48;
  local_6c = -local_7c;
  puVar4 = &local_5c;
  puVar5 = &DAT_009c65c0;
  for (iVar3 = 0x17; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_68 = -local_78;
  local_64 = -local_74;
  DAT_009c68fc = 1;
  DAT_009c68a0 = 1;
  DAT_009c6904 = 1;
  FUN_004901e0(bea_arg(&local_5c), bea_arg(0), bea_arg(local_6c), bea_arg(local_68), bea_arg(local_64), bea_arg(local_60), bea_arg((float)(uVar2 >> 0x10 & 0xff) * 0.00390625f), bea_arg((float)(uVar2 >> 8 & 0xff) * 0.00390625f), bea_arg((float)(uVar2 & 0xff) * 0.00390625f));
  puVar4 = &local_5c;
  puVar5 = &DAT_009c661c;
  for (iVar3 = 0x17; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  DAT_009c68fd = 1;
  DAT_009c68a1 = 1;
  DAT_009c6905 = 1;
  DAT_009c68a2 = 0;
  DAT_009c6906 = 1;
  DAT_009c6907 = 1;
  DAT_009c6908 = 1;
  DAT_009c6909 = 1;
  DAT_009c690a = 1;
  DAT_009c690b = 1;
  DAT_009c68a3 = 0;
  DAT_009c68a4 = 0;
  DAT_009c68a5 = 0;
  DAT_009c68a6 = 0;
  DAT_009c68a7 = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044a2d0, ap_0044a2d0));
