// auto-ported from 00464b30_FUN_00464b30.c (FUN_00464b30, 134 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x190: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008a9694 GLOBAL_AT(int, 0x008a9694)
#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
#define _DAT_00677630 GLOBAL_AT(int, 0x00677630)
#define _DAT_00677634 GLOBAL_AT(int, 0x00677634)
typedef int (BEA_THISCALL* FUN_0044d390_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044d390_t> FUN_0044d390 = {(FUN_0044d390_t)0x0044d390};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};

static void BEA_CDECL ap_00464b30(undefined4 param_1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  alignas(16) uint8_t bea_frame_[0x190] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_190)[400] = *reinterpret_cast<undefined1 (*)[400]>(bea_frame_ + 0x190 - 0x190);
  uVar1 = FUN_0046a2a0(param_1,DAT_008a9694);
  FUN_0055e64e(bea_arg(local_190), bea_arg(uVar1));
  DAT_00677614 = 0;
  uVar6 = 0;
  uVar5 = 3;
  uVar4 = 0;
  uVar3 = 10;
  uVar2 = 0;
  uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(local_190), bea_arg(uVar1), bea_arg(uVar2), bea_arg(uVar3), bea_arg(uVar4), bea_arg(uVar5), bea_arg(uVar6));
  _DAT_00677630 = 0;
  _DAT_00677634 = 0;
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_00464b30.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
