// auto-ported from 0046fec0_FUN_0046fec0.c (FUN_0046fec0, 76 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0089c590 GLOBAL_AT(int, 0x0089c590)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define s_game_playing_0062c258 ((char*)0x0062c258)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_00538b70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00538b70_t> FUN_00538b70 = {(FUN_00538b70_t)0x00538b70};

static void BEA_THISCALL ap_0046fec0(void * this_)
{
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)

  void * &local_4 = *reinterpret_cast<void * *>(bea_frame_ + 0x10 - 0x4);
  if (*(int *)((int)this_ + 0x28) != 3) {
    *(undefined4 *)((int)this_ + 0x28) = 3;
    local_4 = this_;
    FUN_00538b70(bea_arg(&DAT_0089c590), bea_arg(s_game_playing_0062c258));
    local_4 = (void *)0xbf800000;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xbbb), bea_arg(*(undefined4 *)((int)this_ + 0x2ec)), bea_arg(&local_4), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046fec0, ap_0046fec0));
