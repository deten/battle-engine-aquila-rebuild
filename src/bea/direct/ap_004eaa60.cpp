// auto-ported from 004eaa60_vslot51.c (CRelaxedSquad::vslot51, 113 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define s_Relaxed_Squad_0063293c ((char*)0x0063293c)
typedef uint32_t (BEA_STDCALL* CSquad__vslot51_t)(uint32_t);
static const bea_guard<CSquad__vslot51_t> CSquad__vslot51 = {(CSquad__vslot51_t)0x004e66d0};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540640_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540640_t> FUN_00540640 = {(FUN_00540640_t)0x00540640};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_STDCALL ap_004eaa60(float *param_1)
{
  undefined4 uVar1;
  void *this_local;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  CSquad__vslot51(bea_arg(param_1));
  FUN_0055de9b(local_100,s_Relaxed_Squad_0063293c);
  uVar7 = 0x3f800000;
  uVar6 = 0;
  uVar5 = 0;
  uVar1 = FUN_004f7bf0(bea_arg(local_100));
  fVar3 = *param_1;
  uVar4 = 0xffffff00;
  uVar2 = 0x40800000;
  this_local = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
  FUN_00540640(bea_arg(this_local), bea_arg(uVar2), bea_arg(fVar3), bea_arg(uVar4), bea_arg(uVar1), bea_arg(uVar5), bea_arg(uVar6), bea_arg(uVar7));
  *param_1 = *param_1 + 10.0f;
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004eaa60.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
