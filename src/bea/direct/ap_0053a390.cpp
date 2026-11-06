// auto-ported from 0053a390_FUN_0053a390.c (FUN_0053a390, 585 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28 check_fild: piVar6[0..3] are each fild-ed once (0x53a3ec..0x53a3f8; [0],[2] stay extended, [1],[3] stored as float) -> hoisted into fx0/fy0/fx2; piVar6[4] is a float (fcomp [ecx+0x10] at 0x53a507) -> bea_fcast<float>
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char _DAT_0089c850;
typedef char _DAT_0089c854;
typedef char uStack_38;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define _DAT_0089c830 GLOBAL_AT(float, 0x0089c830)
#define _DAT_0089c854 GLOBAL_AT(float, 0x0089c854)
#define _DAT_0089c850 GLOBAL_AT(float, 0x0089c850)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef float * (BEA_FASTCALL* FUN_0047ec60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ec60_t> FUN_0047ec60 = {(FUN_0047ec60_t)0x0047ec60};
typedef void * (BEA_THISCALL* FUN_0047ef20_t)(uint32_t);
static const bea_guard<FUN_0047ef20_t> FUN_0047ef20 = {(FUN_0047ef20_t)0x0047ef20};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};

static void BEA_THISCALL ap_0053a390(void * this_)
{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  short *psVar12;
  float10 fVar13;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x4c);
  int &iStack_40 = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x40);
  short * &psStack_3c = *reinterpret_cast<short * *>(bea_frame_ + 0x50 - 0x3c);
  undefined8 &uStack_38 = *reinterpret_cast<undefined8 *>(bea_frame_ + 0x50 - 0x38);
  float &fStack_30 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x2c);
  undefined1 (&local_20)[24] = *reinterpret_cast<undefined1 (*)[24]>(bea_frame_ + 0x50 - 0x20);
  int &iStack_8 = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x8);
  int &iStack_4 = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x4);
  if (*(int *)((int)this_ + 8) != 0) {
    piVar6 = (int *)FUN_0047ef20(bea_arg(&DAT_006fadc8));
    piVar7 = (int *)FUN_00558690(bea_arg(*(void **)((int)this_ + 8)));
    bea_vcall<uint32_t>(piVar7, 0x44, piVar7,0,local_20);
    piVar7 = (int *)FUN_00558690(bea_arg(*(void **)((int)this_ + 8)));
    iVar8 = bea_vcall<uint32_t>(piVar7, 0x4c, piVar7,0,&iStack_40,0,0);
    if (-1 < iVar8) {
      float10 fx0 = (float10)*piVar6;
      float fy0 = (float)piVar6[1];
      float10 fx2 = (float10)piVar6[2];
      fStack_4c = (float)piVar6[3];
      fStack_50 = (fx2 + fx0) * 0.5f;
      fVar3 = fStack_4c - fy0;
      uStack_38 = CONCAT44(fVar3,(int)uStack_38);
      fVar4 = (fx2 - fx0) * 0.5f;
      fVar3 = fVar3 * 0.5f;
      if (fVar4 < fVar3) {
        fVar4 = fVar3;
      }
      fVar4 = fVar4 * 1.21f;
      fVar3 = fStack_50 - fVar4;
      fStack_50 = fVar4 + fStack_50;
      fVar5 = (fStack_50 - fVar3) / _DAT_0089c830;
      fStack_2c = ((fStack_4c + fy0) * 0.5f - fVar4) - _DAT_0089c854 * fVar5;
      if (0 < iStack_4) {
        iVar8 = iStack_8;
        iVar9 = -0x30;
        psVar12 = psStack_3c;
        do {
          fStack_30 = fVar3 - _DAT_0089c850 * fVar5;
          if (0 < iVar8) {
            iVar10 = -0x30;
            psVar11 = psVar12;
            do {
              if (iVar10 * iVar10 + iVar9 * iVar9 < 0x844) {
                fVar13 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&fStack_30));
                if ((float10)bea_fcast<float>(piVar6[4]) <= fVar13) {
                  *psVar11 = -0x1000;
                }
                else {
                  FUN_0047ec60(bea_arg(&DAT_006fadc8), bea_arg(&fStack_50), bea_arg(&fStack_30));
                  lVar2 = (longlong)ROUND((fStack_4c + fStack_50) * 4.5f + 1.5f);
                  (*(uint32_t*)((char*)&uStack_38 + 0)) = (int)lVar2;
                  if ((int)uStack_38 < 0) {
                    (*(uint32_t*)((char*)&uStack_38 + 0)) = 0;
                  }
                  else if (3 < (int)uStack_38) {
                    (*(uint32_t*)((char*)&uStack_38 + 0)) = 3;
                  }
                  *psVar11 = (short)(int)uStack_38 * 0x111 + -0x1000;
                  uStack_38 = lVar2;
                }
              }
              else {
                *psVar11 = 0;
              }
              fStack_30 = fStack_30 + fVar5;
              psVar11 = psVar11 + 1;
              iVar1 = iVar10 + 0x31;
              iVar8 = iStack_8;
              iVar10 = iVar10 + 1;
            } while (BEA_LOOP_GUARD((iVar1 < iStack_8)));
          }
          fStack_2c = fStack_2c + fVar5;
          psVar12 = (short *)((int)psVar12 + iStack_40);
          iVar10 = iVar9 + 0x31;
          iVar9 = iVar9 + 1;
        } while (BEA_LOOP_GUARD((iVar10 < iStack_4)));
      }
      piVar6 = (int *)FUN_00558690(bea_arg(*(void **)((int)this_ + 8)));
      bea_vcall<uint32_t>(piVar6, 0x50, piVar6,0);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053a390, ap_0053a390));
