// auto-ported from 00538470_FUN_00538470.c (FUN_00538470, 366 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_0089c5e0 GLOBAL_AT(int, 0x0089c5e0)
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_0089c7f4 GLOBAL_AT(int, 0x0089c7f4)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define s_ERROR__Waypoint_points_to_previo_0064fe50 ((char*)0x0064fe50)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_005335d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005335d0_t> FUN_005335d0 = {(FUN_005335d0_t)0x005335d0};
typedef void * (BEA_THISCALL* FUN_00539910_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00539910_t> FUN_00539910 = {(FUN_00539910_t)0x00539910};
typedef uint32_t (BEA_THISCALL* FUN_00539980_t)(uint32_t);
static const bea_guard<FUN_00539980_t> FUN_00539980 = {(FUN_00539980_t)0x00539980};
typedef uint32_t (BEA_THISCALL* FUN_00539ae0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00539ae0_t> FUN_00539ae0 = {(FUN_00539ae0_t)0x00539ae0};

static uint32_t BEA_THISCALL ap_00538470(void * this_)
{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  float &local_4 = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0x4);
  piVar1 = *(int **)((int)this_ + 8);
  fVar3 = *(float *)(*(int *)((int)this_ + 0x14) + 0x1c) - bea_fcast<float>(piVar1[7]);
  fVar4 = *(float *)(*(int *)((int)this_ + 0x14) + 0x20) - bea_fcast<float>(piVar1[8]);
  local_4 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
  fVar5 = bea_fcast<float10>(2.0f);
  if ((piVar1[0xd] & 0x10U) == 0) {
    if ((piVar1[0xd] & 0x20000000U) != 0) {
      fVar5 = bea_fcast<float10>(4.0f);
    }
  }
  else {
    fVar5 = bea_fcast<float10>(bea_vcall<float10>(piVar1, 0x178));
  }
  if (bea_fcast<float10>(local_4) < fVar5) {
    iVar2 = *(int *)(*(int *)((int)this_ + 0x14) + 0x3c);
    if (iVar2 == *(int *)((int)this_ + 0x14)) {
      FUN_00441740(&DAT_0066f580,s_ERROR__Waypoint_points_to_previo_0064fe50);
      *(undefined4 *)((int)this_ + 0x14) = 0;
    }
    else {
      *(int *)((int)this_ + 0x14) = iVar2;
    }
    iVar2 = *(int *)((int)this_ + 0x14);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this_ + 0x18) = 0;
      bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x100);
      if (*(int *)((int)this_ + 0x1c) == 0) {
        return FUN_005335d0(bea_arg(this_), bea_arg(*(undefined4 *)((int)this_ + 0x24)));
      }
      *(undefined4 *)((int)this_ + 0x1c) = 0;
      FUN_00539910(bea_arg(&DAT_0089c5e0), bea_arg(*(undefined4 *)((int)this_ + 0x20)));
      FUN_004e5bd0(bea_arg((void *)((int)this_ + 0x28)), bea_arg(*(undefined4 *)((int)this_ + 0x20)));
      if (*(int **)((int)this_ + 0x20) != (int *)0x0) {
        bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x4, 1);
      }
      *(undefined4 *)((int)this_ + 0x20) = 0;
      if (DAT_008a9ac0 == 4) {
        return FUN_00539980(bea_arg(&DAT_0089c5e0));
      }
      return FUN_00539ae0(bea_arg(&DAT_0089c5e0), bea_arg(DAT_0089c7f4));
    }
    bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0xf4, *(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20),
               *(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x28),0);
  }
  local_4 = -1.0;
  return FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(2000), bea_arg(this_), bea_arg(&local_4), bea_arg(0), bea_arg(0), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00538470, ap_00538470));
