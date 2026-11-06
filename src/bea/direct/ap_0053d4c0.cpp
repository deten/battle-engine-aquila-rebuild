// auto-ported from 0053d4c0_FUN_0053d4c0.c (FUN_0053d4c0, 294 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x610: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static uint32_t BEA_THISCALL ap_0053d4c0(void * this_, float param_1)
{
  float fVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  alignas(16) uint8_t bea_frame_[0x610] = {};   // the original stack frame (emulate_frame)
  byte &local_608 = *reinterpret_cast<byte *>(bea_frame_ + 0x610 - 0x608);
  ushort (&local_600)[256] = *reinterpret_cast<ushort (*)[256]>(bea_frame_ + 0x610 - 0x600);
  ushort (&local_400)[256] = *reinterpret_cast<ushort (*)[256]>(bea_frame_ + 0x610 - 0x400);
  ushort (&local_200)[256] = *reinterpret_cast<ushort (*)[256]>(bea_frame_ + 0x610 - 0x200);
  iVar4 = 0x100;
  puVar2 = (ushort *)((int)this_ + 0x6f4);
  puVar3 = local_400;
  do {
    fVar1 = (float)iVar4 * param_1;
    if (fVar1 <= 1.0f) {
      if (fVar1 < 0.0f) {
        fVar1 = 0.0f;
      }
    }
    else {
      fVar1 = 1.0f;
    }
    fVar1 = 1.0f - fVar1;
    local_608 = (byte)(longlong)ROUND((float)puVar2[-0x100] * fVar1);
    puVar3[-0x100] = (ushort)local_608;
    local_608 = (byte)(longlong)ROUND((float)*puVar2 * fVar1);
    *puVar3 = (ushort)local_608;
    local_608 = (byte)(longlong)ROUND((float)puVar2[0x100] * fVar1);
    puVar3[0x100] = (ushort)local_608;
    puVar3[-0x100] = puVar3[-0x100] * 0x101;
    *puVar3 = *puVar3 * 0x101;
    puVar3[0x100] = puVar3[0x100] * 0x101;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (BEA_LOOP_GUARD((0 < iVar4)));
  return bea_vcall<uint32_t>(DAT_00888a50, 0x54, DAT_00888a50,0,0,local_600);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053d4c0, ap_0053d4c0));
