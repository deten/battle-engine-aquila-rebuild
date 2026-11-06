// auto-ported from 004cd7f0_FUN_004cd7f0.c (FUN_004cd7f0, 617 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xe0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0082b450 GLOBAL_AT(int, 0x0082b450)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_CTokenArchive__HandleRelocation_t_006310c4 ((char*)0x006310c4)
#define s_C__dev_ONSLAUGHT2_ParticleSet_cp_00630fb0 ((char*)0x00630fb0)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef undefined4 * (BEA_THISCALL* FUN_004cc020_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cc020_t> FUN_004cc020 = {(FUN_004cc020_t)0x004cc020};
typedef undefined4 (BEA_THISCALL* FUN_004f57b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f57b0_t> FUN_004f57b0 = {(FUN_004f57b0_t)0x004f57b0};
typedef uint32_t (BEA_THISCALL* FUN_004f5ba0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5ba0_t> FUN_004f5ba0 = {(FUN_004f5ba0_t)0x004f5ba0};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static undefined4 BEA_THISCALL ap_004cd7f0(void * this_, undefined4 param_1)
{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  double v1;

  alignas(16) uint8_t bea_frame_[0xe0] = {};   // the original stack frame (emulate_frame)
  int &iStack_e0 = *reinterpret_cast<int *>(bea_frame_ + 0xe0 - 0xe0);
  float &fStack_dc = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0xdc);
  int &iStack_d8 = *reinterpret_cast<int *>(bea_frame_ + 0xe0 - 0xd8);
  int &iStack_d4 = *reinterpret_cast<int *>(bea_frame_ + 0xe0 - 0xd4);
  float &local_d0 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0xd0);
  undefined1 (&auStack_cc)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0xe0 - 0xcc);
  undefined1 (&auStack_c8)[200] = *reinterpret_cast<undefined1 (*)[200]>(bea_frame_ + 0xe0 - 0xc8);
  DAT_0082b450 = 0;
  fVar5 = bea_fcast<float10>(FUN_005159e0(bea_arg(&DAT_0088a0a8)));
  iVar2 = *(int *)this_;
  local_d0 = bea_fcast<float>(fVar5);
  while (BEA_LOOP_GUARD((iVar2 != 0))) {
    puVar1 = *(undefined4 **)this_;
    iVar2 = puVar1[0xe];
    if (puVar1 != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(puVar1, 0x0);
    }
    *(int *)this_ = iVar2;
  }
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1388c), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_ParticleSet_cp_00630fb0), bea_arg(0x13b));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = param_1;
    puVar1[2] = 0;
  }
  iVar2 = FUN_004f57b0(bea_arg(puVar1), bea_arg(&iStack_e0), bea_arg(0), bea_arg(0), bea_arg(0));
  if ((iVar2 == 0) && (iStack_e0 != 0)) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar1));
    return 0;
  }
  iVar2 = FUN_004f57b0(bea_arg(puVar1), bea_arg(&iStack_e0), bea_arg(0), bea_arg(auStack_cc), bea_arg(0));
  if ((iVar2 == 0) && (iStack_e0 != 1)) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar1));
    return 0;
  }
  iVar2 = FUN_004f57b0(bea_arg(puVar1), bea_arg(&iStack_e0), bea_arg(&iStack_d8), bea_arg(0), bea_arg(0));
  if ((iVar2 == 0) && (iStack_e0 != 2)) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar1));
    return 0;
  }
  iStack_d4 = 0;
  if (0 < iStack_d8) {
    do {
      uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(1000), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_ParticleSet_cp_00630fb0), bea_arg(0x15c));
      iVar2 = FUN_004f57b0(bea_arg(puVar1), bea_arg(&iStack_e0), bea_arg(&fStack_dc), bea_arg(0), bea_arg(0));
      if ((((iVar2 == 0) && (iStack_e0 != 3)) ||
          ((iVar2 = FUN_004f57b0(bea_arg(puVar1), bea_arg(&iStack_e0), bea_arg(0), bea_arg(0), bea_arg(uVar3)), iVar2 == 0 && (iStack_e0 != 4)))) ||
         ((piVar4 = (int *)FUN_004cc020(bea_arg(this_), bea_arg(uVar3), bea_arg(fStack_dc), bea_arg(1)), piVar4 == (int *)0x0 ||
          (iVar2 = bea_vcall<uint32_t>(piVar4, 0x18), iVar2 == 0)))) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar1));
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar3));
        return 0;
      }
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar3));
      iStack_d4 = iStack_d4 + 1;
    } while (BEA_LOOP_GUARD((iStack_d4 < iStack_d8)));
  }
  fVar5 = bea_fcast<float10>(FUN_005159e0(bea_arg(&DAT_0088a0a8)));
  fStack_dc = bea_fcast<float>(fVar5);
  FUN_004f5ba0(bea_arg(puVar1), bea_arg(this_));
  fVar5 = bea_fcast<float10>(FUN_005159e0(bea_arg(&DAT_0088a0a8)));
  v1 = bea_fcast<double>((fVar5 - bea_fcast<float10>(local_d0)));
  fVar5 = bea_fcast<float10>(FUN_005159e0(bea_arg(&DAT_0088a0a8)));
  FUN_0055de9b(auStack_c8,s_CTokenArchive__HandleRelocation_t_006310c4,
               bea_fcast<double>((fVar5 - bea_fcast<float10>(fStack_dc))),v1);
  CRenderThing__vslot3(auStack_c8);
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar1));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cd7f0, ap_004cd7f0));
