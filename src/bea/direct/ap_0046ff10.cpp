// auto-ported from 0046ff10_vslot0.c (CGame::vslot0, 445 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGame;
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define _DAT_008a9acc GLOBAL_AT(int, 0x008a9acc)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_0089c590 GLOBAL_AT(int, 0x0089c590)
#define _DAT_008969ac GLOBAL_AT(int, 0x008969ac)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define s_game_playing_0062c258 ((char*)0x0062c258)
typedef uint32_t (BEA_THISCALL* FUN_0044b2d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b2d0_t> FUN_0044b2d0 = {(FUN_0044b2d0_t)0x0044b2d0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_0046fb00_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0046fb00_t> FUN_0046fb00 = {(FUN_0046fb00_t)0x0046fb00};
typedef uint32_t (BEA_THISCALL* FUN_00470120_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00470120_t> FUN_00470120 = {(FUN_00470120_t)0x00470120};
typedef uint32_t (BEA_THISCALL* FUN_004d2c10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d2c10_t> FUN_004d2c10 = {(FUN_004d2c10_t)0x004d2c10};
typedef uint32_t (BEA_THISCALL* FUN_004e0300_t)(uint32_t);
static const bea_guard<FUN_004e0300_t> FUN_004e0300 = {(FUN_004e0300_t)0x004e0300};
typedef uint32_t (BEA_THISCALL* FUN_00538b70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00538b70_t> FUN_00538b70 = {(FUN_00538b70_t)0x00538b70};

static int BEA_THISCALL ap_0046ff10(CGame * this_, int param_1)
{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  CGame *pCVar4;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  CGame * &local_4 = *reinterpret_cast<CGame * *>(bea_frame_ + 0x10 - 0x4);
  iVar2 = *(short *)(param_1 + 4) + -2000;
  local_4 = this_;
  switch(iVar2) {
  case 0:
    iVar2 = DAT_008a9ac0;
    _DAT_008a9acc = 1;
    if (DAT_008a9ac0 < 4) {
      DAT_008a9ac0 = 9;
      return iVar2;
    }
    break;
  case 1:
    if (*(int *)(this_ + 0x28) != 2) {
      if (0.0f < *(float *)(this_ + 0xf0)) {
        iVar2 = 0;
        *(undefined4 *)(this_ + 0x28) = 2;
        if (0 < *(int *)(this_ + 0x29c)) {
          pCVar4 = this_ + 0x2a4;
          do {
            if (*(void **)pCVar4 != (void *)0x0) {
              FUN_004d2c10(bea_arg(*(void **)pCVar4), bea_arg(*(undefined4 *)(this_ + 0xf0)));
            }
            iVar2 = iVar2 + 1;
            pCVar4 = pCVar4 + 4;
          } while (BEA_LOOP_GUARD((iVar2 < *(int *)(this_ + 0x29c))));
        }
        uVar3 = FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(this_ + 0xf0), bea_arg(0x7d2), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
        return uVar3;
      }
      iVar2 = 3;
      if (*(int *)(this_ + 0x28) != 3) {
        *(undefined4 *)(this_ + 0x28) = 3;
        FUN_00538b70(bea_arg(&DAT_0089c590), bea_arg(s_game_playing_0062c258));
        goto code_r0x0046ffb0;
      }
    }
    break;
  case 2:
    iVar2 = 3;
    if (*(int *)(this_ + 0x28) != 3) {
      *(undefined4 *)(this_ + 0x28) = 3;
      FUN_00538b70(bea_arg(&DAT_0089c590), bea_arg(s_game_playing_0062c258));
code_r0x0046ffb0:
      param_1 = 0xbf800000;
      uVar3 = FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xbbb), bea_arg(*(undefined4 *)(this_ + 0x2ec)), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
      return uVar3;
    }
    break;
  case 3:
    uVar3 = FUN_00470120(bea_arg(this_), bea_arg(0));
    return uVar3;
  case 4:
    uVar3 = FUN_00470120(bea_arg(this_), bea_arg(1));
    return uVar3;
  case 5:
    uVar3 = FUN_0046fb00(bea_arg(this_), bea_arg(0), bea_arg(0));
    return uVar3;
  case 6:
    fVar1 = *(float *)(this_ + 0x298);
    *(float *)(this_ + 0x298) = fVar1 - 0.003f;
    if (0.0f <= fVar1 - 0.003f) {
      local_4 = (CGame *)0xbf800000;
      FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x7d6), bea_arg(this_), bea_arg(&local_4), bea_arg(0), bea_arg(0), bea_arg(0));
    }
    else {
      *(undefined4 *)(this_ + 0x298) = 0;
    }
    _DAT_008969ac = *(undefined4 *)(this_ + 0x298);
    iVar2 = FUN_004e0300(bea_arg(&DAT_00896988));
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046ff10, ap_0046ff10));
