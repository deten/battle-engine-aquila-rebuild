// auto-ported from 00506010_FUN_00506010.c (FUN_00506010, 473 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008553ec GLOBAL_AT(int, 0x008553ec)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};
typedef undefined4 (BEA_THISCALL* FUN_005069f0_t)(uint32_t);
static const bea_guard<FUN_005069f0_t> FUN_005069f0 = {(FUN_005069f0_t)0x005069f0};
typedef int (BEA_THISCALL* FUN_00509e90_t)(uint32_t);
static const bea_guard<FUN_00509e90_t> FUN_00509e90 = {(FUN_00509e90_t)0x00509e90};

static undefined4 BEA_THISCALL ap_00506010(void * this_)
{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  longlong &local_8 = *reinterpret_cast<longlong *>(bea_frame_ + 0x10 - 0x8);
  iVar5 = 0;
  local_8 = (longlong)ROUND(*(float *)((int)this_ + 0x60));
  *(undefined4 *)((int)this_ + 0x60) = 0;
  *(int *)((int)this_ + 0x68) = (int)local_8 / 100;
  iVar4 = *(int *)(*(int *)((int)this_ + 0xa4) + 0xc + ((int)local_8 / 100) * 4);
  iVar3 = FUN_00406d20(bea_arg(DAT_008553ec));
  while (BEA_LOOP_GUARD((iVar3 != 0))) {
    if (iVar5 == iVar4) goto LAB_0050607f;
    iVar5 = iVar5 + 1;
    piVar1 = *(int **)(*(int *)((int)DAT_008553ec + 8) + 4);
    *(int **)((int)DAT_008553ec + 8) = piVar1;
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
  }
  iVar3 = 0;
LAB_0050607f:
  *(int *)((int)this_ + 0xa0) = iVar3;
  do {
    if (iVar3 != 0) {
      if (*(int *)((int)this_ + 0xa0) == 0) {
        iVar4 = FUN_00509e90(bea_arg(this_));
        if (iVar4 == 0) {
          return 0;
        }
      }
      else if (DAT_00672fd0 <= *(float *)((int)this_ + 100)) {
        return 0;
      }
      iVar4 = *(int *)((int)this_ + 0xa0);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) {
        fVar2 = DAT_00672fd0 + *(float *)(iVar4 + 0x38);
        *(undefined4 *)((int)this_ + 0x6c) = 0;
        *(float *)((int)this_ + 100) = fVar2;
        if ((*(byte *)(*(int *)((int)this_ + 8) + 0x34) & 8) != 0) {
          *(undefined4 *)(*(int *)((int)this_ + 8) + 0x5e0) = 0;
        }
        iVar4 = FUN_005069f0(bea_arg(this_));
        if (iVar4 != 0) {
          iVar4 = *(int *)(*(int *)((int)this_ + 0xa0) + 0xc);
          if ((iVar4 != 0) && (*(int *)(*(int *)((int)this_ + 0xa0) + 0xb4) != 0)) {
            iVar3 = *(int *)((int)this_ + 8);
            if ((*(byte *)(iVar3 + 0x34) & 8) == 0) {
              uVar6 = 3;
            }
            else {
              uVar6 = 0;
              iVar3 = 0;
            }
            FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(iVar4), bea_arg(iVar3), bea_arg(0x3f000000), bea_arg(uVar6), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(0));
          }
        }
        if (0 < *(int *)(*(int *)((int)this_ + 0xa0) + 0x44)) {
          *(undefined4 *)((int)this_ + 0x6c) = 1;
          local_8 = CONCAT44((*(uint32_t*)((char*)&local_8 + 4)),
                             DAT_00672fd0 + *(float *)(*(int *)((int)this_ + 0xa0) + 0x3c));
          FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x1389), bea_arg(this_), bea_arg(&local_8), bea_arg(0), bea_arg(0), bea_arg(0));
        }
        return 1;
      }
      return 0;
    }
    iVar4 = *(int *)((int)this_ + 0x68) + -1;
    *(int *)((int)this_ + 0x68) = iVar4;
    if (iVar4 < 0) {
      return 0;
    }
    iVar5 = 0;
    iVar4 = *(int *)(*(int *)((int)this_ + 0xa4) + 0xc + iVar4 * 4);
    iVar3 = FUN_00406d20(bea_arg(DAT_008553ec));
    while (BEA_LOOP_GUARD((iVar3 != 0))) {
      if (iVar5 == iVar4) goto LAB_005060d1;
      iVar5 = iVar5 + 1;
      piVar1 = *(int **)(*(int *)((int)DAT_008553ec + 8) + 4);
      *(int **)((int)DAT_008553ec + 8) = piVar1;
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
    }
    iVar3 = 0;
LAB_005060d1:
    *(int *)((int)this_ + 0xa0) = iVar3;
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00506010, ap_00506010));
