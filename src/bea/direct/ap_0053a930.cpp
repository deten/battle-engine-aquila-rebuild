// auto-ported from 0053a930_FUN_0053a930.c (FUN_0053a930, 220 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};

static void BEA_THISCALL ap_0053a930(void * this_)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  int a2;
  short *psVar7;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  int &iStack_28 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x28);
  short * &psStack_24 = *reinterpret_cast<short * *>(bea_frame_ + 0x30 - 0x24);
  undefined1 (&auStack_20)[24] = *reinterpret_cast<undefined1 (*)[24]>(bea_frame_ + 0x30 - 0x20);
  uint &uStack_8 = *reinterpret_cast<uint *>(bea_frame_ + 0x30 - 0x8);
  uint &uStack_4 = *reinterpret_cast<uint *>(bea_frame_ + 0x30 - 0x4);
  piVar1 = (int *)FUN_00558690(bea_arg(*(void **)((int)this_ + 4)));
  iVar2 = bea_vcall<uint32_t>(piVar1, 0x34, piVar1);
  a2 = 0;
  if (0 < iVar2) {
    do {
      piVar1 = (int *)FUN_00558690(bea_arg(*(void **)((int)this_ + 4)));
      bea_vcall<uint32_t>(piVar1, 0x44, piVar1,a2,auStack_20);
      piVar1 = (int *)FUN_00558690(bea_arg(*(void **)((int)this_ + 4)));
      iVar3 = bea_vcall<uint32_t>(piVar1, 0x4c, piVar1,a2,&iStack_28,0,0x800);
      if (iVar3 < 0) {
        return;
      }
      uVar6 = 0;
      psVar7 = psStack_24;
      if (uStack_4 != 0) {
        do {
          uVar4 = 0;
          psVar5 = psVar7;
          if (uStack_8 != 0) {
            do {
              if (uVar4 < uStack_8 >> 1) {
                *psVar5 = -0x400;
              }
              else {
                *psVar5 = (-(ushort)(uStack_8 >> 1 < uVar4) & 0xff7c) - 0xf70;
              }
              psVar5 = psVar5 + 1;
              uVar4 = uVar4 + 1;
            } while (BEA_LOOP_GUARD((uVar4 < uStack_8)));
          }
          psVar7 = (short *)((int)psVar7 + iStack_28);
          uVar6 = uVar6 + 1;
        } while (BEA_LOOP_GUARD((uVar6 < uStack_4)));
      }
      piVar1 = (int *)FUN_00558690(bea_arg(*(void **)((int)this_ + 4)));
      bea_vcall<uint32_t>(piVar1, 0x50, piVar1,a2);
      a2 = a2 + 1;
    } while (BEA_LOOP_GUARD((a2 < iVar2)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053a930, ap_0053a930));
