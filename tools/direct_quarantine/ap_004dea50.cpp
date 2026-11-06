// auto-ported from 004dea50_vslot9.c (CSentinel::vslot9, 423 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CSentinel;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Sentinel_cpp_0063221c ((char*)0x0063221c)
#define s_inactive_0063223c ((char*)0x0063223c)
typedef uint32_t (BEA_THISCALL* CGroundUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CGroundUnit__vslot9_t> CGroundUnit__vslot9 = {(CGroundUnit__vslot9_t)0x0047c730};
typedef void * (BEA_THISCALL* FUN_0049c5d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0049c5d0_t> FUN_0049c5d0 = {(FUN_0049c5d0_t)0x0049c5d0};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef void * (BEA_THISCALL* FUN_004f1ec0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f1ec0_t> FUN_004f1ec0 = {(FUN_004f1ec0_t)0x004f1ec0};
typedef void * (BEA_THISCALL* FUN_004fe710_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fe710_t> FUN_004fe710 = {(FUN_004fe710_t)0x004fe710};
typedef uint32_t (BEA_STDCALL* FUN_0050b010_t)(uint32_t);
static const bea_guard<FUN_0050b010_t> FUN_0050b010 = {(FUN_0050b010_t)0x0050b010};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_004dea50(CSentinel * this_, int param_1)
{
  int iVar1;
  void *pvVar2;
  undefined4 *this_00;
  undefined4 uVar3;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  *(undefined4 *)(this_ + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x20;
  *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0x1a0) = 1;
  CGroundUnit__vslot9(bea_arg((CGroundUnit *)this_), bea_arg(param_1));
  if (*(int *)(this_ + 0x214) != 0) {
    iVar1 = *(int *)this_;
    uVar3 = 1;
    pvVar2 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_inactive_0063223c,1);
    uVar3 = FUN_004aa630(bea_arg(pvVar2), bea_arg(uVar3));
    bea_vcall<uint32_t>(this_, 0xf0, uVar3);
  }
  pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_Sentinel_cpp_0063221c), bea_arg(0x20));
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else if (this_ == (CSentinel *)0x0) {
    uVar3 = FUN_0049c5d0(bea_arg(pvVar2), bea_arg(0));
  }
  else {
    uVar3 = FUN_0049c5d0(bea_arg(pvVar2), bea_arg(this_ + 8));
  }
  *(undefined4 *)(this_ + 0x70) = uVar3;
  pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20), bea_arg(0x17), bea_arg(s_C__dev_ONSLAUGHT2_Sentinel_cpp_0063221c), bea_arg(0x21));
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004f1ec0(bea_arg(pvVar2), bea_arg(this_));
  }
  *(undefined4 *)(this_ + 0x208) = uVar3;
  this_00 = (undefined4 *)
            FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x60), bea_arg(0x16), bea_arg(s_C__dev_ONSLAUGHT2_Sentinel_cpp_0063221c), bea_arg(0x22));
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    FUN_004fe710(bea_arg(this_00), bea_arg(this_), bea_arg(param_1));
    *this_00 = ((void*)0x005dec9c);
  }
  *(undefined4 *)(this_ + 300) = 0;
  *(undefined4 *)(this_ + 0x130) = 0;
  *(undefined4 **)(this_ + 0x13c) = this_00;
  *(undefined4 *)(this_ + 0xf4) = 0;
  *(undefined4 *)(this_ + 0x134) = 0;
  return FUN_0050b010(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dea50, ap_004dea50));
