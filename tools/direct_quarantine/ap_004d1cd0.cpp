// auto-ported from 004d1cd0_vslot66.c (CPlane::vslot66, 565 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CPlane;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_0082b520 GLOBAL_AT(int, 0x0082b520)
#define DAT_0082b524 GLOBAL_AT(int, 0x0082b524)
#define DAT_0082b528 GLOBAL_AT(int, 0x0082b528)
#define DAT_0082b52c GLOBAL_AT(int, 0x0082b52c)
typedef uint (BEA_THISCALL* CAirUnit__vslot66_t)(uint32_t);
static const bea_guard<CAirUnit__vslot66_t> CAirUnit__vslot66 = {(CAirUnit__vslot66_t)0x00402fa0};
typedef uint32_t (BEA_THISCALL* FUN_004097a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004097a0_t> FUN_004097a0 = {(FUN_004097a0_t)0x004097a0};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};

static uint32_t BEA_THISCALL ap_004d1cd0(CPlane * this_)
{
  int *piVar1;
  float fVar2;
  void *this_00;
  int iVar3;
  CPlane *pCVar4;
  int iVar5;
  undefined4 *puVar6;
  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  int &local_54 = *reinterpret_cast<int *>(bea_frame_ + 0x60 - 0x54);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x44);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x34);
  undefined1 (&local_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x60 - 0x30);
  if (((byte)this_[0x2c] & 4) == 0) {
    if (*(float *)(this_ + 0x280) <= DAT_00672fd0) {
      if (*(int *)(this_ + 0x1e4) != 0) {
        puVar6 = *(undefined4 **)(this_ + 0x1d4);
        if (puVar6 == (undefined4 *)0x0) {
          this_00 = (void *)0x0;
        }
        else {
          this_00 = (void *)*puVar6;
        }
        while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
          FUN_004cb0b0(bea_arg(this_00), bea_arg(0));
          puVar6 = (undefined4 *)puVar6[1];
          if (puVar6 == (undefined4 *)0x0) {
            this_00 = (void *)0x0;
          }
          else {
            this_00 = (void *)*puVar6;
          }
        }
        *(undefined4 *)(this_ + 0x1e4) = 0;
      }
    }
    else {
      piVar1 = *(int **)(this_ + 0x1d4);
      local_54 = 1;
      if (piVar1 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
      while (BEA_LOOP_GUARD((iVar5 != 0))) {
        if (*(int *)(iVar5 + 4) == 0) {
          FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0x20)), bea_arg(iVar5), bea_arg(DAT_0082b520), bea_arg(DAT_0082b524), bea_arg(DAT_0082b528), bea_arg(DAT_0082b52c), bea_arg(0), bea_arg(0));
        }
        bea_vcall<uint32_t>(this_, 0x160, 0x17,local_54,&local_50,local_30);
        if (*(void **)(iVar5 + 4) != (void *)0x0) {
          FUN_004097a0(bea_arg(*(void **)(iVar5 + 4)), bea_arg(&local_50));
        }
        iVar5 = *(int *)(iVar5 + 4);
        if (iVar5 != 0) {
          pCVar4 = this_ + 0x3c;
          puVar6 = (undefined4 *)(iVar5 + 0x10);
          for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
            *puVar6 = *(undefined4 *)pCVar4;
            pCVar4 = pCVar4 + 4;
            puVar6 = puVar6 + 1;
          }
          *(undefined4 *)(iVar5 + 0xa0) = 1;
        }
        piVar1 = (int *)piVar1[1];
        local_54 = local_54 + 1;
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
      }
      *(undefined4 *)(this_ + 0x1e4) = 1;
    }
    if ((*(int *)(*(int *)(this_ + 0x13c) + 0x20) != 2) && (*(int *)(this_ + 0x27c) == 0)) {
      *(undefined4 *)(this_ + 0x27c) = 1;
    }
  }
  else {
    fVar2 = *(float *)(this_ + 0x284) + *(float *)(this_ + 0x11c);
    *(undefined4 *)(this_ + 0x134) = 0x3e4ccccd;
    if (fVar2 <= 3.1415927f) {
      if (fVar2 < 3.1415927f) {
        fVar2 = fVar2 + 6.2831855f;
      }
    }
    else {
      fVar2 = fVar2 - 6.2831855f;
    }
    *(float *)(this_ + 0x128) = fVar2;
    *(undefined4 *)(this_ + 0x124) = 0x3fc90fdb;
  }
  CAirUnit__vslot66(bea_arg((CAirUnit *)this_));
  local_48 = SQRT(*(float *)(this_ + 0x84) * *(float *)(this_ + 0x84) +
                  *(float *)(this_ + 0x80) * *(float *)(this_ + 0x80) +
                  *(float *)(this_ + 0x7c) * *(float *)(this_ + 0x7c));
  local_50 = local_48 * *(float *)(this_ + 0x40);
  local_4c = local_48 * *(float *)(this_ + 0x50);
  local_34 = local_44;
  local_48 = local_48 * *(float *)(this_ + 0x60);
  local_40 = local_50;
  local_3c = local_4c;
  local_38 = local_48;
  return bea_vcall<uint32_t>(this_, 0x70, &local_40);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d1cd0, ap_004d1cd0));
