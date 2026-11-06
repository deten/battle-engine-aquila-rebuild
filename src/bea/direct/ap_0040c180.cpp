// auto-ported from 0040c180_vslot0.c (CBattleEngine::vslot0, 350 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CBattleEngine;
typedef char CUnit;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define _DAT_008969b8 GLOBAL_AT(float, 0x008969b8)
#define s_hud__s_00623314 ((char*)0x00623314)
#define s_hud_incoming_missile_006234dc ((char*)0x006234dc)
typedef uint32_t (BEA_THISCALL* CUnit__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CUnit__vslot0_t> CUnit__vslot0 = {(CUnit__vslot0_t)0x004f9820};
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_004063b0_t)(uint32_t);
static const bea_guard<FUN_004063b0_t> FUN_004063b0 = {(FUN_004063b0_t)0x004063b0};
typedef undefined4 (BEA_THISCALL* FUN_0040acc0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040acc0_t> FUN_0040acc0 = {(FUN_0040acc0_t)0x0040acc0};
typedef uint32_t (BEA_THISCALL* FUN_0040b6d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040b6d0_t> FUN_0040b6d0 = {(FUN_0040b6d0_t)0x0040b6d0};
typedef undefined4 (BEA_THISCALL* FUN_004e1910_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1910_t> FUN_004e1910 = {(FUN_004e1910_t)0x004e1910};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static undefined4 BEA_THISCALL ap_0040c180(CBattleEngine * this_, int param_1)
{
  float fVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  sVar2 = *(short *)(param_1 + 4);
  if (sVar2 < 0x1772) {
    if (sVar2 == 0x1771) {
      *(undefined4 *)(this_ + 0x260) = 2;
      uVar3 = FUN_004063b0(bea_arg(this_));
      return uVar3;
    }
    if (sVar2 == 0xfa2) {
      fVar1 = *(float *)(this_ + 0x610);
      uVar4 = bea_piece32((ushort)((ushort)(fVar1 < DAT_00672fd0) << 8 |
                             (ushort)(bea_isnan(fVar1) || bea_isnan(DAT_00672fd0)) << 10 |
                            (ushort)(fVar1 == DAT_00672fd0) << 0xe));
      if (fVar1 < DAT_00672fd0) {
        FUN_0055de9b(local_100,s_hud__s_00623314,s_hud_incoming_missile_006234dc);
        uVar3 = FUN_004e1910(bea_arg(&DAT_00896988), bea_arg(local_100), bea_arg(0));
        uVar3 = FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(uVar3), bea_arg(this_), bea_arg(_DAT_008969b8), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(1));
        *(float *)(this_ + 0x610) = DAT_00672fd0 + 2.0f;
        return uVar3;
      }
    }
    else {
      if (sVar2 != 6000) goto LAB_0040c298;
      uVar4 = 6000;
      if (*(int *)(this_ + 0x260) == 1) {
        *(float *)(this_ + 0x520) = DAT_00672fd0;
        *(undefined4 *)(this_ + 0x260) = 3;
        uVar3 = FUN_004063b0(bea_arg(this_));
        return uVar3;
      }
    }
  }
  else {
    if (sVar2 != 0x1772) {
      if (sVar2 == 0x1773) {
        uVar3 = FUN_0040b6d0(bea_arg(this_), bea_arg(param_1));
        return uVar3;
      }
LAB_0040c298:
      uVar3 = CUnit__vslot0(bea_arg((CUnit *)this_), bea_arg(param_1));
      return uVar3;
    }
    uVar3 = FUN_0040acc0(bea_arg(this_), bea_arg(param_1), bea_arg(1), bea_arg(1));
    uVar4 = FUN_00401000(bea_arg(this_ + 0x4c8), bea_arg(uVar3));
  }
  return uVar4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040c180, ap_0040c180));
