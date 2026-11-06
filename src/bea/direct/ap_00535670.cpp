// auto-ported from 00535670_FUN_00535670.c (FUN_00535670, 222 bytes) by tools/autoport.py
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
typedef uint32_t (BEA_THISCALL* FUN_0040c570_t)(uint32_t);
static const bea_guard<FUN_0040c570_t> FUN_0040c570 = {(FUN_0040c570_t)0x0040c570};
typedef void * (BEA_THISCALL* FUN_0052f690_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0052f690_t> FUN_0052f690 = {(FUN_0052f690_t)0x0052f690};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 BEA_THISCALL ap_00535670(void * this_, undefined4 param_1, undefined4 param_2, undefined4 *param_3)
{
  void *this_00;
  undefined4 uVar1;
  void *pvVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  pvVar2 = *(void **)((int)this_ + 0x10);
  if ((*(byte *)((int)pvVar2 + 0x34) & 8) == 0) {
    pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x428));
    if (pvVar2 == (void *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0052f690(bea_arg(pvVar2), bea_arg(&DAT_00662b2c));
    }
    *param_3 = uVar1;
    return uVar1;
  }
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x424));
  if (this_00 != (void *)0x0) {
    uVar1 = FUN_0040c570(bea_arg(pvVar2));
    uVar1 = FUN_0052f690(bea_arg(this_00), bea_arg(uVar1));
    *param_3 = uVar1;
    return uVar1;
  }
  *param_3 = 0;
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00535670, ap_00535670));
