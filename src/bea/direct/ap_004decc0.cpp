// auto-ported from 004decc0_vslot66.c (CSentinel::vslot66, 107 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CSentinel;
#define s_Sentinel_Flamethrower_00632248 ((char*)0x00632248)
typedef uint32_t (BEA_THISCALL* CGroundUnit__vslot66_t)(uint32_t);
static const bea_guard<CGroundUnit__vslot66_t> CGroundUnit__vslot66 = {(CGroundUnit__vslot66_t)0x0047c970};
typedef undefined4 (BEA_THISCALL* FUN_004dee00_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004dee00_t> FUN_004dee00 = {(FUN_004dee00_t)0x004dee00};
typedef undefined4 (BEA_THISCALL* FUN_00506010_t)(uint32_t);
static const bea_guard<FUN_00506010_t> FUN_00506010 = {(FUN_00506010_t)0x00506010};
typedef undefined4 (BEA_THISCALL* FUN_00509f70_t)(uint32_t);
static const bea_guard<FUN_00509f70_t> FUN_00509f70 = {(FUN_00509f70_t)0x00509f70};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static void BEA_THISCALL ap_004decc0(CSentinel * this_)
{
  undefined4 *puVar1;
  int iVar2;
  void *this_00;
  
  CGroundUnit__vslot66(bea_arg((CGroundUnit *)this_));
  puVar1 = *(undefined4 **)(this_ + 0x17c);
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*puVar1;
  }
  while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
    iVar2 = FUN_00568390(bea_arg(s_Sentinel_Flamethrower_00632248), bea_arg(**(undefined4 **)((int)this_00 + 0xa4)));
    if (((iVar2 == 0) && (iVar2 = FUN_00509f70(bea_arg(this_00)), iVar2 != 0)) &&
       (iVar2 = FUN_004dee00(bea_arg(this_), bea_arg(this_00)), iVar2 != 0)) {
      FUN_00506010(bea_arg(this_00));
    }
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*puVar1;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004decc0, ap_004decc0));
