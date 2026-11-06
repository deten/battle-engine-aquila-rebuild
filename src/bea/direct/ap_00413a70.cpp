// auto-ported from 00413a70_FUN_00413a70.c (FUN_00413a70, 277 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef int (BEA_THISCALL* FUN_00401fd0_t)(uint32_t);
static const bea_guard<FUN_00401fd0_t> FUN_00401fd0 = {(FUN_00401fd0_t)0x00401fd0};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static undefined4 BEA_THISCALL ap_00413a70(void * this_)
{
  int *piVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x18);
  float &fStack_14 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x14);
  undefined1 (&auStack_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x20 - 0x10);
  iVar3 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x10c);
  if (iVar3 != 0) {
    iVar3 = FUN_00401fd0(bea_arg(*(void **)((int)this_ + 0x20)));
    fVar2 = DAT_006fbdfc;
    if (iVar3 == 0) {
      fVar5 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(*(int *)((int)this_ + 0x20) + 0x1c)));
      if (fVar5 - bea_fcast<float10>(fVar2) <= bea_fcast<float10>(0.3f)) {
        piVar1 = *(int **)((int)this_ + 0x20);
        pfVar4 = (float *)bea_vcall<uint32_t>(piVar1, 0x6c, auStack_10);
        fStack_18 = pfVar4[2] + bea_fcast<float>(piVar1[9]);
        fStack_1c = pfVar4[1] + bea_fcast<float>(piVar1[8]);
        fStack_20 = bea_fcast<float>(piVar1[7]) + *pfVar4;
        fVar5 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&fStack_20)));
        if (bea_fcast<float10>(0.3f) < fVar5 - bea_fcast<float10>(fVar2)) {
          return 1;
        }
      }
      else {
        piVar1 = *(int **)((int)this_ + 0x20);
        pfVar4 = (float *)bea_vcall<uint32_t>(piVar1, 0x6c, auStack_10);
        fStack_14 = pfVar4[2] + bea_fcast<float>(piVar1[9]);
        fStack_18 = pfVar4[1] + bea_fcast<float>(piVar1[8]);
        fStack_1c = bea_fcast<float>(piVar1[7]) + *pfVar4;
        fVar5 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(*(int *)((int)this_ + 0x20) + 0x1c)));
        fStack_20 = bea_fcast<float>(fVar5);
        fVar5 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&fStack_1c)));
        if (bea_fcast<float10>(fStack_20) < fVar5) {
          return 1;
        }
      }
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00413a70, ap_00413a70));
