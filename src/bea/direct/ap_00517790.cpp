// auto-ported from 00517790_FUN_00517790.c (FUN_00517790, 458 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00663080 GLOBAL_AT(int, 0x00663080)
#define DAT_0060c09c GLOBAL_AT(int, 0x0060c09c)
typedef uint32_t (BEA_STDCALL* FUN_004e1360_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e1360_t> FUN_004e1360 = {(FUN_004e1360_t)0x004e1360};
typedef uint32_t (BEA_THISCALL* FUN_00517ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00517ae0_t> FUN_00517ae0 = {(FUN_00517ae0_t)0x00517ae0};

static void BEA_THISCALL ap_00517790(void * this_, int param_1)
{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong local_8;
  
  iVar8 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 4);
  if (DAT_00663080 == 0) {
    iVar6 = 0xac44;
  }
  else if (DAT_00663080 == 1) {
    iVar6 = 0x5622;
  }
  else {
    iVar6 = 0x2b11;
  }
  (*(uint32_t*)((char*)&local_8 + 0)) =
       (int)(longlong)
            ROUND((*(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x2c)) * (float)iVar6);
  iVar6 = (int)local_8 * 2;
  if (*(int *)(param_1 + 0x6c) == -0x40800000) {
    (*(uint32_t*)((char*)&local_8 + 0)) = *(int *)(iVar8 + 0x7c);
  }
  else {
    if (DAT_00663080 == 0) {
      uVar7 = 0xac44;
    }
    else if (DAT_00663080 == 1) {
      uVar7 = 0x5622;
    }
    else {
      uVar7 = 0x2b11;
    }
    local_8 = (ulonglong)uVar7;
    (*(uint32_t*)((char*)&local_8 + 0)) = (int)(longlong)ROUND((float)local_8 * *(float *)(param_1 + 0x6c));
    (*(uint32_t*)((char*)&local_8 + 0)) = (int)local_8 << 1;
  }
  if (((iVar6 < (int)local_8) && (*(int *)(iVar8 + 0x80) != 0)) && (*(int *)(iVar8 + 0x7c) != 0)) {
    piVar4 = *(int **)((int)this_ + iVar3 * 4 + 0xc4);
    piVar1 = (int *)((int)this_ + iVar3 * 4 + 0xc4);
    if (piVar4 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar4, 0x8, piVar4);
      *piVar1 = 0;
      piVar4 = *(int **)((int)this_ + iVar3 * 4 + 0x1c4);
      if (piVar4 != (int *)0x0) {
        bea_vcall<uint32_t>(piVar4, 0x8, piVar4);
        *(undefined4 *)((int)this_ + iVar3 * 4 + 0x1c4) = 0;
      }
    }
    iVar8 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0xc0), 0x14, *(int **)((int)this_ + 0xc0),*(undefined4 *)(iVar8 + 0x80),piVar1);
    piVar4 = (int *)*piVar1;
    if (-1 < iVar8) {
      uVar9 = 0;
      bea_vcall<uint32_t>(piVar4, 0x3c, piVar4,0);
      piVar4 = (int *)((int)this_ + iVar3 * 4 + 0x1c4);
      bea_vcall<uint32_t>(*piVar1, 0x0, (undefined4 *)*piVar1,&DAT_0060c09c,piVar4);
      piVar5 = (int *)*piVar4;
      if (piVar5 != (int *)0x0) {
        bea_vcall<uint32_t>(piVar5, 0x40, piVar5,0x42480000,0);
      }
      piVar4 = (int *)*piVar4;
      if (piVar4 != (int *)0x0) {
        bea_vcall<uint32_t>(piVar4, 0x44, piVar4,0x40400000,0);
      }
      cVar2 = *(char *)(param_1 + 0x18);
      FUN_004e1360(bea_arg(param_1), bea_arg(0));
      FUN_00517ae0(bea_arg(this_), bea_arg(param_1), bea_arg(1));
      bea_vcall<uint32_t>(*piVar1, 0x34, (int *)*piVar1,uVar9);
      bea_vcall<uint32_t>(*piVar1, 0x30, (int *)*piVar1,0,0,cVar2 != '\0');
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
    if (piVar4 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar4, 0x8, piVar4);
      *piVar1 = 0;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00517790, ap_00517790));
