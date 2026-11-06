// auto-ported from 004ebe40_FUN_004ebe40.c (FUN_004ebe40, 366 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define _DAT_006fbe6c GLOBAL_AT(float, 0x006fbe6c)
#define DAT_006fbe70 GLOBAL_AT(float, 0x006fbe70)
#define _DAT_006fbe74 GLOBAL_AT(float, 0x006fbe74)
#define DAT_00662dc0 GLOBAL_AT(int, 0x00662dc0)
#define DAT_00855090 GLOBAL_AT(undefined4*, 0x00855090)
#define DAT_00855098 GLOBAL_AT(undefined4*, 0x00855098)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_009c8010 GLOBAL_AT(int, 0x009c8010)
#define s_C__dev_ONSLAUGHT2_StaticShadows__006329f8 ((char*)0x006329f8)
typedef uint32_t (BEA_THISCALL* FUN_004ec2f0_t)(uint32_t);
static const bea_guard<FUN_004ec2f0_t> FUN_004ec2f0 = {(FUN_004ec2f0_t)0x004ec2f0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_THISCALL ap_004ebe40(void * this_)
{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  *(float *)((int)this_ + 8) = -_DAT_006fbe6c;
  *(float *)((int)this_ + 0xc) = -DAT_006fbe70;
  fVar2 = -_DAT_006fbe74;
  *(float *)((int)this_ + 0x10) = fVar2;
  fVar1 = SQRT(*(float *)((int)this_ + 0xc) * *(float *)((int)this_ + 0xc) +
               *(float *)((int)this_ + 8) * *(float *)((int)this_ + 8));
  if (fVar2 + fVar2 < fVar1) {
    *(float *)((int)this_ + 8) = ((fVar2 + fVar2) / fVar1) * *(float *)((int)this_ + 8);
    *(float *)((int)this_ + 0xc) =
         ((*(float *)((int)this_ + 0x10) + *(float *)((int)this_ + 0x10)) / fVar1) *
         *(float *)((int)this_ + 0xc);
  }
  fVar1 = SQRT(*(float *)((int)this_ + 8) * *(float *)((int)this_ + 8) +
               *(float *)((int)this_ + 0xc) * *(float *)((int)this_ + 0xc) +
               *(float *)((int)this_ + 0x10) * *(float *)((int)this_ + 0x10));   // class 19: the asm's order
  if (fVar1 != 0.0f) {
    fVar1 = 1.0f / fVar1;
    *(float *)((int)this_ + 8) = fVar1 * *(float *)((int)this_ + 8);
    *(float *)((int)this_ + 0xc) = fVar1 * *(float *)((int)this_ + 0xc);
    *(float *)((int)this_ + 0x10) = fVar1 * *(float *)((int)this_ + 0x10);
  }
  puVar4 = DAT_00662dc0;
  if (DAT_00662dc0 == (undefined4 *)0x0) {
    puVar4 = DAT_00855090;
    if (DAT_00855090 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)*DAT_00855090;
    }
    while (BEA_LOOP_GUARD((DAT_00855098 = puVar4, piVar5 != (int *)0x0))) {
      iVar3 = bea_vcall<uint32_t>(piVar5, 0x28);
      if ((iVar3 != 0) && (iVar3 = bea_vcall<uint32_t>(piVar5, 0x2c), iVar3 == 0)) {
        puVar4 = (undefined4 *)
                 FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x24), bea_arg(0x70), bea_arg(s_C__dev_ONSLAUGHT2_StaticShadows__006329f8), bea_arg(0xc1));
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4[8] = DAT_009c8010;
          DAT_009c8010 = puVar4;
          puVar4[2] = 0;
          puVar4[3] = 0;
          *puVar4 = 0;
        }
        *puVar4 = piVar5;
        puVar4[1] = 0xffffffff;
        bea_vcall<uint32_t>(piVar5, 0x30, puVar4);
        FUN_004ec2f0(bea_arg(puVar4));
      }
      puVar4 = (undefined4 *)DAT_00855098[1];
      if (puVar4 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)*puVar4;
      }
    }
  }
  return puVar4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ebe40, ap_004ebe40));
