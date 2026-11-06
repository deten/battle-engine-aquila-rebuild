// auto-ported from 004e91f0_FUN_004e91f0.c (FUN_004e91f0, 577 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x4f0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_SquadNormal_cp_0063283c ((char*)0x0063283c)
typedef undefined4 (BEA_THISCALL* FUN_00409760_t)(uint32_t);
static const bea_guard<FUN_00409760_t> FUN_00409760 = {(FUN_00409760_t)0x00409760};
typedef undefined4 (BEA_THISCALL* FUN_00409780_t)(uint32_t);
static const bea_guard<FUN_00409780_t> FUN_00409780 = {(FUN_00409780_t)0x00409780};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef void * (BEA_THISCALL* FUN_004e6870_t)(uint32_t);
static const bea_guard<FUN_004e6870_t> FUN_004e6870 = {(FUN_004e6870_t)0x004e6870};
typedef uint32_t (BEA_THISCALL* FUN_004e6f70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e6f70_t> FUN_004e6f70 = {(FUN_004e6f70_t)0x004e6f70};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_004e91f0(void * this_)
{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  float10 fVar12;

  alignas(16) uint8_t bea_frame_[0x4f0] = {};   // the original stack frame (emulate_frame)
  int * &local_4ec = *reinterpret_cast<int * *>(bea_frame_ + 0x4f0 - 0x4ec);
  int * &local_4e8 = *reinterpret_cast<int * *>(bea_frame_ + 0x4f0 - 0x4e8);
  void * &local_4e4 = *reinterpret_cast<void * *>(bea_frame_ + 0x4f0 - 0x4e4);
  undefined1 (&auStack_4e0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x4f0 - 0x4e0);
  undefined ** &local_4d0 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x4f0 - 0x4d0);
  undefined4 &local_4cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x4f0 - 0x4cc);
  undefined4 &local_4c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x4f0 - 0x4c8);
  undefined4 &local_4c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x4f0 - 0x4c4);
  undefined4 &local_4c0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x4f0 - 0x4c0);
  undefined4 (&local_4bc)[35] = *reinterpret_cast<undefined4 (*)[35]>(bea_frame_ + 0x4f0 - 0x4bc);
  undefined4 &local_430 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x4f0 - 0x430);
  undefined4 &local_114 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x4f0 - 0x114);
  char (&local_110)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x4f0 - 0x110);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x4f0 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x4f0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x4f0 - 0x4);
  if (1 < *(int *)((int)this_ + 0xb4)) {
    local_4e8 = (int *)((int)this_ + 0xa4);
    piVar2 = (int *)FUN_00409760(bea_arg(&local_4ec));
    while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
      iVar4 = *piVar2;
      if ((iVar4 != 0) &&
         (fVar12 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(iVar4 + 0x1c))),
         bea_fcast<float10>(*(float *)(iVar4 + 0x24)) - fVar12 < bea_fcast<float10>(-5.0f))) {
        local_4e4 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x144), bea_arg(8), bea_arg(s_C__dev_ONSLAUGHT2_SquadNormal_cp_0063283c), bea_arg(0x48b));
        if (local_4e4 == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)FUN_004e6870(bea_arg(local_4e4));
        }
        FUN_0048dcf0(bea_arg(&local_4d0));
        iVar4 = *piVar2;
        local_4d0 = ((void*)0x005dc1b0);
        local_110[0] = '\0';
        local_4cc = *(undefined4 *)(iVar4 + 0x1c);
        local_4c8 = *(undefined4 *)(iVar4 + 0x20);
        local_4c4 = *(undefined4 *)(iVar4 + 0x24);
        local_4c0 = *(undefined4 *)(iVar4 + 0x28);
        iVar4 = *(int *)((int)this_ + 0xa0);
        puVar8 = (undefined4 *)((int)this_ + 0x3c);
        puVar10 = local_4bc;
        for (iVar5 = 0xc; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        local_430 = *(undefined4 *)((int)this_ + 0x7c);
        uVar6 = 0xffffffff;
        pcVar9 = *(char **)(iVar4 + 0xb0);
        do {
          pcVar11 = pcVar9;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar11;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        uVar6 = ~uVar6;
        pcVar9 = pcVar11 + -uVar6;
        pcVar11 = local_110;
        for (uVar7 = uVar6 >> 2; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
        piVar3[0x20] = 1;
        bea_vcall<uint32_t>(piVar3, 0x24, &local_4d0);
        FUN_004e6f70(bea_arg(this_), bea_arg(*piVar2));
        bea_vcall<uint32_t>(piVar3, 0x10c, auStack_4e0,*piVar2,0,0);
        piVar3[0x20] = 0;
        *(undefined4 *)((int)this_ + 0xbc) = 0;
        local_4ec = (int *)*local_4e8;
        if ((local_4ec == (int *)0x0) || (*local_4ec == 0)) break;
      }
      piVar2 = (int *)FUN_00409780(bea_arg(&local_4ec));
    }
  }
  if ((*(int *)((int)this_ + 0xb4) == 1) &&
     (iVar4 = bea_vcall<uint32_t>(this_, 0x124), iVar4 != 0)) {
    fVar12 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg((undefined4 *)(iVar4 + 0x1c))));
    if (bea_fcast<float10>(*(float *)(iVar4 + 0x24)) - fVar12 < bea_fcast<float10>(-5.0f)) {
      *(undefined4 *)((int)this_ + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
      *(undefined4 *)((int)this_ + 0x20) = *(undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)((int)this_ + 0x24) = *(undefined4 *)(iVar4 + 0x24);
      *(undefined4 *)((int)this_ + 0x28) = *(undefined4 *)(iVar4 + 0x28);
      fVar12 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg((undefined4 *)((int)this_ + 0x1c))));
      *(float *)((int)this_ + 0x24) = bea_fcast<float>(fVar12);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e91f0, ap_004e91f0));
