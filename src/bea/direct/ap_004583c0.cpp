// auto-ported from 004583c0_FUN_004583c0.c (FUN_004583c0, 270 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28: 0x465710 is a thiscall on 0x515a70's result (the credits drew
// with no receiver: "File not found", tools/menu_test.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
// thiscall: the receiver is 0x515a70's result (`mov ecx, eax`), read after the
// chkstk prologue where the convention scan stopped (Ghidra: stdcall, `this` lost)
typedef uint32_t (BEA_THISCALL* FUN_00465710_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465710_t> FUN_00465710 = {(FUN_00465710_t)0x00465710};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};

static void BEA_THISCALL ap_004583c0(void * this_)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float local_14;
  float local_10;
  int local_c;
  int local_8;
  
  iVar4 = 0;
  iVar2 = 0;
  local_10 = 50.0;
  local_14 = 100.0;
  if (0 < *(int *)((int)this_ + 8)) {
    local_c = 0;
    do {
      iVar3 = -0x50c1;
      if (iVar4 == *(int *)((int)this_ + 0x10)) {
        fVar5 = (float10)fsin((float10)*(int *)((int)this_ + 0xc) * (float10)0.1f);
        local_8 = (int)(longlong)ROUND(fVar5 * (float10)63.0f + (float10)192.0f);
        iVar3 = local_8 * 0x10101 + -0x1000000;
      }
      uVar13 = 0;
      uVar12 = 0;
      fVar11 = (float)(*(int *)((int)this_ + 0xc) - local_c) * 0.05f;
      uVar1 = FUN_004f7bf0(bea_arg(*(undefined4 *)(*(int *)((int)this_ + 4) + iVar4 * 4)));
      uVar10 = 0x3f800000;
      uVar9 = 0x3f800000;
      uVar8 = 0;
      fVar6 = local_10;
      fVar7 = local_14;
      FUN_00465710(bea_arg((void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2))), bea_arg(fVar6), bea_arg(fVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10), bea_arg(iVar3), bea_arg(uVar1), bea_arg(fVar11), bea_arg(uVar12), bea_arg(uVar13));
      iVar2 = iVar2 + 1;
      if (iVar2 == 0xf) {
        local_10 = local_10 + 120.0f;
        iVar2 = 0;
        local_14 = 100.0;
      }
      else {
        local_14 = local_14 + 20.0f;
      }
      iVar4 = iVar4 + 1;
      local_c = local_c + 2;
    } while (BEA_LOOP_GUARD((iVar4 < *(int *)((int)this_ + 8))));
  }
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004583c0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
