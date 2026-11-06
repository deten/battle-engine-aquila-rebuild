// auto-ported from 004e1040_FUN_004e1040.c (FUN_004e1040, 237 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00896c54 GLOBAL_AT(int, 0x00896c54)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
typedef uint32_t (BEA_THISCALL* FUN_00517790_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00517790_t> FUN_00517790 = {(FUN_00517790_t)0x00517790};
typedef uint32_t (BEA_THISCALL* FUN_005179b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005179b0_t> FUN_005179b0 = {(FUN_005179b0_t)0x005179b0};
typedef int (BEA_THISCALL* FUN_00517cb0_t)(uint32_t);
static const bea_guard<FUN_00517cb0_t> FUN_00517cb0 = {(FUN_00517cb0_t)0x00517cb0};

static void BEA_THISCALL ap_004e1040(void * this_)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  for (iVar4 = *(int *)((int)this_ + 0xc); BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = *(int *)(iVar4 + 0x74)) {
    iVar2 = *(int *)(iVar4 + 0x74);
    if ((iVar2 != 0) && (*(int *)(iVar4 + 0x68) < *(int *)(iVar2 + 0x68))) {
      if (*(int *)(iVar4 + 0x78) == 0) {
        *(int *)((int)this_ + 0xc) = iVar2;
      }
      else {
        *(int *)(*(int *)(iVar4 + 0x78) + 0x74) = iVar2;
      }
      if (*(int *)(iVar2 + 0x74) != 0) {
        *(int *)(*(int *)(iVar2 + 0x74) + 0x78) = iVar4;
      }
      *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(iVar2 + 0x74);
      *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(iVar4 + 0x78);
      *(int *)(iVar4 + 0x78) = iVar2;
      *(int *)(iVar2 + 0x74) = iVar4;
    }
  }
  iVar4 = *(int *)((int)this_ + 0xc);
  iVar2 = 0;
  iVar5 = (int)(DAT_00896c54 * 3 + (DAT_00896c54 * 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar5) {
    do {
      if (iVar4 == 0) goto LAB_004e10dd;
      iVar4 = *(int *)(iVar4 + 0x74);
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < iVar5)));
  }
  for (; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = *(int *)(iVar4 + 0x74)) {
    if (*(int *)(iVar4 + 4) != -1) {
      FUN_005179b0(bea_arg(&DAT_00896988), bea_arg(iVar4), bea_arg(0));
      *(undefined4 *)(iVar4 + 4) = 0xffffffff;
    }
  }
LAB_004e10dd:
  iVar4 = *(int *)((int)this_ + 0xc);
  iVar2 = 0;
  bVar1 = true;
  if (0 < iVar5) {
    do {
      if (iVar4 == 0) {
        return;
      }
      if (!bVar1) {
        return;
      }
      if ((*(int *)(iVar4 + 4) == -1) && (*(int *)(iVar4 + 0x84) == 0)) {
        iVar3 = FUN_00517cb0(bea_arg(&DAT_00896988));
        *(int *)(iVar4 + 4) = iVar3;
        if (iVar3 < 0) {
          bVar1 = false;
        }
        else {
          FUN_00517790(bea_arg(&DAT_00896988), bea_arg(iVar4));
        }
      }
      iVar4 = *(int *)(iVar4 + 0x74);
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < iVar5)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e1040, ap_004e1040));
