// auto-ported from 00466880_vslot2.c (CFrontEnd::vslot2, 256 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFrontEnd;
typedef char CMonitor;
#define DAT_00662dcc GLOBAL_AT(int, 0x00662dcc)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
#define DAT_0089d91c GLOBAL_AT(int, 0x0089d91c)
#define DAT_0089d760 GLOBAL_AT(int, 0x0089d760)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_009c4004 GLOBAL_AT(int, 0x009c4004)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* CMonitor__vslot2_t)(uint32_t);
static const bea_guard<CMonitor__vslot2_t> CMonitor__vslot2 = {(CMonitor__vslot2_t)0x004bacb0};
typedef uint32_t (BEA_THISCALL* FUN_0042af20_t)(uint32_t);
static const bea_guard<FUN_0042af20_t> FUN_0042af20 = {(FUN_0042af20_t)0x0042af20};
typedef uint32_t (BEA_THISCALL* FUN_0044b1f0_t)(uint32_t);
static const bea_guard<FUN_0044b1f0_t> FUN_0044b1f0 = {(FUN_0044b1f0_t)0x0044b1f0};
typedef uint32_t (BEA_THISCALL* FUN_004691c0_t)(uint32_t);
static const bea_guard<FUN_004691c0_t> FUN_004691c0 = {(FUN_004691c0_t)0x004691c0};
typedef uint32_t (BEA_THISCALL* FUN_004a1ea0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004a1ea0_t> FUN_004a1ea0 = {(FUN_004a1ea0_t)0x004a1ea0};
typedef uint32_t (BEA_THISCALL* FUN_004bb490_t)(uint32_t);
static const bea_guard<FUN_004bb490_t> FUN_004bb490 = {(FUN_004bb490_t)0x004bb490};
typedef uint32_t (BEA_THISCALL* FUN_004f2170_t)(uint32_t);
static const bea_guard<FUN_004f2170_t> FUN_004f2170 = {(FUN_004f2170_t)0x004f2170};
typedef uint32_t (BEA_THISCALL* FUN_00541260_t)(uint32_t);
static const bea_guard<FUN_00541260_t> FUN_00541260 = {(FUN_00541260_t)0x00541260};
typedef uint32_t (BEA_THISCALL* FUN_00549270_t)(uint32_t);
static const bea_guard<FUN_00549270_t> FUN_00549270 = {(FUN_00549270_t)0x00549270};

static uint32_t BEA_THISCALL ap_00466880(CFrontEnd * this_)
{
  int iVar1;
  CFrontEnd *pCVar2;
  if (DAT_00662dcc != 0) {
    FUN_004bb490(bea_arg(&DAT_00889a48));
  }
  pCVar2 = this_ + 0xbf40;
  iVar1 = 5;
  do {
    FUN_004f2170(bea_arg(pCVar2));
    pCVar2 = pCVar2 + 0x30;
    iVar1 = iVar1 + -1;
  } while (BEA_LOOP_GUARD((iVar1 != 0)));
  CMonitor__vslot2(bea_arg((CMonitor *)this_));
  if (*(int *)(this_ + 0x1f8) == -1) {
    bea_vcall<uint32_t>(*(int **)(this_ + *(int *)(this_ + 0x1fc) * 4 + 0x214), 0x20);
    bea_vcall<uint32_t>(*(int **)(this_ + *(int *)(this_ + 0x200) * 4 + 0x214), 0x20);
  }
  else {
    bea_vcall<uint32_t>(*(int **)(this_ + *(int *)(this_ + 0x1f8) * 4 + 0x214), 0x20);
  }
  pCVar2 = this_ + 0x214;
  iVar1 = 0x18;
  do {
    bea_vcall<uint32_t>(*(int **)pCVar2, 0x4);
    pCVar2 = pCVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (BEA_LOOP_GUARD((iVar1 != 0)));
  FUN_00541260(bea_arg(&DAT_0089d91c));
  FUN_004691c0(bea_arg(&DAT_0089d760));
  pCVar2 = this_ + 0xbe0c;
  iVar1 = 2;
  do {
    if (*(undefined4 **)pCVar2 != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(*(undefined4 **)pCVar2, 0x0, 1);
    }
    *(int *)pCVar2 = 0;
    pCVar2 = pCVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (BEA_LOOP_GUARD((iVar1 != 0)));
  FUN_0044b1f0(bea_arg(&DAT_00672fc8));
  FUN_0042af20(bea_arg(&DAT_00663498));
  FUN_004a1ea0(bea_arg(&DAT_009c4004), bea_arg(1));
  return FUN_00549270(bea_arg(&DAT_009c3df0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00466880, ap_00466880));
