// auto-ported from 004caed0_FUN_004caed0.c (FUN_004caed0, 93 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_ParticleManage_00630e60 ((char*)0x00630e60)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_004caed0(void * this_, undefined4 param_1)
{
  int iVar1;
  
  if (*(int *)((int)this_ + 0x88) != 0) {
    if (*(int **)((int)this_ + 0x5c) != (int *)0x0) {
      iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x5c), 0x38, this_);
      if (iVar1 == 0) goto LAB_004caeff;
    }
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x88)));
  }
LAB_004caeff:
  iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_1), bea_arg(0x10), bea_arg(s_C__dev_ONSLAUGHT2_ParticleManage_00630e60), bea_arg(0xc2));
  *(int *)((int)this_ + 0x88) = iVar1;
  return iVar1 != 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004caed0, ap_004caed0));
