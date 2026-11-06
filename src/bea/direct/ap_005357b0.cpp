// auto-ported from 005357b0_FUN_005357b0.c (FUN_005357b0, 222 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00662b2c GLOBAL_AT(int, 0x00662b2c)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa40 ((char*)0x0064fa40)
typedef void * (BEA_THISCALL* FUN_0052f690_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0052f690_t> FUN_0052f690 = {(FUN_0052f690_t)0x0052f690};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 BEA_THISCALL ap_005357b0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 *param_3)
{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined1 *puStack_8;
  undefined4 local_4;
  iVar1 = *(int *)((int)this_ + 0x10);
  if ((*(byte *)(iVar1 + 0x34) & 8) == 0) {
    pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x444));
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0052f690(bea_arg(pvVar2), bea_arg(&DAT_00662b2c));
    }
    *param_3 = uVar3;
    return uVar3;
  }
  pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x440));
  if (pvVar2 != (void *)0x0) {
    uVar3 = FUN_0052f690(bea_arg(pvVar2), bea_arg(*(undefined4 *)(*(int *)(iVar1 + 0x4b0) + 0xa8)));
    *param_3 = uVar3;
    return uVar3;
  }
  *param_3 = 0;
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005357b0, ap_005357b0));
