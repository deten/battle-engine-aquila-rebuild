// auto-ported from 004595b0_FUN_004595b0.c (FUN_004595b0, 596 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char _DAT_008a9570;
#define DAT_0089d7a8 GLOBAL_AT(int, 0x0089d7a8)
#define _DAT_008a9570 GLOBAL_AT(float, 0x008a9570)
#define DAT_008a9580 GLOBAL_AT(int, 0x008a9580)
typedef int (BEA_CDECL* FUN_00421430_t)(void);
static const bea_guard<FUN_00421430_t> FUN_00421430 = {(FUN_00421430_t)0x00421430};
typedef uint32_t (BEA_STDCALL* FUN_00466e70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466e70_t> FUN_00466e70 = {(FUN_00466e70_t)0x00466e70};
typedef uint32_t (BEA_STDCALL* FUN_00467010_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467010_t> FUN_00467010 = {(FUN_00467010_t)0x00467010};
typedef uint32_t (BEA_STDCALL* FUN_004670b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004670b0_t> FUN_004670b0 = {(FUN_004670b0_t)0x004670b0};
typedef undefined4 (BEA_STDCALL* FUN_00515190_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515190_t> FUN_00515190 = {(FUN_00515190_t)0x00515190};
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, ...);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};

static void BEA_STDCALL ap_004595b0(float param_1, float param_2, float param_3, float param_4, undefined4 param_5, float param_6, int param_7, int param_8, int param_9, int param_10, int param_11)
{
  short sVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  float10 fVar8;
  longlong *plVar9;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  longlong &local_c = *reinterpret_cast<longlong *>(bea_frame_ + 0x10 - 0xc);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x4);
  if (param_9 == 0) {
    iVar4 = 0x55 - (uint)(param_10 != 0);
  }
  else {
    iVar4 = 0x53;
  }
  local_4 = (&DAT_0089d7a8)[iVar4];
  if (local_4 != 0) {
    sVar1 = *(short *)(local_4 + 0xb0);
    fVar2 = (float)*(int *)(local_4 + 0xac) * param_6;
    if (param_8 == 0) {
      uVar5 = (param_7 * 0x6f & 0xff00U) << 0x10;
    }
    else {
      fVar8 = (float10)fsin((float10)_DAT_008a9570 * (float10)3.14f * (float10)0.033333335f);
      local_c = (longlong)ROUND(fVar8 * (float10)-64.0f);
      uVar5 = ((0xbfU - (int)local_c & 0xfffffffe) + 0xde0000) * 0x80 + (0xbfU - (int)local_c);
      uVar5 = ((uVar5 >> 0x18) * param_7 & 0xffffff00) << 0x10 | uVar5 & 0xffffff;
    }
    plVar9 = &local_c;
    uVar6 = FUN_00421430();
    FUN_00515190(bea_arg(uVar6), bea_arg(plVar9));
    if (((param_4 - param_3 < (float)(int)local_c) && (DAT_008a9580 != 0)) && (param_10 != 0)) {
      uVar5 = (uVar5 & 0xff000000) + (uVar5 & 0xff) * 0x10000;
    }
    fVar3 = (float)(int)sVar1 * param_6 + param_2;
    FUN_00467010(bea_arg(param_1), bea_arg(param_2), bea_arg(fVar2 + param_1), bea_arg(fVar3 + 16.0f), bea_arg(param_5), bea_arg(uVar5));
    uVar5 = param_7 * 0xff0000;
    uVar7 = uVar5 | 0xffffff;
    FUN_00466e70(bea_arg(param_1), bea_arg(param_2), bea_arg(fVar2 + param_1), bea_arg(fVar3 + 16.0f), bea_arg(uVar7), bea_arg(0x40000000), bea_arg(param_5));
    if (param_11 != 0) {
      FUN_005563d0(param_1,param_2,0x3f4a3d71,local_4,uVar7,param_6,param_6,0,0,0x3f800000);
      if (param_4 != 0.0f) {
        FUN_004670b0(bea_arg(fVar2 * 0.05f + param_1), bea_arg(fVar3 + 4.0f), bea_arg(fVar2 * 0.95f + param_1), bea_arg(fVar3 + 12.0f), bea_arg(param_3), bea_arg(param_4), bea_arg(param_5), bea_arg(uVar7), bea_arg(uVar5 & 0xff004000 | 0x4000), bea_arg(uVar5 | 0xff0000));
      }
    }
  }
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004595b0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
