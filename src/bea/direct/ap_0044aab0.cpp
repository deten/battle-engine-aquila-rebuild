// auto-ported from 0044aab0_vslot9.c (CEscapePod::vslot9, 359 bytes) by tools/autoport.py
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
typedef char CActor;
typedef char CEscapePod;
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_00672fb8 GLOBAL_AT(int, 0x00672fb8)
#define DAT_00672fbc GLOBAL_AT(int, 0x00672fbc)
#define DAT_00672fc0 GLOBAL_AT(int, 0x00672fc0)
#define DAT_00672fc4 GLOBAL_AT(int, 0x00672fc4)
#define s_m_rocket_msh_00628cf0 ((char*)0x00628cf0)
#define s_Muspell_Engine_Small_Effect_00628cd4 ((char*)0x00628cd4)
typedef int (BEA_THISCALL* CActor__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CActor__vslot9_t> CActor__vslot9 = {(CActor__vslot9_t)0x004011e0};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef int (BEA_THISCALL* FUN_004cd7a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cd7a0_t> FUN_004cd7a0 = {(FUN_004cd7a0_t)0x004cd7a0};
typedef undefined4 * (BEA_CDECL* FUN_00516580_t)(undefined4, ...);
static const bea_guard<FUN_00516580_t> FUN_00516580 = {(FUN_00516580_t)0x00516580};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static uint32_t BEA_THISCALL ap_0044aab0(CEscapePod * this_, int param_1)
{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  alignas(16) uint8_t bea_frame_[0x430] = {};   // the original stack frame (emulate_frame)
  char (&local_42c)[1024] = *reinterpret_cast<char (*)[1024]>(bea_frame_ + 0x430 - 0x42c);
  CEscapePod * &local_2c = *reinterpret_cast<CEscapePod * *>(bea_frame_ + 0x430 - 0x2c);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x430 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x4);
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x120;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 2;
  FUN_0055dc20(bea_arg(local_42c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f40)), bea_arg(((void*)0x00403f80)));
  if (this_ == (CEscapePod *)0x0) {
    local_2c = (CEscapePod *)0x0;
  }
  else {
    local_2c = this_ + 8;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s_m_rocket_msh_00628cf0;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = local_42c;
  for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  piVar2 = (int *)FUN_00516580(1);
  *(int **)(this_ + 0x30) = piVar2;
  if (piVar2 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar2, 0x4, local_42c);
  }
  CActor__vslot9(bea_arg((CActor *)this_), bea_arg(param_1));
  iVar3 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(s_Muspell_Engine_Small_Effect_00628cd4));
  if (iVar3 != 0) {
    FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(iVar3), bea_arg(this_ + 0xe0), bea_arg(DAT_00672fb8), bea_arg(DAT_00672fbc), bea_arg(DAT_00672fc0), bea_arg(DAT_00672fc4), bea_arg(0), bea_arg(0));
  }
  return FUN_0055db0a(bea_arg(local_42c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f80)));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_0044aab0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
