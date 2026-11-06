// auto-ported from 004905f0_FUN_004905f0.c (FUN_004905f0, 399 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xc0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c6678 GLOBAL_AT(float, 0x009c6678)
#define DAT_009c68a0 GLOBAL_AT(int, 0x009c68a0)
#define DAT_009c6904 GLOBAL_AT(int, 0x009c6904)
#define DAT_009c68fc GLOBAL_AT(int, 0x009c68fc)
typedef uint32_t (BEA_THISCALL* FUN_004903a0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004903a0_t> FUN_004903a0 = {(FUN_004903a0_t)0x004903a0};
typedef uint32_t (BEA_CDECL* FUN_0055e7ae_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055e7ae_t> FUN_0055e7ae = {(FUN_0055e7ae_t)0x0055e7ae};

static void BEA_THISCALL ap_004905f0(void * this_)
{
  float fVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;

  alignas(16) uint8_t bea_frame_[0xc0] = {};   // the original stack frame (emulate_frame)
  int &local_b8 = *reinterpret_cast<int *>(bea_frame_ + 0xc0 - 0xb8);
  int (&local_b0)[12] = *reinterpret_cast<int (*)[12]>(bea_frame_ + 0xc0 - 0xb0);
  int (&local_80)[32] = *reinterpret_cast<int (*)[32]>(bea_frame_ + 0xc0 - 0x80);
  pfVar7 = (float *)((int)this_ + 0x1c4);
  pfVar4 = (float *)&DAT_009c6678;
  iVar8 = 2;
  piVar3 = local_b0;
  do {
    if (pfVar7[2] != 0.0) {
      fVar1 = bea_fcast<float>(((int)pfVar7[2] + -1));
      pfVar7[2] = fVar1;
      if (fVar1 == 0.0) {
        *pfVar7 = 0.0;
        (&DAT_009c68a0)[iVar8] = 0;
        (&DAT_009c6904)[iVar8] = 1;
      }
      else {
        *pfVar7 = pfVar7[1] + *pfVar7;
        pfVar7[0xf] = pfVar7[3] + pfVar7[0xf];
        pfVar7[0x10] = pfVar7[4] + pfVar7[0x10];
        pfVar7[0x11] = pfVar7[5] + pfVar7[0x11];
        (&DAT_009c68a0)[iVar8] = 0;
        (&DAT_009c6904)[iVar8] = 1;
        pfVar6 = pfVar7 + 6;
        pfVar9 = pfVar4;
        for (iVar2 = 0x17; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
          *pfVar9 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          pfVar9 = pfVar9 + 1;
        }
        (&DAT_009c68fc)[iVar8] = 1;
        (&DAT_009c68a0)[iVar8] = 1;
        (&DAT_009c6904)[iVar8] = 1;
      }
    }
    fVar1 = *pfVar7;
    pfVar7 = pfVar7 + 0x1d;
    pfVar4 = pfVar4 + 0x17;
    local_b8 = (int)(longlong)ROUND(fVar1 * 65536.0f);
    piVar3[1] = local_b8;
    *piVar3 = iVar8 + -2;
    iVar2 = iVar8 + -1;
    iVar8 = iVar8 + 1;
    piVar3 = piVar3 + 2;
  } while (BEA_LOOP_GUARD((iVar2 < 6)));
  if (*(int *)((int)this_ + 0x1c0) != 0) {
    FUN_0055e7ae(bea_arg(local_b0), bea_arg(6), bea_arg(8), bea_arg(((void*)0x004905d0)));
    iVar8 = *(int *)((int)this_ + 0x1c0);
    iVar2 = 0;
    if (0 < iVar8) {
      pfVar7 = (float *)((int)this_ + 8);
      piVar3 = local_80;
      do {
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + 7;
        local_b8 = (int)(longlong)ROUND(fVar1 * 65536.0f);
        piVar3[1] = local_b8;
        *piVar3 = iVar2;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 2;
      } while (BEA_LOOP_GUARD((iVar2 < iVar8)));
    }
    FUN_0055e7ae(bea_arg(local_80), bea_arg(iVar8), bea_arg(8), bea_arg(((void*)0x004905d0)));
    iVar2 = 0;
    iVar8 = *(int *)((int)this_ + 0x1c0) + -1;
    if (-1 < iVar8) {
      piVar5 = local_b0 + 1;
      piVar3 = local_80 + iVar8 * 2 + 1;
      do {
        if ((5 < iVar2) || (*piVar3 <= *piVar5)) break;
        FUN_004903a0(bea_arg(this_), bea_arg(iVar2), bea_arg(iVar8));
        iVar2 = iVar2 + 1;
        piVar5 = piVar5 + 2;
        iVar8 = iVar8 + -1;
        piVar3 = piVar3 + -2;
      } while (BEA_LOOP_GUARD((-1 < iVar8)));
    }
    *(undefined4 *)((int)this_ + 0x1c0) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004905f0, ap_004905f0));
