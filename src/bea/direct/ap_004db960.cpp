// auto-ported from 004db960_vslot28.c (CRTBuilding::vslot28, 106 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CRTBuilding;
#define DAT_0083ccc8 GLOBAL_AT(int, 0x0083ccc8)
#define DAT_0083cccc GLOBAL_AT(int, 0x0083cccc)
#define DAT_0083ccd0 GLOBAL_AT(int, 0x0083ccd0)
#define DAT_0083ccd4 GLOBAL_AT(int, 0x0083ccd4)
#define DAT_0083cc98 GLOBAL_AT(undefined4, 0x0083cc98)
typedef uint32_t (BEA_CDECL* FUN_004b6260_t)(void *, void *, int, undefined4, int, undefined4, undefined4, undefined4, ...);
static const bea_guard<FUN_004b6260_t> FUN_004b6260 = {(FUN_004b6260_t)0x004b6260};

static void BEA_THISCALL ap_004db960(CRTBuilding * this_)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x34);
  undefined4 (&local_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x40 - 0x30);
  iVar1 = *(int *)(this_ + 8);
  if (iVar1 != 0) {
    local_40 = DAT_0083ccc8;
    local_3c = DAT_0083cccc;
    local_38 = DAT_0083ccd0;
    local_34 = DAT_0083ccd4;
    uVar2 = *(undefined4 *)(this_ + 0x14);
    puVar4 = &DAT_0083cc98;
    puVar5 = local_30;
    for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_004b6260(&local_40,local_30,uVar2,iVar1,this_,0,1,0);
  }
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004db960.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
