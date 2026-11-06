// auto-ported from 0053a150_FUN_0053a150.c (FUN_0053a150, 292 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00889010 GLOBAL_AT(int, 0x00889010)
#define s_hud_marker_tga_00650368 ((char*)0x00650368)
#define s_hud_V2_BattleEngineMarker_tga_00650348 ((char*)0x00650348)
#define s_C__dev_ONSLAUGHT2_DXBattleLine_c_00650324 ((char*)0x00650324)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef void * (BEA_THISCALL* FUN_004fff00_t)(uint32_t);
static const bea_guard<FUN_004fff00_t> FUN_004fff00 = {(FUN_004fff00_t)0x004fff00};
typedef bool (BEA_THISCALL* FUN_00500080_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500080_t> FUN_00500080 = {(FUN_00500080_t)0x00500080};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef void * (BEA_THISCALL* FUN_00556cc0_t)(uint32_t);
static const bea_guard<FUN_00556cc0_t> FUN_00556cc0 = {(FUN_00556cc0_t)0x00556cc0};

static uint32_t BEA_THISCALL ap_0053a150(void * this_)
{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puStack_8;
  undefined4 local_4;
  uVar1 = FUN_004f27f0(s_hud_marker_tga_00650368,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xc) = uVar1;
  pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2c), bea_arg(0x2c), bea_arg(s_C__dev_ONSLAUGHT2_DXBattleLine_c_00650324), bea_arg(0x84));
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_004fff00(bea_arg(pvVar2));
  }
  *(void **)((int)this_ + 0x78) = pvVar2;
  FUN_00500080(bea_arg(pvVar2), bea_arg(500), bea_arg(0x14), bea_arg(0x44));
  *(undefined4 *)((int)this_ + 0x5c) = 0;
  uVar1 = DAT_00889010;
  DAT_00889010 = 1;
  uVar3 = FUN_004f27f0(s_hud_V2_BattleEngineMarker_tga_00650348,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x14) = uVar3;
  DAT_00889010 = uVar1;
  pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x158), bea_arg(2), bea_arg(s_C__dev_ONSLAUGHT2_DXBattleLine_c_00650324), bea_arg(0x97));
  if (pvVar2 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00556cc0(bea_arg(pvVar2));
  }
  *(int **)((int)this_ + 8) = piVar4;
  return bea_vcall<uint32_t>(piVar4, 0x18, 0x80,0x80,2,1,0,1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053a150, ap_0053a150));
