// auto-ported from 004dbec0_vslot2.c (CRTCutscene::vslot2, 167 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CRTCutscene;
#define DAT_0083cd08 GLOBAL_AT(int, 0x0083cd08)
#define DAT_0083cd10 GLOBAL_AT(int, 0x0083cd10)
#define DAT_0083ccd8 GLOBAL_AT(undefined4, 0x0083ccd8)
#define DAT_0083cd0c GLOBAL_AT(int, 0x0083cd0c)
#define DAT_00704e60 GLOBAL_AT(int, 0x00704e60)
#define DAT_0083cd14 GLOBAL_AT(int, 0x0083cd14)
#define s_Attempt_to_render_cutscene_witho_00631e50 ((char*)0x00631e50)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_CDECL* FUN_004b6260_t)(void *, void *, int, undefined4, int, undefined4, undefined4, undefined4, ...);
static const bea_guard<FUN_004b6260_t> FUN_004b6260 = {(FUN_004b6260_t)0x004b6260};

static void BEA_THISCALL ap_004dbec0(CRTCutscene * this_, undefined4 param_1)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 &uStack_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x40);
  undefined4 &uStack_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x3c);
  undefined4 &uStack_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x38);
  undefined4 &uStack_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x34);
  undefined4 (&auStack_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x40 - 0x30);
  if (this_[0x20] != (CRTCutscene)0x0) {
    if (*(int *)(this_ + 0x24) == -1) {
      CRenderThing__vslot3(s_Attempt_to_render_cutscene_witho_00631e50);
      return;
    }
    uVar1 = bea_vcall<uint32_t>(this_, 0x24);
    uStack_40 = DAT_0083cd08;
    uStack_38 = DAT_0083cd10;
    puVar3 = &DAT_0083ccd8;
    puVar4 = auStack_30;
    for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    uStack_3c = DAT_0083cd0c;
    DAT_00704e60 = 1;
    uStack_34 = DAT_0083cd14;
    FUN_004b6260(&uStack_40,auStack_30,uVar1,*(undefined4 *)(this_ + 8),this_,0,1,0);
    DAT_00704e60 = 0;
  }
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004dbec0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
