// auto-ported from 0040c750_vslot68.c (CBattleEngine::vslot68, 564 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CActor;
typedef char CBattleEngine;
typedef char pCVar1;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef uint32_t (BEA_THISCALL* CActor__vslot68_t)(uint32_t);
static const bea_guard<CActor__vslot68_t> CActor__vslot68 = {(CActor__vslot68_t)0x00402000};
typedef int (BEA_THISCALL* FUN_00401fd0_t)(uint32_t);
static const bea_guard<FUN_00401fd0_t> FUN_00401fd0 = {(FUN_00401fd0_t)0x00401fd0};
typedef uint32_t (BEA_THISCALL* FUN_00406460_t)(uint32_t);
static const bea_guard<FUN_00406460_t> FUN_00406460 = {(FUN_00406460_t)0x00406460};
typedef uint32_t (BEA_THISCALL* FUN_0040dfb0_t)(uint32_t);
static const bea_guard<FUN_0040dfb0_t> FUN_0040dfb0 = {(FUN_0040dfb0_t)0x0040dfb0};
typedef float * (BEA_FASTCALL* FUN_0047ec60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ec60_t> FUN_0047ec60 = {(FUN_0047ec60_t)0x0047ec60};

static void BEA_THISCALL ap_0040c750(CBattleEngine * this_)
{
  CBattleEngine *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x14);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x8);
  FUN_00406460(bea_arg(this_));
  CActor__vslot68(bea_arg((CActor *)this_));
  if (((byte)this_[0x2c] & 4) != 0) {
    FUN_0040dfb0(bea_arg(this_));
    bea_vcall<uint32_t>(this_, 0x38);
    return;
  }
  iVar5 = FUN_00401fd0(bea_arg(this_));
  if (iVar5 == 0) {
    fVar2 = 0.2f;
    if (*(int *)(this_ + 0x260) == 2) {
      if (*(int *)(*(int *)(this_ + 0x578) + 0x44) != 0) {
        return;
      }
      fVar2 = 0.4f;
    }
    pCVar1 = this_ + 0x7c;
    fVar3 = *(float *)(this_ + 0x84) * *(float *)(this_ + 0x84) +
            *(float *)(this_ + 0x80) * *(float *)(this_ + 0x80) +
            *(float *)(this_ + 0x7c) * *(float *)(this_ + 0x7c);
    if (fVar2 * fVar2 < fVar3) {
      FUN_0047ec60(bea_arg(&DAT_006fadc8), bea_arg(&local_10), bea_arg(this_ + 0x1c));
      local_20 = *(float *)pCVar1;
      local_1c = *(float *)(this_ + 0x80);
      fVar2 = SQRT(local_10 * local_10 + local_c * local_c + local_8 * local_8);
      local_18 = *(float *)(this_ + 0x84);
      local_14 = *(undefined4 *)(this_ + 0x88);
      if (fVar2 != 0.0f) {
        fVar2 = 1.0f / fVar2;
        local_10 = fVar2 * local_10;
        local_c = local_c * fVar2;
        local_8 = local_8 * fVar2;
      }
      fVar4 = SQRT(local_20 * local_20 + local_18 * local_18 + local_1c * local_1c);
      fVar2 = local_18;
      if (fVar4 != 0.0f) {
        fVar2 = 1.0f / fVar4;
        local_20 = local_20 * fVar2;
        local_1c = local_1c * fVar2;
        fVar2 = local_18 * fVar2;
      }
      fVar2 = local_20 * local_10 + local_c * local_1c + fVar2 * local_8;
      fVar2 = fVar2 * fVar2;
      bea_vcall<uint32_t>(this_, 0xa0, SQRT(fVar3) * fVar2 * 16.0f,0,0,0xffffffff);
      fVar2 = 1.0f - fVar2;
      local_20 = fVar2 * *(float *)pCVar1;
      local_1c = fVar2 * *(float *)(this_ + 0x80);
      local_18 = fVar2 * *(float *)(this_ + 0x84);
      bea_vcall<uint32_t>(this_, 0x70, &local_20);
      return;
    }
    if (*(int *)(this_ + 0x260) == 3) {
      local_10 = *(float *)pCVar1 * 0.9f;
      local_c = *(float *)(this_ + 0x80) * 0.9f;
      local_8 = *(float *)(this_ + 0x84) * 0.9f;
      bea_vcall<uint32_t>(this_, 0x70, &local_10);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040c750, ap_0040c750));
