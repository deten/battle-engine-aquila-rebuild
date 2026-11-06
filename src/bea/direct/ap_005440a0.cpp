// auto-ported from 005440a0_FUN_005440a0.c (FUN_005440a0, 246 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008aa908 GLOBAL_AT(undefined4*, 0x008aa908)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_006508f0 GLOBAL_AT(undefined4, 0x006508f0)
#define s_C__dev_ONSLAUGHT2_DXKempyCube_cp_00650a88 ((char*)0x00650a88)
typedef uint32_t (BEA_CDECL* FUN_0048de30_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0048de30_t> FUN_0048de30 = {(FUN_0048de30_t)0x0048de30};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef void * (BEA_THISCALL* FUN_004fff00_t)(uint32_t);
static const bea_guard<FUN_004fff00_t> FUN_004fff00 = {(FUN_004fff00_t)0x004fff00};
typedef bool (BEA_THISCALL* FUN_005000c0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005000c0_t> FUN_005000c0 = {(FUN_005000c0_t)0x005000c0};
typedef undefined4 (BEA_THISCALL* FUN_005001b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005001b0_t> FUN_005001b0 = {(FUN_005001b0_t)0x005001b0};
typedef int (BEA_THISCALL* FUN_005001e0_t)(uint32_t);
static const bea_guard<FUN_005001e0_t> FUN_005001e0 = {(FUN_005001e0_t)0x005001e0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_005440a0(void * this_, undefined4 *param_1)
{
  undefined4 uVar1;
  void *this_00;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar3 = param_1;
  iVar2 = 0;
  iVar4 = (int)this_ + 0x14;
  do {
    FUN_0048de30(bea_arg(iVar4), bea_arg(puVar3), bea_arg(iVar2));
    uVar1 = FUN_004f27f0(iVar4,0,0,1,1,1);
    *(undefined4 *)this_ = uVar1;
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 0x100;
    this_ = (void *)((int)this_ + 4);
  } while (BEA_LOOP_GUARD((iVar2 < 5)));
  if (DAT_008aa908 != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(DAT_008aa908, 0x0, 1);
    DAT_008aa908 = (undefined4 *)0x0;
  }
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2c), bea_arg(0x2c), bea_arg(s_C__dev_ONSLAUGHT2_DXKempyCube_cp_00650a88), bea_arg(0x52));
  if (this_00 == (void *)0x0) {
    DAT_008aa908 = (void *)0x0;
  }
  else {
    DAT_008aa908 = (undefined4 *)FUN_004fff00(bea_arg(this_00));
  }
  FUN_005000c0(bea_arg(DAT_008aa908), bea_arg(0x14), bea_arg(0x14), bea_arg(0x102));
  iVar4 = FUN_005001b0(bea_arg(DAT_008aa908), bea_arg(&param_1));
  if (-1 < iVar4) {
    puVar3 = &DAT_006508f0;
    puVar5 = param_1;
    for (iVar4 = 100; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_005001e0(bea_arg(DAT_008aa908));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005440a0, ap_005440a0));
