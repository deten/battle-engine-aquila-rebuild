// auto-ported from 00421200_FUN_00421200.c (FUN_00421200, 334 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00623e24 GLOBAL_AT(int, 0x00623e24)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
#define DAT_00662ab0 GLOBAL_AT(float, 0x00662ab0)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_00662aac GLOBAL_AT(float, 0x00662aac)
#define DAT_008892d8 GLOBAL_AT(char, 0x008892d8)
#define DAT_008892dc GLOBAL_AT(int, 0x008892dc)
#define DAT_0089dab8 GLOBAL_AT(int, 0x0089dab8)
typedef int (BEA_STDCALL* FUN_00420d70_t)(uint32_t);
static const bea_guard<FUN_00420d70_t> FUN_00420d70 = {(FUN_00420d70_t)0x00420d70};
typedef uint32_t (BEA_THISCALL* FUN_00460a40_t)(uint32_t);
static const bea_guard<FUN_00460a40_t> FUN_00460a40 = {(FUN_00460a40_t)0x00460a40};
typedef uint32_t (BEA_THISCALL* FUN_004bba10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004bba10_t> FUN_004bba10 = {(FUN_004bba10_t)0x004bba10};
typedef uint32_t (BEA_THISCALL* FUN_004e04c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e04c0_t> FUN_004e04c0 = {(FUN_004e04c0_t)0x004e04c0};

static undefined4 BEA_THISCALL ap_00421200(void * this_, short *param_1, undefined4 param_2)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  undefined4 *puVar9;
  char *pcVar10;
  
  if (*param_1 != (short)((short)DAT_00623e24 + 0x4bc0)) {
    return 0;
  }
  uVar2 = *(undefined4 *)((int)this_ + 0x2490);
  uVar3 = *(undefined4 *)((int)this_ + 0x248c);
  psVar8 = param_1 + 1;
  puVar9 = this_;
  for (iVar5 = 0x92f; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
    *puVar9 = *(undefined4 *)psVar8;
    psVar8 = psVar8 + 2;
    puVar9 = puVar9 + 1;
  }
  iVar5 = (*(uint *)((int)this_ + 0x23f4) >> 0x18) - 0x80;
  iVar6 = (*(uint *)((int)this_ + 0x23f8) >> 0x18) - 0x80;
  if ((iVar5 < -0x40) || (0x40 < iVar5)) {
    iVar5 = 0;
  }
  if ((iVar6 < -0x40) || (0x40 < iVar6)) {
    iVar6 = 0;
  }
  *(uint *)((int)this_ + 0x23f4) =
       (iVar5 + -0x80) * 0x1000000 + (*(uint *)((int)this_ + 0x23f4) & 0xffffff);
  *(uint *)((int)this_ + 0x23f8) =
       (iVar6 + -0x80) * 0x1000000 + (*(uint *)((int)this_ + 0x23f8) & 0xffffff);
  if ((char)param_2 == '\0') {
    FUN_004bba10(bea_arg(&DAT_00889a48), bea_arg(DAT_00662ab0));
    FUN_004e04c0(bea_arg(&DAT_00896988), bea_arg(DAT_00662aac));
    pcVar4 = &DAT_008892d8;
    psVar8 = param_1 + 0x125f;
    iVar5 = DAT_008892dc;
    while (BEA_LOOP_GUARD((iVar5 != -1))) {
      psVar7 = psVar8;
      if (*pcVar4 != '\0') {
        psVar7 = psVar8 + 0x10;
        pcVar10 = pcVar4;
        for (iVar5 = 8; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)psVar8;
          psVar8 = psVar8 + 2;
          pcVar10 = pcVar10 + 4;
        }
      }
      piVar1 = (int *)(pcVar4 + 0x24);
      pcVar4 = pcVar4 + 0x20;
      psVar8 = psVar7;
      iVar5 = *piVar1;
    }
    FUN_00420d70(bea_arg(psVar8));
    return 1;
  }
  FUN_00460a40(bea_arg(&DAT_0089dab8));
  *(undefined4 *)((int)this_ + 0x2490) = uVar2;
  *(undefined4 *)((int)this_ + 0x248c) = uVar3;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00421200, ap_00421200));
