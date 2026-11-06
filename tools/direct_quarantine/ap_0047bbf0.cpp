// auto-ported from 0047bbf0_vslot9.c (CGroundAttackAircraft::vslot9, 376 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CGroundAttackAircraft;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define s_C__dev_ONSLAUGHT2_GroundAttackAi_0062cadc ((char*)0x0062cadc)
#define PTR_DAT_0062359c GLOBAL_AT(void*, 0x0062359c)
typedef uint32_t (BEA_THISCALL* CAirUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CAirUnit__vslot9_t> CAirUnit__vslot9 = {(CAirUnit__vslot9_t)0x00402ad0};
typedef void * (BEA_THISCALL* FUN_00402150_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00402150_t> FUN_00402150 = {(FUN_00402150_t)0x00402150};
typedef uint32_t (BEA_THISCALL* FUN_0047bab0_t)(uint32_t);
static const bea_guard<FUN_0047bab0_t> FUN_0047bab0 = {(FUN_0047bab0_t)0x0047bab0};
typedef void * (BEA_THISCALL* FUN_004964d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004964d0_t> FUN_004964d0 = {(FUN_004964d0_t)0x004964d0};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef void * (BEA_THISCALL* FUN_004fe710_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fe710_t> FUN_004fe710 = {(FUN_004fe710_t)0x004fe710};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_0047bbf0(CGroundAttackAircraft * this_, undefined4 param_1)
{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  CGroundAttackAircraft *pCVar6;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  CAirUnit__vslot9(bea_arg((CAirUnit *)this_), bea_arg(param_1));
  pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_GroundAttackAi_0062cadc), bea_arg(0x13));
  pCVar6 = (CGroundAttackAircraft *)0x0;
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    if (this_ != (CGroundAttackAircraft *)0x0) {
      pCVar6 = this_ + 8;
    }
    uVar3 = FUN_004964d0(bea_arg(pvVar2), bea_arg(pCVar6));
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(this_ + 0x70) = uVar3;
  puVar4 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x68), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_GroundAttackAi_0062cadc), bea_arg(0x14));
  local_4 = 1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_004fe710(bea_arg(puVar4), bea_arg(this_), bea_arg(param_1));
    local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),2);
    *puVar4 = ((void*)0x005dbd4c);
    FUN_0047bab0(bea_arg(puVar4));
  }
  local_4 = 0xffffffff;
  *(undefined4 **)(this_ + 0x13c) = puVar4;
  puVar4 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x30), bea_arg(0x17), bea_arg(s_C__dev_ONSLAUGHT2_GroundAttackAi_0062cadc), bea_arg(0x15));
  local_4 = 3;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00402150(bea_arg(puVar4), bea_arg(this_));
    *puVar4 = ((void*)0x005dbd20);
  }
  *(undefined4 **)(this_ + 0x208) = puVar4;
  iVar1 = *(int *)this_;
  uVar3 = 1;
  local_4 = 0xffffffff;
  pvVar2 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, &PTR_DAT_0062359c,1);
  uVar3 = FUN_004aa630(bea_arg(pvVar2), bea_arg(uVar3));
  bea_vcall<uint32_t>(this_, 0xf0, uVar3);
  *(undefined4 *)(this_ + 0x27c) = 1;
  *(undefined4 *)(this_ + 0x284) = 0;
  uVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar5 = uVar5 & 0x8000ffff;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffff0000) + 1;
  }
  *(float *)(this_ + 0x280) = (float)(int)uVar5 * 9.58738e-05f;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047bbf0, ap_0047bbf0));
