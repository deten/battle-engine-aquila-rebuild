// auto-ported from 004411a0_vslot9.c (CDebris::vslot9, 371 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x430: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CDebris;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_006282fc GLOBAL_AT(int, 0x006282fc)
#define DAT_00628300 GLOBAL_AT(int, 0x00628300)
#define DAT_00628304 GLOBAL_AT(int, 0x00628304)
#define DAT_0066eb78 GLOBAL_AT(int, 0x0066eb78)
#define s_cg_debrisarea_0062838c ((char*)0x0062838c)
#define s_The_size_of_the_debris_area_0062839c ((char*)0x0062839c)
#define s_The_distance_at_which_debris_sta_00628360 ((char*)0x00628360)
#define s_Acg_debrisfadeend_00628307 ((char*)0x00628307)
#define s_The_distance_at_which_debris_fad_0062831c ((char*)0x0062831c)
#define s_grs_tuft1_MSH_006283b8 ((char*)0x006283b8)
#define s_cg_debrisfadestart_0062834c ((char*)0x0062834c)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot9_t> CComplexThing__vslot9 = {(CComplexThing__vslot9_t)0x004f3fd0};
typedef uint32_t (BEA_THISCALL* FUN_0042b040_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b040_t> FUN_0042b040 = {(FUN_0042b040_t)0x0042b040};
typedef undefined4 * (BEA_CDECL* FUN_00516580_t)(undefined4, ...);
static const bea_guard<FUN_00516580_t> FUN_00516580 = {(FUN_00516580_t)0x00516580};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static uint32_t BEA_THISCALL ap_004411a0(CDebris * this_, int param_1)
{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  alignas(16) uint8_t bea_frame_[0x430] = {};   // the original stack frame (emulate_frame)
  char (&local_42c)[1024] = *reinterpret_cast<char (*)[1024]>(bea_frame_ + 0x430 - 0x42c);
  CDebris * &local_2c = *reinterpret_cast<CDebris * *>(bea_frame_ + 0x430 - 0x2c);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x430 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x4);
  FUN_0055dc20(bea_arg(local_42c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f40)), bea_arg(((void*)0x00403f80)));
  if (this_ == (CDebris *)0x0) {
    local_2c = (CDebris *)0x0;
  }
  else {
    local_2c = this_ + 8;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s_grs_tuft1_MSH_006283b8;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = local_42c;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  piVar2 = (int *)FUN_00516580(1);
  *(int **)(this_ + 0x30) = piVar2;
  if (piVar2 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar2, 0x4, local_42c);
  }
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  CComplexThing__vslot9(bea_arg((CComplexThing *)this_), bea_arg(param_1));
  bea_vcall<uint32_t>(this_, 0x48);
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_debrisarea_0062838c), bea_arg(s_The_size_of_the_debris_area_0062839c), bea_arg(4), bea_arg(&DAT_006282fc), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_debrisfadestart_0062834c), bea_arg(s_The_distance_at_which_debris_sta_00628360), bea_arg(4), bea_arg(&DAT_00628300), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_Acg_debrisfadeend_00628307 + 1), bea_arg(s_The_distance_at_which_debris_fad_0062831c), bea_arg(4), bea_arg(&DAT_00628304), bea_arg(0), bea_arg(0));
  *(CDebris **)(this_ + 0x7c) = DAT_0066eb78;
  DAT_0066eb78 = this_;
  return FUN_0055db0a(bea_arg(local_42c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f80)));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004411a0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
