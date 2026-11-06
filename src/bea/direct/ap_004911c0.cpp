// auto-ported from 004911c0_FUN_004911c0.c (FUN_004911c0, 371 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x130: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
// @hand-fixed 2026-10-28 compile: CTGALoader declared (char) so local_128 is the in-frame loader object at entry-0x128 (0x4911eb); its data/alpha pointers are local_118/local_114 (0x491247, 0x49126e)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CTGALoader;   // the loader object lives in the frame at entry-0x128 (lea ecx,[esp+0x14], 0x4911eb)
typedef undefined4 (BEA_THISCALL* CTGALoader__vslot1_t)(uint32_t);
static const bea_guard<CTGALoader__vslot1_t> CTGALoader__vslot1 = {(CTGALoader__vslot1_t)0x004f2ce0};
typedef void * (BEA_THISCALL* FUN_004f2c60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f2c60_t> FUN_004f2c60 = {(FUN_004f2c60_t)0x004f2c60};
typedef uint32_t (BEA_THISCALL* FUN_004f2cb0_t)(uint32_t);
static const bea_guard<FUN_004f2cb0_t> FUN_004f2cb0 = {(FUN_004f2cb0_t)0x004f2cb0};

static undefined4 BEA_THISCALL ap_004911c0(void * this_, undefined4 param_1, int param_2, int param_3)
{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;

  alignas(16) uint8_t bea_frame_[0x130] = {};   // the original stack frame (emulate_frame)
  char &local_12d = *reinterpret_cast<char *>(bea_frame_ + 0x130 - 0x12d);
  undefined1 (&local_12c)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x130 - 0x12c);
  CTGALoader (&local_128)[16] = *reinterpret_cast<CTGALoader (*)[16]>(bea_frame_ + 0x130 - 0x128);
  int &local_118 = *reinterpret_cast<int *>(bea_frame_ + 0x130 - 0x118);
  byte * &local_114 = *reinterpret_cast<byte * *>(bea_frame_ + 0x130 - 0x114);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x130 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x130 - 0x4);
  FUN_004f2c60(bea_arg(local_128), bea_arg(param_1), bea_arg(local_12c));
  iVar2 = CTGALoader__vslot1(bea_arg(local_128));
  if (iVar2 == 0) {
    FUN_004f2cb0(bea_arg(local_128));
    uVar3 = 0;
  }
  else {
    iVar2 = param_2 * param_2;
    puVar4 = (undefined1 *)(*(int *)((int)this_ + 0x10) * param_3 + *(int *)this_);
    if (iVar2 != 0) {
      puVar5 = (undefined1 *)(local_118 + 2);
      iVar8 = iVar2;
      do {
        *puVar4 = puVar5[-2];
        puVar4[1] = puVar5[-1];
        puVar4[2] = *puVar5;
        puVar4[3] = 0;
        puVar4 = puVar4 + 4;
        iVar8 = iVar8 + -1;
        puVar5 = puVar5 + 3;
      } while (BEA_LOOP_GUARD((iVar8 != 0)));
    }
    if (local_114 == (byte *)0x0) {
      cVar1 = '\x7f';
      cVar7 = -0x80;
      puVar4 = (undefined1 *)(*(int *)((int)this_ + 0x10) * param_3 + 3 + *(int *)this_);
      for (; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        if (cVar7 < '\0') {
          cVar7 = '\0';
        }
        cVar1 = '\0';
        puVar4 = puVar4 + 4;
      }
      *(int *)((int)this_ + param_3 * 4 + 0x1c) = (int)cVar1;
      *(int *)((int)this_ + param_3 * 4 + 0x34) = (int)cVar7;
    }
    else {
      local_12d = '\x7f';
      cVar7 = -0x80;
      pcVar6 = (char *)(*(int *)((int)this_ + 0x10) * param_3 + 3 + *(int *)this_);
      for (; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
        cVar1 = (*local_114 >> 2) - 0x20;
        *pcVar6 = cVar1;
        if (cVar7 < cVar1) {
          cVar7 = cVar1;
        }
        if (cVar1 < local_12d) {
          local_12d = cVar1;
        }
        pcVar6 = pcVar6 + 4;
        local_114 = local_114 + 1;
      }
      *(int *)((int)this_ + param_3 * 4 + 0x1c) = (int)local_12d;
      *(int *)((int)this_ + param_3 * 4 + 0x34) = (int)cVar7;
    }
    FUN_004f2cb0(bea_arg(local_128));
    uVar3 = 1;
  }
  return uVar3;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004911c0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
