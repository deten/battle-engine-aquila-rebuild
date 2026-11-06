// auto-ported from 005447e0_FUN_005447e0.c (FUN_005447e0, 442 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_DXLandscape_h_00650bbc ((char*)0x00650bbc)
#define s_C__dev_ONSLAUGHT2_DXLandscape_cp_00650bdc ((char*)0x00650bdc)
typedef undefined4 (BEA_THISCALL* FUN_0048e4d0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0048e4d0_t> FUN_0048e4d0 = {(FUN_0048e4d0_t)0x0048e4d0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static void BEA_THISCALL ap_005447e0(void * this_, int param_1)
{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(int *)((int)this_ + 0xc) = param_1;
  iVar8 = param_1 + -1;
  piVar2 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar8 * 0x50 + 4), bea_arg(2), bea_arg(s_C__dev_ONSLAUGHT2_DXLandscape_cp_00650bdc), bea_arg(0x5f));
  if (piVar2 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = piVar2 + 1;
    *piVar2 = iVar8;
    FUN_0055dc20(bea_arg(piVar7), bea_arg(0x50), bea_arg(iVar8), bea_arg(((void*)0x0048e430)), bea_arg(((void*)0x0048e450)));
  }
  *(int **)this_ = piVar7;
  iVar3 = 0;
  iVar6 = 3;
  if (0 < iVar8) {
    param_1 = 0;
    do {
      iVar3 = iVar3 + 1;
      FUN_0048e4d0(bea_arg((void *)(param_1 + *(int *)this_)), bea_arg(iVar3), bea_arg(iVar6));
      iVar6 = iVar6 + -1;
      param_1 = param_1 + 0x50;
    } while (BEA_LOOP_GUARD((iVar3 < iVar8)));
  }
  iVar3 = *(int *)((int)this_ + 0xc);
  piVar2 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 * 0xc + 4), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_DXLandscape_cp_00650bdc), bea_arg(0x6d));
  if (piVar2 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = piVar2 + 1;
    *piVar2 = iVar3;
    FUN_0055dc20(bea_arg(piVar7), bea_arg(0xc), bea_arg(iVar3), bea_arg(((void*)0x00551fd0)), bea_arg(((void*)0x005447d0)));
  }
  *(int **)((int)this_ + 8) = piVar7;
  iVar3 = 0;
  iVar6 = 0x40;
  if (0 < *(int *)((int)this_ + 0xc)) {
    param_1 = 0;
    do {
      puVar9 = (undefined4 *)(*(int *)((int)this_ + 8) + param_1);
      puVar9[1] = iVar6 * iVar6;
      uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar6 * iVar6 * 2), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_DXLandscape_h_00650bbc), bea_arg(0xaa));
      *puVar9 = uVar4;
      param_1 = param_1 + 0xc;
      iVar6 = iVar6 >> 1;
      iVar3 = iVar3 + 1;
    } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)this_ + 0xc))));
  }
  uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14000), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_DXLandscape_cp_00650bdc), bea_arg(0x73));
  *(undefined4 *)((int)this_ + 4) = uVar4;
  if (0 < iVar8) {
    iVar3 = 0;
    do {
      iVar6 = iVar3 + *(int *)this_;
      iVar3 = iVar3 + 0x50;
      uVar1 = *(uint *)(iVar6 + 0x44);
      puVar9 = *(undefined4 **)(iVar6 + 0x40);
      for (uVar5 = (uVar1 & 0x7fffffff) >> 1; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
        *puVar9 = 0xffffffff;
        puVar9 = puVar9 + 1;
      }
      iVar8 = iVar8 + -1;
      for (iVar6 = (uVar1 & 1) << 1; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar9 = 0xff;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    } while (BEA_LOOP_GUARD((iVar8 != 0)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005447e0, ap_005447e0));
