// auto-ported from 004b1d30_FUN_004b1d30.c (FUN_004b1d30, 370 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x160: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s__damaged_0062ff9c ((char*)0x0062ff9c)
#define s_Duplicate_damage_number_for_part_0062ff74 ((char*)0x0062ff74)
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef uint32_t (BEA_CDECL* FUN_0055e2a6_t)(uint32_t);
static const bea_guard<FUN_0055e2a6_t> FUN_0055e2a6 = {(FUN_0055e2a6_t)0x0055e2a6};
typedef int (BEA_CDECL* FUN_0056e170_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0056e170_t> FUN_0056e170 = {(FUN_0056e170_t)0x0056e170};

static void BEA_THISCALL ap_004b1d30(void * this_)
{
  char cVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;

  alignas(16) uint8_t bea_frame_[0x160] = {};   // the original stack frame (emulate_frame)
  int &local_154 = *reinterpret_cast<int *>(bea_frame_ + 0x160 - 0x154);
  int (&local_150)[20] = *reinterpret_cast<int (*)[20]>(bea_frame_ + 0x160 - 0x150);
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x160 - 0x100);
  piVar5 = local_150;
  for (iVar3 = 0x14; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  iVar3 = *(int *)((int)this_ + 0x128);
  iVar7 = 0;
  local_154 = 0;
  iVar6 = 0;
  if (0 < *(int *)(iVar3 + 0x15c)) {
    do {
      pcVar8 = (char *)((int)this_ + 0xdc);
      uVar4 = 0xffffffff;
      pcVar9 = pcVar8;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      iVar3 = FUN_0056e170(bea_arg(pcVar8), bea_arg(*(int *)(*(int *)(iVar3 + 0x160) + iVar7 * 4) + 0xdc), bea_arg(~uVar4 - 1));
      if (iVar3 == 0) {
        uVar4 = 0xffffffff;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        pcVar8 = (char *)(~uVar4 + 0xdb +
                         *(int *)(*(int *)(*(int *)((int)this_ + 0x128) + 0x160) + iVar7 * 4));
        uVar4 = 0xffffffff;
        pcVar9 = pcVar8;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        if ((7 < ~uVar4 - 1) && (iVar3 = FUN_0056e170(bea_arg(pcVar8), bea_arg(s__damaged_0062ff9c), bea_arg(8)), iVar3 == 0)) {
          uVar4 = 0xffffffff;
          pcVar9 = pcVar8;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (BEA_LOOP_GUARD((cVar1 != '\0')));
          iVar3 = 1;
          if (8 < ~uVar4 - 1) {
            iVar3 = FUN_0055e2a6(bea_arg(pcVar8 + 8));
          }
          if (local_150[iVar3] != 0) {
            FUN_0055de9b(local_100,s_Duplicate_damage_number_for_part_0062ff74,
                         (char *)(*(int *)(*(int *)(*(int *)((int)this_ + 0x128) + 0x160) + iVar7 * 4
                                          ) + 0xdc));
          }
          local_150[iVar3] = *(int *)(*(int *)(*(int *)((int)this_ + 0x128) + 0x160) + iVar7 * 4);
          local_154 = local_154 + 1;
        }
      }
      iVar3 = *(int *)((int)this_ + 0x128);
      iVar7 = iVar7 + 1;
      iVar6 = local_154;
    } while (BEA_LOOP_GUARD((iVar7 < *(int *)(iVar3 + 0x15c))));
  }
  piVar5 = local_150;
  iVar3 = 0x14;
  do {
    pvVar2 = (void *)*piVar5;
    if (pvVar2 != (void *)0x0) {
      *(void **)((int)this_ + 0x9c) = pvVar2;
      *(int *)((int)this_ + 0xa0) = iVar6;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 1;
      iVar6 = iVar6 + -1;
      this_ = pvVar2;
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (BEA_LOOP_GUARD((iVar3 != 0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b1d30, ap_004b1d30));
