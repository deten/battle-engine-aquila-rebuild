// auto-ported from 005053d0_FUN_005053d0.c (FUN_005053d0, 198 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_CDECL ap_005053d0(HMMIO param_1, uint param_2, int param_3, int param_4, uint *param_5)
{
  char cVar1;
  uint uVar2;
  MMRESULT MVar3;
  HPSTR pcVar4;
  uint uVar5;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  _MMIOINFO &local_48 = *reinterpret_cast<_MMIOINFO *>(bea_frame_ + 0x50 - 0x48);
  *param_5 = 0;
  MVar3 = mmioGetInfo(param_1,&local_48,0);
  if (MVar3 != 0) {
    return 0x80004005;
  }
  uVar2 = *(uint *)(param_4 + 4);
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  uVar5 = 0;
  *(uint *)(param_4 + 4) = uVar2 - param_2;
  pcVar4 = local_48.pchEndRead;
  if (param_2 != 0) {
    do {
      if (local_48.pchNext == pcVar4) {
        MVar3 = mmioAdvance(param_1,&local_48,0);
        if (MVar3 != 0) {
          return 0x80004005;
        }
        pcVar4 = local_48.pchEndRead;
        if (local_48.pchNext == local_48.pchEndRead) {
          return 0x80004005;
        }
      }
      cVar1 = *local_48.pchNext;
      local_48.pchNext = local_48.pchNext + 1;
      *(char *)(uVar5 + param_3) = cVar1;
      uVar5 = uVar5 + 1;
    } while (BEA_LOOP_GUARD((uVar5 < param_2)));
  }
  MVar3 = mmioSetInfo(param_1,&local_48,0);
  if (MVar3 != 0) {
    return 0x80004005;
  }
  *param_5 = param_2;
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005053d0, ap_005053d0));
