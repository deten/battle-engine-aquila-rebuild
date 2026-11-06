// auto-ported from 00541140_vslot0.c (CBinkOpenThread::vslot0, 177 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile: BinkOpenDirectSound passed as the IAT entry value at 0x5d831c (0x541150); volume product kept in x87 precision (0x5411c0-0x5411cb)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char CBinkOpenThread;
typedef char IAT;
#define DAT_00896a48 GLOBAL_AT(int, 0x00896a48)
#define DAT_00663050 GLOBAL_AT(int, 0x00663050)
#define DAT_00662aac GLOBAL_AT(float, 0x00662aac)
typedef uint32_t (BEA_STDCALL* _BinkOpen_8_t)(uint32_t, uint32_t);
#define _BinkOpen_8 (*(_BinkOpen_8_t*)0x005d8314)   /* BINKW32.DLL import, via the IAT */
typedef uint32_t (BEA_STDCALL* _BinkSetSoundSystem_8_t)(uint32_t, uint32_t);
#define _BinkSetSoundSystem_8 (*(_BinkSetSoundSystem_8_t*)0x005d8318)   /* BINKW32.DLL import, via the IAT */
typedef uint32_t (BEA_STDCALL* _BinkSetSoundTrack_8_t)(uint32_t, uint32_t);
#define _BinkSetSoundTrack_8 (*(_BinkSetSoundTrack_8_t*)0x005d8340)   /* BINKW32.DLL import, via the IAT */
typedef uint32_t (BEA_STDCALL* _BinkSetVolume_12_t)(uint32_t, uint32_t, uint32_t);
#define _BinkSetVolume_12 (*(_BinkSetVolume_12_t*)0x005d832c)   /* BINKW32.DLL import, via the IAT */

static void BEA_THISCALL ap_00541140(CBinkOpenThread * this_)
{
  float fVar1;
  undefined4 uVar2;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0xc);
  longlong &local_8 = *reinterpret_cast<longlong *>(bea_frame_ + 0x10 - 0x8);
  if (DAT_00896a48 != 0) {
    _BinkSetSoundSystem_8(bea_arg(GLOBAL_AT(uint32_t, 0x005d831c)), bea_arg(DAT_00896a48));
  }
  local_c = *(undefined4 *)(this_ + 0x230);
  _BinkSetSoundTrack_8(bea_arg(1), bea_arg(&local_c));
  if (DAT_00663050 == 0) {
    uVar2 = _BinkOpen_8(bea_arg(this_ + 0x24), bea_arg((uint)((byte)(-(uint)(*(int *)(this_ + 0x22c) != 0) >> 8) & 0x20 | 0x40) << 8));
    *(undefined4 *)(this_ + 0x20) = uVar2;
  }
  else {
    *(undefined4 *)(this_ + 0x20) = 0;
  }
  fVar1 = DAT_00662aac;
  if (!(DAT_00662aac >= 0.2f)) {   // fcom; test ah,1: C0 also set when unordered (0x5411ab)
    fVar1 = 0.2f;
  }
  local_8 = (longlong)ROUND((float10)fVar1 * (float10)fVar1 * (float10)20000.0f);
  _BinkSetVolume_12(bea_arg(*(undefined4 *)(this_ + 0x20)), bea_arg(local_c), bea_arg((undefined4)local_8));
  this_[0x24] = (CBinkOpenThread)0x0;
  this_[0x1c] = (CBinkOpenThread)0x1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00541140, ap_00541140));
