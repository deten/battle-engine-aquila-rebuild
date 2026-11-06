// auto-ported from 004915d0_FUN_004915d0.c (FUN_004915d0, 238 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_maptex_cpp_0062db04 ((char*)0x0062db04)
typedef uint32_t (BEA_THISCALL* FUN_00491340_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00491340_t> FUN_00491340 = {(FUN_00491340_t)0x00491340};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004915d0(void * this_, int *param_1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  piVar1 = param_1;
  if (*(short *)((int)this_ + 0xc) != (short)param_1[3]) {
    iVar6 = 0;
    if (*(int *)this_ != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)this_));
      *(undefined4 *)this_ = 0;
    }
    if (*(int *)((int)this_ + 8) != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 8)));
      *(undefined4 *)((int)this_ + 8) = 0;
    }
    iVar2 = param_1[3];
    *(undefined4 *)((int)this_ + 4) = 0;
    *(short *)((int)this_ + 0xc) = (short)iVar2;
    iVar2 = param_1[6] >> 1;
    *(int *)((int)this_ + 0x18) = iVar2;
    iVar4 = iVar2 * iVar2 * 4;
    *(int *)((int)this_ + 0x10) = iVar4;
    iVar2 = param_1[5];
    *(int *)((int)this_ + 0x14) = iVar2;
    uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar4 * iVar2), bea_arg(0x30), bea_arg(s_C__dev_ONSLAUGHT2_maptex_cpp_0062db04), bea_arg(0xaf));
    *(undefined4 *)this_ = uVar3;
    if (0 < *(int *)((int)this_ + 0x14)) {
      iVar2 = (int)param_1 - (int)this_;
      puVar5 = (undefined4 *)((int)this_ + 0x1c);
      param_1 = param_1 + 0xd;
      do {
        *puVar5 = *(undefined4 *)(iVar2 + (int)puVar5);
        puVar5[6] = *param_1;
        FUN_00491340(bea_arg(this_), bea_arg(*(int *)((int)this_ + 0x10) * iVar6 + *(int *)this_), bea_arg(piVar1[4] * iVar6 + *piVar1));
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + 1;
        param_1 = param_1 + 1;
      } while (BEA_LOOP_GUARD((iVar6 < *(int *)((int)this_ + 0x14))));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004915d0, ap_004915d0));
