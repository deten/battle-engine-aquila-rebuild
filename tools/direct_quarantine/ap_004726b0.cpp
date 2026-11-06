// auto-ported from 004726b0_FUN_004726b0.c (FUN_004726b0, 480 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CMonitor;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00662dcc GLOBAL_AT(int, 0x00662dcc)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define s_C__dev_ONSLAUGHT2_game_cpp_0062bba4 ((char*)0x0062bba4)
typedef undefined4 (BEA_THISCALL* CMonitor__vslot2_t)(uint32_t);
static const bea_guard<CMonitor__vslot2_t> CMonitor__vslot2 = {(CMonitor__vslot2_t)0x004bacb0};
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};
typedef uint32_t (BEA_THISCALL* FUN_004bb490_t)(uint32_t);
static const bea_guard<FUN_004bb490_t> FUN_004bb490 = {(FUN_004bb490_t)0x004bb490};
typedef uint32_t (BEA_THISCALL* FUN_004bb530_t)(uint32_t);
static const bea_guard<FUN_004bb530_t> FUN_004bb530 = {(FUN_004bb530_t)0x004bb530};
typedef uint32_t (BEA_THISCALL* FUN_004bb8c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bb8c0_t> FUN_004bb8c0 = {(FUN_004bb8c0_t)0x004bb8c0};
typedef uint32_t (BEA_STDCALL* FUN_004d2580_t)(uint32_t);
static const bea_guard<FUN_004d2580_t> FUN_004d2580 = {(FUN_004d2580_t)0x004d2580};
typedef uint32_t (BEA_STDCALL* FUN_00513af0_t)(uint32_t);
static const bea_guard<FUN_00513af0_t> FUN_00513af0 = {(FUN_00513af0_t)0x00513af0};
typedef void * (BEA_THISCALL* FUN_005145f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005145f0_t> FUN_005145f0 = {(FUN_005145f0_t)0x005145f0};
typedef undefined4 (BEA_CDECL* FUN_00515880_t)(void);
static const bea_guard<FUN_00515880_t> FUN_00515880 = {(FUN_00515880_t)0x00515880};
typedef bool (BEA_CDECL* FUN_005158c0_t)(void);
static const bea_guard<FUN_005158c0_t> FUN_005158c0 = {(FUN_005158c0_t)0x005158c0};
typedef uint32_t (BEA_CDECL* FUN_005158e0_t)(void);
static const bea_guard<FUN_005158e0_t> FUN_005158e0 = {(FUN_005158e0_t)0x005158e0};
typedef uint32_t (BEA_STDCALL* FUN_00515910_t)(uint32_t);
static const bea_guard<FUN_00515910_t> FUN_00515910 = {(FUN_00515910_t)0x00515910};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef undefined4 (BEA_STDCALL* FUN_0051a030_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0051a030_t> FUN_0051a030 = {(FUN_0051a030_t)0x0051a030};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};

static uint32_t BEA_CDECL ap_004726b0(void)
{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined ** &local_18 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x20 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x14);
  int &local_10 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x4);
  local_4 = 0xffffffff;
  fVar6 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  local_18 = ((void*)0x005dbc10);
  local_10 = 0;
  local_4 = 0;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x178), bea_arg(0x27), bea_arg(s_C__dev_ONSLAUGHT2_game_cpp_0062bba4), bea_arg(0x11be));
  (*(uint8_t*)((char*)&local_4 + 0)) = 1;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_005145f0(bea_arg(pvVar1), bea_arg(&local_18), bea_arg(0), bea_arg(1));
  }
  (*(uint8_t*)((char*)&local_4 + 0)) = 0;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x178), bea_arg(0x27), bea_arg(s_C__dev_ONSLAUGHT2_game_cpp_0062bba4), bea_arg(0x11bf));
  (*(uint8_t*)((char*)&local_4 + 0)) = 2;
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_005145f0(bea_arg(pvVar1), bea_arg(&local_18), bea_arg(1), bea_arg(1));
  }
  local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
  bea_vcall<uint32_t>(piVar2, 0x8);
  bea_vcall<uint32_t>(piVar3, 0x8);
  local_10 = 0;
  if (DAT_00662dcc != 0) {
    FUN_004bb8c0(bea_arg(&DAT_00889a48), bea_arg(1), bea_arg(0));
  }
  do {
    bVar5 = false;
    FUN_00515880();
    bea_vcall<uint32_t>(piVar2, 0x8);
    bea_vcall<uint32_t>(piVar3, 0x8);
    iVar4 = FUN_005158c0();
    if (iVar4 != 0) {
      FUN_00515910(bea_arg(0));
      FUN_00513af0(bea_arg(0));
      FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
      uVar8 = 0xff;
      fVar7 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
      iVar4 = FUN_0051a030(bea_arg((float)(fVar7 - (float10)(float)fVar6)), bea_arg(uVar8));
      bVar5 = iVar4 == 0;
      FUN_004bb530(bea_arg(&DAT_00889a48));
      FUN_005158e0();
      FUN_004d2580(bea_arg(0));
    }
  } while (BEA_LOOP_GUARD((!bVar5 && local_10 == 0)));
  CMonitor__vslot2(bea_arg((CMonitor *)&local_18));
  if (piVar2 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar2, 0x0, 1);
  }
  if (piVar3 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar3, 0x0, 1);
  }
  if (DAT_00662dcc != 0) {
    FUN_004bb490(bea_arg(&DAT_00889a48));
  }
  local_4 = 0xffffffff;
  return FUN_004bac40(bea_arg(&local_18));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004726b0, ap_004726b0));
