// auto-ported from 0046ca70_FUN_0046ca70.c (FUN_0046ca70, 696 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CScriptEventNB;
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_0066e8c0 GLOBAL_AT(char, 0x0066e8c0)
#define DAT_00662dcc GLOBAL_AT(int, 0x00662dcc)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
#define DAT_0089c5e0 GLOBAL_AT(int, 0x0089c5e0)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0066ffb0 GLOBAL_AT(int, 0x0066ffb0)
#define DAT_00855090 GLOBAL_AT(int, 0x00855090)
#define _DAT_008969ac GLOBAL_AT(int, 0x008969ac)
#define DAT_009cc148 GLOBAL_AT(int, 0x009cc148)
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_009c63f0 GLOBAL_AT(int, 0x009c63f0)
#define DAT_009c63f4 GLOBAL_AT(int, 0x009c63f4)
#define DAT_0089c590 GLOBAL_AT(int, 0x0089c590)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define s_Freeing_Up_Level_Resources____0062bf20 ((char*)0x0062bf20)
typedef undefined4 (BEA_THISCALL* CMonitor__vslot2_t)(uint32_t);
static const bea_guard<CMonitor__vslot2_t> CMonitor__vslot2 = {(CMonitor__vslot2_t)0x004bacb0};
typedef uint32_t (BEA_THISCALL* CScriptEventNB__vslot2_t)(uint32_t);
static const bea_guard<CScriptEventNB__vslot2_t> CScriptEventNB__vslot2 = {(CScriptEventNB__vslot2_t)0x005388d0};
typedef uint32_t (BEA_CDECL* FUN_00404c10_t)(void);
static const bea_guard<FUN_00404c10_t> FUN_00404c10 = {(FUN_00404c10_t)0x00404c10};
typedef uint32_t (BEA_THISCALL* FUN_0042b500_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042b500_t> FUN_0042b500 = {(FUN_0042b500_t)0x0042b500};
typedef uint32_t (BEA_THISCALL* FUN_0042bbc0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042bbc0_t> FUN_0042bbc0 = {(FUN_0042bbc0_t)0x0042bbc0};
typedef uint32_t (BEA_THISCALL* FUN_0042c810_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042c810_t> FUN_0042c810 = {(FUN_0042c810_t)0x0042c810};
typedef uint32_t (BEA_THISCALL* FUN_0042cf70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042cf70_t> FUN_0042cf70 = {(FUN_0042cf70_t)0x0042cf70};
typedef undefined4 (BEA_CDECL* FUN_0042d3b0_t)(void);
static const bea_guard<FUN_0042d3b0_t> FUN_0042d3b0 = {(FUN_0042d3b0_t)0x0042d3b0};
typedef uint32_t (BEA_THISCALL* FUN_00441e50_t)(uint32_t);
static const bea_guard<FUN_00441e50_t> FUN_00441e50 = {(FUN_00441e50_t)0x00441e50};
typedef uint32_t (BEA_THISCALL* FUN_0044b1f0_t)(uint32_t);
static const bea_guard<FUN_0044b1f0_t> FUN_0044b1f0 = {(FUN_0044b1f0_t)0x0044b1f0};
typedef uint32_t (BEA_THISCALL* FUN_00491930_t)(uint32_t);
static const bea_guard<FUN_00491930_t> FUN_00491930 = {(FUN_00491930_t)0x00491930};
typedef uint32_t (BEA_THISCALL* FUN_004bb490_t)(uint32_t);
static const bea_guard<FUN_004bb490_t> FUN_004bb490 = {(FUN_004bb490_t)0x004bb490};
typedef int (BEA_THISCALL* FUN_004cae50_t)(uint32_t);
static const bea_guard<FUN_004cae50_t> FUN_004cae50 = {(FUN_004cae50_t)0x004cae50};
typedef uint32_t (BEA_CDECL* FUN_004caf30_t)(void);
static const bea_guard<FUN_004caf30_t> FUN_004caf30 = {(FUN_004caf30_t)0x004caf30};
typedef uint32_t (BEA_CDECL* FUN_004caf60_t)(void);
static const bea_guard<FUN_004caf60_t> FUN_004caf60 = {(FUN_004caf60_t)0x004caf60};
typedef uint32_t (BEA_CDECL* FUN_004cb080_t)(void);
static const bea_guard<FUN_004cb080_t> FUN_004cb080 = {(FUN_004cb080_t)0x004cb080};
typedef uint32_t (BEA_THISCALL* FUN_004cb1b0_t)(uint32_t);
static const bea_guard<FUN_004cb1b0_t> FUN_004cb1b0 = {(FUN_004cb1b0_t)0x004cb1b0};
typedef undefined4 * (BEA_THISCALL* FUN_0050ada0_t)(uint32_t);
static const bea_guard<FUN_0050ada0_t> FUN_0050ada0 = {(FUN_0050ada0_t)0x0050ada0};
typedef uint32_t (BEA_CDECL* FUN_00510740_t)(void);
static const bea_guard<FUN_00510740_t> FUN_00510740 = {(FUN_00510740_t)0x00510740};
typedef uint32_t (BEA_THISCALL* FUN_00539980_t)(uint32_t);
static const bea_guard<FUN_00539980_t> FUN_00539980 = {(FUN_00539980_t)0x00539980};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_THISCALL* FUN_0055a400_t)(uint32_t);
static const bea_guard<FUN_0055a400_t> FUN_0055a400 = {(FUN_0055a400_t)0x0055a400};

static uint32_t BEA_THISCALL ap_0046ca70(void * this_)
{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  iVar2 = 4;
  if ((*(int *)((int)this_ + 0x34) == 4) && (DAT_0083d448 != 0)) {
    DAT_0066e8c0 = 1;
  }
  if (DAT_00662dcc != 0) {
    FUN_004bb490(bea_arg(&DAT_00889a48));
  }
  FUN_00539980(bea_arg(&DAT_0089c5e0));
  if (*(int *)((int)this_ + 0x34) == 4) {
    FUN_0042bbc0(bea_arg(&DAT_00663498), bea_arg(1), bea_arg(1), bea_arg(1));
  }
  DAT_0066e8c0 = 0;
  FUN_0042c810(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(0));
  FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(s_Freeing_Up_Level_Resources____0062bf20));
  CMonitor__vslot2(bea_arg(this_));
  if (*(int **)((int)this_ + 0x2e4) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x2e4), 0x4, 1);
    *(undefined4 *)((int)this_ + 0x2e4) = 0;
  }
  if (*(int **)((int)this_ + 0x2e8) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x2e8), 0x4, 1);
    *(undefined4 *)((int)this_ + 0x2e8) = 0;
  }
  piVar3 = (int *)((int)this_ + 0x2b4);
  do {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(*piVar3, 0x0, 1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  if (*(int **)((int)this_ + 0x2f0) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x2f0), 0x4, 1);
    *(undefined4 *)((int)this_ + 0x2f0) = 0;
  }
  if (*(int **)((int)this_ + 0x2ec) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x2ec), 0x4, 1);
    *(undefined4 *)((int)this_ + 0x2ec) = 0;
  }
  if (*(int **)((int)this_ + 0x2f4) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x2f4), 0x4, 1);
    *(undefined4 *)((int)this_ + 0x2f4) = 0;
  }
  if (*(int **)((int)this_ + 0x2fc) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x2fc), 0x4, 1);
    *(undefined4 *)((int)this_ + 0x2fc) = 0;
  }
  if (*(int *)((int)this_ + 0x304) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x304)));
    *(undefined4 *)((int)this_ + 0x304) = 0;
  }
  if (*(undefined4 **)((int)this_ + 0x2f8) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x2f8), 0x0, 1);
    *(undefined4 *)((int)this_ + 0x2f8) = 0;
  }
  *(undefined4 *)((int)this_ + 0x114) = 0;
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3dcccccd));
  FUN_00441e50(bea_arg(&DAT_0066ffb0));
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3e4ccccd));
  FUN_0050ada0(bea_arg(&DAT_00855090));
  _DAT_008969ac = 0x3f800000;
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3e99999a));
  FUN_0055a400(bea_arg(&DAT_009cc148));
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3ecccccd));
  FUN_00491930(bea_arg(&DAT_00704200));
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f000000));
  FUN_00404c10();
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f19999a));
  FUN_00510740();
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f333333));
  pvVar1 = DAT_009c63e8;
  while (BEA_LOOP_GUARD((DAT_009c63e8 = pvVar1, DAT_009c63e8 != (void *)0x0))) {
    pvVar1 = *(void **)((int)DAT_009c63e8 + 0x68);
    FUN_004cae50(bea_arg(DAT_009c63e8));
    *(void **)((int)DAT_009c63e8 + 0x68) = DAT_009c63f0;
    DAT_009c63f0 = DAT_009c63e8;
  }
  FUN_004caf30();
  FUN_004cb080();
  FUN_004caf60();
  pvVar1 = DAT_009c63f4;
  if (DAT_009c63f4 != (void *)0x0) {
    FUN_004cb1b0(bea_arg(DAT_009c63f4));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
  }
  DAT_009c63f4 = (void *)0x0;
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f4ccccd));
  CScriptEventNB__vslot2(bea_arg((CScriptEventNB *)&DAT_0089c590));
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f666666));
  FUN_0044b1f0(bea_arg(&DAT_00672fc8));
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f800000));
  return FUN_0042d3b0();
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046ca70, ap_0046ca70));
