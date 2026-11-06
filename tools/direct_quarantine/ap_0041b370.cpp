// auto-ported from 0041b370_vslot66.c (CCannon::vslot66, 218 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCannon;
typedef char CGroundUnit;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define s_Activate_00623e14 ((char*)0x00623e14)
#define s_Deactivate_00623e08 ((char*)0x00623e08)
typedef uint32_t (BEA_THISCALL* CGroundUnit__vslot66_t)(uint32_t);
static const bea_guard<CGroundUnit__vslot66_t> CGroundUnit__vslot66 = {(CGroundUnit__vslot66_t)0x0047c970};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static uint32_t BEA_THISCALL ap_0041b370(CCannon * this_)
{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  if ((*(int *)(this_ + 0x214) == 0) || (*(int *)(*(int *)(this_ + 0x13c) + 0xc) == 0)) {
    if ((*(float *)(this_ + 0x264) + 10.0f < DAT_00672fd0) &&
       ((*(int *)(this_ + 0x260) != 1 && (*(int *)(this_ + 0x260) != 2)))) {
      iVar1 = *(int *)this_;
      uVar3 = 0;
      pvVar2 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_Deactivate_00623e08,1);
      uVar3 = FUN_004aa630(bea_arg(pvVar2), bea_arg(uVar3));
      bea_vcall<uint32_t>(this_, 0xf0, uVar3);
      *(undefined4 *)(this_ + 0x260) = 2;
    }
  }
  else {
    if ((*(int *)(this_ + 0x260) != 0) && (*(int *)(this_ + 0x260) != 3)) {
      iVar1 = *(int *)this_;
      uVar3 = 0;
      pvVar2 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_Activate_00623e14,1);
      uVar3 = FUN_004aa630(bea_arg(pvVar2), bea_arg(uVar3));
      bea_vcall<uint32_t>(this_, 0xf0, uVar3);
      *(undefined4 *)(this_ + 0x260) = 3;
    }
    if (*(int *)(*(int *)(this_ + 0x13c) + 0xc) != 0) {
      *(float *)(this_ + 0x264) = DAT_00672fd0;
      return CGroundUnit__vslot66(bea_arg((CGroundUnit *)this_));
    }
  }
  return CGroundUnit__vslot66(bea_arg((CGroundUnit *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041b370, ap_0041b370));
