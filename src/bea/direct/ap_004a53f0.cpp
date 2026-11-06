// auto-ported from 004a53f0_FUN_004a53f0.c (FUN_004a53f0, 63 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s_Loading_mesh_resources_0062f9a0 ((char*)0x0062f9a0)
typedef uint32_t (BEA_THISCALL* FUN_0042b500_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042b500_t> FUN_0042b500 = {(FUN_0042b500_t)0x0042b500};
typedef undefined4 (BEA_THISCALL* FUN_0042b800_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b800_t> FUN_0042b800 = {(FUN_0042b800_t)0x0042b800};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_CDECL ap_004a53f0(undefined4 param_1, undefined4 param_2)
{
  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)

  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  FUN_0055de9b(local_100,s_Loading_mesh_resources_0062f9a0);
  FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(local_100));
  return FUN_0042b800(bea_arg(&DAT_00663498), bea_arg(local_100), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a53f0, ap_004a53f0));
