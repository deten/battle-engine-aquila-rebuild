// auto-ported from 004f29c0_FUN_004f29c0.c (FUN_004f29c0, 100 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d9b4 GLOBAL_AT(int, 0x0083d9b4)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s_meshtex_default_tga_00625498 ((char*)0x00625498)
#define s_Loading_texture_resources_00632f78 ((char*)0x00632f78)
typedef uint32_t (BEA_THISCALL* FUN_0042b500_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042b500_t> FUN_0042b500 = {(FUN_0042b500_t)0x0042b500};
typedef undefined4 (BEA_THISCALL* FUN_0042b800_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b800_t> FUN_0042b800 = {(FUN_0042b800_t)0x0042b800};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_CDECL ap_004f29c0(void)
{
  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)

  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  if (DAT_0083d9b4 == 0) {
    DAT_0083d9b4 = FUN_004f27f0(s_meshtex_default_tga_00625498,0,0,0xffffffff,1,1);
  }
  FUN_0055de9b(local_100,s_Loading_texture_resources_00632f78);
  FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(local_100));
  return FUN_0042b800(bea_arg(&DAT_00663498), bea_arg(local_100), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f29c0, ap_004f29c0));
