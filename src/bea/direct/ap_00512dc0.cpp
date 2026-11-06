// auto-ported from 00512dc0_vslot0.c (DeviceObject::vslot0, 123 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char DeviceObject;
#define DAT_00889074 GLOBAL_AT(int, 0x00889074)
#define DAT_00889078 GLOBAL_AT(int, 0x00889078)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static DeviceObject * BEA_THISCALL ap_00512dc0(DeviceObject * this_, uint param_1)
{
  DeviceObject *pDVar1;
  DeviceObject *pDVar2;
  
  *(undefined ***)this_ = ((void*)0x005e48c8);
  pDVar1 = (DeviceObject *)0x0;
  for (pDVar2 = DAT_00889074; BEA_LOOP_GUARD((pDVar2 != (DeviceObject *)0x0)); pDVar2 = *(DeviceObject **)(pDVar2 + 4)
      ) {
    if (pDVar2 == this_) {
      if (pDVar1 == (DeviceObject *)0x0) {
        DAT_00889074 = *(DeviceObject **)(this_ + 4);
      }
      else {
        *(undefined4 *)(pDVar1 + 4) = *(undefined4 *)(this_ + 4);
      }
    }
    pDVar1 = pDVar2;
  }
  pDVar1 = (DeviceObject *)0x0;
  for (pDVar2 = DAT_00889078; BEA_LOOP_GUARD((pDVar2 != (DeviceObject *)0x0)); pDVar2 = *(DeviceObject **)(pDVar2 + 4)
      ) {
    if (pDVar2 == this_) {
      if (pDVar1 == (DeviceObject *)0x0) {
        DAT_00889078 = *(DeviceObject **)(this_ + 4);
      }
      else {
        *(undefined4 *)(pDVar1 + 4) = *(undefined4 *)(this_ + 4);
      }
    }
    pDVar1 = pDVar2;
  }
  if ((param_1 & 1) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_));
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00512dc0, ap_00512dc0));
