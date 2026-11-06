// auto-ported from 005047e0_vslot9.c (CWarspiteDome::vslot9, 417 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CWarspiteDome;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_WarspiteDome_c_0063d170 ((char*)0x0063d170)
typedef uint32_t (BEA_THISCALL* CGroundUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CGroundUnit__vslot9_t> CGroundUnit__vslot9 = {(CGroundUnit__vslot9_t)0x0047c730};
typedef void * (BEA_THISCALL* FUN_0049ef80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0049ef80_t> FUN_0049ef80 = {(FUN_0049ef80_t)0x0049ef80};
typedef void * (BEA_THISCALL* FUN_004f1ec0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f1ec0_t> FUN_004f1ec0 = {(FUN_004f1ec0_t)0x004f1ec0};
typedef void * (BEA_THISCALL* FUN_004fe710_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fe710_t> FUN_004fe710 = {(FUN_004fe710_t)0x004fe710};
typedef uint32_t (BEA_STDCALL* FUN_0050b010_t)(uint32_t);
static const bea_guard<FUN_0050b010_t> FUN_0050b010 = {(FUN_0050b010_t)0x0050b010};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static CWarspiteDome * BEA_THISCALL ap_005047e0(CWarspiteDome * this_, int param_1)
{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *this_00;
  CWarspiteDome *pCVar3;
  int iVar4;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0xa000120;
  *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0x1a0) = 1;
  CGroundUnit__vslot9(bea_arg((CGroundUnit *)this_), bea_arg(param_1));
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20), bea_arg(0x17), bea_arg(s_C__dev_ONSLAUGHT2_WarspiteDome_c_0063d170), bea_arg(0x19));
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004f1ec0(bea_arg(pvVar1), bea_arg(this_));
  }
  *(undefined4 *)(this_ + 0x208) = uVar2;
  this_00 = (undefined4 *)
            FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x60), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_WarspiteDome_c_0063d170), bea_arg(0x1a));
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    FUN_004fe710(bea_arg(this_00), bea_arg(this_), bea_arg(param_1));
    *this_00 = ((void*)0x005dfc14);
  }
  *(undefined4 *)(this_ + 300) = 0;
  *(undefined4 *)(this_ + 0x130) = 0;
  *(undefined4 *)(this_ + 0x134) = 0;
  *(undefined4 **)(this_ + 0x13c) = this_00;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_WarspiteDome_c_0063d170), bea_arg(0x1d));
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else if (this_ == (CWarspiteDome *)0x0) {
    uVar2 = FUN_0049ef80(bea_arg(pvVar1), bea_arg(0));
  }
  else {
    uVar2 = FUN_0049ef80(bea_arg(pvVar1), bea_arg(this_ + 8));
  }
  *(undefined4 *)(this_ + 0x70) = uVar2;
  *(undefined4 *)(this_ + 0x260) = 0;
  *(undefined4 *)(this_ + 0x280) = 0;
  *(undefined4 *)(this_ + 0x284) = 0;
  FUN_0050b010(bea_arg(this_));
  *(undefined4 *)(this_ + 0x264) = 0;
  pCVar3 = this_ + 0x268;
  iVar4 = 6;
  do {
    *(undefined4 *)(pCVar3 + 0x20) = 0;
    *(undefined4 *)pCVar3 = 0;
    pCVar3 = pCVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (BEA_LOOP_GUARD((iVar4 != 0)));
  return pCVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005047e0, ap_005047e0));
