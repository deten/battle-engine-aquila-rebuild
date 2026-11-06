// auto-ported from 0040dce0_FUN_0040dce0.c (FUN_0040dce0, 177 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define _DAT_008969b8 GLOBAL_AT(float, 0x008969b8)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_hud__s_00623314 ((char*)0x00623314)
#define s_playing_sample___hostile_environ_00623500 ((char*)0x00623500)
#define s_hud_hostile_environment_00623528 ((char*)0x00623528)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 (BEA_THISCALL* FUN_004e1910_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1910_t> FUN_004e1910 = {(FUN_004e1910_t)0x004e1910};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_0040dce0(void * this_)
{
  undefined4 uVar1;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  if (5.0f < DAT_00672fd0 - *(float *)((int)this_ + 0x510)) {
    FUN_0055de9b(local_100,s_hud__s_00623314,s_hud_hostile_environment_00623528);
    uVar1 = FUN_004e1910(bea_arg(&DAT_00896988), bea_arg(local_100), bea_arg(0));
    FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(uVar1), bea_arg(this_), bea_arg(_DAT_008969b8), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(1));
    FUN_00441740(&DAT_0066f580,s_playing_sample___hostile_environ_00623500);
    *(float *)((int)this_ + 0x510) = DAT_00672fd0;
    return;
  }
  *(float *)((int)this_ + 0x510) = DAT_00672fd0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040dce0, ap_0040dce0));
