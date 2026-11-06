// auto-ported from 0047cfd0_vslot9.c (CGroundVehicle::vslot9, 490 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CGroundVehicle;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_WheelMotion_0062cb54 ((char*)0x0062cb54)
#define s_C__dev_ONSLAUGHT2_GroundVehicle__0062cb30 ((char*)0x0062cb30)
typedef uint32_t (BEA_THISCALL* CGroundUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CGroundUnit__vslot9_t> CGroundUnit__vslot9 = {(CGroundUnit__vslot9_t)0x0047c730};
typedef void * (BEA_THISCALL* FUN_0047d590_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047d590_t> FUN_0047d590 = {(FUN_0047d590_t)0x0047d590};
typedef void * (BEA_THISCALL* FUN_00493020_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00493020_t> FUN_00493020 = {(FUN_00493020_t)0x00493020};
typedef uint32_t (BEA_THISCALL* FUN_00493180_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00493180_t> FUN_00493180 = {(FUN_00493180_t)0x00493180};
typedef void * (BEA_THISCALL* FUN_00496a50_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00496a50_t> FUN_00496a50 = {(FUN_00496a50_t)0x00496a50};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef void * (BEA_THISCALL* FUN_004fe710_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fe710_t> FUN_004fe710 = {(FUN_004fe710_t)0x004fe710};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_0047cfd0(CGroundVehicle * this_, int param_1)
{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  CGroundUnit__vslot9(bea_arg((CGroundUnit *)this_), bea_arg(param_1));
  pcVar4 = s_WheelMotion_0062cb54;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0xb8);
  *(undefined4 *)(this_ + 300) = uVar3;
  *(undefined4 *)(this_ + 0x130) = uVar3;
  *(undefined4 *)(this_ + 0x134) = uVar3;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 200);
  *(undefined4 *)(this_ + 0x100) = uVar3;
  *(undefined4 *)(this_ + 0x104) = uVar3;
  *(undefined4 *)(this_ + 0x108) = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0xd0);
  this_[0x260] = (CGroundVehicle)0x1;
  pvVar1 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  iVar2 = FUN_004aa630(bea_arg(pvVar1), bea_arg(pcVar4));
  if (iVar2 == -1) {
    pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_GroundVehicle__0062cb30), bea_arg(0x21));
    if (pvVar1 == (void *)0x0) {
      uVar3 = 0;
    }
    else if (this_ == (CGroundVehicle *)0x0) {
      uVar3 = FUN_00496a50(bea_arg(pvVar1), bea_arg(0));
    }
    else {
      uVar3 = FUN_00496a50(bea_arg(pvVar1), bea_arg(this_ + 8));
    }
    *(undefined4 *)(this_ + 0x70) = uVar3;
  }
  else {
    pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(200), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_GroundVehicle__0062cb30), bea_arg(0x1c));
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else if (this_ == (CGroundVehicle *)0x0) {
      pvVar1 = (void *)FUN_00493020(bea_arg(pvVar1), bea_arg(0));
    }
    else {
      pvVar1 = (void *)FUN_00493020(bea_arg(pvVar1), bea_arg(this_ + 8));
    }
    *(void **)(this_ + 0x70) = pvVar1;
    FUN_00493180(bea_arg(pvVar1), bea_arg(*(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0x144)));
    this_[0x260] = (CGroundVehicle)0x0;
  }
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x44), bea_arg(0x17), bea_arg(s_C__dev_ONSLAUGHT2_GroundVehicle__0062cb30), bea_arg(0x23));
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0047d590(bea_arg(pvVar1), bea_arg(this_));
  }
  *(undefined4 *)(this_ + 0x208) = uVar3;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x60), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_GroundVehicle__0062cb30), bea_arg(0x25));
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004fe710(bea_arg(pvVar1), bea_arg(this_), bea_arg(param_1));
  }
  *(undefined4 *)(this_ + 0x13c) = uVar3;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047cfd0, ap_0047cfd0));
