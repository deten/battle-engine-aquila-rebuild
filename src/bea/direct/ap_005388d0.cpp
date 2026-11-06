// auto-ported from 005388d0_vslot2.c (CScriptEventNB::vslot2, 128 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMonitor;
typedef char CScriptEventNB;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* CMonitor__vslot2_t)(uint32_t);
static const bea_guard<CMonitor__vslot2_t> CMonitor__vslot2 = {(CMonitor__vslot2_t)0x004bacb0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_005387b0_t)(uint32_t);
static const bea_guard<FUN_005387b0_t> FUN_005387b0 = {(FUN_005387b0_t)0x005387b0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_005388d0(CScriptEventNB * this_)
{
  int *this_00;
  undefined4 *puVar1;
  void *pvVar2;
  
  CMonitor__vslot2(bea_arg((CMonitor *)this_));
  this_00 = *(int **)(this_ + 8);
  if (this_00 != (int *)0x0) {
    puVar1 = (undefined4 *)*this_00;
    this_00[2] = (int)puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)*puVar1;
    }
    while (BEA_LOOP_GUARD((pvVar2 != (void *)0x0))) {
      if (pvVar2 != (void *)0x0) {
        FUN_005387b0(bea_arg(pvVar2));
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar2));
      }
      puVar1 = *(undefined4 **)(this_00[2] + 4);
      this_00[2] = (int)puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = (void *)*puVar1;
      }
    }
    FUN_004e5c60(bea_arg(this_00));
  }
  pvVar2 = *(void **)(this_ + 8);
  if (pvVar2 != (void *)0x0) {
    FUN_004e5c60(bea_arg(pvVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar2));
  }
  *(undefined4 *)(this_ + 8) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005388d0, ap_005388d0));
