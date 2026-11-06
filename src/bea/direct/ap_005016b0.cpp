// auto-ported from 005016b0_FUN_005016b0.c (FUN_005016b0, 113 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x130: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00888c8c GLOBAL_AT(int, 0x00888c8c)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_00854e6c GLOBAL_AT(char, 0x00854e6c)
#define DAT_0063c108 GLOBAL_AT(char, 0x0063c108)
#define DAT_00665848 GLOBAL_AT(undefined4*, 0x00665848)
#define DAT_00854e10 GLOBAL_AT(int, 0x00854e10)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_00854e6d GLOBAL_AT(int, 0x00854e6d)
#define s_cg_forcevertexshaders_0063cde8 ((char*)0x0063cde8)
#define s_Should_vertex_shaders_be_used_wh_0063ce00 ((char*)0x0063ce00)
typedef uint32_t (BEA_THISCALL* FUN_0042b040_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b040_t> FUN_0042b040 = {(FUN_0042b040_t)0x0042b040};

static void BEA_CDECL ap_005016b0(void)
{
  alignas(16) uint8_t bea_frame_[0x130] = {};   // the original stack frame (emulate_frame)

  undefined1 (&local_130)[196] = *reinterpret_cast<undefined1 (*)[196]>(bea_frame_ + 0x130 - 0x130);
  uint &uStack_6c = *reinterpret_cast<uint *>(bea_frame_ + 0x130 - 0x6c);
  if (DAT_00888c8c != 0) {
    bea_vcall<uint32_t>(DAT_00888a50, 0x1c, DAT_00888a50,local_130);
    DAT_00854e6c = uStack_6c < 0xfffe0101;
  }
  if (DAT_0063c108 != '\0') {
    bea_vcall<uint32_t>(DAT_00665848, 0x14, &DAT_00854e10);
    FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_forcevertexshaders_0063cde8), bea_arg(s_Should_vertex_shaders_be_used_wh_0063ce00), bea_arg(3), bea_arg(&DAT_00854e6d), bea_arg(0), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005016b0, ap_005016b0));
