// auto-ported from 005473b0_FUN_005473b0.c (FUN_005473b0, 542 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c64d8 GLOBAL_AT(int, 0x009c64d8)
typedef uint32_t (BEA_THISCALL* FUN_0048ef00_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0048ef00_t> FUN_0048ef00 = {(FUN_0048ef00_t)0x0048ef00};
typedef uint32_t (BEA_THISCALL* FUN_00544fc0_t)(uint32_t);
static const bea_guard<FUN_00544fc0_t> FUN_00544fc0 = {(FUN_00544fc0_t)0x00544fc0};
typedef uint32_t (BEA_THISCALL* FUN_005503d0_t)(uint32_t);
static const bea_guard<FUN_005503d0_t> FUN_005503d0 = {(FUN_005503d0_t)0x005503d0};

static void BEA_THISCALL ap_005473b0(void * this_, int param_1, int param_2, int param_3, int param_4, int param_5)
{
  ushort *puVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int local_1c;
  
  iVar7 = *(int *)((int)this_ + 0x24);
  if (param_5 == 0) {
    iVar8 = param_3 - param_1;
    iVar10 = param_4 - param_2;
    param_1 = param_1 + -1 >> 3;
    param_2 = param_2 + -1 >> 3;
    param_3 = param_3 >> 3;
    param_4 = param_4 >> 3;
    if (param_1 < 0) {
      param_1 = 0;
    }
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (0x3f < param_1) {
      param_1 = 0x3f;
    }
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    if (0x3f < param_3) {
      param_3 = 0x3f;
    }
    iVar3 = param_2;
    if (0x3f < param_4) {
      param_4 = 0x3f;
    }
    for (; BEA_LOOP_GUARD((iVar3 <= param_4)); iVar3 = iVar3 + 1) {
      if (param_1 <= param_3) {
        iVar5 = param_1;
        do {
          uVar9 = iVar3 * 0x40 + iVar5 & 0xffff;
          if ((*(int *)((int)this_ + 0x20) != 0) && (local_1c = 0, 0 < *(int *)((int)this_ + 0x20))) {
            param_5 = 0;
            do {
              iVar6 = 1;
              if (1 < *(int *)(param_5 + 0xc + iVar7)) {
                iVar11 = 0x50;
                do {
                  puVar1 = (ushort *)(*(int *)(param_5 + iVar7) + -6 + iVar11);
                  iVar7 = *(int *)(param_5 + iVar7) + -0x50 + iVar11;
                  iVar11 = iVar11 + 0x50;
                  pbVar2 = (byte *)(*(int *)(iVar7 + 0x40) + 1 +
                                   (((*puVar1 & uVar9) >> (*(byte *)(iVar7 + 0x34) & 0x1f)) +
                                   (*(ushort *)(iVar7 + 0x48) & uVar9)) * 2);
                  *pbVar2 = *pbVar2 | 0x80;
                  iVar6 = iVar6 + 1;
                  iVar7 = *(int *)((int)this_ + 0x24);
                } while (BEA_LOOP_GUARD((iVar6 < *(int *)(param_5 + 0xc + iVar7))));
              }
              local_1c = local_1c + 1;
              param_5 = param_5 + 0x34;
            } while (BEA_LOOP_GUARD((local_1c < *(int *)((int)this_ + 0x20))));
          }
          iVar5 = iVar5 + 1;
        } while (BEA_LOOP_GUARD((iVar5 <= param_3)));
      }
    }
    if ((1 < iVar8) && (1 < iVar10)) {
      FUN_0048ef00(bea_arg(*(void **)((int)this_ + 0x30)), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4));
    }
    return;
  }
  FUN_00544fc0(bea_arg(this_));
  iVar8 = 0;
  do {
    FUN_005503d0(bea_arg((void *)(iVar8 + DAT_009c64d8)));
    iVar8 = iVar8 + 8;
  } while (BEA_LOOP_GUARD((iVar8 < 0x18)));
  iVar8 = 0x1000;
  piVar4 = (int *)(*(int *)(iVar7 + 4) + 0xc);
  do {
    if (*piVar4 != 0) {
      *(undefined2 *)(*piVar4 + 0x3c) = 0xffff;
      *piVar4 = 0;
      *(undefined1 *)(piVar4 + 1) = 0x9d;
    }
    piVar4 = piVar4 + 5;
    iVar8 = iVar8 + -1;
  } while (BEA_LOOP_GUARD((iVar8 != 0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005473b0, ap_005473b0));
